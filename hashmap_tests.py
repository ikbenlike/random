import hashmap

table = hashmap.HashTable()
table.set("a", 1)
table.set("b", 2)
table.set("c", 3)
print(table.get("a"))
print(table.get("b"))
print(table.get("c"))
print(table.get_index("a"))
print(table.exists("a"))
print(table.exists("d"))
