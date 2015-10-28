#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void imprimir(vector<int> v){
    for(unsigned int i=0; i<v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}

void rotate(vector<int>& nums, int k) {

    k %= nums.size();

    if(!nums.empty() && k>0){
        vector<int> aux1, aux2;
        vector<int>::iterator itk= nums.end()-(k);

        aux1.assign(nums.begin(), itk);
        aux2.assign(itk, nums.end());

        vector<int>::iterator itk2= aux2.begin();

        nums= aux1;
        nums.insert(nums.begin(), itk2, aux2.end());
    }
}

int main(){
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);

    rotate(nums,8);

    //imprimir(nums);

}
