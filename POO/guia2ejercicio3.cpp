#include <iostream>
using namespace std;
 
class Polinomio{ 
	
private:	
	float *coeficientes; 
	int m_grado; 
	  
public:	
	Polinomio(int grado);
	~Polinomio(); 
	void cambiarCoef(float coefViejo, float coefNuevo);
};

int main(int argc, char *argv[]) {
	
	return 0;
}

Polinomio::Polinomio(int grado) : m_grado(grado){ 
	 
	this->coeficientes = new float[grado+1]; 
	 
	for(int i=0;i<=grado;i++){ 
	coeficientes[i] = 0.0; 
	}
}
Polinomio::~Polinomio(){ 
	delete [] coeficientes;
}
 
void Polinomio::cambiarCoef(float coefViejo, float coefNuevo){ 
	 bool encontrado = false;
	while(!encontrado){ 
		if(*(coeficientes)!=coefViejo){ 
			coeficientes++;
		} 
		else{ 
			*(coeficientes)=coefNuevo; 
			encontrado = true;
		}
	}
	
}
