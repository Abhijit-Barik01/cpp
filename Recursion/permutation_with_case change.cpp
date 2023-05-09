#include<bits/stdc++.h>
using namespace std;
void permute(string s,string output)
{
	if(s.size()==0)
	{
		cout<<output<<endl;
		return;
	}
	string op1=output;
	string op2=output;
	op1+='_';
	op1.push_back(s[0]);
	op2.push_back(s[0]);
	s.erase(s.begin()+0);
	permute(s,op1);
	permute(s,op2);

}


int main(){
	string s="abc";
	string output="a";
	s.erase(s.begin()+0);
	permute(s,output);
	return 0;
}