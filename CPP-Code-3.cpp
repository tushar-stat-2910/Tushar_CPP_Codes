//Implementation of Linear Data Structures with C++ Date:31/05/2023
//Q1) Write a program to implement Linked list.
#include<iostream.h>
#include<conio.h>
class linklist{
  struct node{
    int data;
    node *link;
  }*p;
  public:
    linklist(){
      p=NULL;
    }
  void add(int d){
    node *q=p, *r;
    r=new node; r->link=NULL;
    r->data=d;
    if(p==NULL) p=r;
    else{
      while(q->link!=NULL){
        q=q->link;
      }
      q->link=r;
    }
  }
  void display(){
    if(p==NULL) cout<<"\n list is empty";
    else{
      node *q=p;
      while(q!=NULL){
        cout<<"\t "<<q->data;
        q=q->link;
      }
    }
  }
  void addbeg(int d){
    node *r;
    r=new node; r->data=d;
    if(p==NULL){
      p=r; r->link=NULL;
    } else{
      r->link=p; p=r;
    }
  }
  void addafter(int dat, int locator){
    node *q=p,*r;
    if(p==NULL) {cout<<"\n list is empty"; return;}
    while(q!=NULL){
      if(q->data==locator){
        r=new node; r->data=dat; r->link=q->link; q->link=r;
        return;
      }else q=q->link;
    }
    if(q==NULL) cout<<"\nThe specified node not found";
  }
}l1;
void main(){
  clrscr();
  int choice=0,num,num1;
  while(1){
    cout<<"\n enter your choice \n 1:for dispaying whole list";
    cout<<"\n 2:for adding number at end of list";
    cout<<"\n 3:for adding number at beginning";
    cout<<"\n 4:for at specific location\n 0: for exit\n";
    cin>>choice;
    if(choice==1) l1.display();
    else if(choice==2){
      cout<<"\nenter namber\n";cin>>num; l1.add(num);
    }else if(choice==3){
      cout<<"\nenter number\n";cin>>num; l1.addbeg(num);
    }else if(choice==4){
      cout<<"\n enter number"; cin>>num;
      cout<<"\nenter number after you want to add";
      cin>>num1; l1.addafter(num,num1);
    }else return;
  }
  getch();
}
//Q2) Write a program to accept and store names of students in singly linked list. 
#include<iostream.h>
#include<conio.h>
#include<string.h>
class linklist{
  struct node{
    char name[10];
    node *link;
  }*p;
  public:
    linklist(){
      p=NULL;
    }
  void add(char data[10]){
    node *q=p, *r;
    r=new node; r->link=NULL;
    strcpy(r->name,data);
    if(p==NULL) p=r;
    else{
      while(q->link!=NULL){
        q=q->link;
      }
      q->link=r;
    }
  }
  void display(){
    if(p==NULL) cout<<"\n list is empty";
    else{
      node *q=p;
      while(q!=NULL){
        cout<<"\t name: "<<q->name<<"\n";
        q=q->link;
      }
    }
  }
  void addbeg(char data[10]){
    node *r;
    r=new node; strcpy(r->name,data);
    if(p==NULL){
      p=r;
      r->link=NULL;
    } else{
      r->link=p; p=r;
    }
  }
  void addafter(char data[10], char loc[10]){
    node *q=p,*r;
    if(p==NULL) {cout<<"\n list is empty"; return;}
    while(q!=NULL){
      if(strcmp(q->name,loc)==0){
        r=new node; strcpy(r->name,data); r->link=q->link; q->link=r;
        return;
      }else q=q->link;
    }
    if(q==NULL) cout<<"\nThe specified node not found";
  }
}l1;
void main(){
  clrscr();char name[10],loc[10];
  int choice=0;
  while(1){
    cout<<"\n enter your choice \n 1:for dispaying whole list";
    cout<<"\n 2:for adding name at end of list";
    cout<<"\n 3:for adding name at beginning";
    cout<<"\n 4:for adding name at specific location\n 0: for exit\n";
    cin>>choice;
    if(choice==1) l1.display();
    else if(choice==2){
      cout<<"\nenter name of student\n";
      cin>>name; l1.add(name);
    }else if(choice==3){
      cout<<"\nenter name of student\n";
      cin>>name;
      l1.addbeg(name);
    }else if(choice==4){
      cout<<"\n enter name of student"; cin>>name;
      cout<<"\nenter salary of person after you want to add";
      cin>>loc; l1.addafter(name,loc);
    }else return;
  }
  getch();
}
//Q3)Write a program that reads and store the gender(M,F), age, and salary of employee using linked list.
#include<iostream.h>
#include<conio.h>
#include<string.h>
class linklist{
  struct node{
    char gen[1];
    int salary, age;
    node *link;
  }*p;
  public:
    linklist(){
      p=NULL;
    }
  void add(char data[1],int a,int sal){
    node *q=p, *r;
    r=new node; r->link=NULL;
    strcpy(r->gen,data); r->age=a; r->salary=sal;
    if(p==NULL) p=r;
    else{
      while(q->link!=NULL){
        q=q->link;
      }
      q->link=r;
    }
  }
  void display(){
    if(p==NULL) cout<<"\n list is empty";
    else{
      node *q=p;
      while(q!=NULL){
        cout<<"\t gender: "<<q->gen<<"\tage: ";
        cout<<q->age<<"\tsalary :"<<q->salary;
        q=q->link;
      }
    }
  }
  void addbeg(char data[1],int a,int sal){
    node *r;
    r=new node; strcpy(r->gen,data);
    r->age=a; r->salary=sal;
    if(p==NULL){
      p=r;
      r->link=NULL;
    } else{
      r->link=p; p=r;
    }
  }
  void addafter(char data[1],int a, int sal, int loc){
    node *q=p,*r;
    if(p==NULL) {cout<<"\n list is empty"; return;}
    while(q!=NULL){
      if(loc=q->salary){
        r=new node; strcpy(r->gen,data);
        r->age=a; r->salary=sal; r->link=q->link; q->link=r;
        return;
      }else q=q->link;
    }
    if(q==NULL) cout<<"\nThe specified node not found";
  }
}l1;
void main(){
  clrscr();char gen[1];int age, loc, sal;
  int choice=0;
  while(1){
    cout<<"\n enter your choice \n 1:for dispaying whole list";
    cout<<"\n 2:for adding data at end of list";
    cout<<"\n 3:for adding data at beginning";
    cout<<"\n 4:for adding data at specific location\n 0: for exit\n";
    cin>>choice;
    if(choice==1) l1.display();
    else if(choice==2){
      cout<<"\nenter gender age & salary of person\n";
      cin>>gen>>age>>sal;
      l1.add(gen,age,sal);
    }else if(choice==3){
      cout<<"\nenter gender,age & salary of person\n";
      cin>>gen>>age>>sal;
      l1.addbeg(gen,age,sal);
    }else if(choice==4){
      cout<<"\n enter gen,age & salary of person";
      cin>>gen>>age>>sal;
      cout<<"\nenter salary of person after you want to add";
      cin>>loc; l1.addafter(gen,age,sal,loc);
    }else return;
  }
  getch();
}
//Q4) Write a program to implement Stack as an array.
#include<iostream.h>
#include<conio.h>
#define max 10
class stack{
  int arr[max];
  int top;
  public:
    stack(){
      top=-1;
    }
  void push(int num){
    if (top==max-1){
      cout<<"\n stack is full";
      return;
    }
    top+=1;
    arr[top]=num;
  }
  int pop(void){
    if(top==-1){
      cout<<"\n stack is empty";
      return(0);
    }
    cout<<"\n "<<arr[top]<<" is pop out\n"; top-=1;
  }
  void display(){
    if(top==-1){
      cout<<"stack is empty";
      return;
    } while(top>-1){
      cout<<arr[top]<<"\t";
      top-=1;
    }
  }
};
void main(){
  stack s1;
  clrscr();
  s1.push(10);s1.push(14);s1.pop();s1.push(18);s1.push(22);s1.push(26);
  s1.pop(); s1.push(30);s1.pop();
  s1.display();
  getch();
}
//Q5) Write a program to implement Queue as an array.
#include<iostream.h>
#include<conio.h>
#define max 5
class queue{
  int arr[max];
  int rear, front; //rear for insertion
  public:
    queue(){
      rear=front=-1;
    }
  void add(int num){
    if(rear==max-1){
      cout<<"\n queue is full";
      return;
    }
    if(rear==-1){
      front=rear=0;
      arr[rear]=num;
    }else{
      rear+=1;
      arr[rear]=num;
    }
  }
  void pop(){
    if(front==-1){
      cout<<"\n queue is empty\n";
      return;
    }
    int data=arr[front];
    arr[front]=0;
    if(front==rear){
      front=rear=-1;
    }else{
      front+=1;
    }
    cout<<"\n"<<data<<" is pop out";
  }
};
void main(){
  class queue q1; clrscr();
  q1.add(10);q1.add(20);q1.add(30);q1.add(40);q1.add(50);
  q1.add(60);q1.pop();q1.pop();q1.add(76);q1.add(90);
  q1.add(643);q1.pop(); q1.pop();q1.pop();q1.pop();
  getch();
}
//Q6) Write a program to implement circular queue as an array.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define max 3
class cirque{
  int arr [max];
  int rear,front;
  public:
    cirque(){
      rear=front=-1;
      for(int i=0;i<max;i++){
        arr[i]=0;
      }
    }
  void add(int num){
    if((rear+1==max && front==0)||(rear+1==front) ){
      cout<<"\n Queue is full\n";
      return;
    }
    if(front+1==rear && rear+1==max){
      rear=0;
      arr[rear]=num;
      return;
    }
    rear+=1;
    arr[rear]=num;
    if(front==-1) front++;
  }
  void pop(){
    if(rear==front){
      int data=arr[front];
      rear=front=-1;
      cout<<"\n "<<data<<" is pop out\n";
      return;
    }
    if((front==-1/* && rear==-1*/)||(rear==0 && front+1==max)){ //
        cout<<"\nqueue is empty\n";
      return;
    }
    int data=arr[front];
    arr[front]=0;
    front+=1;
    cout<<"\n"<<data<<" is pop out\n";
  }
}q1;
void main(){
  clrscr();
  q1.add(10);q1.add(20);q1.add(50);q1.add(60);/* q1.pop();*/q1.pop();q1.pop();
  q1.add(30);q1.add(40);q1.add(50);q1.add(70);q1.add(80);q1.add(90);
  getch();
}
//Q7)Write a program to implement Stack as a linked list.
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class stack{
  struct node{
    int data;
    node *link;
  }*top;
  public:
    stack(){
      top=NULL;
    }
  void push(int num){
    node *temp=new node;
    if(temp==NULL) { cout<<"\nstack is full\n"; return;}
    temp->data=num;
    if(top==NULL) temp->link=NULL;
    else temp->link=top;
    top=temp;
  }
  void pop(){
    if(top==NULL){ cout<<"\nstack is empty\n"; return;}
    cout<<"\n"<<top->data<<" is pop out\n";
    top=top->link;
  }
}s1;
void main(){
  clrscr();
  s1.pop(); s1.push(10); s1.push(15); s1.push(25); s1.pop(); s1.pop();
  s1.pop(); s1.pop();getch();
}
//Q8) Write a program to implement Queue as a linked list.
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
class queue{
  struct node{
    int data;
    node *link;
  }*front,*rear;
  public:
    queue(){
      front=rear=NULL;
    }
  void add(int num){
    node *ptr=new node;
    if(ptr==NULL){
      cout<<"\nQueue is full\n";
      return;
    }
    ptr->data=num;
    ptr->link=NULL;
    if(front==NULL && rear==NULL) front=rear=ptr;
    else rear=ptr;
  }
  void pop(){
    if(front==NULL){
      cout<<"\nQueue is empty\n";
      return;
    }
    node *ptr;
    ptr=front->link;
    delete(front);
    front=ptr;
    cout<<"\nnode is pop out\n";
  }
}q1;
void main(){
  clrscr();
  q1.add(10);q1.pop();q1.pop();
  getch();
}