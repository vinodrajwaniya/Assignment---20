#include<stdio.h>
#include<string.h>

int max(int *p, int size)
{
    int i;
    {
        if(p[i]>p[i+1])
            return p[i];
        else
            return p[i+1];
    }
}

int main()
{
    int a[]={10,20},m;
    m=max(a, 2);
    printf("%d",m);
    return 0;
}