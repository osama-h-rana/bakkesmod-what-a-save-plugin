#pragma once

#include "bakkesmod/plugin/bakkesmodplugin.h"

#pragma comment(lib, "pluginsdk.lib")

class DisableWhatASave : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual void onLoad();
	virtual void onUnload();
	void loadHooks();

private:
	void log(std::string msg);
	void incomingChatEvent(std::string name);
};

