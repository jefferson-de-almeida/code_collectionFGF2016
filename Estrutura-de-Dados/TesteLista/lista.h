struct no{
	int dado;
	struct no *prox, *ant;
};
typedef struct no Lista;

Lista * crialista();

Lista * insere(Lista *l,int x);

Lista * retira(Lista *l,int valor);

void imprime(Lista *l);

Lista * imprimeinvertido(Lista *l);

Lista * busca(Lista *l,int valor);

