#include <iostream>
using namespace std;

int main(){
    int x= 30;
    int *p;
    p=&x;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << " p ="<< p << endl;
    cout << "*p=" << *p << endl;
    cout << "&p=" << &p << endl;

    // for array
    int arr[5]={1,2,3,4,5};
    cout << "&arr="<< &arr<< endl;
    cout << "&arr[0]="<< &arr[0]<< endl;
    cout << "&arr[1]="<< &arr[1]<< endl;
    cout << "&arr[2]="<< &arr[2]<< endl;
    cout << "&arr[3]="<< &arr[3]<< endl;
    cout << "&arr[4]="<< &arr[4]<< endl;
    return 0;    
}

// Output
// x = 30
// &x = 0x7ffd9836ed3c
//  p =0x7ffd9836ed3c
// *p=30
// &p=0x7ffd9836ed40


// &arr[0]=0x7ffc9e7851d0
// &arr[1]=0x7ffc9e7851d4
// &arr[2]=0x7ffc9e7851d8
// &arr[3]=0x7ffc9e7851dc
// &arr[4]=0x7ffc9e7851e0