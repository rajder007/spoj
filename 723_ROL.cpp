#include <iostream>
#include <valarray>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        valarray<int> tab;
        cin >> n;
        valarray<int> array(n);
        for (int i = 0; i < n; i++)
            cin >> array[i];
        for (int i = 1; i < n; i++)
             cout << array[i] << " ";
        cout << array[0] << "\n";
    }
    return 0;
}
