#ifndef mozilla_HttpRequestId_h
#define mozilla_HttpRequestId_h

#include <stdint.h>

#include "nsString.h"

namespace mozilla {

void NextHttpRequestId(nsACString& aRequestId);

}  // namespace mozilla

#endif  // mozilla_HttpRequestId_h
