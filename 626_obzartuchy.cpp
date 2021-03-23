#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>

using namespace std;

int main()
{
    int testy,l_ludzi,sek;
    double l_ciastek;
    cin>> testy;
    while(testy--)
    {
        vector<int> wektor_sek;
        cin>> l_ludzi>> l_ciastek;
        while(l_ludzi--)
        {
            cin>> sek;
            wektor_sek.push_back(sek);
        }
        int doba_sek= 86400;
        transform(wektor_sek.begin(), wektor_sek.end(), wektor_sek.begin(), [doba_sek](int& c){return doba_sek/c;});
        double suma= accumulate(wektor_sek.begin(), wektor_sek.end(), 0);
        double wynik= (suma/l_ciastek);
        cout<<ceil(wynik)<<endl;
    }
    return 0;
}
