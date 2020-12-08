class deporte
{
private: 
    int pelota;
    int tiempo;
    int jugadores;

public: 
    deporte(int pel, int time, int jug){
        pelota = pel;
        tiempo = time;
        jugadores = jug;
    }
};

class Futbol : public deporte
{
protected:
    int marcos;

public:
    Futbol(int pel, int time, int jug, int marcos) : deporte(pel, time, jug){
        this->marcos =marcos;
    }
};

class Basket : public deporte
{
protected:
    int aros;

public:
    Basket(int pel, int time, int jug, int aros) : deporte(pel, time, jug){
        this->aros =aros;
    }
};

class Baseball : public deporte
{
protected:
    int bate;

public:
    Baseball(int pel, int time, int jug, int bate) : deporte(pel, time, jug){
        this->bate =bate;
    }
};

