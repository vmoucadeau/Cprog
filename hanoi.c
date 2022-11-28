#include<stdio.h>

int hanoi[3][3] = {{3, 2, 1}, {0, 0, 0}, {0, 0, 0}};

void print_hanoi(int hanoi[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; i < 3; i++){
            printf("%d", hanoi[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    return 0;
}