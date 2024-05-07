#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,x;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the sum"<<endl;
    cin>>x;
    bool flag;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==x) {
                flag = true;
            }
        }
        if(flag){
            break;
        }
    }

    (flag) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    return 0;

}
