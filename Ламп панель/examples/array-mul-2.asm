 mov @ddd, R0
loop:
 mov (r0),R1
 mul 2, R1
 mov R1,(R0)+
 cmp 0,(R0)
 jnz loop
 stop
ddd:
 data 1213
 data 1415
 data 1617


