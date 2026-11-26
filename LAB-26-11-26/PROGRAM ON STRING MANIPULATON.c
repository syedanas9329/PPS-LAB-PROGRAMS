#include<stdio.h>
int main()
{
                char str[100];
                int i=0;
                printf("enter the string:");
                gets (str);
                while (str[i]!='\0')
                {
                                i++;
                }
                printf("lenght of input string:%d",i);
                return 0;
}
