/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

int *
suma_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->numero1 + argp->numero2;

	return &result;
}

int *
resta_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->numero1 - argp->numero2;

	return &result;
}

int *
multiplicacion_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	result = argp->numero1 * argp->numero2;

	return &result;
}

float *
division_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static float  result;

	result = (argp->numero1 + 0.0) / argp->numero2;

	return &result;
}
