# include <iostream>
using namespace std;

class Lsearch
{
	private:
		int arr[5];
		int element;
	public:
		void LinearSearch();
		void getInput();
		void display();
};

void Lsearch::LinearSearch()
{
	int i = 0;
	while(arr[i]!=element)
	{
		i += 1;
		if(arr[i] == element)
			break;	
	}	
	cout << "Element found at position " << i << endl;
}

void Lsearch::getInput()
{
	cout << "\nEnter five elements in the array ..." << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Enter the " << i+1 << " element : ";
		cin >> arr[i];
	}
	cout << "Enter the element to be searched : ";
	cin >> element;
}

void Lsearch::display()
{
	for(int j = 0; j < 5; j++)
	{
		cout << " " << arr[j] << " ";
	}
}

int main()
{
	Lsearch s;
	s.getInput();
	s.LinearSearch();
	s.display();
	return 0;
}
