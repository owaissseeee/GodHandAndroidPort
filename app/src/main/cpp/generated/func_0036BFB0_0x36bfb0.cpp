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

// Function: func_0036BFB0
// Address: 0x36bfb0 - 0x36c038
void func_0036BFB0_0x36bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036BFB0_0x36bfb0");
#endif

    switch (ctx->pc) {
        case 0x36bfc0u: goto label_36bfc0;
        case 0x36bfe0u: goto label_36bfe0;
        case 0x36c008u: goto label_36c008;
        default: break;
    }

    ctx->pc = 0x36bfb0u;

    // 0x36bfb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36bfb4: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x36bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x36bfb8: 0x24441ac8  addiu       $a0, $v0, 0x1AC8
    ctx->pc = 0x36bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6856));
    // 0x36bfbc: 0x0  nop
    ctx->pc = 0x36bfbcu;
    // NOP
label_36bfc0:
    // 0x36bfc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36bfc4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x36bfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36bfc8: 0x0  nop
    ctx->pc = 0x36bfc8u;
    // NOP
    // 0x36bfcc: 0x0  nop
    ctx->pc = 0x36bfccu;
    // NOP
    // 0x36bfd0: 0x0  nop
    ctx->pc = 0x36bfd0u;
    // NOP
    // 0x36bfd4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BFD4u;
    {
        const bool branch_taken_0x36bfd4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x36BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BFD4u;
        // 0x36bfd8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bfd4) {
            ctx->pc = 0x36BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bfc0;
        }
    }
    ctx->pc = 0x36BFDCu;
    // 0x36bfdc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36bfdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bfe0:
    // 0x36bfe0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x36bfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x36bfe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36bfe8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x36bfe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x36bfec: 0x0  nop
    ctx->pc = 0x36bfecu;
    // NOP
    // 0x36bff0: 0x0  nop
    ctx->pc = 0x36bff0u;
    // NOP
    // 0x36bff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36BFF4u;
    {
        const bool branch_taken_0x36bff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BFF4u;
        // 0x36bff8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bff4) {
            ctx->pc = 0x36BFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bfe0;
        }
    }
    ctx->pc = 0x36BFFCu;
    // 0x36bffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c000: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x36c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x36c004: 0x0  nop
    ctx->pc = 0x36c004u;
    // NOP
label_36c008:
    // 0x36c008: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36c00c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x36c00cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36c010: 0x0  nop
    ctx->pc = 0x36c010u;
    // NOP
    // 0x36c014: 0x0  nop
    ctx->pc = 0x36c014u;
    // NOP
    // 0x36c018: 0x0  nop
    ctx->pc = 0x36c018u;
    // NOP
    // 0x36c01c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C01Cu;
    {
        const bool branch_taken_0x36c01c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x36C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C01Cu;
        // 0x36c020: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c01c) {
            ctx->pc = 0x36C008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c008;
        }
    }
    ctx->pc = 0x36C024u;
    // 0x36c024: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36c024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36c028: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36c028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x36c02c: 0x24421c48  addiu       $v0, $v0, 0x1C48
    ctx->pc = 0x36c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7240));
    // 0x36c030: 0x3e00008  jr          $ra
    ctx->pc = 0x36C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C030u;
        // 0x36c034: 0xac621abc  sw          $v0, 0x1ABC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C038u;
}
