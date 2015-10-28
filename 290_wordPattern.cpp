#include <iostream>
#include <map>

using namespace std;

bool colisiones(pair<char, string> relacion, map<char,string> ed, int cont, string palabra, string pattern){
    bool resultado= true;
    map<char,string>::iterator it= ed.begin();

    while(it != ed.end() && resultado){
        if((it->first == pattern[cont] && it->second != palabra) || (it->first != pattern[cont] && it->second == palabra))
            resultado= false;
    }

    return resultado;
}

int main()
{
    bool result= true;
    string str= "cat dog dog cat";
    string pattern= "abba";
    /*string str= "jquery";
    string pattern= "jquery";*/
    map<char,string> ed;
    typedef pair<char, string> relacion;
    map<char,string>::iterator it;
    int cont= 0;
	
	//También debe haber una comprobación para que evitar str o pattern vacíos.

    string palabra= "";
    for(unsigned int i=0; i<=str.size() && result; i++){
        if(str[i] != ' ' && i <= str.size()-1){
            palabra += str[i];
        }
        else{
            it= ed.begin();
            while(it != ed.end() && result){
                if((it->first == pattern[cont] && it->second != palabra) || (it->first != pattern[cont] && it->second == palabra))
                    result= false;
                it++;
            }
            if(result){
                ed.insert(relacion(pattern[cont], palabra));
                palabra= "";
                cont++;
            }
        }
    }

    if(pattern[cont] != NULL)
        result= false;



    /*while(it != ed.end()){
        cout << "Clave: " << it->first << " Valor: " << it->second << endl;
        it++;
    }*/
    cout << "Resultado: " << result << endl;
}
