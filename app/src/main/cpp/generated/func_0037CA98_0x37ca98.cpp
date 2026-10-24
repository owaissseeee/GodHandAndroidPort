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

// Function: func_0037CA98
// Address: 0x37ca98 - 0x37cae0
void func_0037CA98_0x37ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CA98_0x37ca98");
#endif

    switch (ctx->pc) {
        case 0x37cab0u: goto label_37cab0;
        default: break;
    }

    ctx->pc = 0x37ca98u;

    // 0x37ca98: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37ca9c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x37ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x37caa0: 0x2444c8c0  addiu       $a0, $v0, -0x3740
    ctx->pc = 0x37caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37caa4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x37caa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x37caa8: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x37caa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x37caac: 0x0  nop
    ctx->pc = 0x37caacu;
    // NOP
label_37cab0:
    // 0x37cab0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x37cab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37cab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37CAB4u;
    {
        const bool branch_taken_0x37cab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CAB4u;
        // 0x37cab8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cab4) {
            ctx->pc = 0x37CACCu;
            goto label_37cacc;
        }
    }
    ctx->pc = 0x37CABCu;
    // 0x37cabc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37cac0: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37CAC0u;
    {
        const bool branch_taken_0x37cac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x37CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CAC0u;
        // 0x37cac4: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cac0) {
            ctx->pc = 0x37CACCu;
            goto label_37cacc;
        }
    }
    ctx->pc = 0x37CAC8u;
    // 0x37cac8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x37cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_37cacc:
    // 0x37cacc: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x37CACCu;
    {
        const bool branch_taken_0x37cacc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x37CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CACCu;
        // 0x37cad0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cacc) {
            ctx->pc = 0x37CAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cab0;
        }
    }
    ctx->pc = 0x37CAD4u;
    // 0x37cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x37CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CADCu;
    // 0x37cadc: 0x0  nop
    ctx->pc = 0x37cadcu;
    // NOP
    ctx->pc = 0x37cae0u;
}
