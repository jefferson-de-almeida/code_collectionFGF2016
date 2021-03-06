# LINGUAGENS DE PROGRAMAÇÃO LÓGICA
![Prolog](http://cdn.portableapps.com/SWI-PrologPortable_128.png)

- Introdução
	- Uma breve introdução ao cálculo de predicados
	- Uma visão geral da programação lógica
	- As origens do Prolog
	- Os elementos básicos do Prolog
	- Aplicações de programação lógica

- Linguagens de programação lógicas, também chamadas de linguagens de programação declarativas
	- Expressa programas em uma forma de lógica simbólica
	- Usa um processo de inferência lógico para produzir resultados
	- Declarativa em vez de procedural:
	- Apenas as especificações dos resultados são expressas (em vez dos procedimentos detalhados para produzi-los)

## Proposição

* Sentença lógica que pode ou não ser verdadeira
* Consiste em objetos e relacionamentos de objetos uns com os outros
	

		nasceu(ana, fortaleza)
		estuda(jose, computação)
		torce(pedro, ceara)
## Lógica simbólica

- Pode ser usada para três necessidades básicas da lógica formal:
- Expressar proposições
- Expressar os relacionamentos entre proposições
- Descrever como novas proposições podem ser inferidas a partir de outras que se assume verdadeiras
- A forma particular de lógica simbólica usada para programação lógica é chamada de cálculo de predicados de primeira ordem

## Representação de objetos

- Os objetos em proposições de programação lógica são representados por termos simples: constantes ou variáveis
- Constante: um símbolo que representa um objeto
```prolog
ana, pedro, maranguape
```

- Variável: um símbolo que pode representar objetos diferentes em momentos diferentes
- X, Cidade, Pessoa
- Diferente das variáveis em linguagens imperativas


## Termos compostos

- Proposições atômicas consistem em termos compostos
- Termos compostos: um elemento de uma relação matemática, escrito como uma notação de função matemática
- Função matemática é um mapeamento
- Pode ser representado como uma tabela

## Partes de termo composto

- Um termo composto tem duas partes
- Função: símbolo da função que nomeia a relação
- Lista ordenada de parâmetros (tupla)
	Exemplos:
```prolog
estudante(joao) 
gosta(ana, OSX)
gosta(pedro, windows) 
gosta(jose, linux)
```

## Formas de uma proposição

- Proposições podem ser definidas de duas formas:
- Fato: proposição definida como verdadeira
- Consulta: a verdade da proposição é algo que deve ser determinado
- Proposições compostas:
- Têm duas ou mais proposições atômicas
- Conectadas por operadores
```prolog

estudante(joao), gosta(joao, android)

```

**Operadores Lógicos**


|Símbolo |Conectivo | Operação Lógica |
|--------|:---------:|---------------:|
|   :-	|    IF	   |	  Implicação   |
|    ,	|    AND   | 	 Conjunção    |
|    ;	|    OR    |	   Disjunção |
|   not	|    NOT   | 	  Negação     |


## Forma clausal

#### Muitas maneiras de definir proposições com o mesmo significado

- Use uma forma padrão para proposições
- Forma clausal:

{B1 OR B2  OR … OR Bn  IF A1  AND A2  AND  … AND Am}
- Significa que todos os As são verdadeiros, então ao menos um B é verdadeiro
	- Antecedente: lado direito
	- Consequente: lado esquerdo

## Uma visão geral da programação lógica

- Semântica declarativa
- Existe uma maneira simples de determinar o significado de cada sentença
- Mais simples do que a semântica das linguagens imperativas
- A programação é não procedural
- Os programas em tais linguagens não descrevem exatamente como um resultado será computado, mas a forma do resultado

## PROLOG

- O nome vem de “PROgrammation en LOGique”

##### Principal linguagem lógica

- Criada em Universidade de Aix-Marseille/Universidade de Edimburgo

- O Prolog é uma linguagem de programação baseada em lógica de primeira ordem.

- Não é padronizada.

- Algumas implementações: SICStus Prolog, Borland Turbo Prolog, SWI-Prolog.
- Geralmente é interpretado, mas pode ser compilado.

## SWI-Prolog

- Open Source.


- Multiplataforma.


- Possui interface com as linguagens C e C++.


- [www.swi-prolog.org](www.swi-prolog.org)

## Programação em PROLOG


- Programar em Prolog envolve:

	- Declarar alguns fatos a respeito de objetos e seus relacionamentos.

	- Definir algumas regras sobre os objetos e seus relacionamentos.

	- Fazer perguntas sobre os objetos e seus relacionamentos.


## Termos


- Termo: constante, variável ou estrutura

- Constante: átomo ou inteiro

- Átomo: valor simbólico de Prolog

- Átomos consistem em:

	- uma cadeia de letras, dígitos e sublinhados que iniciam com uma letra minúscula

	- uma cadeia de quaisquer caracteres ASCII delimitados por apóstrofes

### Termos: variáveis e estruturas

- Variável: qualquer cadeia de letras, dígitos e sublinhados que iniciam com uma letra maiúscula

- Instanciação: ligação de uma variável a um valor

- Dura apenas o tempo que for preciso para satisfazer um objetivo completo

- Estrutura: representa proposição atômica
- funcao(lista de parâmetros)

- Sentenças de fatos 
    - Usadas para hipóteses

	- Cláusulas de Horn sem cabeça

```prolog
mulher(shelley). 
homem(bill). 
pai(jose, ana).
```

## Sentenças de regras

- Usadas para hipóteses

- Cláusula de Horn com cabeça

- Lado direito: antecedente (parte se)

- Pode ser um termo simples ou uma conjunção

- Lado esquerdo: consequente (parte então)

- É um termo simples

- Conjunção: contém múltiplos termos que são separados por operações E lógicas (implicada)

## Exemplos de regras
```prolog
ancestral(maria,ana):- mae(maria,ana).
```

##### **Pode usar variáveis (objetos universais) para generalizar seu significado**:

```prolog
pais(X,Y):- mae(X,Y). 
pais(X,Y):- pai(X,Y).
avos(X,Z):- pais(X,Y), pais(Y,Z). 
irmao(X,Y):- mae(M,X), mae(M,Y), pai(F,X), pai(F,Y).
```

#### **Exemplo**
```prolog
velocidade(ford,100).
velocidade(ferrari,105). 
velocidade(honda,95).
velocidade(fiat,80).
tempo(ford,20).
tempo(ferrari,21).
tempo(honda,24).
tempo(fiat,24).
distancia(X,Y) :- velocidade(X,V),tempo(X,T), Y is V * T.

? – tempo(ford, 20).
? – tempo(ferrari, 20).
? – distancia(fiat, D).
? – distancia(X, 2000).
```

## Programação em PROLOG

- Programar em Prolog envolve:
- Declarar alguns fatos a respeito de objetos e seus relacionamentos.

- Definir algumas regras sobre os objetos e seus relacionamentos.

- Fazer perguntas sobre os objetos e seus relacionamentos.
