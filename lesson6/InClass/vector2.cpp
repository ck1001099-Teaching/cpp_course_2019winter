#include <iostream>
#include <vector>
using namespace std;

int main(){
	double tmp;
	vector<double> v;
	while (cin >> tmp){
		if (tmp == 0){
			double sum, mean, std;
			for (int i = 0; i < v.size(); i++){
				sum = sum + v[i];
			}
			mean = sum / v.size();
			cout << sum << endl;
			cout << mean << endl;
			//cout << std << endl;
			break;
		} else {
			v.push_back(tmp);
		}
	}
	return 0;
}





