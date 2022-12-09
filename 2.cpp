#include "iostream"
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int m,n,a[1000];
    cin>>n>>m;
    for(int i=0;i<n*m;i++)
    {
        cin>>a[i];
    }
    sort((a), a + m*n);
    cout<<"Median is "<<a[(m*n +1)/2];
}