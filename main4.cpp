#include <iostream>
#include <iomanip>  // Para manipular a precisão do output

using namespace std;

int main() {
    // Valores de faturamento por estado
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    // Cálculo do faturamento total
    double faturamento_total = sp + rj + mg + es + outros;

    // Cálculo dos percentuais de representação
    double percentual_sp = (sp / faturamento_total) * 100;
    double percentual_rj = (rj / faturamento_total) * 100;
    double percentual_mg = (mg / faturamento_total) * 100;
    double percentual_es = (es / faturamento_total) * 100;
    double percentual_outros = (outros / faturamento_total) * 100;

    // Exibição dos resultados
    cout << std::fixed << std::setprecision(2);  // Definir precisão de 2 casas decimais
    cout << "Percentual de representacao por estado:" << endl;
    cout << "SP: " << percentual_sp << "%" << endl;
    cout << "RJ: " << percentual_rj << "%" << endl;
    cout << "MG: " << percentual_mg << "%" << endl;
    cout << "ES: " << percentual_es << "%" << endl;
    cout << "Outros: " << percentual_outros << "%" << endl;

    return 0;
}

