'''
Autor: Caio Mario Zachesky Junior
Linguagem: Python
Data: 13/12/2024
Descrição: Acerte a capital do pais
Funcionalidades: main
Versão: 3.11
'''
import random#biblioteca para gerar numeros aleatorios
def main():#função principal
  r = "a"#variavel para a resposta do usuario
  pontos = 0#variavel para a pontuacao
  f = [None]*3#declarar a lista de perguntas facieis
  fr = [None]*3#declara a lista de resposta das perguntas facieis
  m = [None]*3#declara a lista de perguntas medias
  mr = [None]*3#declara a lista de respostas das perguntas medias
  d = [None]*3#declara a lista de perguntas dificeis
  dr = [None]*3#declara a lista de resposra as perguntas dificeis
  #Atribuindo as perguntas para as listas
  f[0] = "Qual e a capital do Brasil"
  f[2] = "Qual e a capital da Inglaterra"
  f[1] = "Qual e a capital dos Estados Unidos"
  m[2] = "Qual e a capital da Angola"
  m[1] = "Qual e a capital da Noruega"
  m[0] = "Qual e a capital da Suecia"
  d[2] = "Qual e a capital da Suica"
  d[1] = "Qual e a capital da Nigeria"
  d[0] = "Qual e a capital de Barbados"
  #Atribuindo as respostas para as listas
  fr[2] = "Londres"
  fr[1] = "Washington"
  fr[0] = "Brasilia"
  mr[2] = "Luanda"
  mr[1] = "Oslo"
  mr[0] = "Estocolmo"
  dr[2] = "Berna"
  dr[1] = "Abuja"
  dr[0] = "Bridgetown"
  #gerando as perguntas de forma aleatoria
  per1 = random.randint(0,2) 
  per2 = random.randint(0,2)
  per3 = random.randint(0,2)
  print("Responta com a primeira letra maiuscula")#explicando como o usuario tem que digitar para acertar
  print("Pergunta 1 :", f[per1])#mostrando a primeira pergunta
  r = input("Resposta: ")#pegando a resposta do usuario
  if(r == fr[per1]):# se r for igual a resposta correta parabens e ganha um ponto
    print("Voce a certo\n Parabens")
    pontos = pontos + 1
    print("PONTOS: ", pontos)
  else:#Caso nao perdeu
    print("Voce perdeu\nGame Over")
    
  print("Segunda pergunta: ", m[per2])#mostra pergunta dois
  r = input("Resposta: ")#pegando a resposta do jogador
  if(r == mr[per2]):#Se r for igual a resposta correta voce e Brabo e ganha mais dois pontos
    print("Caraca voce e brabo mesmo bicho")
    pontos = pontos + 2
    print("PONTOS: ", pontos)
    
  else:#Caso não gg perdeu e mostra os pontos
    print("Voce e mais ou menos\nMELHORE")
    print("PONTOS: ", pontos)

  print("Terceira pergunta: ", d[per3])#mostra terceira pergunta 
  r = input("Resposta: ")#receber a resposta do jogador
  if(r == dr[per3]):#Caso seja a resposta correta voce e um mostro e ganha mais 3 pontos
    print("O MESTRE DOS MESTRE")
    pontos = pontos + 3
    print("PONTOS: ", pontos)
  else:#Caso não perdeu e mostra os pontos
    print("Foi bem mas tinha como ir melhor\n")
    print("PONTOS: ", pontos)
  
main()#chamar funcao