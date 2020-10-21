#ifndef EMPREGADO_H
#define EMPREGADO_H
#define PERIODO_DIARIO 8

#include <iostream>
#include <string>

class Empregado {
	
  private:
   double horasTrabalhadas;
    
  public: 
    virtual double pagamentoMes(double horasTrabalhadas);
    double salarioHora; 
    std::string nome;   

};

#endif