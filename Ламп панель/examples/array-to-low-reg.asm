 mov @ddd, R0
loop:
 movb (R0),R1
 or  20,R1
 movb R1,(R0)+
 cmpb 0,(R0)
 jnz loop
 stop
ddd:
 data "ABCDEFGH"


