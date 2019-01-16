#include <iostream>
#include <cstdlib> // rand(), srand()
#include <time.h> // time()
using namespace std;

int main(){
	srand(time(NULL)); // 更新隨機數的種子 
	/* 
	// rand() 實際上會回傳什麼? 
	for (int i = 0 ; i < 100; i++){
		cout << rand() << endl;
	}
	*/
	//int answer = 62;
	int answer = rand() % 100 + 1;
	cout << answer << endl;
	int lowerBound = 1;
	int upperBound = 100;
	while(true){ //無限迴圈 
		cout << "請猜一個數字 (" << lowerBound << "到" 
			 << upperBound << "): "; 
		int guess;
		cin >> guess;
		if (guess < lowerBound || guess > upperBound){
			cout << "你猜的範圍有錯!" << endl;
			continue;
		} else if (guess == answer){
			cout << "你好棒!" << endl;
			break;
		} else {
			// 更新範圍
			if (guess > answer){
				upperBound = guess - 1;
			} else if (guess < answer){
				lowerBound = guess + 1;
			}
		}
	}
	return 0;
}
