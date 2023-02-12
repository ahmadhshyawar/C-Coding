#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream MyFile("decimal to binary.txt");

    int a[10], n, i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int t = sizeof(arr);
    n = 0;

    for (int x = t; x > 0; x--)
    {

        for (i = 0; arr[n] > 0; i++)
        {
            a[i] = arr[n] % 2;
            arr[n] = arr[n] / 2;
        }
        

        for (i = i - 1; i >= 0; i--)
        {
            MyFile << a[i];
        }
        MyFile << endl;
        n = n + 1;
    }

    MyFile.close();

    return 0;
}