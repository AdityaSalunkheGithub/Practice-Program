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

int SecMaximum(PNODE First)
{
    int iMax = 0, temp = 0;
    while(First !=NULL)
    {
        if(iMax < First->data)
        {
            iMax = First->data;
        }
        if(iMax > First->data)
        {
            temp = First->data;
        }
        First = First->next;
    }
    return temp;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    iRet = SecMaximum(Head);

    printf("%d\n",iRet);

    return 0;
}