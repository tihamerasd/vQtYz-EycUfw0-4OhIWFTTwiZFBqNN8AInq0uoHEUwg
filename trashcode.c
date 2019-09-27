/*
┌─[tihi][tihi-artix][~/avatao]
└─▪ gcc ./random.c -o random.o
./random.c:4:14: warning: initialization of ‘char *’ from ‘int’ makes pointe-conversion]
    4 | char* ca1l = (((49 ^ '1') << 24) | (0 << 16) | (0x00 << 8) | '\x06')
      |              ^
./random.c: In function ‘ca11’:
./random.c:7:50: warning: comparison between pointer and integer
    7 |    if ( (!(1>  fprintf(call, "\x3f"))) && (--ca1l>= printf("%c", 63)
      |                                                  ^~
┌─[tihi][tihi-artix][~/avatao]
└─▪ ./random.o 
??????????!
┌─[tihi][tihi-artix][~/avatao]
└─▪ nano random.c
┌─[tihi][tihi-artix][~/avatao]
└─▪ 
*/

#include <stdio.h>
#define call stdout

char* ca1l = (((49 ^ '1') << 24) | (0 << 16) | (0x00 << 8) | '\x06');

void __attribute__ ((constructor)) ca11(void* cal1){
   if ( (!(1>  fprintf(call, "\x3f"))) && (--ca1l>= printf("%c", 63)+1) || 0)
   __asm__("call ca11;");
}

void main(){
    puts("\x21" );
}
