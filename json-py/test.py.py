import parser

with open("test.json") as f:
    text = f.read()
    print(len(text))
    p = parser.Parser(text)
    p.parse()

    i = 0
    for x in p.tokens:
        print(p.text[x.start:x.end] + " :: " + str(len(p.text[x.start:x.end])))
