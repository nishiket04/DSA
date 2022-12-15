#include<stdio.h>
#include<string.h>

char a[100];
int top=-1;

int full(){
    if(top==98){
        return 1;
    }
    return 0;
}

int em(){
    if(top==-1)
    {
        return 1;
    }

    return 0;
}

void  push(char s){
        a[++top]=s;
}

int pop(){
    return a[top--];
}


int main()
{
    char s[100];
    int c=0;
    printf("Enter string\n");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(!full())
        {
            push(s[i]);
        }
        else {
            printf("stack is full\n");
            c=1;
            break;
        }
    }

    for(int i=0;i<strlen(s);i++)
    {
        if(!em())
        {
            s[i]=pop();
        }
        else{
            printf("stack is empty\n");
            c=1;
            break;
        }
    }

    if(c==0)
    {
    printf("rev-string:\n");
    puts(s);    
    }
    return 0;
}