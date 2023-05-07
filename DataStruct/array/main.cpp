#include "Score.hpp"
#include "GameEntry.hpp"

int main(void)
{
	GameEntry ee("ZZZ", 100);
	GameEntry ea("EEEE", 200);
	Score a(10);

	a.add(ee);
	a.add(ea);

	
}