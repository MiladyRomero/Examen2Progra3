#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>

using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valres de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{
return 0;
}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{
return 0;
}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream in(nombre_archivo.c_str());//primero leemos el archivo
    string word;//declaramos la variable word, para utilizarla como referencia
    int elementos=nombre_archivo.size();//declaramos una variable que sepa el numero de elementos que tenemos el el archivo

    for(int x=0;x < elementos;x++)//para x=o si x es menor que la cantidad de elementos, aumentamos en x
    {
        in>>word;//ingresamos esta variable que ya habiamos declararo
        if(word == cadena)//creamos una condicion si la variable word es igual a la variable cadena (cabe notar que esta dentro de el ciclo en el cual va haciendo una por una la comparacion
        {
            return true;//si la condiciion se cumple, devolvemos true
        }
    }
    return false;//De lo contratio false

}

//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());//leemos el archivo
    in.seekg(0,ios::end);//con el in.seekg buscamos la posicion de el archivo a el end, el final de la secuencia -http://www.cplusplus.com/reference/istream/istream/seekg/
    int sizee = in.tellg();//declaramos un avariable en este caso sizee para guardar el tamaño de el archivo
    in.seekg(0,ios::beg);//aqui el principio de la secuencia

    return sizee;//devolvemos el varlor almacenado en la variable
}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz
bool existeEnArbol(NodoTrinario* raiz, int num)
{
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
