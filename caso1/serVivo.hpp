class serVivo
{
private:
    int respira;
    int se_alimenta;
    int se_desplaza;

public:
    serVivo(int resp, int alim, int desp){
        respira = resp;
        se_alimenta = alim;
        se_desplaza = desp;
    }
};

class Ave : public serVivo
{
protected:    
    int plumas;

public:
    Ave(int resp, int alim, int desp, int plumas) : serVivo(resp, alim, desp){
        this->plumas = plumas;
    }
};

class Perro : public serVivo
{
protected:
    int ladra;

public:
    Perro(int resp, int alim, int desp, int ladra) : serVivo(resp, alim, desp){
        this->ladra = ladra;
    }
};

class Serpiente : public serVivo
{
protected:
    int venenosa;

public:
    Serpiente(int resp, int alim, int desp, int venenosa) : serVivo(resp, alim, desp){
        this->venenosa = venenosa;
    }
};



