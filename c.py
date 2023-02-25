import json

def busca_binaria(lista, media):
    l = 0
    r = len(lista)
    while l <= r:
        pivo = (l + r) // 2
        posicao_valor = -1
        if lista[pivo] > media:
            posicao_valor = pivo
            r = pivo-1
        else:
            l = pivo + 1
    return posicao_valor    

#usamos o modulo nativo do python, json, para lidar com o arquivo json que obtivemos
f = open('dados.json')
#a lista valores armazenara os valores do que queremos
valores = []
media = 0
dados = json.load(f)
for numeros in dados:
    #percorremos o json que salvamos em dados para extrair os valores
    #para satisfazer as restricoes da tarefa, adicionamos um condicional para armazenar apenas os valores diferentes de 0
    if numeros['valor'] != 0:
        valores.append(numeros['valor'])
        media = media + numeros['valor']

#a media sera a soma acumulada dos valores validos - isto eh, diferentes de zero - 
# dividida pela quantidade valores, que sera o tamanho dessa lista
media = media/len(valores)
valores.sort()

for valor in valores:
    print(valor)
#ordenando a lista, podemos facilmente obter o maior e o menor valor do mes. como a tarefa nao exige que sejamos capazes
#de associar cada valor ao dia em que ele foi obtido, ordenar a lista nao compromete a tarefa, nesse caso.
cont = 0
menor_valor = valores[0]
maior_valor = valores[len(valores)-1]

#como temos a nossa lista ordenada, podemos utilizar uma busca binaria para achar o menor valor que seja maior ou igual 
#a media. com a posicao dele, sabemos que todos os valores dali em diante sao maiores do que a media. se nenhum valor exceder
#a media, retornamos -1.
cont = 0
temp = busca_binaria(valores, media)
if(temp != -1):
    cont = len(valores)-temp
print(f'O menor valor é: {menor_valor}')
print(f'O maior valor é: {maior_valor}')
print(f'Em {cont} dias a média mensal {media} foi excedida')