; (С) Е.А. Еремин, 2010
  mov 8,R3
  mov @array,R0
  system 5
L:
beg_sdvig:
  mov 7,R0
  mov @array,R1
  mov R1,R2
  push (R2)+
loop:
  mov (R2)+,(R1)+
  sub 1,R0
  jg loop
  pop (R1)
end_sdvig:
  mov @array,R0
  system 5
  sub 1,R3
  jg L
  stop
array:
data ffff
data 4002
data 2004
data 1008
data 0810
data 0420
data 0240
data 0180


