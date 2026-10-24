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
// Function: __tfs
// Address: 0x7cad58 - 0x7cad90
void ps2___tfs_0x7cad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfs_0x7cad58");
#endif

    ctx->pc = 0x7cad58u;

    // 0x7cad58: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cad58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cad5c: 0x8c82fcc0  lw          $v0, -0x340($a0)
    ctx->pc = 0x7cad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCC0u));
    // 0x7cad60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAD60u;
    {
        const bool branch_taken_0x7cad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD60u;
        // 0x7cad64: 0x2485fcc0  addiu       $a1, $a0, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cad60) {
            ctx->pc = 0x7CAD84u;
            goto label_7cad84;
        }
    }
    ctx->pc = 0x7CAD68u;
    // 0x7cad68: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAD68u;
    {
        const bool branch_taken_0x7cad68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD68u;
        // 0x7cad6c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cad68) {
            ctx->pc = 0x7CAD84u;
            goto label_7cad84;
        }
    }
    ctx->pc = 0x7CAD70u;
    // 0x7cad70: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cad74: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x7cad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
    // 0x7cad78: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cad7c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cad80: 0xac83fcc0  sw          $v1, -0x340($a0)
    ctx->pc = 0x7cad80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966464), GPR_U32(ctx, 3));
label_7cad84:
    // 0x7cad84: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD84u;
        // 0x7cad88: 0x2482fcc0  addiu       $v0, $a0, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAD8Cu;
    // 0x7cad8c: 0x0  nop
    ctx->pc = 0x7cad8cu;
    // NOP
    ctx->pc = 0x7cad90u;
}
} // namespace gh_mcport
