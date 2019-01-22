#include <iostream>
using namespace std;
// double array A  -> A[i] 
void ShowPointer(double*, int);

int main(){
	double arr[10];
	for (int i = 0 ; i < 10; i++){
		arr[i] = 3.14 * i;
	}
	cout << arr[5] << endl;
	ShowPointer(arr, 5); // arr[5]
	cout << arr[8] << endl;
	ShowPointer(arr, 8); // arr[8]
	return 0;
}
void ShowPointer(double* ptr, int i){
	cout << *(ptr + i) << endl;
}




