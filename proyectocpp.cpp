#include<iostream>
#include<conio>
#include<string>
#include<stdio.h>

main()
{

int opc;

  cout<<"\>>MENU PRINCIPAL<<\n";
  cout<<"Actividades:";
  cout<<"1 Ingresar una nueva hora de clases\n";
  cout<<"2 Ver el horario de hoy\n";
  cout<<"3 Ver el horario de la semana\n";
  cout<<"4 Salir\n";

  cout<<"Ingrese la actividad q desea realizar: \n";
  cin>>opc;
  while (opc>4)
  {
  	cin>>opc;
  }
   switch(opc)
     {
  	case 1:
   	cout<<"Ingrese ingrese una nueva hora de clases: \n";

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

