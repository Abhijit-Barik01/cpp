#include <iostream>
#include <vector>
using namespace std;
void vinsert(vector<int>&v,int t){
    if(v.size()==0 || v[v.size()-1]<=t){ //base case

        v.push_back(t);
        return;
    }
    int p=v.back();
    v.pop_back(); //hypothesis
    vinsert(v,t);
    v.push_back(p);
}
void vsort(vector<int>&v)
{
    if(v.size() ==1)
        return;
    int t=v.back();
    v.pop_back();
    vsort(v);
    vinsert(v,t);
}
int main(){
    vector<int>v={3,1,2,5};
    // int c=v.back();
    // cout<<c;
    vsort(v);
    for(auto i:v)
        cout<<i<<" ";
}