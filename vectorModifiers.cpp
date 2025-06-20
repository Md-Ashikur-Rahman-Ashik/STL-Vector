#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> firstVector = {1, 2, 3, 4, 5};
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

    firstVector.insert(firstVector.begin() + 2, 100);

    for(int x : firstVector){
        cout << x << " ";
    }

    return 0;
}