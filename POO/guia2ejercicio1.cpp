#include <iostream>
using namespace std;
 

class Cilindro{ 
	  
private:  
	double m_radio; 
	double m_altura; 
	double m_volumen = 0;
	
public: 
	Cilindro();
	Cilindro(double radio, double altura){this->m_altura = altura; this->m_radio = radio; }  
	void asignarDatos(double radio, double altura);
	double getVolumen(); 
	void setVolumen();
	
};


int main(int argc, char *argv[]) {
	 
	Cilindro c3;
	Cilindro c1(10.2,5.3);
	c1.setVolumen(); 
	cout<<"El volumen es: "<<c1.getVolumen();
	
	return 0;
}
 


void Cilindro::asignarDatos(double radio, double altura){ 
	 
	this->m_altura = altura; 
	this->m_radio = radio;
}

double Cilindro::getVolumen(){ 
	 
	return this->m_volumen;
}
 
void Cilindro::setVolumen(){ 
	this->m_volumen = this->m_radio*this->m_altura;
}
Cilindro::Cilindro() : m_radio(0), m_altura(0), m_volumen(0){}

