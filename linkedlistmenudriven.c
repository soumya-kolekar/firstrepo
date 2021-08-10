#include<stdio.h>
#include<conio.h>
void add();
void add_start();
void add_position();
void add_end();
void delete_data();
void remove_start();
void remove_end();
void remove_position();
void display();
void search();
int size=0;
struct node
 {
 int roll_no;
 char name[25];
 struct node *next;
 };
 struct node *head,*newnode,*temp;
main()
{
 printf("Program to create your link list & print it \n");
 int key=1;
 head=0;
while(key)
 {
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the number:- ");
 scanf("%d",&newnode->roll_no);
 fflush(stdin);
 printf("\nEnter name: "); gets(newnode->name);
 newnode->next=0;
 if(head==0)
 {
 head=temp=newnode;
 }
 else
 {
 temp->next=newnode;
 temp=newnode;
 }
 printf("\nEnter 1 to add node & 0 to stop adding nodes:- ");
 scanf("%d",&key);
 size++;
 }
 int choise;
 loop:
 {
 printf("\nEnter 0 if you are done: ");
 printf("\nEnter 1 to Add node: ");
 printf("\nEnter 2 to display data: ");
 printf("\nEnter 3 to delete data: ");
 printf("\nEnter 4 to Search data:");
 printf("\nEnter 5 to find size of your list: ");
 scanf("%d",&choise);
 switch(choise)
 {
 case 0:return 0;
 case 1: add();
 break ;
 case 2: display();
 break;
 case 3: delete_data();
 break; case 4:search();
 break;
 case 5:printf("\nSize of your list is= %d\n",size);
 break;
 default: printf("Error...! Enter valid number.");
 break;
 }
 }
 goto loop;
 getch();
 return 0;
}
void add()
{
 int x;
 printf("\nEnter 1 to add element at starting: ");
 printf("\nEnter 2 to add element at any position: ");
 printf("\nEnter 3 to add element at End: ");
 scanf("%d",&x);
 switch(x)
 {
 case 1:add_start();
 break;
 case 2:add_position();
 break;
 case 3:add_end();
 break;
 default:printf("\nEnter the valid number");
 break;
 }
}
void add_start()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("\n Enter number- ");
 scanf("%d",&newnode->roll_no); fflush(stdin);
 printf("\nEnter name- ");
 gets(newnode->name);
 temp=head;
 head=newnode;
 newnode->next=temp;
 size++;
}
void add_position()
{
 int i;
 printf("\nEnter the position where you want to add data- ");
 scanf("%d",&i);
 temp=head;
 if(i>=size)
 {
 printf("\nYour Entered Position is wrong\n");
 }
 else
 {
 for(int j=1;j<(i-1);j++)
 {
 temp=temp->next;
 }
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the data: ");
 scanf("%d",&newnode->roll_no);
 fflush(stdin);
 printf("Enter name- ");
 gets(newnode->name);
 newnode->next=temp->next;
 temp->next=newnode;
 size++;
 }
}
void add_end()
{ newnode=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter data: ");
 scanf("%d",&newnode->roll_no);
 fflush(stdin);
 printf("Enter name- ");
 gets(newnode->name);
 temp=head;
 while(temp->next!=0)
 {
 temp=temp->next;
 }
 temp->next=newnode;
 newnode->next=0;
 size++;
}
void delete_data()
{
 int x;
 printf("\nEnter 1 to remove starting element:");
 printf("\nEnter 2 to remove at any position:");
 printf("\nEnter 3 to remove last element:");
 scanf("%d",&x);
 switch(x)
 {
 case 1:remove_start();
 break;
 case 2:remove_position();
 break;
 case 3:remove_end();
 break;
 default: printf("Error!");
 break;
 }
}
void remove_start()
{ if(size==0)
 {
 printf("\nYour list is Empty\n");
 }
 else
 {
 temp=head;
 head=head->next;
 free(temp);
 size--;
 printf("\n1st Element is deleted");
 }
}
void remove_position()
{
 struct node *nextnode;
 int i;
 printf("\nEnter the position where you want to remove node: ");
 scanf("%d",&i);
 if(i>size)
 {
 printf("\nYour Enter position is not valid. \n");
 }
 else
 {
 temp=head;
 for(int j=1;j<(i-1);j++)
 {
 temp=temp->next;
 }
 nextnode=temp->next;
 temp->next=nextnode->next;
 free(nextnode);
 printf("\n your %d element is deleted.\n",i);
 size--;
 }
}
void remove_end()
{
 struct node *prv; temp=head;
 while(temp->next!=0)
 {
 prv=temp;
 temp=temp->next;
 }
 if(temp==head)
 {
 head=0;
 }
 else
 {
 prv->next=0;
 }
 free(temp);
 printf("\nYour last Element is deleted\n");
 size--;
}
void search()
{
 int roll,i=0;
 printf("\nEnter the Roll number: ");
 scanf("%d",&roll);
 temp=head;
 while(temp!=0)
 {
 if(roll==temp->roll_no)
 {
 printf("\n Name- %s",temp->name);
 i++;
 break;
 }
 temp=temp->next;
 }
 if(i==0)
 {
 printf("\nYour Roll number is not valid \n");
 }
}
void display(){
 temp=head;
 if(size==0)
 {
 printf("\nList is empty\n");
 }
 else
 {
 while(temp!=0)
 {
 printf("\nNumber- %d",temp->roll_no);
 printf("\nName- %s",temp->name);
 temp=temp->next;
 }
 }
}
