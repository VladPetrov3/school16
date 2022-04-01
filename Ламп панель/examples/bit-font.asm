system 0
mov 9, r0
mov 0, r1 ; позиция
call digit
mov 9, r0
mov 1, r1 ; позиция
call digit
mov 9, r0
mov 2, r1 ; позиция
call digit
stop
digit:
push r0
push r1
push r2
push r3
mov @font, r3
mul 6, r0
add r0, r3 ; смещение r0*6
mov 1F, r0
mov r1, pos
call do_shift
not r0
mov r0, mask
mov 1, r2  ; нач. порт
mov 6, r1
loop:
push r1
in (r2), r1
and mask, r1
movb (r3)+, r0
and FF, r0
push r1
mov pos, r1
call do_shift
pop r1
add r0, r1
out r1, (r2)
add 1, r2
pop r1
sub 1, r1
jnz loop
pop r3
pop r2
pop r1
pop r0
ret
do_shift:
cmp 0, r1
jz ready
shl 5, r0
sub 1, r1
jmp do_shift
ready:
ret
mask:
data 0
pos:
data 0
font:
data 0906;0
data 0909
data 0609
data 0206;1
data 0202
data 0202
data 010E;2
data 0601
data 0F08
data 010E;3
data 0106
data 0E01
data 0503;4
data 0F09
data 0201
data 080F;5
data 010E
data 0E01
data 0806;6
data 090E
data 0609
data 010F;7
data 0402
data 0808
data 0906;8
data 0906
data 0609
data 0906;9
data 0709
data 0601


