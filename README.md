# Lista-de-Ponteiros

Nome: Luís Fernando Tavares

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
