#include "pch.h"
#include "DisableWhatASave.h"

BAKKESMOD_PLUGIN(DisableWhatASave, "Disable What a save!", "1.0", PERMISSION_ALL)

void DisableWhatASave::onLoad()
{
	this->log("Hello world!");
	this->loadHooks();
}

void DisableWhatASave::onUnload()
{

}

void DisableWhatASave::loadHooks()
{
	gameWrapper->HookEvent("Function TAGame.HUDBase_TA.EventChatMessage", std::bind(&DisableWhatASave::incomingChatEvent, this, std::placeholders::_1));
}

void DisableWhatASave::log(std::string msg)
{
	cvarManager->log(msg);
}

void DisableWhatASave::incomingChatEvent(std::string name)
{
	cvarManager->log(name);
}