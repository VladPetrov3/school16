  mov 123, R0
  system 13
  call invert
  call invert
  stop
invert:
  push r0
  in  p0,r0
  not r0
  out r0,p0
  in  p1,r0
  not r0
  out r0,p1
  in  p2,r0
  not r0
  out r0,p2
  in  p3,r0
  not r0
  out r0,p3
  in  p4,r0
  not r0
  out r0,p4
  in  p5,r0
  not r0
  out r0,p5
  in  p6,r0
  not r0
  out r0,p6
  in  p7,r0
  not r0
  out r0,p7
  pop r0
  ret


