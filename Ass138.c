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
int Count(PNODE First)
{
    int iCntC = 0;

    while(First != NULL)
    {
        iCntC++;
        First = First->next;
    }
    return iCntC;
}

int Summation(PNODE First)
{
    int iSum = 0;
    while(First != NULL)
    {
        iSum = iSum + First->data;
        First = First->next;
    }
    
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet1 = 0;
    int iRet2 = 0;

    
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);
    iRet2 = Count(Head);
    printf("number of linked list : %d\n",iRet2);

    iRet1 = Summation(Head);

    printf("number Occered at position : %d\n",iRet1);

    return 0;
}