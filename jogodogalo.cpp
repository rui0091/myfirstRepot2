#include <iostream>

using namespace std;

struct jogoGalo{
    char a;
    bool b = false;
};
jogoGalo jogo[3][3];

void mostrar(){
    cout << "Jogo do galo" << endl;
    cout << "   1   2   3" << endl;
    cout << "1 [" << jogo[0][0].a << "] [" << jogo[0][1].a << "] [" << jogo[0][2].a << "]" << endl;
    cout << "2 [" << jogo[1][0].a << "] [" << jogo[1][1].a << "] [" << jogo[1][2].a << "]" << endl;
    cout << "3 [" << jogo[2][0].a << "] [" << jogo[2][1].a << "] [" << jogo[2][2].a << "]" << endl;
        }
int main(){
    int coluna;
    int linha;
    char jogador;

mostrar();
    cout <<"Digite qual queres ser X ou O" << endl;
cin >> jogador;
for(int i = 0; i<=8; i++){
    cout <<"Digite a coluna que quer marcar" << endl;
cin >> coluna;
    cout <<"Digite a linha que quer marcar" << endl;
cin >> linha;

jogo[coluna-1][linha-1].a = jogador;
jogo[coluna-1][linha-1].b = true;

mostrar ();
if(jogador == 'X'){
    jogador = 'O';

}else 
jogador ='X';

}
};
