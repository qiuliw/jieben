；比较两字符串，相等BX=0，不相等DI指向不相等的字符，BX存放STR1
DATA SEGMENT
    ORG 2500H
    STR1 DB 100 DUP(?)
    ORG 1400H
    STR2 DB 100 DUP(?)
DATA ENDS
CODE SEGMENT
    ASSUME  CS:CODE,DS:DATA
START:
    MOV DX,DATA
    MOV DS,DX
    MOV ES,DX
    MOV CX,100
    LEA DI,STR1
    LEA SI,STR2
    REP CMPSB
    JZ L1;相等
    ;不相等
    DEC DI
    MOV BX,STR1
    JMP NEXT
L1:
    MOV BX,0
NEXT:
    MOV AH,4CH
    INT 21H
CODE ENDS
    END START