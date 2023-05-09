#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<double>l;
	l.push_front(10.0);
	l.push_front(20.1);
	l.push_back(130.0);
	l.push_back(40.5);



l.sort();
for(auto it=l.begin();it!=l.end();it++)
{
	cout<<*it<<endl;
}

auto it=l.insert(l.begin(),{50,80});
cout<<endl;
it=l.erase(it);


for(auto it=l.begin();it!=l.end();it++)
{
	cout<<*it<<endl;
}


}