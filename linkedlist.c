#include <stdio.h>
#include <stdlib.h>

struct link
{
    int el;
    struct link *ne;
};

struct link *createlist(struct link *head)
{
    struct link *new, *prv, *h;
    int n, val;
    printf("Enter the list size\n");
    scanf("%d", &n);
    printf("Enter element\n");
    for (int i = 0; i < n; i++)
    {
        new = (struct link *)malloc(sizeof(struct link));
        scanf("%d", &val);
        new->el = val;

        if (head == NULL)
        {
            head = new;
            prv = new;
        }
        else
        {
            prv->ne = new;
            prv = prv->ne;
        }
    }
    prv->ne = NULL;

    return head;
}

struct link *insertathead(struct link *head, int em)
{
    struct link *p;
    p = (struct link *)malloc(sizeof(struct link));
    p->el = em;
    p->ne = head;
    head = p;
    return head;
}

struct link *insertatend(struct link *head, int em)
{
    struct link *p, *q;
    p = (struct link *)malloc(sizeof(struct link));
    q = head;
    while (q->ne != NULL)
    {
        q = q->ne;
    }
    p->ne = NULL;
    p->el = em;
    q->ne = p;
    return head;
}

struct link *insertatanypoint(struct link *head, int em, int in)
{
    struct link *p, *q;
    p = (struct link *)malloc(sizeof(struct link));
    q = head;
    int i = 0;
    while (i < in - 1)
    {
        q = q->ne;
        i++;
    }
    p->ne = q->ne;
    p->el = em;
    q->ne = p;
    return head;
}

int main()
{
    typedef struct link sl;
    sl *head = NULL, *h;
    int c, val, po;
    do
    {
        printf("\nEnter 1. create list 2.insert at first 3. insert at end 4.insert at any point 5.diplay\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            head = createlist(head);
            break;

        case 2:
            printf("Enter value of new node\n");
            scanf("%d", &val);
            head = insertathead(head, val);
            break;

        case 3:
            printf("Enter value of new node\n");
            scanf("%d", &val);
            head = insertatend(head, val);
            break;

        case 4:
            printf("Enter index of new nod to be inster\n");
            scanf("%d", &po);
            printf("Enter value of new node\n");
            scanf("%d", &val);
            head = insertatanypoint(head, val, po - 1);
            break;

        case 5:
            h = head;
            printf("list:\n");
            while (h != NULL)
            {
                printf("%d->", h->el);
                h = h->ne;
            }
            printf("NULL\n");
            break;

        default:
            printf("Invalid input\n");
            break;
        }
    } while (c >= 1 && c <= 5);

    return 0;
}