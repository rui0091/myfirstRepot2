#include <iostream>

using namespace std;

struct jogoGalo{
    char a;
    bool b = false;
};

jogoGalo jogo[3][3];  //array criado por minha pessoa

void mostrar(){
    cout << "Jogo do galo" << endl;
    cout << "   1   2   3" << endl;
    cout << "1 [" << jogo[0][0].a << "] [" << jogo[0][1].a << "] [" << jogo[0][2].a << "]" << endl;
    cout << "2 [" << jogo[1][0].a << "] [" << jogo[1][1].a << "] [" << jogo[1][2].a << "]" << endl;    //mostrar a tabela
    cout << "3 [" << jogo[2][0].a << "] [" << jogo[2][1].a << "] [" << jogo[2][2].a << "]" << endl;
        }

        int main(){
    int coluna;
    int linha;
    char jogador;

mostrar();  //MOSTRA A FUNÇÃO
    cout <<"Digite qual queres ser X ou O" << endl;
cin >> jogador;
for(int i = 0; i<=8; i++){       //mostrar no terminal qual coluna e sua respetiva linha
    cout <<"Digite a coluna que quer marcar" << endl;
cin >> coluna;
    cout <<"Digite a linha que quer marcar" << endl;
cin >> linha;

jogo[coluna-1][linha-1].a = jogador; //vai pegar no array vai meter a jogada, o -1 significa que o jogador mete de 1 a 3 o array so açeita de 02 tem que tirar 1.
jogo[coluna-1][linha-1].b = true;    // esse irá dizer que está ocupado

mostrar ();
if(jogador == 'X'){   //trocando com o X e o 0 
    jogador = 'O';

}else 
jogador ='X';

}
};
