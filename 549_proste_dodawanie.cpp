#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m,i;
    cin>>n;
    while(n--)
    {
        vector<int> wektor;
        cin>>m;
        while(m--)
        {
            cin>>i;
            wektor.push_back(i);
        }
        int sum = 0;
        for (auto& value : wektor)
        {
            sum += value;
        }
        cout<<sum<<endl;
    }
    return 0;
}
