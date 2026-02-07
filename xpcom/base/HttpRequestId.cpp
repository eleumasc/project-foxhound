#include "HttpRequestId.h"

#include "mozilla/Atomics.h"
#include "base/process_util.h"

namespace mozilla {

static Atomic<uint32_t> sNextCurrentProcHttpRequestId{1};

void NextHttpRequestId(nsACString& aRequestId) {
  aRequestId.Truncate();
  aRequestId.AppendInt(base::GetCurrentProcId());
  aRequestId.Append(':');
  aRequestId.AppendInt(sNextCurrentProcHttpRequestId++);
}

}  // namespace mozilla
