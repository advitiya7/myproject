#include <bits/stdc++.h>
using namespace std;
int main()
{
    // using find
    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    auto it = find(arr, arr + n, key);
    int index=it-arr;
    if(index==n){
        cout<<key<<"not present";
    }
    cout<<index;
}