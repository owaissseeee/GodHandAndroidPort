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

// Function: func_00338CA0
// Address: 0x338ca0 - 0x338cd0
void func_00338CA0_0x338ca0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338CA0_0x338ca0");
#endif

    if (__builtin_expect(ctx->pc != 0x338ca0u, 0)) {
        switch (ctx->pc) {
            case 0x338cb4u: goto label_338cb4;
            case 0x338cbcu: goto label_338cbc;
            default: break;
        }
    }


    // 0x338ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x338ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338cac: 0xc0ce27e  jal         func_3389F8
    SET_GPR_U32(ctx, 31, 0x338CB4u);
    ctx->pc = 0x338CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CACu;
    // 0x338cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B658_3389F8_0x3389f8, 0x3389f8u, 0x338cb4u)) {
        return;
    }
label_338cb4:
    // 0x338cb4: 0xc0ce334  jal         func_338CD0
    SET_GPR_U32(ctx, 31, 0x338CBCu);
    ctx->pc = 0x338CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CB4u;
    // 0x338cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00338CD0_0x338cd0, 0x338cd0u, 0x338cbcu)) {
        return;
    }
label_338cbc:
    // 0x338cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338cc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338cc4: 0x80ce284  j           func_338A10
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CC4u;
    // 0x338cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338CC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x338ccc: 0x0  nop
    // NOP
    ctx->pc = 0x338cd0u;
}