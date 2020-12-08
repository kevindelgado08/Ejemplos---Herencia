class serVivo:
    def __init__(self, resp, alim, desp):
        self.respira = resp
        self.se_alimenta = alim
        self.se_desplaza = desp

class serVivo(Ave):
    def __init__(self, resp, alim, desp, plumas):
        super(serVivo)
        sel.plumas= plumas

class serVivo(Perro):
    def __init__(self, resp, alim, desp, ladra):
        super(serVivo)
        sel.ladra= ladra
    
class serVivo(Serppiente):
    def __init__(self, resp, alim, desp, venenosa):
        super(serVivo)
        sel.venenosa= venenosa