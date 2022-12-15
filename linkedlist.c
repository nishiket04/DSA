#include<stdio.h>
#include<stdlib.h>

struct link{
    int el;
    struct link *ne;
};

struct link* insertathead(struct link * head,int em){
    struct link * p;
    p=(struct link *)malloc(sizeof(struct link));
    p->el=em;
    p->ne=head;
    head=p;
    return head;
}

struct link* insertatend(struct link * head,int em){
    struct link *p,*q;
    p=(struct link *)malloc(sizeof(struct link));
    q=head;
    while(q->ne!=NULL)
    {
        q=q->ne;
    }
    p->ne=NULL;
    p->el=em;
    q->ne=p;
    return head;
}

struct link* insertatanypoint(struct link * head,int em,int in){
    struct link *p,*q;
    p=(struct link *)malloc(sizeof(struct link));
    q=head;
    int i=0;
    while(i<in-1)
    {
        q=q->ne;
        i++;
    }
    p->ne=q->ne;
    p->el=em;
    q->ne=p;
    return head;
}


int main()
{
    typedef struct link sl;
    sl *l1,*l2,*l3,*h;
    l1=(sl *) malloc(sizeof(sl));
    l2=(sl *) malloc(sizeof(sl));
    l3=(sl *) malloc(sizeof(sl));
    

    l1->el=1;
    l1->ne=l2;

    l2->el=2;
    l2->ne=l3;

    l3->el=3;
    l3->ne=NULL;
    
    h=l1;
    // h=insertathead(h,5);
    // h=insertatend(h,11);
    h=insertatanypoint(h,69,2);
    

    while(h!=NULL) 
    {
        printf("%d\n",h->el);
        h=h->ne;
    }
    
    return 0;
}