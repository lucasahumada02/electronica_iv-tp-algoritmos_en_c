#include <practico.h>


/**
 * @brief Sumar dos enteros de 32 bit
 * 
 * @param A Primer sumando
 * @param B Segundo sumando
 * @return Resultado de la suma 
 */
int32_t suma(int32_t A,int32_t B)
{
    // reemplazar el código de abajo con la solución
    int suma;
    suma = A + B;
    return suma;
}

/**
 * @brief Sumar los números de un arreglo en memoria
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return sumatoria de b[0] hasta b[n-1]
 */
int64_t sumatoria(int32_t n,const int32_t *b)
{
    // reemplazar el código de abajo con la solución
    int a=0, i=0;
    while (i<n)
    {
        a=a+b[i];
        i++;
    }
    return a;
}

/**
 * @brief Encuentra la posicion del máximo elemento de un arreglo
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return Posición del mayor número k tal que b[k] <= b[i] para todo i en {0,..,n-1}
 */
int32_t posicion_maximo(int32_t n,const int32_t *b)
{
    // reemplazar el código de abajo con la solución
    int t=0,m,i;
    if (n>1)
    {
        m=b[t];
        i=1;
        while (i<n)
        {
            if (m<b[i])
            {
                m=b[i];
                t=i;
            }
            i++;
        }
        
    }
    return t;
}

/**
 * @brief Ordenar un arreglo de menor a mayor en el lugar
 *
 * Luego del llamado a esta función debe cumplirse que
 * b[i]<=b[j] para todo i <= j con i,j en {0,..,n-1}
 *  
 * @param n Cantidad de números
 * @param b Puntero al primer número
 */
void ordenar_en_sitio_menor_a_mayor(int32_t n,int32_t *b)
{
    int t=n-1,aux;
    int32_t i;
    while (t>0)
    {
        i=posicion_maximo(t+1,b);
        aux=b[t];
        b[t]=b[i];
        b[i]=aux;
        t--;
    }
}
