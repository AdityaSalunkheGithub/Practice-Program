#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int no)
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

int DisplayPrime(PNODE First)
{
    int iNo = 0, iCnt = 1;

    while(First != NULL)
    {
        if(First->data % 2 != 0)
        {
            printf("%d\t",First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,89);
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    iRet = DisplayPrime(Head);

    return 0;
}