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

void DisplayPallindrome(PNODE First)
{
    int iDigit = 0;
    int temp1 = 0, temp2 = 0;
    while(First != NULL)
    {
        temp1 = First->data;
        temp2 = 0;
        while(First->data > 0)
        {
            iDigit = First->data % 10;
            temp2 = temp2  * 10 + iDigit;
            First->data = First->data/10;
            
        
        }
        if(temp1 == temp2)
        {
            printf("|%d| -> ",temp1);
        }
        First = First->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,141);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are : %d\n",iRet);

    DisplayPallindrome(Head);
    return 0;
}