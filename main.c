#include <stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
};
struct node*addtoempty(int data){
  struct node*temp=malloc(sizeof(struct node));
  temp->data=data;
  temp->next=temp;
  return temp;
}
struct node*addatbeg(struct node*tail,int data){
  struct node*newp=malloc(sizeof(struct node));
  newp->data=data;
  newp->next=tail->next;
  tail->next=newp;
  return tail;
}  
void print(struct node*tail){
  struct node*p=tail->next;
  do{
    printf("%d ",p->data);
    p=p->next;
  }while(p!=tail->next);
}
int main(){
  struct node*tail;
  tail=addtoempty(45);
  tail=addatbeg(tail,34);
  print(tail);
  return 0;
}
