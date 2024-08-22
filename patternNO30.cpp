
/*
30. 
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5
    
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
          
        for (int col = row; col >=1 ; col--)
        {
            cout << col ;
            /* code */
        }

      for (int col = 2; col <=row ; col++)
        {
            cout << col;
            /* code */
        }
     
        cout << endl; /* code */
    }

    return 0;
}
