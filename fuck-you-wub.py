class sys:
    def println(self, stuff):
        print(str(stuff))

class Heart:
    state = "nonexistant"

System = sys()
heart = Heart()

heart.state = "nonexistant"
System.println(heart.state)
