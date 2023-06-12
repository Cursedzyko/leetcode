#include "Circular.hpp"

int main() {
	CircleList playList; // [ ]
	playList.add("Stayin Alive"); // [Stayin Alive*]
	playList.add("Le Freak"); // [Le Freak, Stayin Alive*]
	playList.add("Jive Talkin"); // [Jive Talkin, Le Freak, Stayin Alive*]
	playList.advance(); // [Le Freak, Stayin Alive, Jive Talkin*]
	playList.advance(); // [Stayin Alive, Jive Talkin, Le Freak*]
	playList.remove(); // [Jive Talkin, Le Freak*]
	playList.add("Disco Inferno"); // [Disco Inferno, Jive Talkin, Le Freak*]
	return EXIT SUCCESS;
}