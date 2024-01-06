#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int *, int n);

int main() {
    srand(time(NULL));

    int n;

    printf("Enter: ");
    scanf("%d",&n);

    int A[n][n];

    fill((int *)A,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

//για printf σε συναρτηση πρεπει να κανεις αυτο:
// printf("%d ",*((my2DArray + i)+ j)); αντι για το κλασσικο my2DArray[i][j]
   

     return 0;
}

void fill(int *array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *((array + i * n) + j) = (rand() % (10 - 1 + 1)) + 1;
        }
    }
}