#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    vector <int> numeros;
    int n; cin >> n;
    int i;
    int numero;
    int mayor;
    int posicionmayor;
    
    for (i = 1; i <= n; i++)
    {
        float x = 0;
        cin >> x; 
        numeros.push_back(x);
    }
    
    mayor=numeros[0];
    posicionmayor = 0;
    for(i = 0; i < n; i++)
        if(numeros[i]>mayor)
        {
            posicionmayor=i;
            mayor=numeros[i];
        }
    
    vector <int> auxiliar(mayor+1);
    
    for(i = 0; i < n; i++)
    {
        numero = numeros[i];
        for(int a = i; a < n; a++) 
            if(numeros[a]==numero) auxiliar[numero]++;
    }
    
    cout << "Los valores que mas se repiten: " << endl;
    
    mayor=auxiliar[0];
    posicionmayor = 0;
   
    for(i = 0; i < n; i++)
        if(auxiliar[i]>mayor)
        {
            posicionmayor=i;
            mayor=auxiliar[i];
            
        }
    
    for(i = 0; i < auxiliar.size(); i++)
        if(auxiliar[i]==mayor)
        {
            posicionmayor=i;
            mayor=auxiliar[i];
            cout << i << endl;
        }
   
    return 0;
}