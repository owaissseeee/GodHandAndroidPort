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
// Function: __tfb
// Address: 0x7cad90 - 0x7cadc8
void ps2___tfb_0x7cad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfb_0x7cad90");
#endif

    ctx->pc = 0x7cad90u;

    // 0x7cad90: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cad94: 0x8c82fcc8  lw          $v0, -0x338($a0)
    ctx->pc = 0x7cad94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFCC8u));
    // 0x7cad98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAD98u;
    {
        const bool branch_taken_0x7cad98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAD98u;
        // 0x7cad9c: 0x2485fcc8  addiu       $a1, $a0, -0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cad98) {
            ctx->pc = 0x7CADBCu;
            goto label_7cadbc;
        }
    }
    ctx->pc = 0x7CADA0u;
    // 0x7cada0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CADA0u;
    {
        const bool branch_taken_0x7cada0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CADA0u;
        // 0x7cada4: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cada0) {
            ctx->pc = 0x7CADBCu;
            goto label_7cadbc;
        }
    }
    ctx->pc = 0x7CADA8u;
    // 0x7cada8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cadac: 0x246310c8  addiu       $v1, $v1, 0x10C8
    ctx->pc = 0x7cadacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
    // 0x7cadb0: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cadb4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cadb8: 0xac83fcc8  sw          $v1, -0x338($a0)
    ctx->pc = 0x7cadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966472), GPR_U32(ctx, 3));
label_7cadbc:
    // 0x7cadbc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CADBCu;
        // 0x7cadc0: 0x2482fcc8  addiu       $v0, $a0, -0x338 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CADC4u;
    // 0x7cadc4: 0x0  nop
    ctx->pc = 0x7cadc4u;
    // NOP
    ctx->pc = 0x7cadc8u;
}
} // namespace gh_mcport
