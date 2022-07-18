//Jonathan Hartsell
//Assignment 6 Problem 2
//Filename: Asg6P2.cpp
//Source: https://cplusplus.com/forum/general/201173/

template <typename T>
void bsearch (T a[], size_t n, int x)
{
    size_t left = 0;
    size_t right = n - 1;
    int match = 0;
    while(left <= right)
    {
        size_t middle = (left + right) / 2;
        if(a[middle] == x)
        {
            cout<<"Success! \n";
            cout<<a[middle];
            match++;
            break;
        }
        if(a[middle] < x)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    if(match == 0)
    {
        cout<<"Failure! \n";
    }
}
