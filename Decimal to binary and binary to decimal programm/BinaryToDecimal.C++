#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <iterator>

#define MAX_LINES 10000
using namespace std;
using namespace std;


int main()
{
    string array[MAX_LINES];
    ifstream file;
    int lines = 0;

    file.open("decimal to binary.txt");

    while (!file.eof())
    {

        getline(file, array[lines]);
        lines++;
    }
    int line = lines - 1;
    file.close();
    string binaryString;

    ofstream MyFile("binary to decimal.txt");

    for (int w = 0; w < line; w++)
    {
        binaryString = array[w];

        int baseVal = 2;
        int expVal = 0;
        int powerTwo;
        int decimalNumber = 0;
        int i = (binaryString.size() - 1);

        while (i >= 0)
        {
            if (binaryString[i] == '1')
            {
                powerTwo = 1;

                for (int j = 0; j < expVal; j++)
                {
                    powerTwo *= baseVal;
                }
                decimalNumber += powerTwo;
            }
            i--;
            expVal++;
        }
        MyFile << decimalNumber << endl;
    }
    MyFile.close();

    return 0;
}