#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool esPrimo(int numero)
{
for(int i = 2; i < numero; i++)
if (numero % i == 0)
return false;
return true;
}
int main()
{
// Variables
int n;
vector<int> datos;
// Ingreso de datos
cin >> n;
for (int i = 0; i < n; i++) 
{
int x;
cin >> x;
datos.push_back(x);
}
// Buscar los primos
vector<int> primos;
for (int i = 0; i < n; i++) 
{
if (esPrimo(datos[i]) == true)
primos.push_back(datos[i]);
}
// Ordenar
sort(primos.rbegin(), primos.rend());
// Imprimir 
for (int i = 0; i < primos.size(); i++) 
cout << primos[i] << endl;
return 0;
}