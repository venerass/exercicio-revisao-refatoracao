#include "Engenheiro.hpp"


Engenheiro::Engenheiro(std::string _nome, double _salarioHora, int _projetos) {
    nome = _nome;
    salarioHora = _salarioHora;
    projetos = _projetos;
};
                
int Engenheiro::getProjetos(){
    return projetos;
}

//prints name, salary and numeber of projects
void Engenheiro::printSalaryInfo(double horasTrabalhadas){
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Projetos: " << projetos << std::endl;
}