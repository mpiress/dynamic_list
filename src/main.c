#include "lista.h"

int main()
{
	Lista l;
	Item aux;

	FLVazia(&l);

	aux.val = 10;
	LInsert(&l, aux);
	aux.val = 20;
	LInsert(&l, aux);
	aux.val = 30;
	LInsert(&l, aux);

	LImprime(&l);

	aux.val = 30;
	LRemove(&l, aux);
	
	printf("\n");
	LImprime(&l);

	return 0;
}
