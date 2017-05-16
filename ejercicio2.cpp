#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool existe(char letra, vector<char> datos)
{
    for (int i; i<datos.size(); i++)
    {
        if (letra == datos[i])
        return true;
    }
    return false;
}

int main ()
{
    //ingreso de datos
    string texto1; cin >> texto1;
    string texto2; cin >> texto2;
    vector <char> iguales;
    
    //recorrer el texto
    for (int i=0; i < texto1.size(); i++)
    {
        for (int j=0 ; j < texto2.size(); j++)
        {
            if (existe(texto1[i], iguales) == false)
            if (texto1[i]==texto2[j])
            iguales.push_back(texto1[i]);
        }
    }
   
   for (int i=0; i< iguales.size(); i++)
   {
       cout << iguales[i];
   }
   
   return 0; 
}