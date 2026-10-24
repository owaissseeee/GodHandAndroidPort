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

// Function: func_0036A070
// Address: 0x36a070 - 0x36a0d0
void func_0036A070_0x36a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A070_0x36a070");
#endif

    switch (ctx->pc) {
        case 0x36a084u: goto label_36a084;
        case 0x36a0c0u: goto label_36a0c0;
        default: break;
    }

    ctx->pc = 0x36a070u;

    // 0x36a070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a078: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36a078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36a07c: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36A07Cu;
    SET_GPR_U32(ctx, 31, 0x36A084u);
    ctx->pc = 0x36A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A07Cu;
    // 0x36a080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36A07Cu, 0x36A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A084u;
label_36a084:
    // 0x36a084: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36a084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36a088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a08c: 0x34a50211  ori         $a1, $a1, 0x211
    ctx->pc = 0x36a08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)529);
    // 0x36a090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A090u;
    {
        const bool branch_taken_0x36a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A090u;
        // 0x36a094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a090) {
            ctx->pc = 0x36A0A8u;
            goto label_36a0a8;
        }
    }
    ctx->pc = 0x36A098u;
    // 0x36a098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a09c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a0a0: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A0A0u;
    ctx->pc = 0x36A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0A0u;
    // 0x36a0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A0A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A0A8u;
label_36a0a8:
    // 0x36a0a8: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x36a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x36a0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a0b0: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A0B0u;
    {
        const bool branch_taken_0x36a0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x36A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0B0u;
        // 0x36a0b4: 0xae020408  sw          $v0, 0x408($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0b0) {
            ctx->pc = 0x36A0C0u;
            goto label_36a0c0;
        }
    }
    ctx->pc = 0x36A0B8u;
    // 0x36a0b8: 0xc0db234  jal         func_36C8D0
    ctx->pc = 0x36A0B8u;
    SET_GPR_U32(ctx, 31, 0x36A0C0u);
    ctx->pc = 0x36A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0B8u;
    // 0x36a0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8D0u, 0x36A0B8u, 0x36A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0C0u;
label_36a0c0:
    // 0x36a0c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a0c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0C8u;
        // 0x36a0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A0D0u;
}
