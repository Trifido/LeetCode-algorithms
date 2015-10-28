#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int addDigits(int num) {
    return 1+((num-1)%9);
}

int main(){
    int num= -10;

    cout << num << ": " << addDigits(num) << endl;

}
