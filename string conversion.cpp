#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string b = "455";
	int x = 0;
	stringstream geek(b);
	geek >> x;
	cout << x;
	return 0;
}
