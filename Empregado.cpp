#include "Empregado.hpp"

 double Empregado::pagamentoMes(double horasTrabalhadas) {
       double total = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > PERIODO_DIARIO)
      if (horasTrabalhadas > PERIODO_DIARIO) {
        double diferencaHoras = horasTrabalhadas - PERIODO_DIARIO;
        total += diferencaHoras / 2;
      }
	  return total * salarioHora;
    }