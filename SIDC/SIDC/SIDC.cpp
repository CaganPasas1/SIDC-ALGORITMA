#include <iostream>
#include <math.h>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	double pi = 27;
	string input;
	string dinput;
	getline(cin, input);
	stringstream ss;
	ss << input;
	ss >> dinput;
	double dpi = pi * dinput.length();
	char x = dpi;
	x = (char)x;
	cout << x;








}