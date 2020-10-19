#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    
    double salarioHora;  
    std::string nome;

  public:

    virtual ~Empregado(){};
    double pagamentoMes(double horasTrabalhadas);
    double getSalarioHora();
    std::string getNome();
    virtual void printSalaryInfo(double horasTrabalhadas) = 0;

};

#endif