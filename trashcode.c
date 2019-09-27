#include <stdio.h>

char* x = ((49 ^ '1') << 24) | (0 << 16) | (0x00 << 8) | '\x04';

void __attribute__ ((constructor)) never_called(void* notimplemented){
   if ( !(1>  fprintf(stdout, "\x3f")) && x-->= printf("%c", 63) ) 
   __asm__("call never_called;");
}

void main(){
    puts("\x21" );
}
