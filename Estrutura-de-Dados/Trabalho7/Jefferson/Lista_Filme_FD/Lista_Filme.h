#define TAM 40
struct lista{
	char nome[TAM];
	char protagonista[TAM];
	int ano;
	float nota;
	struct lista *prox;

};

typedef struct lista Lista;

Lista *Op_Menu(Lista *li);

Lista *Cria_Lista();

Lista *Insere(Lista *l);

void Imprime(Lista *l);

void Remove(Lista *l,int x);

void Separar();




