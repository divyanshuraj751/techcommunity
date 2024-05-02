#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Air Quality Index"<<endl;
    cin>>n;

    if(n>=0 && n<51) {
        cout<<"Good"<<endl;
    }
    else if(n>50 && n<101) {
        cout<<"Moderate"<<endl;
    }
    else if(n>100 && n<151) {
        cout<<"Unhealthy for sensitive Groups"<<endl;
    }
    else if(n>150 && n<201) {
        cout<<"Unhealthy"<<endl;
    }
    else if(n>200 && n<301) {
        cout<<"Very Unhealthy"<<endl;
    }
    else if(n>300 && n<501) {
        cout<<"Hazardous"<<endl;
    }
  return 0;

}
