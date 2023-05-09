#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> n;
	n.assign({10,40,30,50});
	n.push_front(40);
	n.push_front(5);
	n.pop_front();
	n.remove(40);
	int x=n.size();

}