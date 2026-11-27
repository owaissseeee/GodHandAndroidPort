#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00338B10
// Address: 0x338b10 - 0x338b40
void func_00338B10_0x338b10(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338B10_0x338b10");
#endif

    if (__builtin_expect(ctx->pc != 0x338b10u, 0)) {
        switch (ctx->pc) {
            case 0x338b20u: goto label_338b20;
            case 0x338b28u: goto label_338b28;
            case 0x338b30u: goto label_338b30;
            default: break;
        }
    }


    // 0x338b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338b18: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338B18u;
    SET_GPR_U32(ctx, 31, 0x338B20u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B658_3389F8_0x3389f8, 0x3389f8u, 0x338b20u)) {
        return;
    }
label_338b20:
    // 0x338b20: 0xc0ce2d0  jal         func_338B40
    ctx->pc = 0x338B20u;
    SET_GPR_U32(ctx, 31, 0x338B28u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00338B40_0x338b40, 0x338b40u, 0x338b28u)) {
        return;
    }
label_338b28:
    // 0x338b28: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338B28u;
    SET_GPR_U32(ctx, 31, 0x338B30u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B670_338A10_0x338a10, 0x338a10u, 0x338b30u)) {
        return;
    }
label_338b30:
    // 0x338b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b34: 0x80ce272  j           func_3389C8
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B34u;
    // 0x338b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389C8u, 0x338B34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x338b3c: 0x0  nop
    // NOP
    ctx->pc = 0x338b40u;
}