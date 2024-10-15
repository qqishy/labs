#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 5, Gsize = 0;
    int** G, * deg;

    printf("1task\n");

    G = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        G[i] = (int*)malloc(m * sizeof(int));
    }

    deg = (int*)malloc(m * sizeof(int));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            G[i][j] = rand() % 2;
            G[j][i] = G[i][j];
            G[i][i] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }

    printf("\n2task\n");


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (G[i][j] == 1) {
                Gsize++;
            }
        }
    }
    Gsize = Gsize / 2;
    printf("Size Graph: %d\n\n", Gsize);

    printf("3task\n");

    for (int i = 0; i < m; i++) {
        deg[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (G[i][j] == 1) {
                deg[i]++;
            }
        }
        printf("deg: vershne %d = %d\n", i, deg[i]);
    }
}
