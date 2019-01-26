#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
	map<int, string> map1; //(int, string) 
	map<double, bool> map2;
	map<string, int> map3;
	map<bool, int> map4;
	map<string, vector<int> > map5; 
	
	map1[2] = "two";
	map1[10] = "ten";
	map1[12] = "twelve";
	cout << map1.size() << endl;
	cout << map1[2] << endl;
	
	map3["Hello"] = 100;
	map3["World"] = 1000;
	cout << map3["Hello"] + map3["World"] << endl;
	map3.clear();
	return 0;
}




