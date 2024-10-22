#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct node {
    char inf[256]; // полезная информация 
    int priority;
    struct node* next; // ссылка на следующий элемент 
};

struct node* head = NULL, * last = NULL, * f = NULL; // указатели на первый и последний 
int dlinna = 0;

void spstore(void), review(void), del(char* name);
char find_el[256];
struct node* find(char* name); // функция нахождения элемента 
struct node* get_struct(void); // функция создания элемента 

struct node* get_struct(void)
{
    struct node* p = NULL;
    char s[256];
    int pr;
    if ((p = (struct node*)malloc(sizeof(struct node))) == NULL) // выделяем память под новый элемент списка 
    {
        printf("Ошибка при распределении памяти\n ");
        exit(1);
    }
    printf("Введите название объекта : \n"); // вводим данные 
    scanf("%s", s);
    printf("Введите приоритет: \n");
    scanf("%d", &pr);


    if (*s == 0) {
        printf("Запись не была произведена\n");
        return NULL;
    }
    strcpy(p->inf, s);
    p->priority = pr;
    p->next = NULL;
    return p; // возвращаем указатель на созданный элемент 
}
/* Последовательное добавление в список элемента (в конец)*/
void spstore(void)
{
    struct node* p = NULL;
    p = get_struct();
    if (head == NULL || head->priority < p->priority) // если списка нет, то устанавливаем голову  
    {
        p->next = head;
        head = p;
    }
    else
    {
        struct node* current = head;
        while (current->next != NULL && current->next->priority >= p->priority) {
            current = current->next;
        }
        p->next = current->next;
        current->next = p;
    }
    return;
}
/* Просмотр содержимого списка. */
void review(void)
{
    struct node* struc = head;
    if (head == NULL)
    {
        printf("Список пуст\n ");
        return;
    }
    while (struc)
    {
        printf("Имя: %s, Приоритет: %d\n", struc->inf, struc->priority);
        struc = struc->next;
    }
}

/* Поиск элемента по содержимому. */
struct node* find(char* name)
{
    struct node* struc = head;
    while (struc)
    {
        if (strcmp(name, struc->inf) == 0)
        {
            return struc;
        }
        struc = struc->next;
    }
    printf("Элемент не найден\n");
    return NULL;
}


int main() {
    setlocale(LC_ALL, "Russian");

    char s[10];

    spstore();
    spstore();
    spstore();
    review();

    printf("Введите элемент для поиска: \n");
    scanf("%s", s);
    struct node* f = find(s);
    if (f != NULL) {
        printf("Найденный элемент: %s, Приоритет: %d\n", f->inf, f->priority);
    }

    return 0;
}
