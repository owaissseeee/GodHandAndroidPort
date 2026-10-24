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

// Function: cSnd_BgmEvAllSuspend
// Address: 0x2d2088 - 0x2d20e0
void cSnd_BgmEvAllSuspend_0x2d2088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvAllSuspend_0x2d2088");
#endif

    switch (ctx->pc) {
        case 0x2d20a8u: goto label_2d20a8;
        case 0x2d20bcu: goto label_2d20bc;
        default: break;
    }

    ctx->pc = 0x2d2088u;

    // 0x2d2088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d208c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d208cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d2090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d2094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d2098: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d2098u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d209c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D209Cu;
    {
        const bool branch_taken_0x2d209c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D209Cu;
        // 0x2d20a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d209c) {
            ctx->pc = 0x2D20C8u;
            goto label_2d20c8;
        }
    }
    ctx->pc = 0x2D20A4u;
    // 0x2d20a4: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2d20a8:
    // 0x2d20a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d20a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d20acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d20b0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2d20b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2d20b4: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D20B4u;
    SET_GPR_U32(ctx, 31, 0x2D20BCu);
    ctx->pc = 0x2D20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D20B4u;
    // 0x2d20b8: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D20B4u, 0x2D20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20BCu;
label_2d20bc:
    // 0x2d20bc: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d20bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d20c0: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D20C0u;
    {
        const bool branch_taken_0x2d20c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d20c0) {
            ctx->pc = 0x2D20C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D20C0u;
            // 0x2d20c4: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D20A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d20a8;
        }
    }
    ctx->pc = 0x2D20C8u;
label_2d20c8:
    // 0x2d20c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d20c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d20cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d20ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d20d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2d20d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d20d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D20D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20D4u;
        // 0x2d20d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D20D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D20DCu;
    // 0x2d20dc: 0x0  nop
    ctx->pc = 0x2d20dcu;
    // NOP
    ctx->pc = 0x2d20e0u;
}
