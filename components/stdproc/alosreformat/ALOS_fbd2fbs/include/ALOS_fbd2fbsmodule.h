//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Copyright 2010 California Institute of Technology. ALL RIGHTS RESERVED.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// United States Government Sponsorship acknowledged. This software is subject to
// U.S. export control laws and regulations and has been classified as 'EAR99 NLR'
// (No [Export] License Required except when exporting to an embargoed country,
// end user, or in support of a prohibited end use). By downloading this software,
// the user agrees to comply with all applicable U.S. export laws and regulations.
// The user has the responsibility to obtain export licenses, or other export
// authority as may be required before exporting this software to any 'EAR99'
// embargoed foreign country or citizen of those countries.
//
// Author: Giangi Sacco
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




#ifndef ALOS_fbd2fbsmodule_h
#define ALOS_fbd2fbsmodule_h

#include <Python.h>

    PyObject * ALOS_fbd2fbs_C(PyObject *, PyObject *);
    PyObject * setNumberGoodBytes_C(PyObject *, PyObject *);
    PyObject * setNumberBytesPerLine_C(PyObject *, PyObject *);
    PyObject * setNumberLines_C(PyObject *, PyObject *);
    PyObject * setFirstSample_C(PyObject *, PyObject *);
    PyObject * setInPhaseValue_C(PyObject *, PyObject *);
    PyObject * setQuadratureValue_C(PyObject *, PyObject *);
    PyObject * setInputFilename_C(PyObject* self, PyObject* args);
    PyObject * setOutputFilename_C(PyObject* self, PyObject* args);


static PyMethodDef ALOS_fbd2fbs_methods[] =
{
    {"ALOS_fbd2fbs_Py", ALOS_fbd2fbs_C, METH_VARARGS, " "},
    {"setNumberGoodBytes_Py", setNumberGoodBytes_C, METH_VARARGS, " "},
    {"setNumberBytesPerLine_Py", setNumberBytesPerLine_C, METH_VARARGS,
        " "},
    {"setNumberLines_Py", setNumberLines_C, METH_VARARGS, " "},
    {"setFirstSample_Py", setFirstSample_C, METH_VARARGS, " "},
    {"setInPhaseValue_Py", setInPhaseValue_C, METH_VARARGS, " "},
    {"setQuadratureValue_Py", setQuadratureValue_C, METH_VARARGS, " "},
    {"setInputFilename_Py",setInputFilename_C, METH_VARARGS, " "},
    {"setOutputFilename_Py",setOutputFilename_C, METH_VARARGS, " "},
    {NULL, NULL, 0, NULL}
};
#endif
// end of file
