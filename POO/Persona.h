#ifndef PERSONA_H
#define PERSONA_H
#include <string>
struct Fecha{ 
	int dia; 
	int mes; 
	int anio;
};

class Persona {
public: 
	
	Persona(std::string nombre, 
			std::string apellido, 
			long dni, 
			Fecha fechaNac, 
			std::string estadoCivil);  
	
	Fecha edad(const Fecha &fecha); 
	Fecha getFechaNac(){return m_fechaNac;}
private: 
	std::string m_apellido; 
	std::string m_nombre; 
	long m_dni;
	Fecha m_fechaNac; 
	std::string m_estadoCivil;
};

#endif

