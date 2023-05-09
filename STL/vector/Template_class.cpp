#include<iostream>
using namespace std;
template<typename T>struct pair
{
	T x,y;
	pair(T i, T j)
	{
		x=i;
		y=j;
		

	}
	T getfirst(){return x;}
	T getsecond(){return y;}
	
};

int main(){
	pair<int>p1(10,20),p2(30,40);
	cout<<p1.getfirst()<<" "<<p1.getsecond();
	return 0;

}