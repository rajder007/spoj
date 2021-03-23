#include <iostream>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        while(a!=b)
        {
            if(a<b)
                b=b-a;
            else
                a=a-b;
        }
        cout<<a+b<<endl;
    }
    return 0;
}
