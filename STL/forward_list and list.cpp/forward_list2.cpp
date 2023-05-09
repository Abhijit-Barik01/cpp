#include<iostream>
#include<forward_list>
using namespace std;
int main(){
	forward_list<int> n;
	n.assign({10,40,30,50});
	n.push_front(40);
	n.push_front(5);
	n.pop_front();
	n.remove(40);
	for(auto x:n)
		cout<<x<<" ";
forward_list<int>l;
l.assign(n.begin(),n.end());
cout<<"\n";

for (auto it=l.begin();it!=l.end();it++)
{
	cout<<(*it)<<" ";
}

cout<<"\n";
auto it=l.insert_after(l.begin(),5);
it=l.insert_after(it,{1,111,1,1});
it=l.insert_after(it,3);
it=l.erase_after(it);
for(auto x:l)
		cout<<x<<" ";

	}