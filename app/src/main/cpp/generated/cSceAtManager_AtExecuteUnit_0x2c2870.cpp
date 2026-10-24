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

// Function: cSceAtManager_AtExecuteUnit
// Address: 0x2c2870 - 0x2c28b0
void cSceAtManager_AtExecuteUnit_0x2c2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtExecuteUnit_0x2c2870");
#endif

    switch (ctx->pc) {
        case 0x2c2870u: goto label_2c2870;
        case 0x2c2874u: goto label_2c2874;
        case 0x2c2878u: goto label_2c2878;
        case 0x2c287cu: goto label_2c287c;
        case 0x2c2880u: goto label_2c2880;
        case 0x2c2884u: goto label_2c2884;
        case 0x2c2888u: goto label_2c2888;
        case 0x2c288cu: goto label_2c288c;
        case 0x2c2890u: goto label_2c2890;
        case 0x2c2894u: goto label_2c2894;
        case 0x2c2898u: goto label_2c2898;
        case 0x2c289cu: goto label_2c289c;
        case 0x2c28a0u: goto label_2c28a0;
        case 0x2c28a4u: goto label_2c28a4;
        case 0x2c28a8u: goto label_2c28a8;
        case 0x2c28acu: goto label_2c28ac;
        default: break;
    }

    ctx->pc = 0x2c2870u;

label_2c2870:
    // 0x2c2870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c2874:
    // 0x2c2874: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c2874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c2878:
    // 0x2c2878: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2c287c:
    if (ctx->pc == 0x2C287Cu) {
        ctx->pc = 0x2C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2878u;
        // 0x2c287c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2880u;
        goto label_2c2880;
    }
    ctx->pc = 0x2C2878u;
    {
        const bool branch_taken_0x2c2878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2878u;
        // 0x2c287c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2878) {
            ctx->pc = 0x2C28A0u;
            goto label_2c28a0;
        }
    }
    ctx->pc = 0x2C2880u;
label_2c2880:
    // 0x2c2880: 0x90830035  lbu         $v1, 0x35($a0)
    ctx->pc = 0x2c2880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
label_2c2884:
    // 0x2c2884: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c2884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2c2888:
    // 0x2c2888: 0x24422650  addiu       $v0, $v0, 0x2650
    ctx->pc = 0x2c2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
label_2c288c:
    // 0x2c288c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c288cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c2890:
    // 0x2c2890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c2894:
    // 0x2c2894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c2898:
    // 0x2c2898: 0x40f809  jalr        $v0
label_2c289c:
    if (ctx->pc == 0x2C289Cu) {
        ctx->pc = 0x2C289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2898u;
        // 0x2c289c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28A0u;
        goto label_2c28a0;
    }
    ctx->pc = 0x2C2898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C28A0u);
        ctx->pc = 0x2C289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2898u;
        // 0x2c289c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2898u, 0x2C28A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C28A0u;
label_2c28a0:
    // 0x2c28a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c28a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c28a4:
    // 0x2c28a4: 0x3e00008  jr          $ra
label_2c28a8:
    if (ctx->pc == 0x2C28A8u) {
        ctx->pc = 0x2C28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A4u;
        // 0x2c28a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28ACu;
        goto label_2c28ac;
    }
    ctx->pc = 0x2C28A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28A4u;
        // 0x2c28a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C28A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C28ACu;
label_2c28ac:
    // 0x2c28ac: 0x0  nop
    ctx->pc = 0x2c28acu;
    // NOP
    ctx->pc = 0x2c28b0u;
}
