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

// Function: func_00377FA0
// Address: 0x377fa0 - 0x377ff8
void func_00377FA0_0x377fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377FA0_0x377fa0");
#endif

    ctx->pc = 0x377fa0u;

    // 0x377fa0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377fa4: 0x2445a790  addiu       $a1, $v0, -0x5870
    ctx->pc = 0x377fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x377fa8: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x377fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x76A7B0u));
    // 0x377fac: 0x94a40020  lhu         $a0, 0x20($a1)
    ctx->pc = 0x377facu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x76A7B0u));
    // 0x377fb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x377fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x377fb4: 0x94a60020  lhu         $a2, 0x20($a1)
    ctx->pc = 0x377fb4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x377fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377fbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x377fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x377fc0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x377fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x377fc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x377fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x377fc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x377fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377fcc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x377fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x377fd0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x377fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x377fd4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x377fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x377fd8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x377fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x377fdc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x377fdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x377fe0: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x377FE0u;
    {
        const bool branch_taken_0x377fe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x377FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FE0u;
        // 0x377fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377fe0) {
            ctx->pc = 0x377FECu;
            goto label_377fec;
        }
    }
    ctx->pc = 0x377FE8u;
    // 0x377fe8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x377fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_377fec:
    // 0x377fec: 0xa4a20020  sh          $v0, 0x20($a1)
    ctx->pc = 0x377fecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x377ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x377FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FF0u;
        // 0x377ff4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377FF8u;
}
