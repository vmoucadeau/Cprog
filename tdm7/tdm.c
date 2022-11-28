#include<stdio.h>

int hanoi[3][3] = {{3, 2, 1}, {0, 0, 0}, {0, 0, 0}};
int addition(int a, int b)
{
    if(b == 0) {
        return a;
    }
    return addition(a+1, b-1);
}

int McCarthy(int n)
{
    if(n > 100) {
        return n - 10;
    }
    return McCarthy(McCarthy(n+11));
}

int main() {
    
    return 0;
}