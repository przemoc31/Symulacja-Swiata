#pragma once
#include "Zwierze.h"
class Czlowiek :
	public Zwierze
{
public:
	Czlowiek(Swiat* newSwiat, int y, int x, int newWiek);
	void akcja() override;
	void kolizja(Organizm* attacker, int old_Y, int old_X) override;
};


