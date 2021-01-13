#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,A[10000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
    }
    cout<<sum;
    
}
