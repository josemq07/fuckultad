#include <iostream> 
#include <vector>
using namespace std;
 

struct Alumno{ 
	 
	string nombre; 
	float nota;
	
};

class Curso{ 
	 
private: 
	string m_materia; 
	Alumno * m_alumnos; 
	int m_cantidadAlumnos;
	 
public: 
	Curso(Alumno * alum, string materia, int cantidadAlumnos);
	Curso() : m_alumnos(nullptr), m_cantidadAlumnos(0){}; 
	~Curso();
	void agregarAlumno(Alumno alumno); 
	double promedioCurso(); 
	Alumno califMasAlta();
};

 


int main(int argc, char *argv[]) {
	
	return 0;
}
 
Curso::Curso(Alumno * alum, string materia, int cantidadAlumnos): m_materia(materia), m_alumnos(alum), m_cantidadAlumnos(cantidadAlumnos){} 


Curso::~Curso(){delete []m_alumnos;}  


void Curso::agregarAlumno(Alumno alumno){ 
	*(m_alumnos+m_cantidadAlumnos) = alumno; 
	m_cantidadAlumnos++;
}

double Curso::promedioCurso(){ 
	double sumaNotas = 0;
	 
	for(int i=0;i<m_cantidadAlumnos;i++){ 
		sumaNotas += m_alumnos[i].nota;
	}
	 
	return sumaNotas/m_cantidadAlumnos;
}
 
Alumno Curso::califMasAlta(){ 
	 
	Alumno alumno; 
	 
	alumno.nombre = ""; 
	alumno.nota = 0;
	  
	for(int i=0;i<m_cantidadAlumnos;i++){ 
		if(m_alumnos[i].nota>alumno.nota){ 
			alumno.nombre=m_alumnos[i].nombre;
			alumno.nota=m_alumnos[i].nota;
		}
	}
	
	return alumno;
}
