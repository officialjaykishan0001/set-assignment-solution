#include<iostream>
#include<vector>
#include<unordered_set>
#include<map>

using namespace std;
//problem : given two vectors v1 and v2. find the unique element where they intersect
//each other.
vector<int> intersectionUniqueEle(vector<int> v1,vector<int> v2)
{

    unordered_set<int> s;

    for(auto ele : v1)
    {
        s.insert(ele);
    }
vector<int> ans;
    for(auto ele : v2)
    {
        if(s.count(ele)>0)
        {
            ans.push_back(ele);
        }
    }
   return ans;
}
int main()
{

    int m ;
    cin>>m;
    cout<<endl;

    vector<int> v2(m);

    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }

    cout<<endl;
    int n;
    cin>>n;

    cout<<endl;

    vector<int> v1(n);

    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }

    cout<<endl;

    vector<int> output = intersectionUniqueEle(v1,v2);

    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }


    return 0;    
}