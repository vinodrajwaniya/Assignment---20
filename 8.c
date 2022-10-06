#include<stdio.h>
#include<string.h>

void sum(int *ptr, int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+ptr[i];
    }
    printf("Sum is %d",sum);
}

int main()
{
    int a[]={2,3,5,4,32,65,34,78,93,100};
    int i;
    sum(a,10);
    return 0;
}