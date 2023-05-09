#include <iostream>
#include <stack>
using namespace std;
class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void del(stack<int>&s,int k)
    {
          if(k==1)
        {
            s.pop();
            return;
        }
        
        
        int temp=s.top();
        s.pop();
        del(s,k-1);
        s.push(temp);
        
    }
    
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        
      int k;
      k=(sizeOfStack/2)+1;
     

     del(s,k);
     
        
    }
};
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int size=s.size();
    Solution ob;
    ob.deleteMid(s,size);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}