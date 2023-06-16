#include<bits/stdc++.h>
using namespace std;
void binary(int num){
for(int i=8;i>=0;i--)
{
    cout<<((num>>i)&1);
}
}
int main()
{
    int num;
    cin>>num;
    binary(num);
}