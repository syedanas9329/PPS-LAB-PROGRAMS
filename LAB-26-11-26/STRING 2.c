#include<stdio.h>
#include<string.h>
int main()
{
                char str[100];
                int length;
                printf("enter a string:");
                gets(str);
                length= strlen(str);
                printf("lenth of the string=%d",length);
                return 0;
}
