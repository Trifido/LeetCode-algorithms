#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <set>
#include <map>

using namespace std;





    // permute num[begin..end]
    // invariant: num[0..begin-1] have been fixed/permuted
    void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)    {
        if (begin >= num.size()) {
            // one permutation instance
            result.push_back(num);
            return;
        }

        for (int i = begin; i < num.size(); i++) {
            swap(num[begin], num[i]);
            permuteRecursive(num, begin + 1, result);
            // reset
            swap(num[begin], num[i]);
        }
    }

    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > result;

        permuteRecursive(num, 0, result);
        return result;
    }



void imprimir(vector<int> v){
    for(unsigned int i=0; i<v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}

void permutar(set<vector<int> > &permuta, vector<int> vec, int level){
    if(level>0){
        for(unsigned int i=1; i<vec.size(); i++){
            swap(vec.at(0), vec.at(i));
            permuta.insert(vec);
            permutar(permuta, vec, level-1);
        }
    }
}

vector<vector<int> > permutaciones(vector<int> &vec){
    int level= vec.size()-1;
    set<vector<int> > permuta;
    vector<vector<int> > result;
    permuta.insert(vec);
    permutar(permuta, vec, level);

    std::copy(permuta.begin(), permuta.end(), inserter(result, result.begin()));

    return result;
}

int main(){
    vector<int> vec;
    vector<vector<int> > permuta;
    vec.push_back(1);
    //vec.push_back(2);
    //vec.push_back(3);
    //vec.push_back(3);

    permuta= permutaciones(vec);

    for(int i=0; i<permuta.size(); i++){
        imprimir(permuta.at(i));
        cout << endl;
    }

}
