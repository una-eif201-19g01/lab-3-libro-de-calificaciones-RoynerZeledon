#include "Laborato3.h"
int main(){
	int s = 100;
	string d;
	
	cout<<"Nombre del curso :"<<endl;
	cin>>d;
	LibroCalificaciones objLibro(s,d);
	LibroCalificaciones objLibro1();
	
	cout<<objLibro.obtenerNotaMaxi()<<endl;
	cout<<objLibro.obtenerReporteNotas();

	int n,r=0;
	cout<<"cuantas notas desea digitar :";
	cin>>n;
	
	while(r < n){
		int fila,columna,nota;
		cout<<"Dijite la nota del etudiante :";
		cin>>nota;
		cout<<"Dijite la fila :";
		cin>>fila;
		
		cout<<"Dijite columna :";
		cin>>columna;
		objLibro.setPos(fila,columna,nota);
		
		r++;
	}
	
	cout<<objLibro.obtenerReporteNotas();
	cout<<"la nota maxima :"<<objLibro.obtenerNotaMaxi()<<endl;
	cout<<"la nota minima :"<<objLibro.obtenerNotaMni()<<endl;
	
	

}

