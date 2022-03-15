/*
##################################################
#                                                #
#               Coder: ssabeva                   #
#                                                #
#      Github: https://github.com/ssabeva        #
#                                                #
##################################################
*/

#include <iostream>

using namespace std;

using lli = long long int;

int main()
{

    lli a;
    cin >> a;
    if (a > 0)
        cout << (a + a * a) / 2;
    else if (a < 0)
        cout << (a - a * a) / 2 + 1;
    else
        cout << 1;

    return 0;
}
