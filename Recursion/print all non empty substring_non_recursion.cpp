#include <iostream>
using namespace std;


void printsubstr(string s){
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		for(int len=1;len<=n-i;len++)
		{
			cout<<s.substr(i,len)<<endl;
		}
	}
}

int main()
{
	string s="abcd";
	printsubstr(s);
}