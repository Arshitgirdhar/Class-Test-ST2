//Arshit Girdhar
//2010990121
//group8 
//Set 1 question 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take first input , the length of array
    int n;
    cin>>n;
    int arr[n];
    // take second input , the input of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort the array so that it dosent take much time
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        // compare the elements of array to check that they are not repeating
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            // print the output
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}