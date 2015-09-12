#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <string>
#include "../include/Cobra.h"
#include "cobra/mem/isolate.h"
#include "Exception-bytes.h"

namespace Cobra {
namespace internal{

	class Exception
	{
	public:
		Exception(){}
		~Exception(){}
		static void CB(Isolate* isolate);
	};

} // namespace internal
}

#endif // EXCEPTION_H_