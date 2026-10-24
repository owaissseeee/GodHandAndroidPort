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

// Function: func_00338848
// Address: 0x338848 - 0x3388b0
void func_00338848_0x338848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338848_0x338848");
#endif

    switch (ctx->pc) {
        case 0x33888cu: goto label_33888c;
        default: break;
    }

    ctx->pc = 0x338848u;

    // 0x338848: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33884c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33884cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338850: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x338854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33885c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33885Cu;
    {
        const bool branch_taken_0x33885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x338860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33885Cu;
        // 0x338860: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33885c) {
            ctx->pc = 0x338874u;
            goto label_338874;
        }
    }
    ctx->pc = 0x338864u;
    // 0x338864: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338868: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x338868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x33886c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33886Cu;
    {
        const bool branch_taken_0x33886c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x338870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33886Cu;
        // 0x338870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33886c) {
            ctx->pc = 0x338890u;
            goto label_338890;
        }
    }
    ctx->pc = 0x338874u;
label_338874:
    // 0x338874: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x338874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x338878: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x338878u;
    {
        const bool branch_taken_0x338878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338878u;
        // 0x33887c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338878) {
            ctx->pc = 0x338890u;
            goto label_338890;
        }
    }
    ctx->pc = 0x338880u;
    // 0x338880: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338884: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x338884u;
    SET_GPR_U32(ctx, 31, 0x33888Cu);
    ctx->pc = 0x338888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338884u;
    // 0x338888: 0x248457c8  addiu       $a0, $a0, 0x57C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x338884u, 0x33888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33888Cu;
label_33888c:
    // 0x33888c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338890:
    // 0x338890: 0x3e00008  jr          $ra
    ctx->pc = 0x338890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338890u;
        // 0x338894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338898u;
    // 0x338898: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x338898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33889c: 0x0  nop
    ctx->pc = 0x33889cu;
    // NOP
    // 0x3388a0: 0x0  nop
    ctx->pc = 0x3388a0u;
    // NOP
    // 0x3388a4: 0x0  nop
    ctx->pc = 0x3388a4u;
    // NOP
    // 0x3388a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3388a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3388ac: 0x0  nop
    ctx->pc = 0x3388acu;
    // NOP
    ctx->pc = 0x3388b0u;
}
