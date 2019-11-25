#pragma once
#define DOLLITTLE_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Dollittle
{
private:
	int n;
	double** matrizA;
	double* vectorB;
	double* vectorZ;
	double* vectorX;
	double** matrizL;
	double** matrizU;
	double detL;
	double detU;
	double** mAum;
public:
	Dollittle(int m);
	void imp_Axb();
	void ingrese_matriz();
	void definir_LU_simple();
	void escribir_solucion();
	void generar_U();
	void gen_matrizAumentada();
	void imp_mAum();
	void resolver_LU();
	void definir_LU_total();
	void imp_etapaLU();
	void ejecucion(int elim);
};
