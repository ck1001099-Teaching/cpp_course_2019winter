#include <iostream>
#include <string> //字串的資料型態 
using namespace std;

int main(){
	string name;
	int age;
	//cin: 傳進來的資料要存到哪個"變數" 
	cin >> name >> age;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	return 0;
}
