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
    int vuela;

public:
    Ave(int resp, int alim, int desp, int vuela) : serVivo(resp, alim, desp){
        this->vuela = vuela;
    }
};

class Perro : public serVivo
{
protected:
    int juega;

public:
    Perro(int resp, int alim, int desp, int juega) : serVivo(resp, alim, desp){
        this->juega = juega;
    }
};

class Serpiente : public serVivo
{
protected:
    int caza;

public:
    Serpiente(int resp, int alim, int desp, int caza) : serVivo(resp, alim, desp){
        this->caza = caza;
    }
};



