#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//classe jogo
class JogoAdivinhacao {
    //variáveis
    private:
    int numeroSecreto;
    int tentativas;
    //construtor personalizado
    public:
    JogoAdivinhacao() {
        //contador randômico
        srand(time(0));
        numeroSecreto = rand() % 100 +1;
        tentativas = 0;
}
    //método
    void jogar() {
        //entrada do while (condicionais)
        int palpite;
        do {
            cout << "Digite um número entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite > numeroSecreto) {
                cout << "O número secreto é menor!" << endl;
                } else if (palpite < numeroSecreto) {
                cout << "O número secreto é maior!" << endl;
                } else {
                cout << "Parabéns, você acertou o número em "
                << tentativas << " tentativas!" << endl;
                }
                //repetir instruções até o usuário acertar o número secreto
        } while (palpite != numeroSecreto);
        }
    };
    //programa principal
    int main() {
        JogoAdivinhacao jogo;
        jogo.jogar();
        return 0;
    }
