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

// Function: cSndBgmNode_Start
// Address: 0x2cd398 - 0x2cd470
void cSndBgmNode_Start_0x2cd398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Start_0x2cd398");
#endif

    switch (ctx->pc) {
        case 0x2cd3c4u: goto label_2cd3c4;
        case 0x2cd3d8u: goto label_2cd3d8;
        case 0x2cd3e0u: goto label_2cd3e0;
        case 0x2cd3e8u: goto label_2cd3e8;
        case 0x2cd3fcu: goto label_2cd3fc;
        case 0x2cd404u: goto label_2cd404;
        case 0x2cd420u: goto label_2cd420;
        case 0x2cd430u: goto label_2cd430;
        case 0x2cd448u: goto label_2cd448;
        case 0x2cd454u: goto label_2cd454;
        default: break;
    }

    ctx->pc = 0x2cd398u;

    // 0x2cd398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cd3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2cd3a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd3ac: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2cd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2cd3b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2cd3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2cd3b4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CD3B4u;
    {
        const bool branch_taken_0x2cd3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3B4u;
        // 0x2cd3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3b4) {
            ctx->pc = 0x2CD45Cu;
            goto label_2cd45c;
        }
    }
    ctx->pc = 0x2CD3BCu;
    // 0x2cd3bc: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x2CD3BCu;
    SET_GPR_U32(ctx, 31, 0x2CD3C4u);
    ctx->pc = 0x2CD3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3BCu;
    // 0x2cd3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x2CD3BCu, 0x2CD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3C4u;
label_2cd3c4:
    // 0x2cd3c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd3c8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD3C8u;
    {
        const bool branch_taken_0x2cd3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd3c8) {
            ctx->pc = 0x2CD3E0u;
            goto label_2cd3e0;
        }
    }
    ctx->pc = 0x2CD3D0u;
    // 0x2cd3d0: 0xc0dcd0c  jal         func_373430
    ctx->pc = 0x2CD3D0u;
    SET_GPR_U32(ctx, 31, 0x2CD3D8u);
    ctx->pc = 0x2CD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3D0u;
    // 0x2cd3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373430u, 0x2CD3D0u, 0x2CD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3D8u;
label_2cd3d8:
    // 0x2cd3d8: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x2CD3D8u;
    SET_GPR_U32(ctx, 31, 0x2CD3E0u);
    ctx->pc = 0x2CD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3D8u;
    // 0x2cd3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x2CD3D8u, 0x2CD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3E0u;
label_2cd3e0:
    // 0x2cd3e0: 0xc0b413e  jal         func_2D04F8
    ctx->pc = 0x2CD3E0u;
    SET_GPR_U32(ctx, 31, 0x2CD3E8u);
    ctx->pc = 0x2CD3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3E0u;
    // 0x2cd3e4: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04F8u, 0x2CD3E0u, 0x2CD3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3E8u;
label_2cd3e8:
    // 0x2cd3e8: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2cd3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2cd3ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cd3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd3f4: 0xc0dcc46  jal         func_373118
    ctx->pc = 0x2CD3F4u;
    SET_GPR_U32(ctx, 31, 0x2CD3FCu);
    ctx->pc = 0x2CD3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD3F4u;
    // 0x2cd3f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373118u, 0x2CD3F4u, 0x2CD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3FCu;
label_2cd3fc:
    // 0x2cd3fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD3FCu;
    {
        const bool branch_taken_0x2cd3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd3fc) {
            ctx->pc = 0x2CD400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD3FCu;
            // 0x2cd400: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD40Cu;
            goto label_2cd40c;
        }
    }
    ctx->pc = 0x2CD404u;
label_2cd404:
    // 0x2cd404: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CD404u;
    {
        const bool branch_taken_0x2cd404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD404u;
        // 0x2cd408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd404) {
            ctx->pc = 0x2CD45Cu;
            goto label_2cd45c;
        }
    }
    ctx->pc = 0x2CD40Cu;
label_2cd40c:
    // 0x2cd40c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cd40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cd410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD410u;
    {
        const bool branch_taken_0x2cd410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD410u;
        // 0x2cd414: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd410) {
            ctx->pc = 0x2CD428u;
            goto label_2cd428;
        }
    }
    ctx->pc = 0x2CD418u;
    // 0x2cd418: 0xc0dcc56  jal         func_373158
    ctx->pc = 0x2CD418u;
    SET_GPR_U32(ctx, 31, 0x2CD420u);
    ctx->pc = 0x2CD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD418u;
    // 0x2cd41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373158u, 0x2CD418u, 0x2CD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD420u;
label_2cd420:
    // 0x2cd420: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD420u;
    {
        const bool branch_taken_0x2cd420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd420) {
            ctx->pc = 0x2CD430u;
            goto label_2cd430;
        }
    }
    ctx->pc = 0x2CD428u;
label_2cd428:
    // 0x2cd428: 0xc0dcca6  jal         func_373298
    ctx->pc = 0x2CD428u;
    SET_GPR_U32(ctx, 31, 0x2CD430u);
    ctx->pc = 0x2CD42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD428u;
    // 0x2cd42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373298u, 0x2CD428u, 0x2CD430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD430u;
label_2cd430:
    // 0x2cd430: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CD430u;
    {
        const bool branch_taken_0x2cd430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD430u;
        // 0x2cd434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd430) {
            ctx->pc = 0x2CD404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd404;
        }
    }
    ctx->pc = 0x2CD438u;
    // 0x2cd438: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2cd438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cd43c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd440: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x2CD440u;
    SET_GPR_U32(ctx, 31, 0x2CD448u);
    ctx->pc = 0x2CD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD440u;
    // 0x2cd444: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x2CD440u, 0x2CD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD448u;
label_2cd448:
    // 0x2cd448: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cd448u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cd44c: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2CD44Cu;
    SET_GPR_U32(ctx, 31, 0x2CD454u);
    ctx->pc = 0x2CD450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD44Cu;
    // 0x2cd450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2CD44Cu, 0x2CD454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD454u;
label_2cd454:
    // 0x2cd454: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2cd454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2cd458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd45c:
    // 0x2cd45c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd464: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2cd464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd468: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD468u;
        // 0x2cd46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD470u;
}
