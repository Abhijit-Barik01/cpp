#include<iostream>
#include<vector>
#include<map>
using namespace std;

 void findsubset(vector<int>nums,vector<int> &ans, vector<vector<int>>&output,int i, map<vector<int>,int>&m)
    {
        
        if(i==nums.size())
        {      
            if(m.find(ans)==m.end()){//this extra added for uniqueness
                 m[ans]++;
                    output.push_back(ans);
            }
                   
            return ;
        }
        ans.push_back(nums[i]);
        //pick it
        findsubset(nums,ans,output,i+1,m);
        ans.pop_back();
        //not pick
        findsubset(nums,ans,output,i+1,m);

    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>output;
        vector <int>ans;
        map<vector<int>,int>m;
        findsubset(nums,ans,output,0,m);
        return output;
        
    }


int main(){

	vector<int>nums={2,1,2};
	vector<vector<int>>output=subsets(nums);
	for( const auto &i : output )      // for elements in A, i is vector<int>
{	cout<<"(" ;
    for( const auto &j : i )  // for sub elements in A, j is int
    {
        std::cout<<j<<",";
    }
    cout<<")" <<endl ;
}

}