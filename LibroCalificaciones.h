/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Encabezado de la clase Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include <cstdint>
#include <string>

using namespace std;

#ifndef LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_LIBROCALIFICACIONES_H


class LibroCalificaciones {

    float monto;

    int CalcularTiempoEnMeses(std::string tiempoTXT);

    float obtenerPorcentaje(std::string porcentajeTXT);

    float calcularInteresMensual(float balance, float tasaAnual);

public:
    LibroCalificaciones(); //Constructor Default


    LibroCalificaciones(float monto);

    float getMonto() const;

    void setMonto(float monto);

    string reportCalculoPrestamos(std::string tiempoTXT, std::string porcentajeTXT);

};


#endif //LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
