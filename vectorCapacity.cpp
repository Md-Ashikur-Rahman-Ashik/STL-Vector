#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    // cout << v.capacity() << endl;
    // v.clear();
    v.push_back(20);
    v.push_back(30);
    v.resize(2);

    int vectorSize = v.size();

    for (int i = 0; i < vectorSize; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}