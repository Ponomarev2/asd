;16.	Дан массив из 4 байт. Рассматривая его, 
; как массив из 32 бит посчитать длину самой 
; длинной последовательности нулей.
xor bx, bx
xor dx,dx
mov cx, 4
l1:
push cx   
mov cx, 8
l2:
shl [mass+bx],1
jc a
inc dl
cmp dl, count
jle next
mov count,dl
jmp next
a: 
mov dl, 0
next:
loop l2
pop cx
inc bx
loop l1

ret

mass db 00110001b, 01010100b, 00000000b, 01111010b
count db 0