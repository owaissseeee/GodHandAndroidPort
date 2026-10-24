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

// Function: _sceFsSemInit
// Address: 0x3b3e70 - 0x3b3ec8
void _sceFsSemInit_0x3b3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFsSemInit_0x3b3e70");
#endif

    switch (ctx->pc) {
        case 0x3b3eb0u: goto label_3b3eb0;
        default: break;
    }

    ctx->pc = 0x3b3e70u;

    // 0x3b3e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b3e74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3e78: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b3e7c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3b3e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3b3e80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b3e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b3e84: 0x8e02aee4  lw          $v0, -0x511C($s0)
    ctx->pc = 0x3b3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEE4u));
    // 0x3b3e88: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B3E88u;
    {
        const bool branch_taken_0x3b3e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E88u;
        // 0x3b3e8c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e88) {
            ctx->pc = 0x3B3EB8u;
            goto label_3b3eb8;
        }
    }
    ctx->pc = 0x3B3E90u;
    // 0x3b3e90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b3e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3e98: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x3b3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x3b3e9c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b3ea0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b3ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3ea8: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B3EA8u;
    SET_GPR_U32(ctx, 31, 0x3B3EB0u);
    ctx->pc = 0x3B3EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3EA8u;
    // 0x3b3eac: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B3EA8u, 0x3B3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3EB0u;
label_3b3eb0:
    // 0x3b3eb0: 0xae02aee4  sw          $v0, -0x511C($s0)
    ctx->pc = 0x3b3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946532), GPR_U32(ctx, 2));
    // 0x3b3eb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b3eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3eb8:
    // 0x3b3eb8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b3eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3EBCu;
        // 0x3b3ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3EC4u;
    // 0x3b3ec4: 0x0  nop
    ctx->pc = 0x3b3ec4u;
    // NOP
    ctx->pc = 0x3b3ec8u;
}
