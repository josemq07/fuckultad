#ifndef DOCENTE_H
#define DOCENTE_H
#include <string>
#include "Persona.h"

class Docente: public Persona{
public:
	Docente(); 
	Fecha antiguedad(const Fecha& fechaActual);
private: 
	int m_anioNacimiento;
	Fecha m_fechaIngreso;
};

#endif

