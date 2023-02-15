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

int SumDigit(PNODE First)
{
    int iDigit = 0, iSum = 0;

    while(First != NULL)
    {
        iSum = 0;
        while(First->data != 0)
        { 
            iDigit = First->data % 10;
            First->data = First->data/10;
        
            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
 
        First = First->next;
    }
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,640);
    InsertFirst(&Head,240);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    iRet = SumDigit(Head);

    return 0;
}