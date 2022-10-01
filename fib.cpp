#include <iostream>
using namespace std;
main()
{
    int num1 = 0;
    int num2 = 1;
    int arr[100], miss[100];
    int j = 0, count = 0;
    int lim, result,mcount=0;
    cout << "Enter the limit ";
    cin >> lim;  
    cout << 0<<"\t"<<1;
    for(int c=2;c<lim;c++)
    {
        result = num1 + num2;
        num1 = num2;
        num2 = result;
         cout << "\t" << result << "  ";
        arr[c] = result;
        count++;
        

        if (num2 - num1 > 1) // 0 1 1 2 3 5 8

        {

            for (int i = num1 + 1; i < num2; i++)  //num 1 =5 num 2= 8

            {

                miss[j] = i;

                mcount++;

                j++;
            }
        }
    }

 

    cout << "\n\nMising Elements are:\n";

    for (int j = 0; j < mcount; j++)
    {
        cout << miss[j]<<" ";
    }
}
