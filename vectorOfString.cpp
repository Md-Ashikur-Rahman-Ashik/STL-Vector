#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;

    vector<string> stringVector(vectorSize);

    for (int i = 0; i < vectorSize; i++)
    {
        cin >> stringVector[i];
    }

    for (int i = 0; i < vectorSize; i++)
    {
        cout << stringVector[i] << " ";
    }

    return 0;
}