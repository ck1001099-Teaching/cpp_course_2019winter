#include <iostream>
using namespace std;
// 块ㄢ计―程そ计程そ计 
int main(){
	int a, b;
	cin >> a >> b;
	int c = a<b ? a : b; // c = min(a,b)
	// 癹伴禲cΩ
	int num = 1;
	for (int i = 0; i < c ; i++){ // i: 0 ~ c-1
		// 耞计
		if ( a%(i+1)==0 && b%(i+1)==0 ){
			num = i+1;
		}
	}
	cout << "程そ计: " << num << endl;
	
	int d = a>b ? a : b; // d = max(a,b)
	for (int i = d ;  ; i++){
		if ( i%a==0 && i%b==0){
			cout << "程そ计: " << i << endl;
			break;
		}
	}
	return 0;
}






