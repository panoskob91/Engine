#pragma once
#ifndef LOGMANAGER_H
#define LOGMANAGER_H

#include <Platform.h>
#include <Singleton.h>


namespace Log
{
	
	class PK_API LogManager : public singleton::Singleton<LogManager>, interfaces::IManager
	{
		friend class  singleton::Singleton<LogManager>;
	public:
		void VStartUp()  override;
		void VShutDown() override;
	};
	extern PK_API LogManager& g_LogManager;
}

#endif // !LOGMANAGER_H
