class vehiculo:
    def __init__(self, comb, pas, ruedas):
        self.combustible = comb
        self.pasajeros = pas
        self.ruedas= ruedas

class vehiculo(Camion):
    def __init__(self, comb, pas, ruedas, carga):
        super(vehiculo)
        sel.carga= carga

class vehiculo(Automovil):
    def __init__(self, comb, pas, ruedas, convertible):
        super(vehiculo)
        sel.convertible= convertible
    
class vehiculo(Motocicleta):
    def __init__(self, comb, pas, ruedas, pistera):
        super(vehiculo)
        sel.pistera = pistera