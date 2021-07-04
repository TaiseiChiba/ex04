#include<stdio.h>
#include<stdlib.h>

#define N 256

int main()
{
    int a, b, total;
    char name[N];

    printf("What is your name?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("Rolling the dice...\n");
        
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    total = a + b;

    printf("Die 1: %d\n", a);
    printf("Die 2: %d\n", b);
    printf("Total Value: %d\n", total);
   
    return 0;

}