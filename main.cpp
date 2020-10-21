#include "Engenheiro.cpp"
#include "Vendedor.cpp"


int main() {
  std::string temp;
  
  temp = "Joao Snow";
  Engenheiro eng1(temp, 35.0, 3);
  std::cout << "Nome: " << eng1.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.getProjetos() << std::endl;
  std::cout << std::endl;
  
  temp = "Daniela Targaryen";
  Engenheiro eng2(temp, 30.0, 1);
  std::cout << "Nome: " << eng2.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.getProjetos() << std::endl;  
  std::cout << std::endl;
  
  temp = "Bruno Stark";
  Engenheiro eng3(temp, 30.0, 2);
  std::cout << "Nome: " << eng3.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.getProjetos() << std::endl;  
  std::cout << std::endl;
  

  temp = "Tonho Lannister";
  Vendedor vend1(temp, 20.0, 5000.0);
  std::cout << "Nome: " << vend1.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;


  temp = "Jose Mormont";
  Vendedor vend2(temp, 25.0, 3000.0);
  std::cout << "Nome: " << vend2.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  
  temp = "Sonia Stark";
  Vendedor vend3(temp, 30.0, 4000.0);
  std::cout << "Nome: " << vend3.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}