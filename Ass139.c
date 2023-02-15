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

int LargestElement(PNODE First)
{
    int iMax = 0;
    while(First != NULL)
    {
        if(iMax < First->data)
        {
            iMax = First->data;
        }   
        First = First->next;
    }
    
    return iMax;
}

int main()
{
    PNODE Head = NULL;
    int iRet1 = 0;
    int iRet2 = 0;

    
    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    Display(Head);
    iRet2 = Count(Head);
    printf("number of linked list : %d\n",iRet2);

    iRet1 = LargestElement(Head);

    printf("Largest element is : %d\n",iRet1);

    return 0;
}