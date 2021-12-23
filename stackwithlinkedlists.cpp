# include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
}*top;

class stack
{
    public:
        // node *top;
        void push(int value);
        void pop();
        void display();
};

void stack::push(int value)
{
    node *temp = new node();
    temp->data = value;

    if(top == NULL)
    {
        temp->next = NULL;
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void stack::pop()
{
    node *current = top;

    if(current == NULL)
    {
        cout << "Stack UnderFlow!!" << endl;
        return ;
    }
    else
    {
        top = top->next;
        delete current;
    }
}

void stack::display()
{
    node *current = top;
    if(top == NULL)
    {
        cout << "Stack UnderFlow!!" << endl;
    }
    else
    {
        while(current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    stack st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.display();

    st.pop();
    st.display();

    return 0;
}
