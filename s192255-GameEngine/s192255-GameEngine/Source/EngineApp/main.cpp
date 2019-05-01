#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <iostream>

#include "Window.h"
#include "ResourceManager.h"
#include "TimeHandler.h"
#include "App.h"
#include "InputManagement.h"
#include "SceneManager.h"

#include "../Game/GameObject.h"
#include "../Game/Game.h"
#include "../Game/Player.h"

int main()
{
	App gameApp = App("Scoop");

	gameApp.getGame()->start();
	while (gameApp.getWindow()->instance()->GameWindow->isOpen())
	{
		std::cout << "Delta Time: " << gameApp.getDeltaTime() << '\r';

		gameApp.getWindow()->instance()->GameWindow->clear(sf::Color(123,132,123,255));
		gameApp.Update();
		gameApp.getWindow()->instance()->GameWindow->display();
	}
	return 0;
}