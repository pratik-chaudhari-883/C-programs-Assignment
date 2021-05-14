/*
problem statment-search Last occurance of perticular element in singly link list 
*/
struct Node
{
    int data;
    struct Node *next;
};
#include<stdio.h>
#include<stdlib.h>
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;




 void InsretFirst(PPNODE Head,int iValue)
 {
     PNODE newn=NULL;
     newn=(PNODE)malloc(sizeof(NODE));
     newn->data=iValue;
     newn->next=NULL;


    if (*Head == NULL)
    {
        *Head=newn;
    }else
    {
        newn->next=*Head;
        *Head=newn;

    }
    
  
 }

  void Display(PNODE Head)
  {
      printf("\n");
      while (Head != NULL)
      {
          printf("|%d|->",Head->data);
          Head=Head->next;
      }
      printf("NULL\n");
  }

   int CountList(PNODE Head)
   {
       int iCnt=0;
       while(Head != NULL)
       {
           iCnt++;
           Head=Head->next;
       }
       printf("\n");

       return iCnt;
   }

void InsretLast(PPNODE Head, int ivalue)
{
  PNODE newn= NULL;
  PNODE temp=NULL;
  newn=(PNODE)malloc(sizeof(PNODE));
  newn->data=ivalue;
  newn->next=NULL;
    
    temp=*Head;
    if (*Head== NULL)
    {
        *Head=newn;
    }else
    {
       while (temp->next != NULL)
       {
           temp=temp->next;  
       }
        temp->next=newn;
        newn->next=NULL;
    }
    
    
}

void DeleteFirst(PPNODE Head)
 {
    PNODE temp=*Head;
    if (*Head != NULL)
    {
        (*Head)=(*Head)->next;
        free(temp);
    }
    
    
 }
 void DeleteLast(PPNODE Head)
 {
     PNODE temp=*Head;
     if (*Head==NULL)
     {
         return;

     }else if ((*Head)->next == NULL)
     {
        free(*Head);
        *Head=NULL;     
     }else
     {
         while (temp->next->next != NULL)
         {
             temp=temp->next;
         }
          
          free(temp->next);
          temp->next=NULL;
         
     }
     
 }   
void InsertAtPos(PPNODE Head,int iPos,int iValue)
{
    int iSize=0;
    int i=0;
    iSize=CountList(*Head);
    if ((iPos < 1) && (iPos>iSize+1))
    {
        return;
    }
    if (iPos==1)
    {
       InsretFirst(Head,iValue);
    }else if (iPos==(iSize+1))
    {
        InsretLast(Head, iValue);
    }else
    {
        PNODE newn=NULL;
        PNODE temp=NULL;
        temp=*Head;
        newn=(PNODE)malloc(sizeof(PNODE));
        newn->data=iValue;
            for ( i = 0; i < (iPos-1); i++)
            {
                temp=temp->next;

            }
            newn->next=temp->next;
            temp->next=newn;

    }
    
    
    
}
     void DeleteAtPos(PPNODE Head,int iPos,int iValue)
     {
         int iSize=0; 
         int i=0; 
         iSize=CountList(*Head);

         if ((iPos<1)&&(iPos>iSize-1))
         {
             return;
         }
         if (iPos==1)
         {
             DeleteFirst(Head);
         }else if (iPos==(iSize-1))
         {
             DeleteLast(Head);
         }else
         {
             PNODE temp=*Head;
             for(i=0; i<iPos-1; i++)
             {
                (*Head)=(*Head)->next;
             }
             PNODE temp2=temp->next;
             temp->next=temp2->next;
             free(temp2);
         }
         
         
         
         
     }

     int SearchLastOcc(PNODE Head,int iNo)
     {
         int iPos=-1,iCnt=0;
         while (Head!=NULL)
         {
             if (Head->data==iNo)
             {
                 iPos=iCnt;
             }
      
             Head=Head->next;
                    iCnt++;
         }
         
         if (Head->data==iNo)
         {
              return iPos;
         }
         
         
         return iPos;
     }
 

int main()
{
   PNODE First= NULL;
   int no=0;
   int iPos=0;
   int iRet=0;
   int iNo;

   printf("Enter Value\n");
   scanf("%d",&no);
   InsretFirst(&First,no);


   printf("Enter Value\n");
   scanf("%d",&no);
   InsretFirst(&First,no);


   printf("Enter Value\n");
   scanf("%d",&no);
   InsretFirst(&First,no);
  
    
    Display(First);
    iRet=CountList(First);
     printf("node of the list are %d",iRet);
 
    printf("Enter value  for Last \n");
    scanf("%d",&no);
    InsretLast(&First,no);

    printf("Enter value for Last  \n");
    scanf("%d",&no);
    InsretLast(&First,no);
    
    Display(First);

    printf("Enter element that you want to search..\n");
    scanf("%d",&iNo);

    iRet=SearchLastOcc(First,iNo);

     printf("index of Last occrance is %d",iRet);

    // DeleteFirst(&First);
    // Display(First);

    //  DeleteLast(&First);
    //  Display(First);

    //  printf("\nEnter the Possition where you want insert a node \n");
    //  scanf("%d",&iPos);

    //  printf("\nEnter the Value for spicifide possition\n");
    //  scanf("%d",&no);

    //   InsertAtPos(&First,iPos,no);
    //   Display("First");

    //   printf("\nEnter the Possition where you want Delete a node \n");
    //  scanf("%d",&iPos);

    //  printf("\nEnter the Value for spicifide possition\n");
    //  scanf("%d",&no);

    //  DeleteAtPos(&First,iPos,no);
    //        Display("First");


    return 0;
}