#include <stdlib.h>
#include <stdio.h>
#include "dict.h"

Dict * initDirectory(unsigned int size, int *errorCode){
	Dict *newDict;
	newDict = (Dict *)calloc(1,sizeof(Dict));
	if(newDict ==NULL){
		*errorCode=100;
		return NULL;
	}
	newDict-> size =size;
	newDict-> element = (DictElement *)calloc(size,sizeof(DictElement));
	if (newDict->element==NULL){
		*errorCode=200;
		return NULL;
	}
	*errorCode=0;
	return newDict;
}
static unsigned hash(char *s, unsigned int size){
	unsigned hashval;
	for (hashval = 0; *s!='\0'; s++){
		hashval=*s +31*hashval;
		return hashval % size;
	}
}
	void upsertDictionary(Dict *dictionary, char *key, void *value, int *errorCode){
		if (dictionary==NULL){
			*errorCode=100;
			return;
		}
		if (dictionary->element==NULL){
			*errorCode=100;
			return;
		}
		if (key==NULL){
			*errorCode=100;
			return;
		}
		if (value==NULL){
			*errorCode=100;
			return;
		}
		int index = hash(key,dictionary->size);
		dictionary->element[index].key = key;
		dictionary->element[index].value = value;
		*errorCode = 0;
	}
