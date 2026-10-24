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

// Function: cSnd_BattleBgmAllPause
// Address: 0x2d1498 - 0x2d14f8
void cSnd_BattleBgmAllPause_0x2d1498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BattleBgmAllPause_0x2d1498");
#endif

    switch (ctx->pc) {
        case 0x2d14c0u: goto label_2d14c0;
        case 0x2d14d4u: goto label_2d14d4;
        default: break;
    }

    ctx->pc = 0x2d1498u;

    // 0x2d1498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d149c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2d149cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d14a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d14a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d14a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d14a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d14a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d14ac: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d14acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d14b0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D14B0u;
    {
        const bool branch_taken_0x2d14b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14B0u;
        // 0x2d14b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14b0) {
            ctx->pc = 0x2D14E0u;
            goto label_2d14e0;
        }
    }
    ctx->pc = 0x2D14B8u;
    // 0x2d14b8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2d14b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d14bc: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d14c0:
    // 0x2d14c0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D14C0u;
    {
        const bool branch_taken_0x2d14c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14C0u;
        // 0x2d14c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14c0) {
            ctx->pc = 0x2D14D4u;
            goto label_2d14d4;
        }
    }
    ctx->pc = 0x2D14C8u;
    // 0x2d14c8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2d14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2d14cc: 0xc0b3540  jal         func_2CD500
    ctx->pc = 0x2D14CCu;
    SET_GPR_U32(ctx, 31, 0x2D14D4u);
    ctx->pc = 0x2D14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14CCu;
    // 0x2d14d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD500u, 0x2D14CCu, 0x2D14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14D4u;
label_2d14d4:
    // 0x2d14d4: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d14d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d14d8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D14D8u;
    {
        const bool branch_taken_0x2d14d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d14d8) {
            ctx->pc = 0x2D14DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D14D8u;
            // 0x2d14dc: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D14C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d14c0;
        }
    }
    ctx->pc = 0x2D14E0u;
label_2d14e0:
    // 0x2d14e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d14e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d14e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d14e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d14e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d14e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d14ec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2d14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d14f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D14F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14F0u;
        // 0x2d14f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D14F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D14F8u;
}
