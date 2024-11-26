#include <iostream>
#include <locale>
#include <queue>
#include <string>

using namespace std;
queue <int> Q;

int** createG(int size) {
    int** G = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        G[i] = (int*)malloc(size * sizeof(int));
    }

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (i == j) {
                G[i][j] = 0;
            }
            else {
                G[i][j] = rand() % 2;
                G[j][i] = G[i][j];
            }
        }
    }
    return G;
}


void printG(int** G, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }
}


void BFS(int** G, int size, int s, int* vis) {

    Q.push(s);
    vis[s] = 1;
    cout << s << " ";

    while (!Q.empty()) {
        s = Q.front();
        Q.pop();
        for (int i = 0; i < size; i++) {
            if (G[s][i] == 1 && vis[i] == 0) {
                Q.push(i);
                vis[i] = 1;
                cout << i << " ";
            }
        }
    }
}



void main(void) {
    setlocale(LC_ALL, "");

    int** G = NULL;
    int nG, s;
    cout << "Введите размер граффа: ";
    cin >> nG;
    cout << endl;

    G = createG(nG);

    printG(G, nG);
    cout << "Введите начальную вершину: ";
    cin >> s;
    cout << endl;

    int* vis = NULL;
    vis = (int*)malloc(nG * sizeof(int));

    for (int i = 0; i < nG; i++) {
        vis[i] = 0;
    }

    BFS(G, nG, s, vis);
}
