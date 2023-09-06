#include<iostream>
#include<vector>
#include<set>

using namespace std;

//problem : given two vectors and your task is to need the unoin vector from them.




vector<int> unionVector(vector<int> v1,vector<int> v2)
{
    int m = v1.size();
    int n = v2.size();

    vector<int> merge;
    for(int i=0;i<(m);i++)
    {
        merge.push_back(v1[i]);
    }
    for(int j = 0;j<n;j++)
    {
        merge.push_back(v2[j]);
    }

    set<int> forUnique;

    for(int i=0;i<merge.size();i++)
    {
        forUnique.insert(merge[i]);
    }

    vector<int> result ;
    for(auto ele : forUnique)
    {
        result.push_back(ele);
    }

    

    return result ;

}


int main()
{
    int m;
    cin>>m;

    cout<<endl;
    cout<<endl;
    vector<int> v1(m);

    for(int i = 0;i<m;i++)
    {
        cin>>v1[i];
    }

    cout<<endl;
    int n;
    cin>>n;

    cout<<endl;
    vector<int> v2(n);

    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }

    vector<int> output = unionVector(v1,v2);

    cout<<endl<<"\n";

    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }

return 0;
}
/*Jai Jai Jai Bajarangbali...]
this program coded by jay kishan kharwar
at
time : 2:14
date : 05-07-2023*/