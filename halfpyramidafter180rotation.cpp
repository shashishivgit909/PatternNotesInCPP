#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "entr the row ";

    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << " "; /* code */
            }
            else

                cout << "*"; /* code */
        }
        cout << endl; /* code */
    }

    return 0;
}
/*output:for row=4
    *
   **
  ***
 ****
*/