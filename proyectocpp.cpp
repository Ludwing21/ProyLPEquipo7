#include<iostream>
#include<conio>
#include<fstream>
#include<stdlib>
#include<time>


main()
{
ofstream archivo("C:\Users\MONICA\Documents\ProyLPEquipo7\horario.txt");
	archivo<<"\n";
	archivo.close();
int opc;
char materia[20],semestre[20],dia[20],hinicio[20],hfin[20];

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

      	cout<<"Ingrese los siguientes parametors:\n";
      	cout<<"Nombre de la materia a agregar\n";
      	cin>>materia;

      	cout<<"Nivel del semestre\n";
      	cin>>semestre;

      	cout<<"Dia de la semana\n";
         cin>>dia;


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

