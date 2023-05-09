#include <iostream>
#include <stack>
using namespace std;
void vinsert(stack<int>&v,int t){
    if(v.size()==0 || v.top()<=t){ //base case

        v.push(t);
        return;
    }
    int p=v.top();
    v.pop(); //hypothesis
    vinsert(v,t);
    v.push(p);
}
void vsort(stack<int>&v)
{
    if(v.size() ==1)
        return;
    int t=v.top();
    v.pop();
    vsort(v);
    vinsert(v,t);
}
int main(){
    stack<int>v;
    v.push(3);
    v.push(4);
    v.push(0);
    vsort(v);
    while(!v.empty())
    {
        cout<<v.top()<<" ";
        v.pop();
    }

}