class vehiculo
{
private:
    int combustible;
    int pasajeros;
    int ruedas;

public:
    vehiculo(int comb, int pas, int ruedas){
        combustible = comb;
        pasajeros = pas;
        ruedas = ruedas;
    }
    
};

class Camion : public vehiculo
{
protected:
    int carga;

public:
    Camion(int comb, int pas, int ruedas, int carga) : vehiculo(comb,pas,ruedas){
        this->carga = carga;
    }
};

class Automovil : public vehiculo
{
protected:
    int convertible;

public:
    Automovil(int comb, int pas, int ruedas, int convertible) : vehiculo(comb,pas,ruedas){
        this->convertible = convertible;
    }
};

class Motocicleta : public vehiculo
{
protected:
    int pistera;

public:
    Motocicleta(int comb, int pas, int ruedas, int pistera) : vehiculo(comb,pas,ruedas){
        this->pistera = pistera;
    }
};

