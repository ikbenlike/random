#    a shitty script that should
#    spit out working C-files that
#    are used to test Xenon bytecodes
#    by thewatcher, GNU GPLv3

import sys

text = []
a = 0

def open_file(path):
    return open(path).read()


def parse(file_name):
    global a
    global text
    text += [open_file(file_name).split(" ")]
    b = a
    a += 1
    #print(text)
    i = 0
    for stuff in text:
        if text[b][i] == "use":
            i += 1
            parse(text[b][i].split("\n")[0])
        else if text[b][i] == 
        i += 1
    print(open_file(file_name))

parse(sys.argv[1])
