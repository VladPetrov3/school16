  jmp decode
main:
  data ba6b
  data ba98
  data 27a8
  data 4444
decode:
  mov @main,r0
  mov 4,r1
loop:
  xor bbbb,(r0)+
  sub 1, r1
  jnz loop
  jmp main

