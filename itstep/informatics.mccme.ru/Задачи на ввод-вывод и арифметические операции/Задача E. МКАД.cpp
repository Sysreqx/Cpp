/*Длина Московской кольцевой автомобильной дороги —109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью v километров в час. На какой отметке он остановится через t часов?*/


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
   int v, t;
   int s = 109;
   cin >> v >> t;
   cout << (s + (v * t % s)) % s;
   return 0;
}
