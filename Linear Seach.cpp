#include <iostream>
using namespace std;

int main ()
{
    int n, item;
    cin>>n;

    int A[n];
    int found = 0;

    for (int i = 0; i<n; i++)
    {
        cin>> A[i];
    }
    cin>>item;

    for (int i=0; i<n; i++)
    {
        if (A[i] == item )
        {
            cout<< "Found at index: "<< i <<endl;
            found++;
            break;
        }

    }

    if (found == 0)
    {
        cout<< "Not Found"<<endl;
    }

    return 0;
}
