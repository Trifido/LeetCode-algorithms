#include <iostream>

#include <vector>
#include <map>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    if(nums.empty() || k <= 0){
        return false;
    }

    map<int,int> container;
    map<int,int>::iterator it;
    typedef pair<int, int> par;

    for(unsigned int i=0; i<nums.size(); i++){
        it=container.find(nums.at(i));
        if(it == container.end()){
            cout << " introduce\n";
            container.insert(par(nums.at(i), i));
        }
        else{
            cout << "i: " << i << endl;
            cout << "cont: " << container.find(nums.at(i))->second << endl;
            cout << "diff: " << i - container.find(nums.at(i))->second << endl;
            if( (i - container.find(nums.at(i))->second) <= k){
                return true;
            }
            else{
                container.find(nums.at(i))->second = i;
            }
        }
    }

    return false;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(5);
    int k= 3;

    cout << containsNearbyDuplicate(nums, k) << endl;
}
