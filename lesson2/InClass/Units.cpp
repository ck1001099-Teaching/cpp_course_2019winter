#include <iostream>
using namespace std;

int main(){
	cout << "�п�J�n�ϥΪ��Ҧ�:" << endl;
	cout << "1) ���� -> �^�`" << endl;
	cout << "2) ���� -> �^��" << endl;
	char mode;
	cin >> mode;
	switch (mode){
		case '1':
			double length;
			cout << "�п�J ?? ����" << endl;
			cin >> length;
			cout << length << "���� = " << length * 3.28 << "�^�`" << endl; 
			break;
		case '2':
			double weight;
			cout << "�п�J ?? ����" << endl;
			cin >> weight;
			cout << weight << "���� = " << weight * 2.2 << "�^��" << endl;
			break;
		default:
			cout << "�п�J���T���Ҧ�!" << endl;
			break; 
	}
	
	return 0;
}






