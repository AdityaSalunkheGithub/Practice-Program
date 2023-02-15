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

void DisplayProduct(PNODE First)
{
    int iDigit = 0;
    int iMult= 1, temp = 0;
    while(First != NULL)
    {
        iMult = 1;
        while(First->data > 0)
        {
            iDigit = First->data % 10;
            if(iDigit == 0)
            {
                temp = iDigit;
            }
            else
            {
                iMult = iMult * iDigit;
            }
            First->data = First->data/10;
            
        
        }
        printf("%d\t",iMult);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    DisplayProduct(Head);
    return 0;
}