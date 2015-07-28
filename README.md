# ProyLPEquipo7
Horario de clases
#include<iostream>
#include<conio>
#include<fstream>
#include<stdlib>
#include<time>

main()
{
<<<<<<< HEAD
   cout<<"------ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO------"<<'\n';
   cout<<"                 ------FIE------"<<'\n';
   cout<<"--INGENIERIA ELECTRONICA EN CONTROL Y REDES INDUSTRIALES--"<<'\n';
   cout<<"         ------LENGUAJE DE PROGRAMACION------"<<'\n';
   cout<<"----PROGRAMA PARA TRANSFORMACIONES EN CUALQUIER BASE----"<<'\n';
   cout<<"BIENVENIDO AL PROGRAMA"<<'\n';
   cout<<'\n';
   cout<<'\n';
 ofstream archivo("C:\Users\LUDWING\Documents\GitHub\ProyLPEquipo7\horario.txt");
	archivo<<"\n";
	archivo.close();
=======

>>>>>>> parent of 1a08b72... caratula
int opc;
char materia[20],semestre[20],dia[20],hinicio[20],hfin[20],A[100],B[100];

  cout<<"\>>MENU PRINCIPAL<<\n";
  cout<<"Actividades:\n";
  cout<<"1 Ingresar una nueva hora de clases\n";
  cout<<"2 Ver el horario de hoy\n";
  cout<<"3 Ver el horario de la semana\n";
  cout<<"4 Salir\n";

  cout<<"Ingrese la actividad q desea realizar: \n";
  cin>>opc;
  while (opc>4)
  {
   cout<< "Ingrese una opcion en el intervalo del menu: \n" ;
  	cin>>opc;
  }
   switch(opc)
     {
  	case 1:
              struct datos
          {
          char materia[20],semestre[20],dia[20],hinicio[20],hfin[20];

          }

          ifstream archivo("C:\Users\LUDWING\Documents\GitHub\ProyLPEquipo7\horario.txt",ios::out);
				while(!archivo.eof())
				{
            archivo.get(materia);
            archivo.get(semestre);
            archivo.get(dia);
            archivo.get(hinicio);
            archivo.get(hfin);
            cout<<"Ingrese los siguientes parametors:\n";
   		cout<<"Dia de la semana\n";
         cin>>dia;
         cout<<"Ingrese la hora que va a dictar la clase\n";
      	cin>>hinicio;
   		 cout<<"Ingrese la hora que va a terminar la clase\n";
      	cin>>hfin;

      	cout<<"Nombre de la materia a agregar\n";
      	cin>>materia;

      	cout<<"Nivel del semestre\n";
      	cin>>semestre;
            }
					archivo.close();


      break ;
   case 2:
      cout<<"El horario de el dia d hoy: \n";



      break ;
   case 3:

      break ;
   case 4:
   	cout<<"saliendo: \n";

      break ;

     }



getch();
}
