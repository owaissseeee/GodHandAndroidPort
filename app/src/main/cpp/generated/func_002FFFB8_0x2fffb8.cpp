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

// Function: func_002FFFB8
// Address: 0x2fffb8 - 0x2fffe0
void func_002FFFB8_0x2fffb8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFFB8_0x2fffb8");
#endif

    if (__builtin_expect(ctx->pc != 0x2fffb8u, 0)) {
        switch (ctx->pc) {
            case 0x2fffd0u: goto label_2fffd0;
            default: break;
        }
    }


    // 0x2fffb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fffbc: 0x80102d  daddu       $v0, $a0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFFC0u;
    {
        const bool branch_taken_0x2fffc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFC0u;
        // 0x2fffc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffc0) {
            ctx->pc = 0x2FFFD0u;
            goto label_2fffd0;
        }
    }
    // 0x2fffc8: 0xc0bd872  jal         func_2F61C8
    ctx->pc = 0x2FFFC8u;
    SET_GPR_U32(ctx, 31, 0x2FFFD0u);
    if (!runtime->callDirectStatic(rdram, ctx, &Setup_Field_2B0_2F61C8_0x2f61c8, 0x2f61c8u, 0x2fffd0u)) {
        return;
    }
label_2fffd0:
    // 0x2fffd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD4u;
        // 0x2fffd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2fffdc: 0x0  nop
    // NOP
    ctx->pc = 0x2fffe0u;
}