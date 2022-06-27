#include <iostream>

using namespace std;

int main()
{
    int i, k, j, vaule;
    int rows;

    cin >> rows;
    for(i = 0; i < rows; i++)
    {
        vaule = 1;
        for(j = 0; j < rows-1-i; j++)
        {
            cout << " ";
        }

        for(k = 0; k <= i; k++)
        {
            cout << " " << vaule;
            vaule = vaule * (i-k)/(k+1);
        }
        cout << endl;
    }
}
