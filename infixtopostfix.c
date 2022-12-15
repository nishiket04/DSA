#include<stdio.h>
#include<string.h>

char a[100];
int top=-1;


int stackTop(char a[]){
    return a[top];
}

int full(){
    if(top==99){
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

int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}


int prio(char x){
    if(x=='/' || x=='*'){
        return 2;
    }
    else if(x=='-' || x=='+'){
        return 1;
    }
    else {
        return 0;
    }
}


int main()
{
    char in[100];
    char po[100];
    int i=0;
    int j=0;

    //x-y/z-k*d

    gets(in);


    while(in[i]!='\0')
    {
        if(!isOperator(in[i])){
            po[j] = in[i];
            j++;
            i++;
        }

        else if(prio(in[i])>prio(stackTop(a))){
            push(in[i]);
            i++;
        }
        else {
            po[j]=pop();
            j++;
        }
        
    }

    while(!em())
    {
        po[j]=pop();
        j++;
    }
    
    po[j]='\0';

    puts(po);
    
    return 0;
}