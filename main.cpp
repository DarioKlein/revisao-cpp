#include<iostream>
#include <cmath>
using namespace std;

void exercicio1() {
    float salarios[5];

    double impostoTotal = 0;
    double salarioFinalTotal = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Entre com o salario do " << i + 1 << " funcionario: ";
        cin >> salarios[i];

        double salarioComGratificacao = salarios[i] * 1.16;
        double imposto = salarioComGratificacao * 0.3;

        impostoTotal += imposto;
        salarioFinalTotal += salarioComGratificacao - imposto;

        cout << "Salario final: R$ " << salarioComGratificacao - imposto << endl;
        cout << "Imposto pago: R$ " << imposto << endl;
    }

    cout << "Valor do salario final: R$ " << salarioFinalTotal << endl;
    cout << "Total de imposto pago: R$" << impostoTotal << endl;
}

void exercicio2() {
    int n;
    float c = 0;
    float s = 0;

    cout << "Digite a quantidade de idades desejada: ";
    cin >> n;

    float idades[n];

    for (int i = 0; i < n; i++) {
        cout << "Entre com o idade da pessoa " << i + 1 << ": ";
        cin >> idades[i];

        s += idades[i];

        c++;
    }

    cout << "A media das idades e de: " << s / c << " anos" << endl;
}

void exercicio3() {
    int numerador = 3;
    int expoente = 1;
    int denominador = 99;

    double soma = 0.0;

    for (int i = 0; i < 99; i++) {
        double termo = pow(numerador, expoente) / denominador;

        if (i % 2 == 0) {
            soma += termo;
        } else {
            soma -= termo;
        }

        cout << soma << endl;

        expoente++;
        denominador--;
    }
}

void exercicio4() {
    float cateto1;
    float cateto2;
    float areaTriangulo = 0;

    cout << "Entre com o numero de cateto 1: ";
    cin >> cateto1;

    cout << "Entre com o numero de cateto 2: ";
    cin >> cateto2;

    while (cateto1 <= 0 || cateto2 <= 0) {
        cout << "Nenhum dos catetos pode ser <= 0" << endl;

        cout << "\nDigite o numero de cateto 1: ";
        cin >> cateto1;

        cout << "Digite o numero de cateto 2: ";
        cin >> cateto2;
    }

    areaTriangulo = cateto1 * cateto2 / 2;
    cout << "Area do triangulo: " << areaTriangulo << endl;
}

void exercicio5() {
    int n;
    float soma = 0;
    float cNumeros300 = 0;
    float c = 0;
    float qtdNumeros100 = 0;
    float sPar = 0;
    float qtdNumerosPar = 0;
    float sImpar = 0;


    while (true) {
        cout << "Digite 0 para encerrar o programa" << endl;
        cout << "\nEntre com o numero de n: ";
        cin >> n;

        if (n == 0) {
            break;
        }

        if (n < 300) {
            soma += n;
            cNumeros300++;
        }

        if (n > 100) {
            qtdNumeros100++;
        }

        if (n % 2 == 0) {
            sPar += n;
            qtdNumerosPar++;
        }

        if (n % 2 != 0) {
            sImpar += n;
        }

        c++;
    }

    cout << "Media dos numeros < 300: " << soma / cNumeros300 << endl;
    cout << "Percentual de numeros maiores que 100: " << qtdNumeros100 / c * 100 << "%"  << endl;
    cout << "Media dos numeros pares: " << sPar / qtdNumerosPar << endl;
    cout << "Soma dos impares: " << sImpar << endl;
}

int main() {
    exercicio5();
}
