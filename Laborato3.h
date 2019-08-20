#ifndef LABORATO3_H
#define LABORATO3_H
#include <iostream>
#include <sstream>
#include <string>



/*
* =====================================================================================
*
*       Filename:  LABORATO3
*
*    Description:  Loboratorio numero 3 de matrices
*
*
*        Created:  19/08/2019
*
*         Author:  Royner Zeledon roynerjzeleonc@gmail.com
*	Organization:  Universidad Nacional de Costa Rica
*
* =====================================================================================
*/


using namespace std;


const static int estudiantes = 10;
const static int examenes = 3;

class LibroCalificaciones{
	
private:
	string nombreCurso;
	int calificaciones[estudiantes][examenes];
	
	
public:
	LibroCalificaciones(){
		string nombreCurso = " ";
		for(int i = 0; i < estudiantes; i++){
			for(int j = 0; j < examenes; j++){
				calificaciones[i][j] = 100;
			}
		}
		
	}
	
	LibroCalificaciones(int a, string n){
		string nombreCurso = n;
		for(int i = 0; i < estudiantes; i++){
			for(int j = 0; j < examenes; j++){
				calificaciones[i][j] = a;
			}
		}
		
	}
	~LibroCalificaciones(){}
	
	void setPos(int f,int c,int val){
		calificaciones[f][c] = val;
	}
	int getPos(int i,int j){
		return calificaciones[i][j];
	}
	

	int obtenerNotaMni(){
		int nota = 100;
		for(int i=0; i < estudiantes; i++){
			for(int j=0; j < examenes; j++){
				if(calificaciones[i][j]<nota){
					nota = calificaciones[i][j];
					
					
				}
				
			}
		}
		return nota;
	}


	int obtenerNotaMaxi(){
		int nota = 0;
		for(int i=0; i < estudiantes; i++){
			for(int j=0; j < examenes; j++){
				if(calificaciones[i][j]>nota){
					nota = calificaciones[i][j];
				}else{
					return nota;
				}
			}
		}
	}


	int obtenerPromedio(){
		
		int sumaNotas = 0;
		for(int i; i < estudiantes; i++){
			for(int j; j < examenes; j++){
				sumaNotas = sumaNotas + calificaciones[i][j];
			}
		}
		return (sumaNotas/10)/3;
	}
	
	string obtenerReporteNotas(){
		
		stringstream s;
		for(int i=0; i<estudiantes; i++){
			s<<"Estudiante "<<i<<"   ";
			for(int j=0; j<examenes; j++){
				s<<calificaciones[i][j]<<"  ";
			}
			s<<endl;
		}
		s<<endl;
		return s.str();
	}
	
	string obtenerNotasMaxMin(){
		
		stringstream s;
		s<<"nota maxima :"<<obtenerNotaMaxi();
		s<<"nota maxima :"<<obtenerNotaMni();
		s<<endl;
		
		return s.str();
	}
	
	
};

#endif

