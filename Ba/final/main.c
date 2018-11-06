#include <stdio.h>
#include <stdlib.h>

int main()
{
char letra1 = 'A';
char letra2 = 'B';
char * p = &letra1;
char * p1 = &letra2;
letra1 = 'C';
letra2 = 'D';
letra1 = *p;

printf("1 = %c y 2 = %c",letra1,letra2);
    return 0;
}
