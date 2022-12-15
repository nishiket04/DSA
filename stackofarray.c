#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int *a;
};



int main()
{
    struct stack s;

    s.a=(int *) malloc(5*sizeof(int));

    for(int i=0;i<5;i++)
    {
        scanf("%d",((s.a)+i));
    }


    for(int i=0;i<5;i++)
    {
        printf("%d",*((s.a)+i));
    }

    return 0;
}