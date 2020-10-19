#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

    private:
        double quotaMensalVendas;  

    public:

        Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas);
        ~Vendedor(){}
	    double quotaTotalAnual();
        void printSalaryInfo(double horasTrabalhadas) override;
	
};

#endif