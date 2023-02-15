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

void InsertFirst(PPNODE First , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

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
    printf("Elements in the linkedlist are : \n");
    while(First != NULL)
    {
        printf("|%d| -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void DisplayLarge(PNODE First)
{
    int iDigit = 0;
    int iMax = 0;
    while(First != NULL)
    {
        
        while(First->data != 0)
        {
           
            iDigit = First->data % 10;
            First->data = First->data/10;
            if( iMax < iDigit)
            {
                iMax = iDigit;
            }
        }
        printf("%d\t",iMax);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,419);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    DisplayLarge(Head);
    return 0;
}