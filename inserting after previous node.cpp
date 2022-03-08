#include<iostream>
using namespace std;

class Node{
	public:
	//creating linked list structure.
		int value;
		Node*Next;
};
  void printlist(Node*n){
  	while(n!=NULL){
  	cout<<n->value<<endl;
  	n=n->Next;
	  }
  	 }
  
void print_after(Node*previous,int newValue){
	//1. check if previous one is NULL
	if(previous==NULL){
		cout<<"Previous can't be NULL "<<endl;
		return;//we use return because NUll is not any exat parameter
	}
	//2.prepare new node
	Node*newNode=new Node();
	newNode->value=newValue;
    //3.insert new  node after previous
	newNode->Next=previous->Next;
	previous->Next=newNode; 	
	
}

int main(){
	//creating 3 new nodes.
	Node*Head=new Node();
	Node*second=new Node();
	Node*third=new Node();
   //giving values to Head, second and third nodes.
   Head->value=1;
   second->value=2;
   third->value=3;
   //giving pointers to each nodes.
   Head->Next=second;
   second->Next=third;
   third->Next=NULL;
   
   print_after(Head,11);
  //Printing values of each nodes of linked list.
   printlist(Head);
	return 0;
}
