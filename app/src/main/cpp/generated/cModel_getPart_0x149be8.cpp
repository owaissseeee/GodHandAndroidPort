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

// Function: cModel_getPart
// Address: 0x149be8 - 0x149c20
void cModel_getPart_0x149be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_getPart_0x149be8");
#endif

    switch (ctx->pc) {
        case 0x149c00u: goto label_149c00;
        default: break;
    }

    ctx->pc = 0x149be8u;

    // 0x149be8: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x149be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x149bec: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x149BECu;
    {
        const bool branch_taken_0x149bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BECu;
        // 0x149bf0: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bec) {
            ctx->pc = 0x149C18u;
            goto label_149c18;
        }
    }
    ctx->pc = 0x149BF4u;
    // 0x149bf4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x149bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149bf8: 0x8c420144  lw          $v0, 0x144($v0)
    ctx->pc = 0x149bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x149bfc: 0x0  nop
    ctx->pc = 0x149bfcu;
    // NOP
label_149c00:
    // 0x149c00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149C00u;
    {
        const bool branch_taken_0x149c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C00u;
        // 0x149c04: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c00) {
            ctx->pc = 0x149C10u;
            goto label_149c10;
        }
    }
    ctx->pc = 0x149C08u;
    // 0x149c08: 0x3e00008  jr          $ra
    ctx->pc = 0x149C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C08u;
        // 0x149c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C10u;
label_149c10:
    // 0x149c10: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x149C10u;
    {
        const bool branch_taken_0x149c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x149c10) {
            ctx->pc = 0x149C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149C10u;
            // 0x149c14: 0x8c420144  lw          $v0, 0x144($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149c00;
        }
    }
    ctx->pc = 0x149C18u;
label_149c18:
    // 0x149c18: 0x3e00008  jr          $ra
    ctx->pc = 0x149C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C20u;
}
