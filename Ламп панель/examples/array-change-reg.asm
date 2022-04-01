 mov @ddd, R0
loop:
 movb (r0),R1
 cmp 60, R1
 jle to-low
 or  20, R1
 jmp next
to-low:
 and DF, R1
next:
 movb R1,(R0)+
 cmpb 0,(R0)
 jnz loop
 stop
ddd:
 data "AbCdEfGh"


