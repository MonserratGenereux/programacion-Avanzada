#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "keyboard_row.h"

/** keyboard_row
  * Receive a array of words 
  * Returns the words that can be written with a single row in the keyboard.
  * @param:
  *   words: array of words.
  * @return:
  *   char **: words that can be written with a single row in the keyboard.
 */

char ** keyboard_row(char * words[]) {

  char row1[]={'q','w','e','r','t','y','u','i','o','p'};
  char row2[]={'a','s', 'd','f','g','h','j','k','l'};
  char row3[]={'z','x','c','v','b','n','m'};

  char ** finalWords = malloc(sizeof(char *) * 4);

  int rows[26];

  int count = 0;


  for (int i=0; i<sizeof(row1) ; i++) {
    rows[row1[i] - 'a'] = 1;

  }

  for (int i=0; i<sizeof(row2) ; i++) {
    rows[row2[i] - 'a'] = 2;
  }

  for (int i=0 ;i<sizeof(row3) ; i++) {
    rows[row3[i] - 'a'] = 3;
  }


  for (int i = 0; i < 4; i++) {
    int len = strlen(words[i]);
    int areAllEqual = 1;

    for (int j = 0; j < len - 1; j++) {

      int row = rows[words[i][j] - 'a'];
      int rowNext = rows[words[i][j+1] - 'a'];
      if(row != rowNext){
        areAllEqual = 0;
        break;
      }
    }

    if (areAllEqual) {
      finalWords[count]=words[i];
      count++;
    }
  }
for (int i = 0; i < 2; i++) {
  printf("%s\n", finalWords[i]);
}

    return finalWords;



}
