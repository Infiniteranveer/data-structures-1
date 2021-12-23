# include <iostream>
using namespace std;

void bsearch(int arr[], int n, int value){
	int min, max, mid, found = 0;
	min = 0, max = n;
	
	while(min <= max){
		mid = (min + max) / 2;
		
		if(arr[mid] == value){
			cout << "\n" << value << " found at position : " << mid + 1 << endl;
			found = 1;
			break;
		}
		else if(arr[mid] > value){
			max = mid - 1;
		}
		else
			min = mid + 1;
	}
	if(min > max && found == 0){
		cout << "Not found !!" << endl;
		return ;
	}
}

int main(){
	
	int a[] = {0, 12, 21, 33, 44, 67, 78, 89, 91, 100};
	int size = sizeof(a) / sizeof(a[0]);
	cout << "Array size = " << sizeof(a) << " Total elements = " << size << endl;
	bsearch(a, size, 91);
	return 0;
}
