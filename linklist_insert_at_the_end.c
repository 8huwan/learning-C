#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node * link;

};
struct node * START=NULL;

struct node * creatnode(){
    struct node * n;
    n= (struct node *)malloc(sizeof(struct node));
    return(n);
}
void insertnode_beg() {
    struct node * temp;
    temp=creatnode();
     printf("entar a number");
    scanf("%d",&temp->info);
    if (START==NULL)
    {
      START=temp;}
      else{
        temp->link=START;
        START=temp;
        return;
      }
void insertnode_specific(int key){
    struct node * temp, * point;
    temp=creatnode();
     printf("entar a number");
    scanf("%d",&temp->info);
    if (START==NULL)
    {
      START=temp;}
      else{
        point=START;
        while(point->link!=NULL && point->info!=key){
            point=point->next;
        }
        if(point->link==NULL){
            temp->link=null;
            point->link=temp
        }
      }
}
void insertnode_end(){
    struct node * temp,* t;
    temp=creatnode();
    printf("entar a number");
    scanf("%d",&temp->info);
    temp->link=NULL;
if (START==NULL)
    {
      START=temp;
    }
else
    {
     t=START;
     while(t->link!=NULL)
     {
        t=t->link;

     }
      t->link=temp;
    }
    
}
void deletNode()
{
    struct node *r;
    r=START;
    if(START==NULL)
    {printf("list is empty");}
    if(r->link==NULL)
   { 
    START=NULL;
    }



    else
    {
        while(r->link->link!=NULL)
        {
        r=r->link;
     
        }
        r->link=NULL;
        

    }
}
void viewlist()
{
    struct node *t;
    if(START==NULL)
    {printf("list is empty");}
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("%d ",t->info);
            t =t->link;
        }
    }
    
}
int menu()
{
    int ch;
    printf("\n1. add velue end to the list");
    printf("\n2. delet first velue");
    printf("\n3. view list");
    printf("\n.4 add velue start to the list");
    printf("\n. exit");
    printf("\n:-enter your choice-:");
    scanf("%d",&ch);
    return(ch);

}
void main()
{
    int i=10;
    while(i--)
    {
        switch (menu())
        {
        case 1:
        insertnode_end();
            break;
        case 2:
            deletNode();
            break;
        case 3:
            viewlist();
            break;
        case 4:
        insertnode_beg();
        case 5:
         exit(0);
            break;    
        
        default:
            printf("invalid choice");
        }
    
    }
    return;

}