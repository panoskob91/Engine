#pragma once
#ifndef SINGLETON_H
#define SINGLETON_H

#include <Platform.h>
#include <Interfaces.h>

namespace singleton
{
	template <typename T> 
	class Singleton : interfaces::INonCopyable
	{
	public:
		static T& instance()
		{
			static T _instance; 
			return _instance;
		}
	protected:
		explicit Singleton<T>() {}
	};
}

#endif // !SINGLETON_H
