//Include important libraries here

#include<SFML/Graphics.hpp>

using namespace sf;

int main()
{
	//video mode object
	VideoMode vm(1920, 1080);

	//create ,open window for game
	RenderWindow window(vm, "timber!!", Style::Fullscreen);

	//create a texture to hold a graphic on the gpu
	Texture texturebackground;

	//load a graphic into the texture
	texturebackground.loadFromFile("graphics/background.png");

	// create a sprite
	Sprite spritebackground;

	//attach the texture to the sprite 
	spritebackground.setTexture(texturebackground);

	//set the spritebackground to cover the screen
	spritebackground.setPosition(0, 0);

	// Make a tree sprite
	Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(810, 0);

	// Prepare the bee
	Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);
	// Is the bee currently moving?
	bool beeActive = false;
	// How fast can the bee fly
	float beeSpeed = 0.0f;

	// make 3 cloud sprites from 1 texture
	Texture textureCloud;
	// Load 1 new texture
	textureCloud.loadFromFile("graphics/cloud.png");
	// 3 New sprites with the same texture
	Sprite spriteCloud1;
	Sprite spriteCloud2;
	Sprite spriteCloud3;
	spriteCloud1.setTexture(textureCloud);
	spriteCloud2.setTexture(textureCloud);
	spriteCloud3.setTexture(textureCloud);
	// Position the clouds on the left of the screen
	// at different heights
	spriteCloud1.setPosition(0, 0);
	spriteCloud2.setPosition(0, 250);
	spriteCloud3.setPosition(0, 500);
	// Are the clouds currently on screen?
	bool cloud1Active = false;
	bool cloud2Active = false;
	bool cloud3Active = false;
	// How fast is each cloud?
	float cloud1Speed = 0.0f;
	float cloud2Speed = 0.0f;
	float cloud3Speed = 0.0f;

	while (window.isOpen())
	{
		/**********handle the player input**********/
		
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		
		{
			window.close();
		}
		
		/**********update the scene**********/

		/**********draw the scene**********/
		
		//clear everything from last frame
		
		window.clear();
		
		//draw our game scene here
		
		window.draw(spritebackground);

		// Draw the clouds
		window.draw(spriteCloud1);
		window.draw(spriteCloud2);
		window.draw(spriteCloud3);
		// Draw the tree
		window.draw(spriteTree);
		// Draw the insect
		window.draw(spriteBee);
		
		//show everything we just draw
		
		window.display();
	}

	return 0;
}