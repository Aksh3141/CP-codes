#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long int n;long long int k;
    cin >> n; cin >> k;

    vector<long long int> children;
    for (long long int i = 0; i < n; i++) {
        children.push_back(i+1);
    }

    int index = 0;
    while (!children.empty()) {
        if (!children.empty()) {
            index = (index + k) % children.size();
        cout << children[index] << " ";
        children.erase(children.begin() + index);
        
        }
    }

    cout << endl;
    return 0;
}

