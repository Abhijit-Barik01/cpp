#include<bits/stdc++.h>
using namespace std;
bool palindrome(string str,int start,int end){
	if(start>=end)
		return true;
	return((str[start]==str[end])&&(palindrome(str,start+1,end-1)));
}
int main(){

	string str="GeekkeeG";
	int start=0;
	int end=str.length();
	printf("%s",palindrome(str,start,end-1)? "true":"false");


	return 0;

}