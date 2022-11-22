#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<string.h>

int calculUnIter_recursive(int n) {
    if(n == 0) {
        return 3;
    }
    else {
        return 5*calculUnIter_recursive(n-1) + 10;
    }
}

char tab[10][8] = {"zero ", "un ", "deux ", "trois ", "quatre ", "cinq ", "six ", "sept ", "huit ", "neuf "};
char last_char[100];
char *epeler(int nbre) {
    if(nbre < 10) {
        return tab[nbre];
    }
    else {
        strcat(last_char, epeler(nbre/10));
        strcat(last_char, epeler(nbre % 10));
        strcat(last_char, tab[nbre % 10]);
        return last_char;
    }
}


int calcUnIter(int n)
{
int i ;
int un = 3 ;
assert ( n >= 0 ) ; /* ou unsigned */
for (i = 1; i <= n; i++)
    un = 5 * un + 10;
return un;
}

int main() {
    int nombre = 152;
    epeler(nombre);
    printf("%s", last_char);
}