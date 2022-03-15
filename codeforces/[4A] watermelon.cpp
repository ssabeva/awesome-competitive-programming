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
    if (a % 2 == 0) {
        if (a > 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
