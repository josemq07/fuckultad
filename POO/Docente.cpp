#include "Docente.h"

Docente::Docente(){}
	


Fecha Docente::antiguedad(const Fecha& fechaActual){ 
	 
	Fecha nuevaFecha = fechaActual; 
	 
	nuevaFecha.anio-=fechaActual.anio; 
	nuevaFecha.mes-=fechaActual.mes; 
	nuevaFecha.dia-=fechaActual.dia; 
	
	return nuevaFecha;
}
