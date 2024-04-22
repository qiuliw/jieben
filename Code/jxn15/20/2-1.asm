;1.编写程序段，将AX 寄存器中的内容以相反的顺序传送到DX寄存器中，
;并要求AX中的内容不被破坏，然后统计DX 寄存器中‘1’的个数并存入BL中。

    MOV BL,0
    PUSH AX
    MOV DX,0
    MOV CX,16
NEXT:
    SHL AX,1
    JNC L1
    INC BL
L1: RCR DX,1
    LOOP NEXT
STOP:
    POP AX
