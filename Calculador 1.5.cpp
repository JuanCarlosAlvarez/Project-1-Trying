//Empezamos
#include"iostream"
using namespace std;
int main()
{
	float calif,total,numcalif,numat,imat,i,portotal=1,califmat,totalmat,resultadomat,pordemax,promdepor,ipor=1,poreva,portotaldado,respuesta;
	
	cout<<"Indique que va a calcular:"<<endl;
	printf("\n");
	cout<<"1) Promedio de una materia"<<endl;
	cout<<"2) Promedio total de todas las materias"<<endl;
	printf("\n");
	cin>>respuesta;
	printf("\n");
	
	if (respuesta<2)
	
	{
	
	
	
	
	
	
	cout<<"Indique el numero de evaluaciones que presento"<<endl;
	printf("\n");
	cin>>numcalif;
	i=1;
	while (i<numcalif+1)
	{
		printf("\n");
		cout<<"Ingresa la nota de la evaluacion "<<i<<":"<<endl;
		printf("\n");
		cin>>calif;
		total=total+calif;
		i++;
		
	}
	printf("\n");
	cout<<"Ingresa el % total de todas las evaluaciones"<<endl;
	cout<<"(Ejemplo) 60 (Sumas todos los % )"<<endl;
	printf("\n");
	cin>>portotaldado;
	printf("\n");
	
	
	
	
	
	while (portotal<=portotaldado)
	{
	
	cout<<"Ingresa el porcentaje total de la evaluacion "<<ipor<<":"<<endl;
	cout<<"Lo que vale cada evaluacion individualmente (Ejemplo) 20% (Sin el % )"<<endl;
	printf("\n");
	cin>>poreva;
	printf("\n");
	portotal=portotal+poreva;
	ipor++;
	
	}
	
	
	pordemax=(total*100)/(numcalif*20);
	
	promdepor=(pordemax*20)/100;
	
	
	
	
	
	printf("\n");
	cout<<endl<<"Tu promedio es: "<<promdepor<<" con un "<<pordemax<<"%"<<endl;
	printf("\n");
	printf("\n");
	
	if (promdepor>=10)
	{cout<<"Aprobastes la materia"<<endl;
	printf("\n");

	}
	else
	cout<<"Reprobastes la materia"<<endl;
	printf("\n");

	
	cout<<"Calculador de porcentaje hecho por Juan"<<endl;
	printf("\n");
	
	system("pause");
	return 0;
	
}
else 
{
	
	cout<<"Indique el numero de materias"<<endl;
	printf("\n");
	cin>>numat;
	printf("\n");
	imat=1;
	while (imat<numat+1)
	{
		cout<<"Ingresa la nota de la materia "<<imat<<":"<<endl;
		printf("\n");
		cin>>califmat;
		totalmat=totalmat+califmat;
		imat++;
		printf("\n");
		
}


resultadomat=totalmat/numat;

cout<<"El promedio de todas las materias es de: "<<resultadomat<<endl;
printf("\n");
if (resultadomat>=10)
{
	cout<<"Aprobastes e año / lapso"<<endl;
	printf("\n");
}
else 
{
	cout<<"Reprobastes el año / lapso"<<endl;
	printf("\n");

}
cout<<"Calculador de porcentaje hecho por Juan"<<endl;
	printf("\n");
	
	system("pause");
	return 0;

}

}
