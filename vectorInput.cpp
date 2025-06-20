#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;

    // vector<int> ourVector(vectorSize);

    // for (int i = 0; i < vectorSize; i++)
    // {
    //     cin >> ourVector[i];
    // }

    vector<int> ourVector;
    for (int i = 0; i < vectorSize; i++)
    {
        int num;
        cin >> num;
        ourVector.push_back(num);
    }

    for (int i = 0; i < vectorSize; i++)
    {
        cout << ourVector[i] << " ";
    }

    return 0;
}