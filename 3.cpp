#include <stdio.h>
void rot(int **a, int n) {
int i, j;
for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }

    for (i = 0; i < n; i++) {
        int l = 0, r = n - 1;
        while (l < r) {
            int t = a[i][l];
            a[i][l] = a[i][r];
            a[i][r] = t;
            l++;
            r--;
        }
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int m[100][100];
    int i, j;

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        	printf("ELEMENT-%d%d:",i+1,j+1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    int *p[100];
    for (i = 0; i < n; i++) {
        p[i] = m[i];
    }
    rot(p, n);
    printf("\nRotated Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

