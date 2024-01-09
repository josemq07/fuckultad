#include <iostream>
using namespace std;
 
class VectorDinamico{ 
 
private:
	int *p; 
	int m_tamanio;
public: 
	VectorDinamico(int tamanio);
	~VectorDinamico(); 
	void duplicar(); 
	int verElemento(int numeroElemento);
};


int main(int argc, char *argv[]) { 
	
	
	VectorDinamico v(10); 
	v.duplicar(); 
	cout<<v.verElemento(12);
	
	return 0;
}

VectorDinamico::VectorDinamico(int tamanio):m_tamanio(tamanio){ 
	
	p = new int[tamanio]; 
	 
	for(int i=0;i<tamanio;i++){ 
		p[i] = rand()%100;
	}
		
}
VectorDinamico::~VectorDinamico(){ 
	delete [] p ;
}
 
void VectorDinamico::duplicar(){   
	
	//Reservo memoria para un nuevo vector
	int *q = new int[this->m_tamanio*2]; 
	  
	//Asigno el nuevo tamaño 
	this->m_tamanio*=2; 
	
	//Copio los elementos del primer vector en el segundo vector generado
	for(int i=0;i<this->m_tamanio;i++){ 
		q[i] = p[i];
	} 
	//Libero la memoria del primer vector y copio los elementos al primer vector
	delete [] p; 
	p = q;
	//Inicializo los elementos restantes aleatoriamente 
	for(int i=this->m_tamanio/2;i<m_tamanio;i++){ 
		q[i]=rand()%100;
	} 
	
}
int VectorDinamico::verElemento(int numeroElemento){ 
	 
	return *(p+numeroElemento);
}
