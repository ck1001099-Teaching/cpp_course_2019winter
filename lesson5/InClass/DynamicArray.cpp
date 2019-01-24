#include <iostream>
using namespace std;

int main(){
	int n;
	int* ptr;
	cin >> n;
	ptr = new int[n];
	for (int i = 0 ; i < n ; i++){
		cin >> ptr[i];
	}

	for (int i = 0 ; i < n ; i++){
		cout << i << " " << ptr[i] << endl;
	}

	delete[] ptr;
	
	return 0;
}