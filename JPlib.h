#ifndef JPLIB_H_INCLUDED
#define JPLIB_H_INCLUDED

/** \brief Pedir número y validarlo según el rango.
 * \param Número ingresado.
 * \return Número válido.
 */
int getInt(char ing[], char err[], int inf, int sup);

/** \brief Calcular el factorial de un número.
 * \param Número ingresado.
 * \return Factorial resultante.
 */
long fact(int x);

/** \brief Calcular la suma de 2 números enteros.
 * \param Primer número ingresado.
 * \param Segundo número ingresado.
 * \return Resultado de la suma.
 */
int sumar(int x, int y);

/** \brief Calcular la resta de 2 números enteros.
 * \param Primer número ingresado.
 * \param Segundo número ingresado.
 * \return Resultado de la resta.
 */
int restar(int x, int y);

/** \brief Calcular el producto de 2 números enteros.
 * \param Primer número ingresado.
 * \param Segundo número ingresado.
 * \return Producto resultante.
 */
 int multiplicar(int x, int y);

/** \brief Calcular el cociente de 2 números enteros.
 * \param Primer número ingresado.
 * \param Segundo número ingresado.
 * \return Cociente resultante.
 */
float dividir(int x, int y);

/** \brief Tomar los resultados de las operaciones para informarlos.
 * \param Resultados de las operaciones.
 * \return Informe de los resultados.
 */
void informe(int x, int y, int r1, int r2, int r3, float r4, long r5, long r6);

#endif // JPLIB_H_INCLUDED
