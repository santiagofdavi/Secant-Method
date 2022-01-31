/* SECANT METHOD IN C++  

Created using the F.F.CAMPOS' Algotithm in "Algoritmos Numéricos", LTC 3rd

Author: Davi Ferreira Santiago
    School of Engineering, Universidade Federal de Minas Gerais
Date: January 31st, 2022 */

#ifndef SECANT_H
#define SECANT_H

double precisao_maquina();

double avaliacao_funcao(const double &x);

void print(const double &a, const double &b, const double &Fa, const double &Fb, 
           const double &x, const double &Fx, const double &deltax, const unsigned &k);

void secante(double &a, double &b, double &Toler, unsigned &IterMax);

#endif