#include<iostream>
using namespace std;
bool palindrome(string &s,int i)
{
	if(i>=s.size()/2)
		return true;
	if (s[i]!=s[s.size()-1-i])
		return false;
	palindrome(s,i+1);

}

int main()
{
	string s="madam";
	int n= s.length();
	cout<<palindrome(s,0);
}