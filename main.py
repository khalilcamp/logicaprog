#Fazer uma lista de filmes e solicitar com posição.

#1. Lista Vazia
listaFilmes = []

#2. Adicionar 5 filmes.

for i in range(5):
  filme = input("Digite seu filme favorito")
  listaFilmes.append(filme)

#Solicita o nome de cada filme.
contador = 0
while contador<5:
  filme = input("Digite o nome de um filme:")
  listaFilmes.append(filme)
  contador += 1
#Printar todos os filmes após contar 5.
print("Lista de Filmes:")
for posicao, filme in enumerate(listaFilmes, 1):
  print(f"{posicao}, {filme}")
