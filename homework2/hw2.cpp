#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(vector<int>myvec)
{
    for (int i = 1; i < myvec.size(); ++i)
    {
        for (int j = 0; j < myvec.size() - 1; ++j)
        {
            if (myvec[j] > myvec[i])
            swap(myvec[j], myvec[i]);
        }
    }

    return myvec;
}

int main()
{
    vector<int> myvec ;
    int token;
    cout<< "Enter numbers for sorting. press <CTRL><D> to signal EoF"<<endl;
    while(cin>>token)
    {
    myvec.push_back(token);
    }
    cout<< "Sorted numbers are: "<<endl;

    for (int i = 0; i < myvec.size(); ++i)
    {
    cout << sort(myvec)[i] <<endl;
    }
}
