#include <iostream>
#include <map>
#include <string>
// r001: Amy, r002: Bob, b001: Cindy
// d001: Dancy, r003: Elsa, b002: Franck 
int main(){
	map<string, string> m;
	m["r001"] = "Amy";
	m["r002"] = "Bob";
	m["b001"] = "Cindy";
	m["d001"] = "Dancy";
	m["r003"] = "Elsa";
	m["b002"] = "Franck";
	
	cout << "學號是b001的人是 " << m["b001"] << endl;
	cout << "學號是r003的人是 " << m["r003"] << endl;
	
	return 0;
}



