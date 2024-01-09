#include "Persona.h"
 


Persona::Persona(std::string nombre, 
				 std::string apellido, 
				 long dni, 
				 Fecha fechaNac, 
				 std::string estadoCivil) 
				: m_nombre(nombre), 
				  m_apellido(apellido),
				  m_dni(dni), 
				  m_fechaNac(fechaNac), 
				  m_estadoCivil(estadoCivil){}

Fecha Persona::edad(const Fecha& fecha){ 
	 
	Fecha nuevaFecha = getFechaNac();  
	 
	nuevaFecha.anio-=fecha.anio; 
	nuevaFecha.mes-=fecha.mes; 
	nuevaFecha.dia-=fecha.dia; 
	
	return nuevaFecha;
}
