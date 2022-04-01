 mov 1234, R0
 mov 10, R1
 call divMod
 stop
divMod:
 push R2
 mov R0, R2
 div R1, R0
 mul R0, R1
 sub R1, R2
 mov R2, R1
 pop R2
 ret


