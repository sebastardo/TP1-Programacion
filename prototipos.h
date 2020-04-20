#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED
#include <math.h>
#define TAM 3

enum BOOL{ FALSE,TRUE };

typedef struct
{
    int dia,
        mes,
        anio;
}tFecha;


//Ejericio 1
int factorial(int);

//Ejercicio 2
int combinatoria(int, int);

//Ejercicio 3
float e_a_la_x(int, float);

//Ejercicio 4
float raiz_cuadrada(unsigned int, float);

//Ejercicio 5
int fibonacci(int);

//Ejercicio 6
float seno(float numero, float TOL);

//Ejercicio 7
void pdn(int);

//Ejercicio 8
int multiplicacion(int numA, int numB);

//Ejercicio 9
void cociente_resto(int A, int B);

//Ejercicio 10
int suma_numero_naturales(int N);

//Ejercicio 11
int suma_numero_naturales_pares(int N);

//Ejercicio 12
int suma_numero_naturales_pares_menor_que(int N);

//Ejercicio 13
enum BOOL es_primo(int a);

//Ejercicio 14
int fecha_correcta(const tFecha *fec);

//Ejercicio 15
tFecha fecha_siguiente(const tFecha *f);

//Ejercicio 16
tFecha suma_dias_a_fecha(const tFecha *f, int dias);

//Ejercicio 17


//Ejercicio 18
int dias_entre_fechas(const tFecha *finicial, const tFecha *ffinal);

//Ejercicio 19
void dia_de_la_semana(const tFecha *f);


//Ejercicio 20
int multiplicacion_rusa(int A, int B);

//Ejercicio 21
int parte_entera(float numero);

//Ejercicio 22
void insertar(int *vector, int posicion, int dato);

//Ejercicio 23
void insertar_ordenado(int vector[],int largo, int numero);

void insertar_ordenado_punteros(int *vec, int tam, int numero_a_insertar);
void insertar_punt(int *vec,int *fin, int numero_a_insertar);

//Ejercicio 24
void eliminar(int v[], int tam, int posicion);

//Ejercicio 25
void eliminar_primera_aparicion(int *v, int tam, int dato);

//Ejercicio 26
void eliminar_todas_apariciones(int *v, int tam, int dato);

//Ejercicio 27
int largo_palabra(char *palabra);
enum BOOL palindromo(char *palabra);

//Ejercicio 28
int palabra_a_numero(char *palabra);
int convertir(char numero);

//Ejercicio 29
int sumatoria_sobre_diagonal(int matriz [][TAM]);
int sumatoria_sobre_diagonal_incluida(int matriz [][TAM]);
int sumatoria_bajo_diagonal(int matriz [][TAM]);
int sumatoria_bajo_diagonal_incluida(int matriz [][TAM]);
int sumatoria_sobre_diagonal_secundaria(int matriz [][TAM]);
int sumatoria_sobre_diagonal_secundaria_incluida(int matriz [][TAM]);
int sumatoria_bajo_diagonal_secundaria(int matriz [][TAM]);
int sumatoria_bajo_diagonal_secundaria_incluida(int matriz [][TAM]);


//Ejercicio 30
int traza_principal(int matriz [][TAM]);
int traza_secundaria(int matriz [][TAM]);

//Ejercicio 31
enum BOOL es_diagonal(int matriz[][TAM]);

//Ejercicio 32
enum BOOL es_identidad(int matriz[][TAM]);

//Ejercicio 33
enum BOOL es_simetrica(int matriz[][TAM]);

//Ejercicio 34
void trasponer_in_situ(int matriz[][TAM]);

//Ejercicio 35
void trasponer(int matriz[][TAM], int mx[][TAM]);

//Ejercicio 36
//void multiplicacion_matrices(int matriz_1[][TAM], int matriz_2[][TAM], int matriz_resultado[][TAM]);
int calculo_vectores(int m1[TAM][TAM], int fila, int m2[TAM][TAM], int columna);

//Ejercicio 37
void campeonato();
void anotacion_de_partidos(int m[TAM][TAM]);
void calculo_puntos(int *tabla, int m[][TAM]);
void mostrar_puntaje(int *tabla);

//ascii
void ascii();



#endif // PROTOTIPOS_H_INCLUDED
