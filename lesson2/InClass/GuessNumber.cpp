#include <iostream>
#include <cstdlib> // rand(), srand()
#include <time.h> // time()
using namespace std;

int main(){
	srand(time(NULL)); // ��s�H���ƪ��ؤl 
	/* 
	// rand() ��ڤW�|�^�Ǥ���? 
	for (int i = 0 ; i < 100; i++){
		cout << rand() << endl;
	}
	*/
	//int answer = 62;
	int answer = rand() % 100 + 1;
	cout << answer << endl;
	int lowerBound = 1;
	int upperBound = 100;
	while(true){ //�L���j�� 
		cout << "�вq�@�ӼƦr (" << lowerBound << "��" 
			 << upperBound << "): "; 
		int guess;
		cin >> guess;
		if (guess < lowerBound || guess > upperBound){
			cout << "�A�q���d�򦳿�!" << endl;
			continue;
		} else if (guess == answer){
			cout << "�A�n��!" << endl;
			break;
		} else {
			// ��s�d��
			if (guess > answer){
				upperBound = guess - 1;
			} else if (guess < answer){
				lowerBound = guess + 1;
			}
		}
	}
	return 0;
}
