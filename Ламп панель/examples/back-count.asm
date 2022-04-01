  mov 23, r0
next10:
  system 12
  sub 1, r0
  jnz next10
  system 12
  mov 23, r0
next16:
  system 13
  sub 1, r0
  jnz next16
  system 13
  stop


