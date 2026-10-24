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

// Function: cSnd_SeFadeOutHeldVoices
// Address: 0x2ca6b0 - 0x2ca718
void cSnd_SeFadeOutHeldVoices_0x2ca6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeFadeOutHeldVoices_0x2ca6b0");
#endif

    switch (ctx->pc) {
        case 0x2ca6d8u: goto label_2ca6d8;
        case 0x2ca6f4u: goto label_2ca6f4;
        default: break;
    }

    ctx->pc = 0x2ca6b0u;

    // 0x2ca6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca6b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca6c4: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ca6c8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA6C8u;
    {
        const bool branch_taken_0x2ca6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6c8) {
            ctx->pc = 0x2CA6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6C8u;
            // 0x2ca6cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA704u;
            goto label_2ca704;
        }
    }
    ctx->pc = 0x2CA6D0u;
    // 0x2ca6d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ca6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca6d4: 0x0  nop
    ctx->pc = 0x2ca6d4u;
    // NOP
label_2ca6d8:
    // 0x2ca6d8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2ca6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2ca6dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca6e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA6E0u;
    {
        const bool branch_taken_0x2ca6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6E0u;
        // 0x2ca6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6e0) {
            ctx->pc = 0x2CA6F4u;
            goto label_2ca6f4;
        }
    }
    ctx->pc = 0x2CA6E8u;
    // 0x2ca6e8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2ca6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ca6ec: 0xc0b2f08  jal         func_2CBC20
    ctx->pc = 0x2CA6ECu;
    SET_GPR_U32(ctx, 31, 0x2CA6F4u);
    ctx->pc = 0x2CA6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA6ECu;
    // 0x2ca6f0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC20u, 0x2CA6ECu, 0x2CA6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6F4u;
label_2ca6f4:
    // 0x2ca6f4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2ca6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca6f8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CA6F8u;
    {
        const bool branch_taken_0x2ca6f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6f8) {
            ctx->pc = 0x2CA6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6F8u;
            // 0x2ca6fc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca6d8;
        }
    }
    ctx->pc = 0x2CA700u;
    // 0x2ca700: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca704:
    // 0x2ca704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca70c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA70Cu;
        // 0x2ca710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA714u;
    // 0x2ca714: 0x0  nop
    ctx->pc = 0x2ca714u;
    // NOP
    ctx->pc = 0x2ca718u;
}
