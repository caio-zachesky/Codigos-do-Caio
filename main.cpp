/*
Autor: Caio Mario Zachesky Junior
Linguagem: C++
Data: 12/12/2024
Descrição: Converter distancias
Funcionalidades: main
Versão: [1.0]
*/

#include <iostream>//biblioteca para entrada e saida 
#include <iomanip>//biblioteca para escolher o numero de casa decimais 
using namespace std;//para não precisar digitar std::
int main() {//função principal
  double calculo = 0;//variavel para calcular a convercao
  double metros = 0;//variavel de metros
  double jarda = 0;//variavel para jarda
  double km = 0;//variavel de quilometros
  double milhas = 0;//variavel de milhas
  int escola = 0;//variavel para receber a escolha do usuario
  char escolha = '\0';//variavel para a segunda escolha do usuario
  cout <<" (1) para metros/jarda "<<endl;//disser para o usuario que 1 e de metros/jarda
  cout <<" (2) para quilometros/milhas "<<endl;//disser para o usuario que 2 e para km/milhas
  cout <<"Escolha: ";
  cin >>escola;//receber a escolha do jogador
  switch (escola){
    case 1://escola for 1 
      
    cout<<"(a) de metros para jardas"<<endl;//disser para o usuario que a e metros para jardas
    cout<<"(b) de jardas para metros"<<endl;//disser para o usuario que a e jardas para metros
    cout <<"Escolha: ";
    cin >>escolha;//receber a escolha do jogador
    if(escolha == 'a'){//se for a
      cout << fixed << setprecision(3);//escolher casa decinais para 3 na hora da saida
      cout<<"digite quantos metros quer converder:";
      cin >> metros;//receber os metros
      calculo = metros*1.0936;//calculo para converter de metros para jardas
      cout<<"JARDAS: "<<calculo<<endl;//mostra o resultado
      break;//acaba o programa
    }
    else{
      cout << fixed << setprecision(3);//escolher casa decinais para 3 na hora da saida
      cout<<"digite quantas jarda quer converder:";
      cin >> jarda;//receber as jardas
      calculo = jarda*0.9144;//calculo para converter de jardas para metros
      cout<<"METROS: "<<calculo<<endl;//mostra o resultado
      break;//acaba o programa
    }
    case 2:
    cout<<"(a) de quilometros para milhas"<<endl;//disser para usuario para a quilometros para milhas
    cout<<"(b) de milhas para km"<<endl;//disser para usuario para a milhas para quilometros
    cout <<"Escolha: ";
    cin >>escolha;//receber a escolha do usuario
    if(escolha == 'a'){//se for a 
      cout << fixed << setprecision(3);//escolher casa decinais para 3 na hora da saida
      cout<<"digite quantos quilometros quer converder:";
      cin >> km;//receber os quilometros
      calculo = km*0.6213;//calculo do quilometros para milhas
      cout<<"MILHAS:"<<calculo<<endl;//mostra o resultado
      break;//acaba o programa
    }
    else{
      cout << fixed << setprecision(3);//escolher casa decinais para 3 na hora da saida
      cout<<"digite quantas milhas quer converder:";
      cin >> milhas;//receber a milhas
      calculo = milhas*1.6093;//calculo do milhas para quilometros
      cout<<"QUILOMETROS: "<<calculo<<endl;//mostra o resultado
       break;//acaba o programa
    }
  }
  return 0;
}