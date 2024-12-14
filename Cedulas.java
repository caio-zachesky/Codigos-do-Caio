/*
Autor: Caio Mario Zachesky Junior
Linguagem: Java
Data: 10/12/2024
Descrição: Cálculo para saber quantas cedulas precisa
Funcionalidades: calculo, cal, mostrar e main
Versão: 1.0
*/
import java.util.Scanner;//biblioteca para a entrada
import java.io.IOException;//biblioteca para a saíde
public class Cedulas {
  public static int calculo(int a,int b) {//função para fazer o calculo quantas notas precisa
   return b/a;  }       
  public static int cal(int a, int b){//função para atualizar cedulas
    return b%a;}
  public static void mostrar(int a, int b){//função para mostra quantas nota precisa
    System.out.printf("%d nota(s) de R$ %d,00\n", a, b);
    }
public static void main(String[] args) { // função principal 
  Scanner c = new Scanner(System.in);// criar o escaner 
  int cem = 100 , cin = 50;//costande para fazer o calculo da nota de sem//costande para nota de cinquenta
  int vinte = 20;//costande para nota de vinte 
  int dez = 10;// costande para nota de dez
  int cinco = 5;// costande para nota de cinco
  int dois = 2;// costande para nota de 2
  int din = c.nextInt(); // vareiavel para dinheiro do usuario que vai ser utilizado para fazer o converção
  int ncem = calculo(cem, din);  // variavel para receber o resultado das notas de cem
  din = cal(cem, din); // a variavel din recebe o seu ajuste
  int ncin = calculo(cin, din);  // variavel para receber o resultado das notas de cinquenta 
  din = cal(cin, din); // a variavel din recebe o seu ajuste
  int nvinte = calculo(vinte, din);  // variavel para receber o resultado das notas de vinte
  din = cal(vinte, din);  // a variavel din recebe o seu ajuste
  int ndez = calculo(dez, din); // variavel para receber o resultado das notas de dez
  din = cal(dez, din); // a variavel din recebe o seu ajuste
  int ncinco = calculo(cinco, din); // variavel para receber o resultado das notas de cinco
  din = cal(cinco, din);// a variavel din recebe o seu ajuste  
  int ndois = calculo(dois, din); // variavel para receber o resultado das notas de dois 
  din = cal(dois, din);  // a variavel din recebe o seu ajuste
 mostrar(ncem, cem);// chamado a função para mostra o resultado da converção das notas de cem reais 
 mostrar(ncin, cin);// chamado a função para mostra o resultado da converção das notas de cinquanta reais 
 mostrar(nvinte , vinte);// chamado a função para mostra o resultado da converção das notas de vinte reais 
 mostrar(ndez, dez);// chamado a função para mostra o resultado da converção das notas de dez reais 
 mostrar(ncinco, cinco);// chamado a função para mostra o resultado da converção das notas de cinco reais 
 mostrar(ndois, dois);// chamado a função para mostra o resultado da converção das notas de dois reais 
}
}