#include "Empregado.hpp"

// Empregado::Empregado(std::string _nome, double _salarioHora) : nome(_nome), salarioHora(_salarioHora){};

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
    double t = horasTrabalhadas;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
	return t * salarioHora;
}


double Empregado::getSalarioHora(){
    return salarioHora;
}

std::string Empregado::getNome(){
    return nome;
}