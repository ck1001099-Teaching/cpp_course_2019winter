#include <iostream>
using namespace std;
// ��J��ӼƦr�A�D�̤j���]�ơB�̤p������ 
int main(){
	int a, b;
	cin >> a >> b;
	int c = a<b ? a : b; // c = min(a,b)
	// �j��]�Fc��
	int num = 1;
	for (int i = 0; i < c ; i++){ // i: 0 ~ c-1
		// �P�_�]��
		if ( a%(i+1)==0 && b%(i+1)==0 ){
			num = i+1;
		}
	}
	cout << "�̤j���]��: " << num << endl;
	
	int d = a>b ? a : b; // d = max(a,b)
	for (int i = d ;  ; i++){
		if ( i%a==0 && i%b==0){
			cout << "�̤p������: " << i << endl;
			break;
		}
	}
	return 0;
}






