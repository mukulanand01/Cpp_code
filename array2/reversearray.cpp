//write a program to copy the contents of one arry into another in reverse order.
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    cout << "Original vector: ";
    display(v);

    vector<int> v2(v.size()); // Create empty vector with same size

    // Copy elements in reverse
    for(int i = 0; i < v2.size(); i++) {
        int j = v.size() - 1 - i;
        v2[i] = v[j];
    }

    cout << "Reversed vector: ";
    display(v2);

    return 0;
}

