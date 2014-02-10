#include <iostream>

using namespace std;

int runThrough(int& i)
{
    int counter = 1;
    int j = i;

    while (j != 1)
    {
        if (j % 2 == 1)
        {
            j = j * 3 + 1;
        }
        else
        {
            j = j / 2;
        }
        counter++;
    }

    return counter;
}

int main()
{
    int x, y, xOriginal, yOriginal, counter;

    while (cin >> x >> y)
    {
        xOriginal = x;
        yOriginal = y;

        if (x > y)
        {
            x = yOriginal;
            y = xOriginal;
        }

        int k = runThrough(x);

        for (int i = x + 1; i <= y; i++)
        {
            counter = runThrough(i);
            if (counter > k)
            {
                k = counter;
            }
        }

        cout << xOriginal << " " << yOriginal << " " << k << endl;
    }
}