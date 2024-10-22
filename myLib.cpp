#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string leStr() {
	string tmp;
	do {
		getline(cin,tmp);
	}while( tmp[0] == '\0');
	
	return tmp;
}
float leFt() {
	float money;
		cin >> money;
		cout << fixed << setprecision(3);	
	return money;
}
