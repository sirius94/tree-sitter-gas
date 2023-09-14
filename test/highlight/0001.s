.global _start
# <- keyword.directive
#       ^ variable

.text
# <- keyword.directive

_start:
# <- function
        mov $foo, %rbx
        # <- function.special
        #   ^ constant
        #    ^ variable
        #         ^ constant.builtin

        mov $60, %rax
        # <- function.special
        #   ^ constant
        #    ^ constant.numeric
        #        ^ constant.builtin
        
        mov $0b0, %rdi
        # <- function.special
        #   ^ constant
        #    ^ constant.numeric
        #         ^ constant.builtin

        syscall
        # <- function.special

.bss
# <- keyword.directive
        .comm foo, 128
        # <- keyword.directive
        #     ^ variable
        #          ^ constant.numeric
