#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void imprimir(vector<int> v){
    for(unsigned int i=0; i<v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}

void moveZeroes(vector<int>& nums) {
    vector<int>::iterator it= nums.begin();
    int *punt= &nums.at(nums.size()-1);

    while( &(*it) != punt ){
        if(*it == 0){
            nums.erase(it);
            nums.push_back(0);
            punt--;
        }
        else{
            it++;
        }
    }
}

int main(){
    vector<int> nums;

    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);

    moveZeroes(nums);

    imprimir(nums);

}
