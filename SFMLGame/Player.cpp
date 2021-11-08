#include <Player.h>

Player::Player(){};
Player::~Player(){};

void Player::initialize()
{
	if (texture.loadFromFile("ASSETS/IMAGES/Dragoon.jpg"))
	{
		std::cout << "error with font file file";
	}
	sprite.setTexture(texture);

	cout << "Player initialize" << endl;
}
void Player::update()
{
	cout << "Player updating" << endl;
}
void Player::draw()
{
	sf::RenderWindow window;
	window.draw(sprite);
	cout << "Player drawing" << endl;
}