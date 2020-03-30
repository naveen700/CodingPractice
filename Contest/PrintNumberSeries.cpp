#include <iostream>
using namespace std;
void calculateSeries(int, int);

int main()
{
    int n, notMulti;
    cin >> n;
    cin >> notMulti;

    calculateSeries(n, notMulti);

    return 0;
}

void calculateSeries(int n, int notMulti)
{
    int i = 1;
    while (n > 0)
    {
        int res = 3 * i + 2;
        if (res % notMulti == 0)
        {
            i++;
            continue;
        }
        else
        {
            cout << res<<endl;
            i++;
            n--;
        }
    }
}