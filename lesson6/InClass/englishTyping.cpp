#include <iostream>
#include <string>
#include <cstdlib> // rand(), srand()
#include <time.h> // time()
using namespace std;

void englishTyping(string);

int main(){
	srand(time(NULL));
	
	string words[] = {"a", 
	"However", "the", "international",
	"community", "is", "divided"};
	
	string sentence;
	for (int i = 0 ; i < 5; i++){
		int index = rand()%7; // 0~6
		sentence = sentence + words[index] + " ";
	}
	while (true){
		englishTyping(sentence);
	}
	//cout << sentence << endl;
	
	return 0;
}

void englishTyping(string question){
	cout << "題目: " << question << endl;
	cout << "答案: ";
	int correctNum = 0; // 記錄正確字數 
	int wrongNum = 0;   // 記錄錯誤字數 
	int questionIndex = 0; // question要比的字元
	for (int i = 0 ; i < 5 ; i++){
		string answer;
		cin >> answer;
		int answerIndex = 0;
		while (true){
			if (question[questionIndex] == ' ' &&
			    answerIndex >= answer.length()){
			    correctNum = correctNum + 1;
			    break;
			} else if (question[questionIndex] == ' ' ||
					   answerIndex >= answer.length()){
			    wrongNum = wrongNum + 1;
			    break;
			}
			// 兩兩字元比較
			if (question[questionIndex] == answer[answerIndex]){
				// 比下一個字 
				questionIndex = questionIndex + 1;
				answerIndex = answerIndex + 1; 
			} else { // 輸入的字是錯的!!!!!
				wrongNum = wrongNum + 1;
				break;
			}
		}
		while (question[questionIndex] != ' '){
			questionIndex = questionIndex + 1;
		}
		questionIndex = questionIndex + 1;
		//question == "the However ...."
		//answer == "the" 
		//cout << answer << endl;
	}
	cout << "正確字數: " << correctNum << " "
	     << "錯誤字數: " << wrongNum << " "
		 << "正確率: " << (double)correctNum/(double)(correctNum+wrongNum) << endl;
}











