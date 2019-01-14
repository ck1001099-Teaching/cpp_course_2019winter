#include <iostream>
using namespace std;

int main(){
	// 體重(kg): weight, 身高(m): height
	double weight, height;
	cout << "請輸入體重(kg): ";
	cin >> weight;
	cout << "請輸入身高(m): ";
	cin >> height; 
	// BMI: 體重/(身高*身高) 
	cout << "BMI: " << weight/(height*height) << endl;
	
	double BMI = weight/(height*height);
	cout << "BMI: " << BMI << endl;
	return 0;
}
