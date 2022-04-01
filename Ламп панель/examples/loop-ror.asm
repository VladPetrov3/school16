  mov 10, r1
  in p3, r0
start:
  ror 1, r0
  out r0, p3
  sub 1, r1
  jnz start
  stop

