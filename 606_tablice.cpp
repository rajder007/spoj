#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        vector<int> wektor;
        cin>>t;
        while(t--)
        {
            int i;
            cin>>i;
            wektor.push_back(i);
        }
        reverse(wektor.begin(),wektor.end());
        for(auto& value: wektor)
            cout<<value<<" ";
    }
    return 0;
}
