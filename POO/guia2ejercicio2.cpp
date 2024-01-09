#include <iostream>
using namespace std;
 
class EcuacionCuadratica{ 
	
private: 
	float m_a; 
	float m_b; 
	float m_c;
	
	
public: 
	EcuacionCuadratica(float a, float b, float c);
	bool tieneRaicesReales(); 
	float verRaizUno(); 
	float verRaizDos(); 
	float verParteReal(); 
	float verParteImag();
};


int main(int argc, char *argv[]) {
	
	return 0;
}
 
EcuacionCuadratica::EcuacionCuadratica(float a, float b, float c){ 
	this->m_a = a; 
	this->m_b = b; 
	this->m_c = c;
}
