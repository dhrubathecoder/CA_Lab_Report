#include<iostream>
using namespace std;
int facto(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*facto(n-1);
}

int main()
{
    int n,fact=1;
    cin>>n;
    cout<<facto(n)<<endl;
}
