#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else 
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("elements in linked list are : \n");

    while(First != NULL)
    {
        printf("|%d| -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int SearchFirstOcc(PNODE First, int no)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        if(First->data == no)
        {
            break;
        }
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);

    iRet = SearchFirstOcc(Head, 30);

    printf("number Occered at position : %d\n",iRet);

    return 0;
}