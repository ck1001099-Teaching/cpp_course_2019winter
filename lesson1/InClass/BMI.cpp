#include <iostream>
using namespace std;

int main(){
	// �魫(kg): weight, ����(m): height
	double weight, height;
	cout << "�п�J�魫(kg): ";
	cin >> weight;
	cout << "�п�J����(m): ";
	cin >> height; 
	// BMI: �魫/(����*����) 
	cout << "BMI: " << weight/(height*height) << endl;
	
	double BMI = weight/(height*height);
	cout << "BMI: " << BMI << endl;
	return 0;
}
