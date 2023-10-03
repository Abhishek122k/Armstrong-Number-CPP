#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int length = 0;

    int sum = 0;
    int originaln = n;

    
    while (n > 0) {
        n /= 10; 
        length++;
    }

    n = originaln; 

  
    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, length);
        n = n / 10;
    }

    if (sum == originaln) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not an Armstrong number";
    }
    return 0;
}
