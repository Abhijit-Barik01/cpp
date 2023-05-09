#include<iostream>
#include<vector>
using namespace std;
int main(){                                                                                                                                                                                                
vector<int>v{10,290,300};
auto it=v.insert(v.begin(),100);
v.insert(v.begin()+2,500);
v.insert(v.begin(),2,400);
for(auto x:v)
	cout<<x<< " ";
v.pop_back();
cout<<"after popback"<<endl;
for(auto x:v)
	cout<<x<<endl;
cout<<"Applying fronback"<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;
v.front()=1034;
cout<<"applying v.front()"<<endl;
for(auto x:v)
	cout<<x<<endl;
vector<int> v3;
v3.insert(v3.begin(),v.begin(),v.begin()+2);
cout<<"v3"<<endl;
for(auto y:v3)
	cout<<y<<endl;
return 0;
}