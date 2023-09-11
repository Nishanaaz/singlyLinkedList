#include <stdio.h>
#include <stdlib.h>


// Insering a node at beginning.



//Defining Node:
 /*struct Node {
    int data;   //datatype is int ,it can be anything.
    struct Node* next;    // Pointer to node.

};


struct Node* head;   // global variable, can be accessed anywhere , head Node

void Insert(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next =head;
    head = temp;
}



void Print(){
    struct Node* temp=head;
    printf("List is: ");
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;

    }printf("\n");
}




int main()
{
    head=NULL;   // Empty list
    int n,i,x;
    printf("How many numbers?\n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter the number\n ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;}*/


/*struct Node{
    char data;
    struct Node *Next.;
    }ss;


    int main(){
        printf("%d",sizeof(ss)); // It will print multiple of 8*/






// Implementation of linked list. Insert and display the elements from the beginning without using function.

 /*void main(){
   struct node{
    int data;
    struct node *next;
   };
   struct node* head,*newnode,*temp;

   //printf(sizeof(struct node));
   head=0;
   int choice=1;
   while (choice){
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter your data here: ");
   scanf("%d",&newnode->data);
   newnode->next=0;


   if (head==0){
        head=temp=newnode;}
   else
        {temp->next=newnode;
         temp=newnode;
        }


    printf("Do you want to continue(0,1)?");
    scanf("%d",&choice);}
    temp=head;
    while (temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;}*/









    //Practice:

    /*struct node{
        int data;
        struct node* link;
        };


    struct node* head;


    void insert(int x){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->link=head;
        head=temp;
        }



    void print(){
        struct node *temp = head;
        printf("List is: ");
         while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->link;
         }
        printf("\n");
    }


    int main(){
    head=NULL;
    int n,x,i;
    //n=5;
    //int arr[5]={1,2,3,4};
    printf("Enter how many numbr do you want: ");
   scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the numberCz here:  ");
        scanf("%d",&x);
        insert(x);
        print();
    }

    return 0;
    }
*/


//Practice insert an element from the last.
/*struct node{
    int data;
    struct node *link;

};
struct node *head,*newnode,*temp;


void insert(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->link=0;

    if (head==0){
        head=temp=newnode;}

    else{
       temp->link=newnode;
       temp=newnode;

    }
}

void print(){
    while (temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;

}}
int main(){
    head=NULL;
    int n,i,data;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&data);
        insert(data);
        print();
    }


return 0;}
*/







//practice
/*
struct node{
    int data;
    struct node* link;
};

struct node* head,*newnode;

void insert(int d){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->link=head;
    head=newnode;
}

void print(){
    struct node* temp=head;
    while (temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;

    }printf("\n");
}

int main(){
    head=NULL;
    int i,n,d;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&d);
        insert(d);




    }print();
    return 0;
}
*/




/*

//Practice of insert from the beginning.

struct node
{
   int data;
   struct node *link;
};
struct node *head;
void insert ()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter the elem");
   scanf("%d",&temp->data);
   temp->link=NULL;
   if (head==NULL)
   {
     head=temp;
   }
   else
   {
     temp->link=head;
     head=temp;
   }
}
print()
{
  struct node*  temp;
  temp=head;
  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->link;
  }
}
int main()
{
    head=NULL;
    int i ,n,count=0;
    printf("enter the len");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      insert();
      count++;
    }
    print();
    printf("\n");
    printf("Number of elements in an array: %d",count);
}*/



















//Creating a struct node and making fuction of inserting the data from the beginning and at the end and the desired position

/*


//Constructing a node;
struct node{
    int data;
    struct node *next;
};

struct node *temp,*head,*newnode;

int count=0;

// Constructing a list from the beginning
void insertFunc(){
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    if (head==NULL){
        temp=head=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
        newnode->next=NULL;
    }

}





//Function to insert at the begining.

void insertbegining(){
//    struct node{
//        int data;
//        struct node* next;
//    };

    struct node* newnode1;

    newnode1=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number you want to insert at the beginning: ");
    scanf("%d",&newnode1->data);
    newnode1->next=head;
    head=newnode1;

    }






//Insert at the end:
void insertatEnd(){
    struct node* newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number you want to insert at the end: ");
    scanf("%d",&newnode->data);
    temp=head;
    //newnode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=newnode;
    //temp->data=newnode->data;   as we have already assign at the newnode in scanf;

}




//Insert at the nth position:
void insertatNpos(){
   int pos,i=0;

   printf("Enter the position here: ");
   scanf("%d",&pos);


   if (pos>count){
    printf("Invalid position.");
   }

   else{

       struct node* newnode,*temp;
       temp=head;
       newnode=(struct node*)malloc(sizeof(struct node));

       while (i<pos-2){
          temp=temp->next;
          i++;


       }
         newnode->next=temp->next;        // Why after changing the position it starts working.
         printf("Enter the number you want to insert at the nth position: ");
         scanf("%d",&newnode->data);
         temp->next=newnode;


}
}


// Deleting an element from the beginning:
 void DeleteFromBeg(){
    struct node* temp=head;
    head=temp->next;
    free (temp);
 }




 //Delete an element at the end:
 void DeleteatEnd()
 {
    struct node* temp,*prevnode;
    temp=head;
    while (temp->next!=NULL)
    {
        prevnode=temp;
        temp=temp->next;
    }
     prevnode->next=NULL;
     free (temp);
 }




 //Delete from the specified position:

 void DeleteFromPos()
 {
    struct node* temp, *nextnode;
    temp=head;
    int pos,i=0;
    printf("Enter the position where do you want to delete: ");
    scanf("%d",&pos);

    if (pos>count)
    {
        printf("Invalid Position: ");
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode=temp->next;
       temp->next= newnode->next;
       free(newnode);
    }
 }





 // Reverse an element function:

 void ReverseArray()
 {
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=NULL;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }head=prevnode
    ;

 }


// PrintFunc is for display the results.
void printFunc(){
    struct node* temp;
    temp=head;
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head=NULL;
    int i,n;
    printf("Enter length here:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        insertFunc();
        count++;
        //printFunc();

    }insertbegining();
     count++;

     insertatEnd();
     count++;

     printf("%d \n",count);
     insertatNpos();
     printf("Array after inserting elements: ");
     printFunc();


     printf("After deleting an element from the beginning of the array:  ");
     DeleteFromBeg();
     printFunc();


     printf("After deleting an element from at the end of the array:  ");
     DeleteatEnd();
     printFunc();


     printf("After deleting an element from the specified position of the array:\n  ");
     DeleteFromPos();
     printFunc();

     printf("Array after reversing the element: ");
     ReverseArray();
     printFunc();
}

*/



// when the head is not a global variable;
//we need to take it as an struct node pointer.
/*struct node
{
    int data;
    struct node *next;
};






void Display(struct node* head)
{
    while (head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}




struct node* InsertFunc(struct node* head , int x) // return type should be should be struct node*;
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if (head!=NULL)
    {
        temp->next=head;
        head=temp;
        return head;
    }else
        {
            head=temp;
        }return head;
}



int main()
{   //int J;
    struct node *head=NULL;
    printf("How many number?\n");
    int n,i,x;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the element here:");
        scanf("%d",&x);
        head=InsertFunc(head,i);

    }Display(head);
}*/

int main(){
    int n=24;
    int l=0,r=100,ans=n;
    while(l<=r){
        int mid=(l+r)/2;
        if(mid*mid<=n){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }printf("%d",ans);
}

