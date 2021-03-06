#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    double r, d, P;
    cin >>r >>d;
    P=(pow(r,2)-pow(d,2)/4.0)*M_PI;
    printf("%.2f",P);

    return 0;
}
