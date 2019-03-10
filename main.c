#include<stdio.h>
#include<windows.h>
//#include"algo.h"
extern int add(int a, int b, int c);
int main()
{
    int sum = add(1, 2, 4);
    printf("%d\n", sum);
    printf("hello world!\n");
    system("pause");
    return 0;
}