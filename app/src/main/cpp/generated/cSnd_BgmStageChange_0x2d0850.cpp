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

// Function: cSnd_BgmStageChange
// Address: 0x2d0850 - 0x2d0938
void cSnd_BgmStageChange_0x2d0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmStageChange_0x2d0850");
#endif

    switch (ctx->pc) {
        case 0x2d0884u: goto label_2d0884;
        case 0x2d0898u: goto label_2d0898;
        case 0x2d08bcu: goto label_2d08bc;
        default: break;
    }

    ctx->pc = 0x2d0850u;

    // 0x2d0850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0854: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2d0854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2d0858: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d0858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d085c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d0860: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d0860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0864: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d0868: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2d0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2d086c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d0870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0874: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d0874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d0878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d087c: 0xc0b435c  jal         func_2D0D70
    ctx->pc = 0x2D087Cu;
    SET_GPR_U32(ctx, 31, 0x2D0884u);
    ctx->pc = 0x2D0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D087Cu;
    // 0x2d0880: 0x944505b0  lhu         $a1, 0x5B0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D70u, 0x2D087Cu, 0x2D0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0884u;
label_2d0884:
    // 0x2d0884: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2d0884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d0888: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0888u;
    {
        const bool branch_taken_0x2d0888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0888u;
        // 0x2d088c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0888) {
            ctx->pc = 0x2D08C8u;
            goto label_2d08c8;
        }
    }
    ctx->pc = 0x2D0890u;
    // 0x2d0890: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d0890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0894: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d0898:
    // 0x2d0898: 0x50530009  beql        $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0898u;
    {
        const bool branch_taken_0x2d0898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d0898) {
            ctx->pc = 0x2D089Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0898u;
            // 0x2d089c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D08A0u;
    // 0x2d08a0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d08a4: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D08A4u;
    {
        const bool branch_taken_0x2d08a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2d08a4) {
            ctx->pc = 0x2D08A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D08A4u;
            // 0x2d08a8: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D08C0u;
            goto label_2d08c0;
        }
    }
    ctx->pc = 0x2D08ACu;
    // 0x2d08ac: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2d08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2d08b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d08b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d08b4: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D08B4u;
    SET_GPR_U32(ctx, 31, 0x2D08BCu);
    ctx->pc = 0x2D08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08B4u;
    // 0x2d08b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D08B4u, 0x2D08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08BCu;
label_2d08bc:
    // 0x2d08bc: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d08bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d08c0:
    // 0x2d08c0: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D08C0u;
    {
        const bool branch_taken_0x2d08c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d08c0) {
            ctx->pc = 0x2D08C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D08C0u;
            // 0x2d08c4: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0898;
        }
    }
    ctx->pc = 0x2D08C8u;
label_2d08c8:
    // 0x2d08c8: 0x268274a0  addiu       $v0, $s4, 0x74A0
    ctx->pc = 0x2d08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
    // 0x2d08cc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2d08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d08d0: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x2d08d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2d08d4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D08D4u;
    {
        const bool branch_taken_0x2d08d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08D4u;
        // 0x2d08d8: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08d4) {
            ctx->pc = 0x2D0904u;
            goto label_2d0904;
        }
    }
    ctx->pc = 0x2D08DCu;
    // 0x2d08dc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D08DCu;
    {
        const bool branch_taken_0x2d08dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08DCu;
        // 0x2d08e0: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08dc) {
            ctx->pc = 0x2D0904u;
            goto label_2d0904;
        }
    }
    ctx->pc = 0x2D08E4u;
    // 0x2d08e4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2d08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2d08e8: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2d08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2d08ec: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2d08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d08f0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2d08f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2d08f4: 0xae240128  sw          $a0, 0x128($s1)
    ctx->pc = 0x2d08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 4));
    // 0x2d08f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2d08f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2d08fc: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x2d08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x2d0900: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x2d0900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_2d0904:
    // 0x2d0904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d0904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0908: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2d0908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x2d090c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x2d090cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x2d0910: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2d0910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x2d0914: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d0914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0918: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d0918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d091c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d091cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0920: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d0920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0924: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d0924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d092c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D092Cu;
        // 0x2d0930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D092Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0934u;
    // 0x2d0934: 0x0  nop
    ctx->pc = 0x2d0934u;
    // NOP
    ctx->pc = 0x2d0938u;
}
