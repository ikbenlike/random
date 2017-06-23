import sys

class VM:
    ip = 0
    dp = 0
    stack = ""
    cells = [0] * 30000
    cell_count = len(cells)

def parse(vm):
    while vm.ip < len(vm.stack):
        if vm.stack[vm.ip] == '+':
            vm.cells[vm.dp] += 1
        elif vm.stack[vm.ip] == '-':
            vm.cells[vm.dp] -= 1
        elif vm.stack[vm.ip] == '<':
            vm.dp -= 1
        elif vm.stack[vm.ip] == '>':
            vm.dp += 1
        elif vm.stack[vm.ip] == '[':
            if vm.cells[vm.dp] == 0:
                while vm.stack[vm.ip] != ']':
                    vm.ip += 1
                vm.ip += 1
            else:
                vm.ip += 1
        elif vm.stack[vm.ip] == ']':
            if vm.cells[vm.dp] != 0:
                while vm.stack[vm.ip] != '[':
                    vm.ip -= 1
                vm.ip += 1
            else:
                vm.ip += 1
        elif vm.stack[vm.ip] == ',':
            vm.cells[vm.dp] = input()[0]
        elif vm.stack[vm.ip] == '.':
            print(chr(vm.cells[vm.dp]), end="")
        else:
            vm.ip += 1
            continue
        if vm.ip >= len(vm.stack):
            exit(0)
        vm.ip += 1

def run(input_val):
    vm = VM()
    vm.stack = ">" + "+" * 87 + "."
    parse(vm)

with open(sys.argv[1], "r") as thing:
    text = thing.read()
    run(text)
