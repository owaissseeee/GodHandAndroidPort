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

// Function: cSnd_StaticInit
// Address: 0x2cc3b8 - 0x2cc4a0
void cSnd_StaticInit_0x2cc3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_StaticInit_0x2cc3b8");
#endif

    switch (ctx->pc) {
        case 0x2cc3ecu: goto label_2cc3ec;
        case 0x2cc3f8u: goto label_2cc3f8;
        case 0x2cc404u: goto label_2cc404;
        case 0x2cc420u: goto label_2cc420;
        case 0x2cc42cu: goto label_2cc42c;
        case 0x2cc448u: goto label_2cc448;
        case 0x2cc454u: goto label_2cc454;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc47cu: goto label_2cc47c;
        default: break;
    }

    ctx->pc = 0x2cc3b8u;

    // 0x2cc3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc3bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cc3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cc3c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cc3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cc3c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cc3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cc3c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cc3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cc3cc: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2CC3CCu;
    {
        const bool branch_taken_0x2cc3cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3CCu;
        // 0x2cc3d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3cc) {
            ctx->pc = 0x2CC488u;
            goto label_2cc488;
        }
    }
    ctx->pc = 0x2CC3D4u;
    // 0x2cc3d4: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CC3D4u;
    {
        const bool branch_taken_0x2cc3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3D4u;
        // 0x2cc3d8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3d4) {
            ctx->pc = 0x2CC488u;
            goto label_2cc488;
        }
    }
    ctx->pc = 0x2CC3DCu;
    // 0x2cc3dc: 0x24110033  addiu       $s1, $zero, 0x33
    ctx->pc = 0x2cc3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2cc3e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cc3e4: 0xc0b2722  jal         func_2C9C88
    ctx->pc = 0x2CC3E4u;
    SET_GPR_U32(ctx, 31, 0x2CC3ECu);
    ctx->pc = 0x2CC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3E4u;
    // 0x2cc3e8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C88u, 0x2CC3E4u, 0x2CC3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3ECu;
label_2cc3ec:
    // 0x2cc3ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2cc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2cc3f0: 0x2470eff0  addiu       $s0, $v1, -0x1010
    ctx->pc = 0x2cc3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963184));
    // 0x2cc3f4: 0x0  nop
    ctx->pc = 0x2cc3f4u;
    // NOP
label_2cc3f8:
    // 0x2cc3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc3fc: 0xc0b3cb4  jal         func_2CF2D0
    ctx->pc = 0x2CC3FCu;
    SET_GPR_U32(ctx, 31, 0x2CC404u);
    ctx->pc = 0x2CC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3FCu;
    // 0x2cc400: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF2D0u, 0x2CC3FCu, 0x2CC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC404u;
label_2cc404:
    // 0x2cc404: 0x0  nop
    ctx->pc = 0x2cc404u;
    // NOP
    // 0x2cc408: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CC408u;
    {
        const bool branch_taken_0x2cc408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC408u;
        // 0x2cc40c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc408) {
            ctx->pc = 0x2CC3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc3f8;
        }
    }
    ctx->pc = 0x2CC410u;
    // 0x2cc410: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cc414: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2cc414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc418: 0x2451fcf0  addiu       $s1, $v0, -0x310
    ctx->pc = 0x2cc418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x2cc41c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2cc41cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc420:
    // 0x2cc420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc424: 0xc0b3fcc  jal         func_2CFF30
    ctx->pc = 0x2CC424u;
    SET_GPR_U32(ctx, 31, 0x2CC42Cu);
    ctx->pc = 0x2CC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC424u;
    // 0x2cc428: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF30u, 0x2CC424u, 0x2CC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC42Cu;
label_2cc42c:
    // 0x2cc42c: 0x0  nop
    ctx->pc = 0x2cc42cu;
    // NOP
    // 0x2cc430: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CC430u;
    {
        const bool branch_taken_0x2cc430 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC430u;
        // 0x2cc434: 0x26310044  addiu       $s1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc430) {
            ctx->pc = 0x2CC420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc420;
        }
    }
    ctx->pc = 0x2CC438u;
    // 0x2cc438: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cc43c: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x2cc43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2cc440: 0x2451fd80  addiu       $s1, $v0, -0x280
    ctx->pc = 0x2cc440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x2cc444: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2cc444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc448:
    // 0x2cc448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc44c: 0xc0b3682  jal         func_2CDA08
    ctx->pc = 0x2CC44Cu;
    SET_GPR_U32(ctx, 31, 0x2CC454u);
    ctx->pc = 0x2CC450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC44Cu;
    // 0x2cc450: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA08u, 0x2CC44Cu, 0x2CC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC454u;
label_2cc454:
    // 0x2cc454: 0x0  nop
    ctx->pc = 0x2cc454u;
    // NOP
    // 0x2cc458: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CC458u;
    {
        const bool branch_taken_0x2cc458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC458u;
        // 0x2cc45c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc458) {
            ctx->pc = 0x2CC448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc448;
        }
    }
    ctx->pc = 0x2CC460u;
    // 0x2cc460: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cc460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cc464: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x2cc464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cc468: 0x24511180  addiu       $s1, $v0, 0x1180
    ctx->pc = 0x2cc468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x2cc46c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2cc46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc470:
    // 0x2cc470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc474: 0xc0b3140  jal         func_2CC500
    ctx->pc = 0x2CC474u;
    SET_GPR_U32(ctx, 31, 0x2CC47Cu);
    ctx->pc = 0x2CC478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC474u;
    // 0x2cc478: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC500u, 0x2CC474u, 0x2CC47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC47Cu;
label_2cc47c:
    // 0x2cc47c: 0x0  nop
    ctx->pc = 0x2cc47cu;
    // NOP
    // 0x2cc480: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CC480u;
    {
        const bool branch_taken_0x2cc480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2CC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC480u;
        // 0x2cc484: 0x263100dc  addiu       $s1, $s1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc480) {
            ctx->pc = 0x2CC470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc470;
        }
    }
    ctx->pc = 0x2CC488u;
label_2cc488:
    // 0x2cc488: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cc488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc48c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cc48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc490: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cc490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc498: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC498u;
        // 0x2cc49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC4A0u;
}
