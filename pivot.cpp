#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& arr,int s,int in) {
    vector<int> ans(arr.size());
    for(int i=in,j=0;i<s,j<s-in;i++,j++) {
        ans[j]=arr[i];
    }

    for(int i=0,j=s-in;i<in,j<s;i++,j++) {
        ans[j] = arr[i];
    }
    for(int i=0;i<s;i++) {
        cout<<ans[i]<<" ";
    }
}

//alternative using stl

void rotate1(vector<int>& arr, int s, int in) {
    reverse(arr.begin(), arr.begin() + in);
    reverse(arr.begin() + in, arr.end());
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int s,index;
    cout<<"Enter the size of array"<<endl;
    cin>>s;
    cout<<"Enter the pivot index of array"<<endl;
    cin>>index; 
    cout<<"Enter the elements of array"<<endl;
    vector<int> arr(s);
    for(int i=0;i<arr.size();i++) {
        cin>>arr[i];
    }

    rotate(arr,s,index);
    cout<<endl;
    cout<<"Using stl"<<endl;
    rotate1(arr,s,index);
    return 0;
}



