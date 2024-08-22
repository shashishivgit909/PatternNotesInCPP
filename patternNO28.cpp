
      //pattern no 28. known as diamond shape pattern:
/*
         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *         */
//code:
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
          int totalColsInRow=row >n ? n-(row-n) :row ;  //use of ternarty opreator 

        for (int col = 1; col <=totalColsInRow ; col++)
        {
            cout << "* ";
            /* code */
        }
     
     
        cout << endl; /* code */
    }

    return 0;
}
