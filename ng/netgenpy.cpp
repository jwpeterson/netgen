// a wrapper to load netgen-dll into python

#include <iostream>

#ifdef NG_PYTHON
#include <boost/python.hpp>
#endif

#ifdef WIN32
#define DLL_HEADER __declspec(dllimport)
#else
#define DLL_HEADER
#endif


void DLL_HEADER ExportNetgenMeshing();
void DLL_HEADER ExportMeshVis();
void DLL_HEADER ExportCSG();
void DLL_HEADER ExportCSGVis();
void DLL_HEADER ExportGeom2d();

#ifdef NG_PYTHON
BOOST_PYTHON_MODULE(libngpy) 
{
    ExportCSG();
    ExportCSGVis();
    ExportNetgenMeshing();
    ExportMeshVis();
    ExportGeom2d();
}
#endif
