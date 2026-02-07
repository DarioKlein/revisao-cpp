#include<iostream>
#include <cmath>
using namespace std;

void exercicio1() {
    float salarios[50];

    double impostoTotal = 0;
    double salarioFinalTotal = 0;

    for (int i = 0; i < 50; i++) {
        cout << "Entre com o salario do " << i + 1 << " funcionario: ";
        cin >> salarios[i];

        impostoTotal += salarios[i] * 0.3;
        salarioFinalTotal += salarios[i] * 1.16;

        cout << "Salario final: R$ " << salarios[i] * 1.16 - salarios[i] * 0.3 << endl;
        cout << "Imposto pago: R$ " << salarios[i] * 0.3 << endl;
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
    cout << "Percentual de numeros maiores que 100: " << qtdNumeros100 / c * 100 << "%" << endl;
    cout << "Media dos numeros pares: " << sPar / qtdNumerosPar << endl;
    cout << "Soma dos impares: " << sImpar << endl;
}

void exercicio6() {
    string vNome[5];
    double vCons[5];

    double s = 0;
    int c = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome do morador: ";
        cin >> vNome[i];

        cout << "\nDigite o valor do consumo de agua em mts cubicos: ";
        cin >> vCons[i];
    }


    cout << "Moradores que consumiram mais de 30mts cubicos: " << endl;
    for (int i = 0; i < 5; i++) {
        if (vCons[i] > 30) {
            cout << vNome[i] << endl;
        }

        if (vCons[i] < 100) {
            s += vCons[i];
            c++;
        }
    }

    cout << "A media de consumo dos moradores que consumiram menos de 100mts: " << s / c << endl;

    for (int i = 0; i < 5; i++) {
        int chave = vCons[i];
        int j = i - 1;

        while (j >= 0 && vCons[j] < chave) {
            vCons[j + 1] = vCons[j];
            j--;
        }
        vCons[j + 1] = chave;
    }

    cout << "Ordem decrescente" << endl;
    cout << "================================" << endl;

    for (int i = 0; i < 5; i++) {
        cout << vCons[i] << endl;
    }
}

void exercicio7() {
    for (int i = 1000; i <= 2000; i++) {
        if (i % 11 == 5) {
            cout << i << endl;
        }
    }
}

void exercicio8() {
    int m[4][4];

    double sImpar = 0;
    double sPar = 0;
    int qtdPar = 0;
    int qtdMenorQue100 = 0;
    double somaColuna[4];
    double somaLinha[4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite um valor" << endl;
            cin >> m[i][j];

            if (m[i][j] % 2 != 0) {
                sImpar += m[i][j];
            }

            if (m[i][j] < 100) {
                qtdMenorQue100++;
            }

            if (m[i][j] % 2 == 0 && m[i][j] > 30) {
                sPar += m[i][j];
                qtdPar++;
            }
        }
    }

    int maiorValor = m[0][0];
    int menorValor = m[0][0];

    for (int i = 0; i < 4; i++) {
        somaLinha[i] = 0;
        somaColuna[i] = 0;
        for (int j = 0; j < 4; j++) {
            if (m[i][j] > maiorValor) {
                maiorValor = m[i][j];
            }

            if (m[i][j] < menorValor) {
                menorValor = m[i][j];
            }
            somaLinha[i] += m[i][j];
            somaColuna[i] += m[j][i];
        }
    }

    cout << "=============================" << endl;
    cout << "Soma dos valores impares da matriz: " << sImpar << endl;
    cout << "=============================" << endl;
    cout << "Quantidade de elementos que 100: " << qtdMenorQue100 << endl;
    cout << "=============================" << endl;
    cout << "Media dos valores pares maiores que 30: " << sPar / qtdPar << endl;


    for (int i = 0; i < 4; i++) {
        cout << "=============================" << endl;
        cout << "Soma coluna " << i + 1 << ": " << somaColuna[i] << endl;
        cout << "Media da linha " << i + 1 << ": " << somaLinha[i] / 4 << endl;
    }

    cout << "=============================" << endl;
    cout << "Maior valor armazenado: " << maiorValor << endl;
    cout << "=============================" << endl;
    cout << "Menor valor armazenado: " << menorValor << endl;
}

void exercicio9() {
    int n;
    double c = 0;
    double sPar = 0;
    double sImpar = 0;
    int qtdImpar = 0;
    double qtdNumeroMenorQue300 = 0;
    double soma25 = 0;
    int qtdMaior25 = 0;

    while (true) {
        cout << "Digite 0 para encerrar a sequencia" << endl;
        cout << "Digite um numero:";
        cin >> n;

        if (n == 0) {
            break;
        }

        if (n % 2 == 0) {
            sPar += n;
        }

        if (n % 2 != 0) {
            sImpar += n;
            qtdImpar++;
        }

        if (n < 300) {
            qtdNumeroMenorQue300++;
        }

        if (n > 25) {
            soma25 += n;
            qtdMaior25++;
        }

        c++;
    }

    cout << "Soma dos numeros pares: " << sPar << endl;
    cout << "Media dos impares: " << sImpar / qtdImpar << endl;
    cout << "Percentual dos numeros menores que 300: " << qtdNumeroMenorQue300 / c * 100 << "%" << endl;
    cout << "Media dos numeros maiores que 25: " << soma25 / qtdMaior25 << endl;
}

void exercicio10() {
    int n[40];

    for (int i = 0; i < 40; i++) {
        cout << "Digite um numero: ";
        cin >> n[i];

        if (i > 0) {
            for (int j = 0; j < i; j++) {
                if (n[i] == n[j]) {
                    cout << "O numero digitado ja existe digite outro" << endl;
                    i--;
                }
            }
        }
    }

    int num;

    int vCont[40];

    for (int i = 0; i < 40; i++) {
        vCont[i] = 0;
    }

    while (true) {
        cout << "Digite zero para encerrar o programa" << endl;
        cout << "Digite um numero: " << endl;
        cin >> num;

        if (num == 0) {
            break;
        }

        for (int i = 0; i < 40; i++) {
            if (num == n[i]) {
                vCont[i]++;
            }
        }

        for (int i = 0; i < 40; i++) {
            cout << "O numero " << n[i] << "foi digitado: " << vCont[i] << "vezes" << endl;
        }
    }
}

void exercicio11() {
    int p[5][5];
    bool ehSimetrica = true;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Digite um numero: ";
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (p[i][j] != p[j][i]) {
                ehSimetrica = false;
            }
        }
    }

    if (ehSimetrica == false) {
        cout << "A matriz nao e simetrica";
    } else {
        cout << "A matriz e simetrica";
    }
}

void exercicio12() {
    double d[2][2];

    double sDigPrinc = 0;
    int c = 0;

    double sDiagSecundaria = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Digite um numero: ";
            cin >> d[i][j];

            if (i == j) {
                sDigPrinc += d[i][j];
                c++;
            }

            if (i + j == 1) {
                sDiagSecundaria += d[i][j];
            }
        }
    }

    cout << "Media diagonal principal: " << sDigPrinc / c << endl;
    cout << "Soma diagonal secundaria: " << sDiagSecundaria << endl;
}

void exercicio13() {
    struct atleta {
        string nome;
        double tempo;
        double pontos;
    };

    atleta a;

    cout << "Digite o nome do atleta: " << endl;
    cin >> a.nome;

    cout << "Digite o tempo do atleta em segundos: " << endl;
    cin >> a.tempo;

    if (a.tempo < 10) {
        a.pontos = 100;
    } else if (a.tempo >= 10 && a.tempo <= 13) {
        a.pontos = 70;
    } else {
        a.pontos = 40;
    }

    cout << "A pontuacao de " << a.nome << " foi de: " << a.pontos << " pontos" << endl;
}

void exercicio14() {
    double sequencia1 = 1.0;
    double denominador = 2;

    for (int i = 0; i < 30; i++) {
        if (i % 2 == 0) {
            sequencia1 -= 1.0 / denominador;
        } else {
            sequencia1 += 1.0 / denominador;
        }
        denominador += 2.0;
    }

    double sequencia2 = 63;
    double numerador = 61;
    double denominador2 = 1;

    for (int i = 0; i < 30; i++) {
        sequencia2 += numerador / denominador2;
        denominador2++;
        numerador -= 2;
    }

    double sequencia3 = 0;
    double numerador3 = 480;
    double denominador3 = 10;

    for (int i = 0; i < 30; i++) {
        if (i % 2 == 0) {
            sequencia3 += numerador3 / denominador3;
        } else {
            sequencia3 -= numerador3 / denominador3;
        }

        numerador3 -= 5;
        denominador3++;
    }

    cout << "Resultado sequencia 1: " << sequencia1 << endl;
    cout << "Resultado sequencia 2: " << sequencia2 << endl;
    cout << "Resultado sequencia 3: " << sequencia3 << endl;
}

void exercicio15() {
    int m;
    int n;
    int sImpar = 0;

    int menorNumero = 0;
    int maiorNumero = 0;

    cout << "Digite o numero M: " << endl;
    cin >> m;

    cout << "Digite o numero N: " << endl;
    cin >> n;

    if (m > n) {
        maiorNumero = m;
        menorNumero = n;
    } else {
        menorNumero = m;
        maiorNumero = n;
    }

    for (int i = menorNumero + 1; i < maiorNumero; i++) {
        if (i % 2 != 0) {
            sImpar += i;
        }
    }

    cout << "\nA soma dos impares entre " << menorNumero << " e " << maiorNumero << " e: " << sImpar << endl;
}


int main() {
    int n;

    while (true) {
        cout << "\nDigite o numero 0 para encerrar o programa" << endl;
        cout << "\nDigite o exercicio desejado: " << endl;
        cin >> n;

        if (n == 0) {
            cout << "\nPrograma finalizado!";
            break;
        }

        switch (n) {
            case 1: exercicio1();
                break;
            case 2: exercicio2();
                break;
            case 3: exercicio3();
                break;
            case 4: exercicio4();
                break;
            case 5: exercicio5();
                break;
            case 6: exercicio6();
                break;
            case 7: exercicio7();
                break;
            case 8: exercicio8();
                break;
            case 9: exercicio9();
                break;
            case 10: exercicio10();
                break;
            case 11: exercicio11();
                break;
            case 12: exercicio12();
                break;
            case 13: exercicio13();
                break;
            case 14: exercicio14();
                break;
            case 15: exercicio15();
                break;
            default: cout << "\nOpcao invalida! Tente de 1 a 15 ou 0 para sair." << endl;
                break;
        }
    }
}
