

%module py8510

// Add necessary symbols to generated header
%{
#define SWIG_FILE_WITH_INIT
#include "8510.h"
%}

// Process symbols in header
%include "8510.h"
