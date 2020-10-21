#include <string>
#include "Empregado.hpp"
#define MESES_DO_ANO 12

class Vendedor : public Empregado {
  private:
    double quotaMensalVendas; 

  public:
  Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas){
   setNome(_nome);
   setSalarioHora(_salarioHora);
   setquotaMensalVendas(_quotaMensalVendas);
  }
    double quotaTotalAnual(){
        	return getquotaMensalVendas() * MESES_DO_ANO;
    }

    void setquotaMensalVendas(double _quotaMensalVendas){
        	quotaMensalVendas = _quotaMensalVendas;
    }
    double getquotaMensalVendas(){
        return quotaMensalVendas;
    }
   void setNome(std::string _nome){
      nome = _nome;
    }
   std::string getNome(){
      return nome;
    }
  void setSalarioHora(double _salarioHora){
      salarioHora = _salarioHora;
    } 
    
  double getSalarioHora(){
      return salarioHora;
    }
};