#include<bits/stdc++.h>
#define ll long long
#define rep(i,t) for(ll i=0;i<t;i++)
using namespace std;
int func(string str)
{
    vector <ll> count(256,-1); 
    ll ans=INT_MAX;
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]==-1)  
        {
            count[str[i]]=i;
        }
        else  
        {
            count[str[i]]=-2;  //if it is repeating
        }
    }

    for(int i=0;i<count.size();i++)
    {
        if(count[i]!=-1&&count[i]!=-2)
        {
            ans=min(ans,count[i]);
        }
    }

    return (ans==INT_MAX)?-1:ans;

    //Time complexity : Theta(n+char)
    //Space complexity : Theta(char)
}
int main(){
    string str="geeksforgeeks";
    cout<<func(str)<<endl;
    return 0;
}
