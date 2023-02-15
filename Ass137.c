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



int SearchFirstOcc(PNODE First, int no)
{
    int iCnt = 1, CountNode = 0;
    while(First != NULL)
    {
        CountNode = Count(*First);
        if(First->data == no)
        {
            if(iCnt >= 1 && iCnt <= CountNode)
            {
                iCnt++;
            }
            
        }
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet1 = 0, iRet2 = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);
    iRet1 = Count(Head);
    printf("number of linked list is : %d\n",iRet1);

    iRet2 = SearchFirstOcc(Head, 30);

    printf("number Occered at position : %d\n",iRet2);

    return 0;
}