#include <iostream>
using namespace std;
int main(){
    int ways = 0;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (n < 3){
      cout << "Not possible" << endl;
    }
    else{
        for (int i = 0; i < n-2; i++){
            if (arr[i+1] - arr[i] == arr[i+2] - arr[i+1]){
                ways++;
            }
        }
    }
    cout << "Number of ways: " << ways << endl;
}