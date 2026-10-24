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

// Function: func_003373A0
// Address: 0x3373a0 - 0x337400
void func_003373A0_0x3373a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003373A0_0x3373a0");
#endif

    switch (ctx->pc) {
        case 0x3373a8u: goto label_3373a8;
        case 0x3373d8u: goto label_3373d8;
        default: break;
    }

    ctx->pc = 0x3373a0u;

    // 0x3373a0: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3373A0u;
    {
        const bool branch_taken_0x3373a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3373a0) {
            ctx->pc = 0x3373A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373A0u;
            // 0x3373a4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3373C8u;
            goto label_3373c8;
        }
    }
    ctx->pc = 0x3373A8u;
label_3373a8:
    // 0x3373a8: 0x0  nop
    ctx->pc = 0x3373a8u;
    // NOP
    // 0x3373ac: 0x0  nop
    ctx->pc = 0x3373acu;
    // NOP
    // 0x3373b0: 0x0  nop
    ctx->pc = 0x3373b0u;
    // NOP
    // 0x3373b4: 0x0  nop
    ctx->pc = 0x3373b4u;
    // NOP
    // 0x3373b8: 0x0  nop
    ctx->pc = 0x3373b8u;
    // NOP
    // 0x3373bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3373BCu;
    {
        const bool branch_taken_0x3373bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373bc) {
            ctx->pc = 0x3373A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3373a8;
        }
    }
    ctx->pc = 0x3373C4u;
    // 0x3373c4: 0x0  nop
    ctx->pc = 0x3373c4u;
    // NOP
label_3373c8:
    // 0x3373c8: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3373C8u;
    {
        const bool branch_taken_0x3373c8 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x3373c8) {
            ctx->pc = 0x3373F4u;
            goto label_3373f4;
        }
    }
    ctx->pc = 0x3373D0u;
    // 0x3373d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3373d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3373d4: 0x0  nop
    ctx->pc = 0x3373d4u;
    // NOP
label_3373d8:
    // 0x3373d8: 0x0  nop
    ctx->pc = 0x3373d8u;
    // NOP
    // 0x3373dc: 0x0  nop
    ctx->pc = 0x3373dcu;
    // NOP
    // 0x3373e0: 0x0  nop
    ctx->pc = 0x3373e0u;
    // NOP
    // 0x3373e4: 0x0  nop
    ctx->pc = 0x3373e4u;
    // NOP
    // 0x3373e8: 0x0  nop
    ctx->pc = 0x3373e8u;
    // NOP
    // 0x3373ec: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3373ECu;
    {
        const bool branch_taken_0x3373ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3373ec) {
            ctx->pc = 0x3373F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373ECu;
            // 0x3373f0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3373D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3373d8;
        }
    }
    ctx->pc = 0x3373F4u;
label_3373f4:
    // 0x3373f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3373F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3373F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3373FCu;
    // 0x3373fc: 0x0  nop
    ctx->pc = 0x3373fcu;
    // NOP
    ctx->pc = 0x337400u;
}
