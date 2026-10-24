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

// Function: ScrollCallback_hideLayers
// Address: 0x298338 - 0x298388
void ScrollCallback_hideLayers_0x298338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScrollCallback_hideLayers_0x298338");
#endif

    switch (ctx->pc) {
        case 0x29836cu: goto label_29836c;
        case 0x298378u: goto label_298378;
        default: break;
    }

    ctx->pc = 0x298338u;

    // 0x298338: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29833c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29833cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298340: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x298340u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298344: 0x0  nop
    ctx->pc = 0x298344u;
    // NOP
    // 0x298348: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x298348u;
    {
        const bool branch_taken_0x298348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298348u;
        // 0x29834c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298348) {
            ctx->pc = 0x298378u;
            goto label_298378;
        }
    }
    ctx->pc = 0x298350u;
    // 0x298350: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298350u;
    {
        const bool branch_taken_0x298350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298350u;
        // 0x298354: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298350) {
            ctx->pc = 0x298360u;
            goto label_298360;
        }
    }
    ctx->pc = 0x298358u;
    // 0x298358: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x298358u;
    {
        const bool branch_taken_0x298358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298358u;
        // 0x29835c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298358) {
            ctx->pc = 0x29837Cu;
            goto label_29837c;
        }
    }
    ctx->pc = 0x298360u;
label_298360:
    // 0x298360: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x298360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x298364: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298364u;
    SET_GPR_U32(ctx, 31, 0x29836Cu);
    ctx->pc = 0x298368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298364u;
    // 0x298368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298364u, 0x29836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29836Cu;
label_29836c:
    // 0x29836c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x29836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x298370: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298370u;
    SET_GPR_U32(ctx, 31, 0x298378u);
    ctx->pc = 0x298374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298370u;
    // 0x298374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298370u, 0x298378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298378u;
label_298378:
    // 0x298378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29837c:
    // 0x29837c: 0x3e00008  jr          $ra
    ctx->pc = 0x29837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29837Cu;
        // 0x298380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298384u;
    // 0x298384: 0x0  nop
    ctx->pc = 0x298384u;
    // NOP
    ctx->pc = 0x298388u;
}
