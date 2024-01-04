#ifndef EXAMPLE_H
#define EXAMPLE_H

#ifdef _WIN32
	#define DLL_EXPORT __declspec(dllexport)
#else
	#define DLL_EXPORT
#endif

extern "C" {
	DLL_EXPORT int add(int a, int b);
}

#endif // EXAMPLE_H
