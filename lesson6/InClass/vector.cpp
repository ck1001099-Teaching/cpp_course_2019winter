#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	vector<int*> v2;
	vector<double> v3;
	vector< vector<int> > v4;
	
	cout << v.size() << endl;
	v.push_back(2333);
	v.push_back(1010101);
	cout << v.size() << " " << v.empty() << endl;
	cout << "第0個元素" << v[0] << endl;
	cout << "第1個元素" << v[1] << endl;
	v.clear();
	cout << v.size() << " " << v.empty() << endl;
	return 0;
}







