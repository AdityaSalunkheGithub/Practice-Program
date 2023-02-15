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
    int iSum = 0;

    while(First != NULL)
    {
        if(First->data % 2 == 0)
        {
            iSum = iSum + First->data;
        }
        First = First->next;
    }
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    iRet = DisplayPrime(Head);

    printf("Addition of even elements is : %d\n",iRet);

    return 0;
}