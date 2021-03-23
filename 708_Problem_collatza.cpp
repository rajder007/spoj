#include <iostream>

using namespace std;

int oblicz(int s, int n)
{
    if(s==1)
        return n;
    else
    {
        if(s%2==1)
            return oblicz(3*s+1, ++n);
        else
            return oblicz(s/2, ++n);
    }
}

int main()
{
    int t,s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<oblicz(s,0)<<endl;
    }
    return 0;
}
