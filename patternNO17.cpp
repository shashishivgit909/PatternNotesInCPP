/*
17.      1
        212
       32123
      4321234
       32123
        212
         1
         */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "entr the no ";
    cin >> n;

    for (int row = 1; row <=2*n-1; row++)
    {   
        //for spaces which is to be printed before columns in this pattern
        int totalSpacesInrow=row<=n ? n-row : row-n;
         for (int sp  = 1;sp <= totalSpacesInrow ;sp++)
        {
            cout << " ";
            /* code */
        }
          //for columns to print
          int colsInRow=row >n ? n-(row-n) :row ;  //use of ternarty opreator  , this gives from what to print  in columns for each row
        for (int col = colsInRow; col >=1 ; col--)
        {
            cout << col;
            /* code */
        }
         for (int col = 2; col <= colsInRow ; col++)
        {
            cout << col;
            /* code */
        }
     
     
        cout << endl; /* code */
    }

    return 0;
}
