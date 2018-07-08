#pragma once
#ifndef INTERFACES_H
	#define INTERFACES_H
#include <Platform.h>

namespace interfaces
{
	class PK_API INonCopyable
	{
	public:
	
	protected:
		INonCopyable()
		{

		}

		~INonCopyable()
		{

		}
	private:
		INonCopyable(const INonCopyable& other);
		const INonCopyable& operator = (const INonCopyable& other);
	};

	class PK_API IManager
	{
	public:
		virtual void VStartUp() = 0;
		virtual void VShutDown() = 0;
	};

}

#endif // !INTERFACE_H
