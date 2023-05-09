#include<iostream>
#include<forward_list>
using namespace std;
int main(){
	forward_list<int>l={10,20,30};
	forward_list<int>l2;
	l.push_front(40);
	l.push_front(60);
	l.push_front(80);
	l.push_front(10);
	l.push_front(10);
	l.push_front(10);
	l.pop_front();
	l.remove(10);
	l2.assign(l.begin(),l.end());
	for(const auto &x:l2)
		cout<<x<<endl;
	//l.assign(5,10);
	


cout<<endl;
auto it=l.begin();
auto it1=l.insert_after(it,0);

cout<<endl;
for(auto x:l)
		cout<<x<<" ";


 it=l.emplace_after(it1,12);
cout<<endl;
for(auto x:l)
		cout<<x<<" ";


 it=l.erase_after(it);
cout<<endl;
for(auto x:l)
		cout<<x<<" ";



l.merge(l2);
cout<<endl;
for(auto x:l)
		cout<<x<<" ";



}