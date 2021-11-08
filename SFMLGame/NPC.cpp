#include <NPC.h>

NPC::NPC(){};
NPC::~NPC(){};

void NPC::initialize()
{
	if (texture.loadFromFile("ASSETS/IMAGES/Black-Mage.jpg"))
	{
		std::cout << "error with font file file";
	}
	sprite.setTexture(texture);

	cout << "NPC initialize" << endl;
}
void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw()
{
	sf::RenderWindow window;
	window.draw(sprite);
	cout << "NPC drawing" << endl;
}