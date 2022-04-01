  mov 123, R0
  mov R0, R2
  mov 10, R1
  sub 1, R1
plus:
  add R2, R0
  sub 1, R1
  jnz plus
  stop

