
#ifdef TESS_EXPORTS
#define TESS_API __declspec(dllexport)
#elif defined(TESS_IMPORTS)
#define TESS_API __declspec(dllimport)
#else
#define TESS_API
#define TESS_LOCAL
#define LEPT_DLL

#define TESS_CAPI_INCLUDE_BASEAPI
#endif
#pragma once
#include <Python.h>
#ifndef __opencv2__
	#define __opencv2__
#endif
#include <opencv2/core/core_c.h>
#include "fmemopen.h"
#ifndef __mingw__
	#define __mingw__
#endif
