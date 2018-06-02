#include "CrossRoad.h"

void main()
{
	CrossRoad r(10, 15, 40, 30);
	while (true)
	{
		r.redLightOn();
		r.greenLightOn();
	}
	system("pause");
}