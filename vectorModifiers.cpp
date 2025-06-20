#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> firstVector = {1, 2, 3, 2, 4, 5};
    // vector<int> secondVector;

    // secondVector = firstVector;
    // int secondVectorSize = secondVector.size();

    // for (int i = 0; i < secondVectorSize; i++)
    // {
    //     cout << secondVector[i] << " ";
    // }

    // for (int x : secondVector)
    // {
    //     cout << x << " ";
    // }

    // firstVector.insert(firstVector.begin() + 2, 100);

    // replace(firstVector.begin(), firstVector.end(), 2, 100);
    // auto it = find(firstVector.begin(), firstVector.end(), 100);

    // if (it == firstVector.end())
    // {
    //     cout << "Not found";
    // }
    // else
    // {
    //     cout << "Found";
    // }

    // for (int x : firstVector)
    // {
    //     cout << x << " ";
    // }

    for (auto it = firstVector.begin(); it < firstVector.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}