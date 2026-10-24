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

// Function: func_003537C0
// Address: 0x3537c0 - 0x3538b0
void func_003537C0_0x3537c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003537C0_0x3537c0");
#endif

    switch (ctx->pc) {
        case 0x3537f8u: goto label_3537f8;
        case 0x35380cu: goto label_35380c;
        case 0x35381cu: goto label_35381c;
        case 0x353830u: goto label_353830;
        case 0x35384cu: goto label_35384c;
        case 0x35385cu: goto label_35385c;
        case 0x353884u: goto label_353884;
        default: break;
    }

    ctx->pc = 0x3537c0u;

    // 0x3537c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3537c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3537c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3537c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3537c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3537c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3537ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3537d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3537d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3537d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3537d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3537d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3537dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3537dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3537e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3537e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3537e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3537e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3537e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3537e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3537ec: 0x8e551fc0  lw          $s5, 0x1FC0($s2)
    ctx->pc = 0x3537ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x3537f0: 0xc0d4e2c  jal         func_3538B0
    ctx->pc = 0x3537F0u;
    SET_GPR_U32(ctx, 31, 0x3537F8u);
    ctx->pc = 0x3537F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3537F0u;
    // 0x3537f4: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3538B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3538B0u, 0x3537F0u, 0x3537F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537F8u;
label_3537f8:
    // 0x3537f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3537f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3537fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353804: 0xc0ce804  jal         func_33A010
    ctx->pc = 0x353804u;
    SET_GPR_U32(ctx, 31, 0x35380Cu);
    ctx->pc = 0x353808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353804u;
    // 0x353808: 0x26b6008c  addiu       $s6, $s5, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x353804u, 0x35380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35380Cu;
label_35380c:
    // 0x35380c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35380cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x353810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353814: 0xc0da7ee  jal         func_369FB8
    ctx->pc = 0x353814u;
    SET_GPR_U32(ctx, 31, 0x35381Cu);
    ctx->pc = 0x353818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353814u;
    // 0x353818: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FB8u, 0x353814u, 0x35381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35381Cu;
label_35381c:
    // 0x35381c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x353824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353828: 0xc0ce804  jal         func_33A010
    ctx->pc = 0x353828u;
    SET_GPR_U32(ctx, 31, 0x353830u);
    ctx->pc = 0x35382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353828u;
    // 0x35382c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x353828u, 0x353830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353830u;
label_353830:
    // 0x353830: 0x548823  subu        $s1, $v0, $s4
    ctx->pc = 0x353830u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x353834: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x353834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x353838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x353838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35383c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x353840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353844: 0xc0d4706  jal         func_351C18
    ctx->pc = 0x353844u;
    SET_GPR_U32(ctx, 31, 0x35384Cu);
    ctx->pc = 0x353848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353844u;
    // 0x353848: 0x34e70f07  ori         $a3, $a3, 0xF07 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3847);
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C18u, 0x353844u, 0x35384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35384Cu;
label_35384c:
    // 0x35384c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353854: 0xc0d46dc  jal         func_351B70
    ctx->pc = 0x353854u;
    SET_GPR_U32(ctx, 31, 0x35385Cu);
    ctx->pc = 0x353858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353854u;
    // 0x353858: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B70u, 0x353854u, 0x35385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35385Cu;
label_35385c:
    // 0x35385c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35385cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x353860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353864: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x353864u;
    {
        const bool branch_taken_0x353864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x353868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353864u;
        // 0x353868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353864) {
            ctx->pc = 0x353888u;
            goto label_353888;
        }
    }
    ctx->pc = 0x35386Cu;
    // 0x35386c: 0x82c20058  lb          $v0, 0x58($s6)
    ctx->pc = 0x35386cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x353870: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x353870u;
    {
        const bool branch_taken_0x353870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353870u;
        // 0x353874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353870) {
            ctx->pc = 0x35387Cu;
            goto label_35387c;
        }
    }
    ctx->pc = 0x353878u;
    // 0x353878: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x353878u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_35387c:
    // 0x35387c: 0xc0d61da  jal         func_358768
    ctx->pc = 0x35387Cu;
    SET_GPR_U32(ctx, 31, 0x353884u);
    ctx->pc = 0x353880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35387Cu;
    // 0x353880: 0x8ec60018  lw          $a2, 0x18($s6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358768u, 0x35387Cu, 0x353884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353884u;
label_353884:
    // 0x353884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353888:
    // 0x353888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35388c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35388cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x353890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x353894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353898: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x353898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35389c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35389cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3538a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3538a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3538a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3538a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3538a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3538A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3538ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538A8u;
        // 0x3538ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3538A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3538B0u;
}
