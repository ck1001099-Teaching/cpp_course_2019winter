#include <iostream>
using namespace std;

int main(){
	cout << "請輸入要使用的模式:" << endl;
	cout << "1) 公尺 -> 英呎" << endl;
	cout << "2) 公斤 -> 英鎊" << endl;
	char mode;
	cin >> mode;
	switch (mode){
		case '1':
			double length;
			cout << "請輸入 ?? 公尺" << endl;
			cin >> length;
			cout << length << "公尺 = " << length * 3.28 << "英呎" << endl; 
			break;
		case '2':
			double weight;
			cout << "請輸入 ?? 公斤" << endl;
			cin >> weight;
			cout << weight << "公斤 = " << weight * 2.2 << "英鎊" << endl;
			break;
		default:
			cout << "請輸入正確的模式!" << endl;
			break; 
	}
	
	return 0;
}






