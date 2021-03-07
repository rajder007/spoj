#include <iostream>
#include <algorithm>

using namespace std;

bool czy_palindrom(string a)
{
    for(int i = 0; i < a.length() / 2 + 1; i++)
        if(a.at(i) != a.at(a.length() - 1 - i)) return false;
    return true;
}

int main()
{
    int n, ile= 0;
    int liczba;
    cin>> n;
    while(n--)
    {
        cin>> liczba;
        while(czy_palindrom(to_string(liczba)) == 0)
        {
            ile++;
            string tmp=to_string(liczba);
            reverse(tmp.begin(),tmp.end());
            liczba += stoi(tmp);
        }
        cout << liczba << " " << ile << endl;
        ile = 0;
    }
    return 0;
}
