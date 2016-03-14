#include "Data.h"
#include <iostream>
using std::cout;

Data::Data(int d, int m, int a) 
{
    if ( m > 0 && m <= 12 ) // validate the month
        mes = m;
    
    if ( a < 0 )
        ano = 1900;
    else
        ano = a;
   
    dia = VerificaDia(d);

}
Data::Data ( const Data &date )
{
	this->ano = date.ano;
	this->mes = date.mes;
	this->dia = date.dia;
}

ostream &operator<< (ostream &output, const Data &data)
{
	output << data.dia << "/" << data.mes << "/" << data.ano;
	return output;
}
 
int Data::getDia() const
{
		return this->dia;
}
int Data::getMes() const
{
		return this->mes;
}
int Data::getAno() const
{
		return this->ano;
}
void Data::print() const
{
   cout << dia << '/' << mes << '/' << ano;
   
}

int Data::VerificaDia(int datadeConstrucao) const
{
    static const int diasPorMes[ 13 ] = 
       { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if ( datadeConstrucao > 0 && datadeConstrucao <= diasPorMes[ mes ] )
        return datadeConstrucao;
    
    if ( mes == 2 && datadeConstrucao == 29 && ( ano % 400 == 0 ||
            ( ano % 4 == 0 && ano % 100 != 0 ) ) )
        return datadeConstrucao;
    
    cout << "Dia invalido (" << datadeConstrucao << ") configurado para 1.\n";
    return 1; 

    
}





