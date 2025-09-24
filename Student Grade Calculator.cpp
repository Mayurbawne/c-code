#include <iostream>
using namespace std;

int main() {
     const int n=5;
    


    double grades[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter grade for subject " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    double avg = sum / n;
    cout << "Average grade: " << avg << endl;
    return 0;
}
