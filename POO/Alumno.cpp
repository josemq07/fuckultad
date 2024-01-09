#include "Alumno.h"

Alumno::Alumno(){}

float Alumno::meritoAcademico(){ 
	 
	return (getPromedio()*getMateriasAprobadas());
	
}

