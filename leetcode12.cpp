#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		if(num==0) return nullptr;
		if (num>=1000) {
			return "M"+intToRoman(num-1000);
		}
		
		if(num>=500) {
			if(num<900)
				return "D"+intToRoman(num-500);
			else {
				return "MC"+intToRoman(num-900);
			}
		}
		if (num>=100) {
			if(num<400)
				return "C"+intToRoman(num-100);
			else {
				return "CD"+intToRoman(num-400);
			}
		}
		if (num>=50) {
			if (num<90) {
				return "L"+intToRoman(num-50);
			}
			else {
				return "XC"+intToRoman(num-90);
			}
		}
		if (num>=10) {
			if (num<40) {
				return "X"+intToRoman(num-10);
			}
			else {
				return "XL"+intToRoman(num-40);
			}
		}
		if (num>=5) {
			if(num<9)
				return "V"+intToRoman(num-5);
			else {
				return "IX"+intToRoman(num-9);
			}
		}
		else {
			if (num<4) {
				return "I"+intToRoman(num-1);
			}
			else {
				return "IV"+intToRoman(num-4);
			}
		}
	}
};



int main(int argc, char *argv[]) {
	string a="1234";
	string b="5678";
	string c=a+b;
	cout<<c<<endl;
	return 0;
}