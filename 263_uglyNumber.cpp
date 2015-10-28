#include <iostream>

#include <vector>

using namespace std;

bool isUgly(int num) {
    if(num<=0){
        return false;
    }

    bool result= true;

    while(num!=0 && result){
        if(num == 1){
            return true;
        }
        else if(num%2 == 0){
            num /= 2;
        }
        else if(num%3 == 0){
            num /= 3;
        }
        else if(num%5 == 0){
            num /= 5;
        }
        else{
            result= false;
        }
    }
    return result;
}

int main(){

    vector<int> v;
    v.push_back(-1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(10);
    v.push_back(14);
    v.push_back(32);
    v.push_back(15);
    v.push_back(111);

    for(unsigned int i=0; i<v.size(); i++)
        cout << v.at(i) << " -> " << isUgly(v.at(i)) << endl;

}
