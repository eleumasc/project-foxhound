#include "HttpRequestId.h"

#include "mozilla/Atomics.h"

namespace mozilla {

static Atomic<uint32_t> sNextHttpRequestId{1};

uint32_t NextHttpRequestId() { return sNextHttpRequestId++; }

}  // namespace mozilla
