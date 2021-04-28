.text
.globl _procedure
_procedure:
    sub $48, %edi // convert 1st number character code to number
    sub $48, %esi // convert 2nd number character code to number
    mov %edi, %eax // move 1st number to return register eax
    add %esi, %eax // add the 2nd number to return register eax
    ret