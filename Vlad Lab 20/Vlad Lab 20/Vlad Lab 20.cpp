// Vlad Lab 20.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main ()
{
struct employees
{
char Surname [30];
char Position [30];
int Education,Year,Salary;
};
int kol=0;
cout <<" How  many  employees : ";
cin >> kol;
employees*z=new employees[kol];
cout<< " Input  Information " << kol << "employees:\nSurname Position Education Year Salary"<<endl;
for (int i=0;i<kol;i++)
	scanf("%s %s %i %i %i",z[i].Surname,z[i].Position,&z[i].Education,&z[i].Year,&z[i].Salary);
cout<<"\n Information" << kol << "Employees: \nSurname Position Education Year Salary"<<endl;
for (int i=0;i<kol;i++)
	printf ("%s\t%s\t%i\t%i\t%i\n",z[i].Surname,z[i].Position,z[i].Education,z[i].Year,z[i].Salary);
cout<<endl<<"Who  haven't  high  education :"<<endl;
int n=0;// те кто не имеет выш образование
int W,N;// сколько их в процентах
char Nname[40];// их имена
for (int i=0; i<kol; i++)
{if (z[i].Education == 0 )
{n++;
printf("%s\t%s\t%i\t%i\t%i\n",z[i].Surname,z[i].Position,z[i].Education,z[i].Year,z[i].Salary);
}
W=(n*100)/kol;
N=W;
strcpy(Nname,z[i].Surname);}
cout<<endl<<"Quantity employees who heven't high education :"<<n<<endl;
cout<<endl<<"in % = "<<N<<endl;
cout<<endl<<"Surname:"<<Nname<<endl;
system ("pause");
return 0;
 }
