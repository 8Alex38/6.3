/*
5
1
2
3
4
5
Sum = 9
*/
#include <iostream>
#include <vector>

using namespace std;

int sumOfOddElements(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Numbers= ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter №" << i << " = ";
        cin >> arr[i];
    }

    int result = sumOfOddElements(arr);
    cout << "Sum= " << result << endl;

    return 0;
}
