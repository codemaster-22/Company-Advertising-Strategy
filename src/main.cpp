#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int ftrue(vector<int>& V,int i);
long int ffalse(vector<int>& V,int i)
{
    if(i>=V.size())
        return 0;
    int j=((i+1)*2)-1;
    int k=((i+1)*2);
    long int a1=ffalse(V,j)+ffalse(V,k);
    long int a2=ffalse(V,j)+ftrue(V,k);
    long int a3=ftrue(V,j)+ffalse(V,k);
    long int a4=ftrue(V,j)+ftrue(V,k);
    a1=(a1>a2)?a1:a2;
    a3=(a3>a4)?a3:a4;
    return (a1>a3)?a1:a3;
}
long int ftrue(vector<int>& V,int i)
{   
    if(i>=V.size())
        return 0;
    int j=((i+1)*2)-1;
    int k=((i+1)*2);
    return (V[i]+ffalse(V,j)+ffalse(V,k));
}
int main() {
    int n;
    cin>>n;
    vector<int> V;
    int a;
    while(n--)
    {
        cin>>a;
        V.push_back(a);
    }
    long int i=ftrue(V,0);
    long int j=ffalse(V,0);
    i=(i>j)?i:j;
    if(i>0)
        cout<<i<<endl;
    else
        cout<<-1;
    return 0;
}
