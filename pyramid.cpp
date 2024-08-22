/*
   enter the no 5
    *
   ***
  *****
 *******
*********
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "entr the no ";
    cin >> n;

    for (int row = 1; row <=n; row++)
    {   
        //for spaces which is to be printed before columns in this pattern
        int totalSpacesInrow=n-row ;
         for (int sp  = 1;sp <= totalSpacesInrow ;sp++)
        {
            cout << " "; 
            /* code */
        }
          //for columns to print
          
        for (int col = 1; col <=2*row-1 ; col++)
        {
            cout << "*" ;
            /* code */
        }

      
        cout << endl; /* code */
    }

    return 0;
}