typedef struct dictElement{
	char *key;
	void *value;
}DictElement;

typedef struct dict{
	DictElement *element;
	int size;
}Dict;

Dict * initDictionary(unsigned int,int *);

void upsertDictionary(Dict *, char *, void *, int *);