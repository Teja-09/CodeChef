#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s = '9';
	cout << int(s) - '0' << "\n";
	
	string str = "36";
	cout << stoi(str) << "\n";
	
	str = "zc";
	cout << stoi(str) << "\n"; // this throws err
	
}

