#ifndef JPLIB_H_INCLUDED
#define JPLIB_H_INCLUDED

/** \brief Pedir n�mero y validarlo seg�n el rango.
 * \param N�mero ingresado.
 * \return N�mero v�lido.
 */
int getInt(char ing[], char err[], int inf, int sup);

/** \brief Calcular el factorial de un n�mero.
 * \param N�mero ingresado.
 * \return Factorial resultante.
 */
long fact(int x);

/** \brief Calcular la suma de 2 n�meros enteros.
 * \param Primer n�mero ingresado.
 * \param Segundo n�mero ingresado.
 * \return Resultado de la suma.
 */
int sumar(int x, int y);

/** \brief Calcular la resta de 2 n�meros enteros.
 * \param Primer n�mero ingresado.
 * \param Segundo n�mero ingresado.
 * \return Resultado de la resta.
 */
int restar(int x, int y);

/** \brief Calcular el producto de 2 n�meros enteros.
 * \param Primer n�mero ingresado.
 * \param Segundo n�mero ingresado.
 * \return Producto resultante.
 */
 int multiplicar(int x, int y);

/** \brief Calcular el cociente de 2 n�meros enteros.
 * \param Primer n�mero ingresado.
 * \param Segundo n�mero ingresado.
 * \return Cociente resultante.
 */
float dividir(int x, int y);

/** \brief Tomar los resultados de las operaciones para informarlos.
 * \param Resultados de las operaciones.
 * \return Informe de los resultados.
 */
void informe(int x, int y, int r1, int r2, int r3, float r4, long r5, long r6);

#endif // JPLIB_H_INCLUDED
