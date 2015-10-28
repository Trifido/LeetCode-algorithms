#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <map>

using namespace std;

void imprimir(vector<int> v){
    for(unsigned int i=0; i<v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}

int romanToInt(string s, map<char,int> &mapa) {
    if(s == ""){
        return 0;
    }

    int cont= 0;
    int result= 0;
    char ant= 'Z';

    while(cont < s.size()-1){
        if(mapa.at(s[cont]) >= mapa.at(s[cont+1])){
            result += mapa.at(s[cont]);
        }
        else{
            result -= mapa.at(s[cont]);
        }
        cont ++;
    }

    result += mapa.at(s[cont]);

    return 0;
}

int main(){
    map<char,int> nums;
    typedef pair<char,int> par;

    nums.insert(par('I',1));
    nums.insert(par('V',5));
    nums.insert(par('X',10));
    nums.insert(par('L',50));
    nums.insert(par('C',100));
    nums.insert(par('D',500));
    nums.insert(par('M',1000));

    cout << nums.at('V');

}
