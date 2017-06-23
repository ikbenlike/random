class HashTableElem:
    key = None
    value = None

    def set(self, key : int, value):
        self.key = key
        self.value = value



class HashTable:
    size = 1000
    index = 0
    table = [[HashTableElem()] for i in range(size)]

    def hasher(self, inp : str):
        output = 0
        i = 0
        while i + 1 <= len(inp):
            output = output*17 + ord(inp[i])
            i += 1
        return output % len(self.table)

    def __hasher_nc__(inp : str):
        output = 0
        i = 0
        while i + 1 <= len(inp):
            output = output*17 + ord(inp[i])
            i += 1
        return output

    def hasher_nc(self, inp : str):
        output = 0
        i = 0
        while i + 1 <= len(inp):
            output = output*17 + ord(inp[i])
            i += 1
        return output

    def exists(self, name : str):
        c = HashTable.__hasher_nc__(name)
        n = c % self.size
        a = self.table[n]
        i = 0
        for x in a:
            if x.key == c:
                return (True, i)
            i += 1
        return (False, None)

    def set(self, name : str, val):
        e = self.exists(name)
        if e[0] == True:
            a = HashTableElem()
            a.set(self.hasher_nc(name), val)
            self.table[self.hasher(name)] += a
        else:
            self.table[self.hasher(name)][0].set(self.hasher_nc(name), val)

    def get(self, name : str):
        n = self.hasher(name)
        e = self.exists(name)
        if e[0] == True:
            return self.table[n][e[1]]
        else:
            return None
