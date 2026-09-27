// i don't know the chrono header file for day-02, this is just for
// time experiment

#include <iostream>
#include <chrono>
using namespace std;

int main(){
    int N = 10000000;
    int* arr = new int[N];

    for (int i=0; i< N; i++){
        arr[i] = i;
    }
    volatile long long sum = 0;

    // timer start
    auto start = chrono:: high_resolution_clock::now();
    for (int i=0; i<N; i++){
        sum+=arr[i];
    }
    // timer end
    auto end = chrono:: high_resolution_clock:: now();
    chrono::duration <double> elapsed =end - start;
    cout << "Sum = " << sum << endl;
    cout << "Time = " << elapsed.count() << "seconds" << endl;
    delete[] arr;
    return 0;
}

//Output:

// When N= 10
// Sum = 45
// Time = 3.51e-07seconds = 3.51 x 10^(-7) s

// When N=10000000
// Sum = 49999995000000
// Time = 0.0620668seconds

