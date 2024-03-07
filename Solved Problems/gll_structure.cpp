#include<iostream>
#include<string.h>
using namespace std;
struct node
{   char name[20];
     node *next;
     node *down;
      int flag;
};
class Gll
{    char ch[20];    
     int n,i;    
     node *head=NULL,*temp=NULL,*t1=NULL,*t2=NULL;
     public:
     node *create();  //create node
     void insertb();  // insert book
     void insertc();  //insert chapter in book
     void inserts();  //insert session in chapter
     void insertss(); //insert subsession in session
     void displayb();  // display structure full
    
};

node *Gll::create(){
     node *p = new node;
     p->next=NULL;
     p->down=NULL;
     p->flag=0;
     cout<<"Enter book name: ";
     cin>>p->name;
     return p;
}


void Gll::insertb(){

     if(head==NULL){
          t1=create();
          head=t1;

     }else{
          cout<<"\n Book exist....";
     }
}

int main(){

     Gll g;
     int x;

     whle(1){
          cout<<"\n\n Enter your choice: ";
          cout<<"\n 1. Insert Book";
          cout<<"\n 2. insert chapter";
          cout<<"\n 3. Insert section";
          cout<<"\n 6. Exist";

          cin>>x;

          switch (x)
          {
          case 1:
               g.insertb();
               cout<<"Book Inserted";
               break;
          
          default:
               cour<<"\n Enter the valid choice.."
               break;
          }
     }

     return 0;
}
