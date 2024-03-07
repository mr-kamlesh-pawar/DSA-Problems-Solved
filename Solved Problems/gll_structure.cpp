#include <iostream>
#include <string.h>
using namespace std;
struct node
{
     char name[20];
     node *next;
     node *down;
     int flag;
};
class Gll
{
     char ch[20];
     int n, i;
     node *head = NULL, *temp = NULL, *t1 = NULL, *t2 = NULL;

public:
     node *create(); // create node
     void insertb(); // insert book
     void insertc(); // insert chapter in book
     void inserts();  //insert session in chapter
     // void insertss(); //insert subsession in session
     // void displayb();  // display structure full
};

node *Gll::create()
{
     node *p = new node;
     p->next = NULL;
     p->down = NULL;
     p->flag = 0;
     cout << "Enter book name: ";
     cin >> p->name;
     return p;
}

void Gll::insertb()
{

     if (head == NULL)
     {
          t1 = create();
          head = t1;
     }
     else
     {
          cout << "\n Book exist....";
     }
}

void Gll::insertc()
{
     if (head == NULL)
     {
          cout << "The book is not found";
     }
     else
     {
          cout << "How many chapters you want to insert: ";
          cin >> n;

          for (i = 0; i < n; i++)
          {
               t1 = create();

               if (head->flag == 0)
               {
                    head->down = t1;
                    head->flag = 1;
               }else
               {
                    temp = head;
                    temp = temp->down;
                    while (temp->next != NULL)
                    {
                         temp = temp->next;
                    }
                    temp->next = t1;
               }
          }
     }
}

void Gll::inserts(){
     if(head==NULL){
          cout<<"Book not found";

     } else{

          cout<<"Enter the chapter name which want to insert section: ";
          cin>>ch;

          temp=head;
          if(temp->flag==0){
               cout<<"Their is no chapters available in book";
          } else{
               temp=temp->down;
               t2 = temp->down; 
               while(temp!=NULL){
                    if(!strcmp(ch,temp->name)){
                         cout<<"Enter how many section you want to enter :";
                         cin>>n;

                         for(i=0; i<n; i++){
                              t1= create();

                              if(temp->flag==0){
                                   temp->down=t1;
                                   temp->flag=1;
                                   cout<<"\n****";
                                   t2=temp->down;

                              }else{


                                   cout<<"\n####";
                                   while(t2->next!=NULL){
                                        t2=t2->next;
                                   }
                                   t2->next=t1;

                              }
                         }
                         break;
                    } temp=temp->next;
               }
          }
     }

}




int main()
{

     Gll g;
     int x;

     while (1)
     {
          cout << "\n\n Enter your choice: ";
          cout << "\n 1. Insert Book";
          cout << "\n 2. insert chapter";
          cout << "\n 3. Insert section";
          cout << "\n 6. Exist";

          cin >> x;

          switch (x)
          {
          case 1:
               g.insertb();
               cout << "Book Inserted";
               break;

          case 2:
               g.insertc();
               cout << "Chapter is inserted in book";
               break;

          case 3:
               g.inserts();
               cout<<"inserted sections ";
               break;

          default:
               cout << "\n Enter the valid choice..";
               break;
          }
     }

     return 0;
}













