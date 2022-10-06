#include<stdio.h>
#include<string.h>

void count(char *a)
{
    int i,vowel=0,constant=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            vowel++;
        else
            constant++;    
    }
    printf("Vowel is %d\nContant is %d",vowel,constant);
}

int main()
{
    char a[20];
    printf("Enter an string ");
    gets(a);
    count(&a);
    return 0;
}