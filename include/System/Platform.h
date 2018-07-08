#pragma once
#ifndef PLATFORM_H
#define PLATFORM_H
#endif

#ifdef _WIN32
	#define SYS_WINDOWS
	#ifndef NOMINMAX
		#define NOMINMAX
	#endif

#elif defined (_linux_)
		#define SYS_LINUX
	#elif defined (_APPLE_)
		#define SYS_MACOS
#endif

#ifndef STATIC_BUILD
	#ifdef SYS_WINDOWS
		#ifdef NON_CLIENT_BUILD
			#define PK_API __declspec(dllexport)				
		#else
		#define PK_API __declspec(dllimport)
		#endif
		//Visual c++ compiler warning C4251 disable
		#ifdef _MSC_VER
			#pragma warning(disable: 4251)
		#endif
#elif defined(SYS_LINUX) || defined(SYS_MACOS)
	#if __GNC__ >= 4
		#define PK_API __attribute__ ((__visibility__("default")))
	#else
		#define PK_API PK_API
	#endif
#endif
#else 
	#define PK_API PK_API
#endif

//#endif // !STATIC_BUILD

