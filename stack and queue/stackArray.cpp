#include <bits/stdc++.h>
#define maxsize 100
using namespace std;

class Stack{
  public :

   int arr[maxsize];
   int top;

   Stack(){
    top=-1 ;        
   }

   void  push(int data){
     
     if(top==maxsize)
     {  cout<<"stack full";
        return;
     }

    arr[++top]=data;

   }

   int pop(){

       if(top==-1){
            cout<<"stack empty";
           return -1;
       } 

        return arr[top--];
   }
   
};

int main (){

   Stack* st=new Stack()  ;
    
   st->push(4);

   cout<<st->pop();

}
