#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double difference = ((tB - tA)/3600.0);
    double speed = distancia / (difference);

    return speed;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double difference = ((tB - tA)/3600.0);
    double speed = distancia / (difference);
    int result;

    if (velocidadeMaxima >= speed){
        result = 0;
    }
    else {
        result = 1;
    }
    return result;
}
