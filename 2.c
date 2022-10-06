#include<stdio.h>

void swap(char **p, char **q)
{
    char *temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    char *a[20], *b[20];
    printf("Enter two strigs \n");
    gets(a);
    gets(b);
    swap(&a, &b);
    printf("Swap string == %s %s ",a,b);
    return 0;
}