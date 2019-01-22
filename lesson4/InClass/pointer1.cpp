#include <iostream>
using namespace std;
// Add(int*, int) A = A + ???
// Minus(int*, int) A = A - ???
void Add(int*, int);
void Minus(int*, int);

int main(){
	int A = 10;
	cout << A << endl;
	Add(&A, 10);
	cout << A << endl;
	Minus(&A, 9);
	cout << A << endl;
	return 0;
}

void Add(int* ptr, int num){
	*ptr = *ptr + num;
}

void Minus(int* ptr, int num){
	*ptr = *ptr - num;
}