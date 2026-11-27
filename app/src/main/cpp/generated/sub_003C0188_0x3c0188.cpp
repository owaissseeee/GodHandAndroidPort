#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_003C0188_0x3c0188(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_003C0188_0x3c0188");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::TODO_NAMED("sub_003C0188", rdram, ctx, runtime); 
}
