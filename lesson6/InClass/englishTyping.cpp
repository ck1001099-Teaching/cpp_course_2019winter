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
	cout << "�D��: " << question << endl;
	cout << "����: ";
	int correctNum = 0; // �O�����T�r�� 
	int wrongNum = 0;   // �O�����~�r�� 
	int questionIndex = 0; // question�n�񪺦r��
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
			// ���r�����
			if (question[questionIndex] == answer[answerIndex]){
				// ��U�@�Ӧr 
				questionIndex = questionIndex + 1;
				answerIndex = answerIndex + 1; 
			} else { // ��J���r�O����!!!!!
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
	cout << "���T�r��: " << correctNum << " "
	     << "���~�r��: " << wrongNum << " "
		 << "���T�v: " << (double)correctNum/(double)(correctNum+wrongNum) << endl;
}











