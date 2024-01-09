#ifndef ALUMNO_H
#define ALUMNO_H
#include <string> 
#include "Persona.h"



class Alumno: public Persona{ 
public:
	Alumno(float promedio, int materiasAprobadas) : Persona(nombre, 
															apellido, 
															dni, 
															echaNac, 
															estadoCivil){}
	float meritoAcademico();
	int getMateriasAprobadas(){return m_materiasAprobadas;}
	float getPromedio(){return m_promedio;}
private: 
	float m_promedio; 
	int m_materiasAprobadas;
	
	
};

#endif

