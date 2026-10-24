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

// Function: _sceFsIobSemaMK
// Address: 0x3b3858 - 0x3b38d0
void _sceFsIobSemaMK_0x3b3858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFsIobSemaMK_0x3b3858");
#endif

    switch (ctx->pc) {
        case 0x3b3898u: goto label_3b3898;
        case 0x3b38b0u: goto label_3b38b0;
        default: break;
    }

    ctx->pc = 0x3b3858u;

    // 0x3b3858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b385c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b3860: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b3860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b3864: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3b3864u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3b3868: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b386c: 0x8e02aee8  lw          $v0, -0x5118($s0)
    ctx->pc = 0x3b386cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEE8u));
    // 0x3b3870: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B3870u;
    {
        const bool branch_taken_0x3b3870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3870u;
        // 0x3b3874: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3870) {
            ctx->pc = 0x3B38BCu;
            goto label_3b38bc;
        }
    }
    ctx->pc = 0x3B3878u;
    // 0x3b3878: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b3878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b387c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3880: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3b3880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3b3884: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b3884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b3888: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b3888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b388c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3890: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B3890u;
    SET_GPR_U32(ctx, 31, 0x3B3898u);
    ctx->pc = 0x3B3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3890u;
    // 0x3b3894: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B3890u, 0x3B3898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3898u;
label_3b3898:
    // 0x3b3898: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b3898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b389c: 0xae02aee8  sw          $v0, -0x5118($s0)
    ctx->pc = 0x3b389cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946536), GPR_U32(ctx, 2));
    // 0x3b38a0: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x3b38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x3b38a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b38a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b38a8: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B38A8u;
    SET_GPR_U32(ctx, 31, 0x3B38B0u);
    ctx->pc = 0x3B38ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38A8u;
    // 0x3b38ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B38A8u, 0x3B38B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38B0u;
label_3b38b0:
    // 0x3b38b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b38b4: 0xac62aeec  sw          $v0, -0x5114($v1)
    ctx->pc = 0x3b38b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FAEECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAEECu, _value); } while (0);
    // 0x3b38b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b38b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b38bc:
    // 0x3b38bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b38bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b38c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B38C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38C0u;
        // 0x3b38c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B38C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B38C8u;
    // 0x3b38c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b38c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b38cc: 0x0  nop
    ctx->pc = 0x3b38ccu;
    // NOP
    ctx->pc = 0x3b38d0u;
}
