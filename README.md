# Lista-de-Ponteiros

Integrantes: Luís Fernando Tavares

Questão 1:

p == &i : 1

*p - *q : -2

**&p : 3

3 - *p/(*q) + 7 : 10

Questão 2:

Endereço de p :61fecc

*p+2 :7 (i+2)

**&p: 5 (i)

3**p : 15 (3*i)

**&p+4: 9 (i+5)

Questão 3:

As ilegais são:

p = i

i = (*&)j

q = *p

Questão 4:

(a): 20

(b): 29.0

(c): P

(d): e

(e): P

(f): e

(g): t

(h): 31

(i): 45

(j): 27

(l): 31

(m): 45

(n): 27

Questão 5:

Contador/Valor/Valor/Endereco/Endereco:

i = 0, vet[0] = 1.1, *(f + 0) = 1.1, &vet[0] = 61FEB4, (f + 0) = 61FEB4.

i = 1, vet[1] = 2.2, *(f + 1) = 2.2, &vet[1] = 61FEB8, (f + 1) = 61FEB8.

i = 2, vet[2] = 3.3, *(f + 2) = 3.3, &vet[2] = 61FEBC, (f + 2) = 61FEBC.

i = 3, vet[3] = 4.4, *(f + 3) = 4.4, &vet[3] = 61FEC0, (f + 3) = 61FEC0.

i = 4, vet[4] = 5.5, *(f + 4) = 5.5, &vet[4] = 61FEC4, (f + 4) = 61FEC4.

Questão 6:

Valor da posicao 3: 3,
Valor da posicao 5: 5,
Endereco da posicao 5: 61fecc,
Endereco da posicao 3: 61fec4,

Questão 7:

São validas: p = mat + 1, x = (*mat)++.

Já que em p modifica o endereco da posição 1 do vetor mat[] e o x mostra o valor da primeira posição do vetor.

Não são validas: p = mat++, p = ++mat.

Nesse caso esse tipo de notação esta tentendo incrementar o valor de mat[], porem não é possivel fazer isso em uma variavel do tipo int[4](4 bytes).

Questão 8:

O primeiro programa percore o vetor vet[] e imprime os valores de cada posição.

O segundo percore vet[] e imprime os endereços de cada posição.

Questão 9:

a) char x[4]: 4092+1 (4093), 4092+2 (4094), 4092+3 (4095).

b) int x[4]: 4092+2 (4094), 4092+4 (4096), 4092+6 (4098).

c) float x[4]: 4092+4 (4096), 4092+8 (4100), 4092+12 (4104).

d) double x[4]: 4092+8 (4100), 4092+16 (4108), 4092+24 (4116).

Questão 10:

a) char x[4]: 6422220, 6422220+1 (6422221), 6422220+2 (6422222), 6422220+3 (6422223).

b) short int x[4]: 6422216, 6422216+2 (6422218), 6422216+4 (6422220), 6422216+6 (6422222).

c) float x[4]: 6422208, 6422208+4 (6422212), 6422208+8 (6422216), 6422208+12 (6422220). 

d) double x[4]: 6422192, 6422192+8 (6422200), 6422192+16 (6422208), 6422192+24 (6422216).

Pelos resultados obtidos no codigo, os saltos da memoria batem com os resultados teoricos da questão anterior.

Questão 11:

Comandos Invalidos: aloha = value", coisas[5] = aloha, pf = value.

Comandos Validos: aloha[2] = value, scanf("%f", &aloha), printf("%f", aloha), coisas[4][4] = aloha[3], pf = aloha.

Questão 12:

Questão 13:

Questão 14:

Questão 15:

Questão 16:

A função qsort foi extremamente mais rapida de se exexutar do que a função de ordenação criada com base nela

Questão 17:

Questão 18:

Questão 19:

Questão 20:

O Coletor de lixo foi mais lento para executar do que o malloc com o free
