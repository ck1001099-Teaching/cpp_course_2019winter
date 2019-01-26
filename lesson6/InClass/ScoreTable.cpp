#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main(){
	string row[6] = {"A", "B", "C", "D", "E", "F"};
	string col[4] = {"C", "E", "M", "S"};
	int score[6][4] = { {14, 55, 76, 100},
						{84, 83, 27, 37},
						{23, 34, 46, 27},
						{34, 53, 83, 75},
						{74, 76, 24, 44},
						{58, 39, 66, 37}};
	map<string, map<string, int> > scoreTable;
	for (int i = 0 ; i < 6 ;i++ ){
		map<string, int> scoreTmp; //一個人的所有成績 
		for (int j = 0 ; j < 4 ; j++){
			scoreTmp[col[j]] = score[i][j];
		}
		scoreTable[row[i]] = scoreTmp;
	}
	
	cout << scoreTable["A"]["E"] << endl;
	cout << scoreTable["E"]["S"] << endl;
	cout << scoreTable["F"]["C"] << endl;
	cout << (scoreTable["B"]["M"]>scoreTable["D"]["C"]) << endl;
	
	/* 土法煉鋼 
	map<string, map<string, int> > scoreTable;
	map<string, int> AmyScore;
	AmyScore["C"] = 14;
	AmyScore["E"] = 14;
	AmyScore["M"] = 14;
	AmyScore["S"] = 14;
	scoreTable["Amy"] = AmyScore;
	*/
	
	
	
	return 0;
}






