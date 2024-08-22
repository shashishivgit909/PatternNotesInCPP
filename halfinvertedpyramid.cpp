#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "entr the row ";
    cin >> row;

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            /* code */
        }
        cout << endl; /* code */
    }

    return 0;
}
/*output:for row=4
     
    ****
    ***
    **
    *
*/