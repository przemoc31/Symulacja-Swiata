#pragma once
#include "Roslina.h"
class Jagody :
	public Roslina
{
public:
	Jagody(Swiat* newSwiat, int y, int x, int newWiek);
	void akcja() override;
	void kolizja(Organizm* attacker, int old_Y, int old_X) override;
};