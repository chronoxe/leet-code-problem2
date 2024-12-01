#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> l1 = { 1,0,3 }, l2 = { 4,5,6 };
    int inverse_l1=0, inverse_l2=0;
    for (int i = 0; i < size(l1); ++i)
    {
        inverse_l1 += l1[i] * pow(10, i);
    }
    for (int i = 0; i < size(l2); ++i)
    {
        inverse_l2 += l2[i] * pow(10, i);
    }
    cout << inverse_l1 + inverse_l2;
    return 0;
}
