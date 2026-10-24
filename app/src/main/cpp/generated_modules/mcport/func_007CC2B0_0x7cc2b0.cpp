#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CC2B0
// Address: 0x7cc2b0 - 0x7cc2f8
void func_007CC2B0_0x7cc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC2B0_0x7cc2b0");
#endif

    switch (ctx->pc) {
        case 0x7cc2c8u: goto label_7cc2c8;
        default: break;
    }

    ctx->pc = 0x7cc2b0u;

    // 0x7cc2b0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x7cc2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cc2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7cc2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc2b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7cc2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7cc2bc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x7cc2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x7cc2c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CC2C0u;
    {
        const bool branch_taken_0x7cc2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC2C0u;
        // 0x7cc2c4: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc2c0) {
            ctx->pc = 0x7CC2E8u;
            goto label_7cc2e8;
        }
    }
    ctx->pc = 0x7CC2C8u;
label_7cc2c8:
    // 0x7cc2c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x7cc2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cc2cc: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x7cc2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x7cc2d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7cc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7cc2d4: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x7cc2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x7cc2d8: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x7cc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x7cc2dc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x7cc2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x7cc2e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7CC2E0u;
    {
        const bool branch_taken_0x7cc2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC2E0u;
        // 0x7cc2e4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc2e0) {
            ctx->pc = 0x7CC2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc2c8;
        }
    }
    ctx->pc = 0x7CC2E8u;
label_7cc2e8:
    // 0x7cc2e8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x7cc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x7cc2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC2ECu;
        // 0x7cc2f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC2F4u;
    // 0x7cc2f4: 0x0  nop
    ctx->pc = 0x7cc2f4u;
    // NOP
    ctx->pc = 0x7cc2f8u;
}
} // namespace gh_mcport
