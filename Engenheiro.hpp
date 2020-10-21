#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
  int projetos;

  public:
  Engenheiro(std::string _nome, double _salarioHora, int _projetos){
  setNome(_nome);
  setSalarioHora(_salarioHora);
  setProjetos(_projetos);
}
   void setNome(std::string _nome){
      nome = _nome;
    }
   std::string getNome(){
      return nome;
    }

  void setProjetos(int _projetos){
    projetos = _projetos;
  }

  int getProjetos(){
      return projetos;
  }
  
  void setSalarioHora(double _salarioHora){
      salarioHora = _salarioHora;
    } 
    
  double getSalarioHora(){
      return salarioHora;
    }
	
};
