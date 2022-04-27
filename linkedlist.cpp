# include <iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};

class create_ll
{
	private:
		Node *start;
		
	public:
		create_ll();
		~create_ll();
		void display();
		void InsertAtStart(int value);
		void InsertAtEnd(int value);	
		void DeleteAtstart();
		void DeleteAtEnd();
};

create_ll::create_ll(){
	start = NULL;
}  

create_ll::~create_ll(){
	cout << "\nObject destroyed !!" << endl;
}

void create_ll::InsertAtStart(int value){
	Node *temp = new Node();
	temp->data = value;
	temp->next = NULL;
	
	if(start == NULL){
		start = temp;
	}
	
	else{
		temp->next = start;
		start = temp;
	}
}

void create_ll::InsertAtEnd(int value){
	Node *temp = new Node();
	temp->data = value;
	temp->next = NULL;
	
	if(start == NULL){
		start = temp;
	}
	
	else{
		Node *current = start;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = temp;
	}
}

void create_ll::DeleteAtstart(){
	if(start == NULL){
		cout << "Cannot perform deletion on a empty list" << endl;
	}
	Node *current = start;
	start = start->next;
	delete current;
}

void create_ll::DeleteAtEnd(){
	if(start == NULL){
		cout << "Cannot perform deletion on a empty list" << endl;
		exit(1);
	}
	else{
		Node *prev, *current = start;
		while(current->next != NULL){
			prev = current;
			current = current->next;
		}
		prev->next = NULL;
		delete current;
	}
	
}
void create_ll::display(){
	Node *current = start;
	while(current){
		cout << current->data << "->";
		current = current->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	create_ll list;
//	list.InsertAtStart(0);
	int c;
	while(1){
		cout<<"\n\t 1. InsertAtStart 2. InsertAtEnd 3. DeleteAtFirst 4. DeleteAtEnd 5. Display ";
		cin>>c;
		if(c==1){
			int e;
			cout<<"\n\t Enter element : ";
			cin>>e;
			list.InsertAtFirst(e);
		}
		else if(c==2){
			int e;
			cout<<"\n\t Enter element : ";
			cin>>e;
			list.InsertAtEnd(e);
		}
		else if(c==3)
			list.DeleteAtstart();	
		else if(c==4)
			ist.DeleteAtEnd();
		else if(c==5)
			ist.display();
		else
			return 0;
		
		
			
	}
	/*list.InsertAtEnd(12);
	list.InsertAtEnd(80);
	list.InsertAtEnd(32);
//	list.InsertAtStart(101);
	list.display();
	list.DeleteAtEnd();
	list.DeleteAtEnd();
	list.DeleteAtEnd();
	//list.DeleteAtstart();
	//list.DeleteAtstart();
	//list.DeleteAtstart();
//	list.DeleteAtstart(); deletion wil not be performed as the list will be empty at this point
	list.display();*/
	return 0;
}
