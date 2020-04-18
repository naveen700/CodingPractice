#include <iostream>
using namespace std;

int fillCharArray(char s[])
{
    char ch = cin.get();
    int i = 0;
    while (ch != '\n')
    {
        s[i] = ch;
        i++;
        ch = cin.get();
    }
    s[i] = '\0';
    return i;
}
int main()
{
    char s1[100], s2[100];

    int len1 = fillCharArray(s1);
    int len2 = fillCharArray(s2);

    if (len1 != len2)
    {
        cout << "String are not in Permutation.";
        return 0;
    }

    // compare two char array using frequency array
    int arr[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        arr[s1[i] - 65] = arr[s1[i] - 65] + 1;
    }

    for (int i = 0; i < len2; i++)
    {
        arr[s2[i] - 65] = arr[s2[i] - 65] - 1;
    }

    // if there is a single non zero value in frequency array then its not in permutation.

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            cout << "Both string are not in permutation.";
            return 0;
        }
    }
    cout << "Both strings are in Permutation";
    return 0;
}