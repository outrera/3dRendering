#ifndef GPUACCELERATOR_H_INCLUDED
#define GPUACCELERATOR_H_INCLUDED

#include <CL/cl.hpp>

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cstring>
#include <iterator>

inline void checkErr(cl_int err, const char * name) {
    if (err != CL_SUCCESS) {
        std::cerr << "ERROR: " << name << " (" << err << ") " << std::endl;
        exit(EXIT_FAILURE);
    }
}

class GPUAccelerator {
    cl_int err;
    cl::vector< cl::Platform > platformList;
    cl_context_properties cprops[3];
    cl::Context context;
    cl::Buffer outCL;
public:
    GPUAccelerator() {
        cl::Platform::get(&platformList);
        cprops[0] = CL_CONTEXT_PLATFORM;
        cprops[1] = (cl_context_properties)(platformList[0])();
        cprops[2] = 0;
        cl::Platform::get(&platformList);
        checkErr(platformList.size()!=0 ? CL_SUCCESS : -1, "cl::Platform::get");
        std::cerr << "Platform number is: " << platformList.size() << std::endl;
        std::string platformVendor;
        context = cl::Context(CL_DEVICE_TYPE_CPU,cprops,NULL,NULL,&err);
        platformList[0].getInfo((cl_platform_info)CL_PLATFORM_VENDOR, &platformVendor);
        std::cerr << "Platform vendor: " << platformVendor << std::endl;
        checkErr(err, "Context::Context()");
    }
};

#endif // GPUACCELERATOR_H_INCLUDED
