#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];

void insertHashTable() {
    int key,index,i,flag=0,hkey;
    printf("\nenter a value to insert into hash table\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++) {

      index=(hkey+i)%TABLE_SIZE;

      if(hashTable[index] == NULL) {
        hashTable[index]=key;
         break;
      }
    }

    if(i == TABLE_SIZE){
        printf("\nelement cannot be inserted\n");
    }
}

int main() {
    int size = TABLE_SIZE;
    char ch;
    printf("Size of hash table = %d\n", size);
    while(1) {
        insertHashTable();
        printf("Do you want to stop? (Y/N)");
        scanf("%c", &ch);
        if(ch == 'Y') {
            break;
        }
    }
}

