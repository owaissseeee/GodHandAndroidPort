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

// Function: func_003A6830
// Address: 0x3a6830 - 0x3a68c8
void func_003A6830_0x3a6830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6830_0x3a6830");
#endif

    switch (ctx->pc) {
        case 0x3a6830u: goto label_3a6830;
        case 0x3a6834u: goto label_3a6834;
        case 0x3a6838u: goto label_3a6838;
        case 0x3a683cu: goto label_3a683c;
        case 0x3a6840u: goto label_3a6840;
        case 0x3a6844u: goto label_3a6844;
        case 0x3a6848u: goto label_3a6848;
        case 0x3a684cu: goto label_3a684c;
        case 0x3a6850u: goto label_3a6850;
        case 0x3a6854u: goto label_3a6854;
        case 0x3a6858u: goto label_3a6858;
        case 0x3a685cu: goto label_3a685c;
        case 0x3a6860u: goto label_3a6860;
        case 0x3a6864u: goto label_3a6864;
        case 0x3a6868u: goto label_3a6868;
        case 0x3a686cu: goto label_3a686c;
        case 0x3a6870u: goto label_3a6870;
        case 0x3a6874u: goto label_3a6874;
        case 0x3a6878u: goto label_3a6878;
        case 0x3a687cu: goto label_3a687c;
        case 0x3a6880u: goto label_3a6880;
        case 0x3a6884u: goto label_3a6884;
        case 0x3a6888u: goto label_3a6888;
        case 0x3a688cu: goto label_3a688c;
        case 0x3a6890u: goto label_3a6890;
        case 0x3a6894u: goto label_3a6894;
        case 0x3a6898u: goto label_3a6898;
        case 0x3a689cu: goto label_3a689c;
        case 0x3a68a0u: goto label_3a68a0;
        case 0x3a68a4u: goto label_3a68a4;
        case 0x3a68a8u: goto label_3a68a8;
        case 0x3a68acu: goto label_3a68ac;
        case 0x3a68b0u: goto label_3a68b0;
        case 0x3a68b4u: goto label_3a68b4;
        case 0x3a68b8u: goto label_3a68b8;
        case 0x3a68bcu: goto label_3a68bc;
        case 0x3a68c0u: goto label_3a68c0;
        case 0x3a68c4u: goto label_3a68c4;
        default: break;
    }

    ctx->pc = 0x3a6830u;

label_3a6830:
    // 0x3a6830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a6830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a6834:
    // 0x3a6834: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a6834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a6838:
    // 0x3a6838: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3a6838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3a683c:
    // 0x3a683c: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x3a683cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_3a6840:
    // 0x3a6840: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3a6840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3a6844:
    // 0x3a6844: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a6844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6848:
    // 0x3a6848: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3a684c:
    // 0x3a684c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a684cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a6850:
    // 0x3a6850: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3a6854:
    // 0x3a6854: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_3a6858:
    if (ctx->pc == 0x3A6858u) {
        ctx->pc = 0x3A6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6854u;
        // 0x3a6858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A685Cu;
        goto label_3a685c;
    }
    ctx->pc = 0x3A6854u;
    {
        const bool branch_taken_0x3a6854 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6854u;
        // 0x3a6858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6854) {
            ctx->pc = 0x3A68A0u;
            goto label_3a68a0;
        }
    }
    ctx->pc = 0x3A685Cu;
label_3a685c:
    // 0x3a685c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3a685cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a6860:
    // 0x3a6860: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3a6860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a6864:
    // 0x3a6864: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_3a6868:
    if (ctx->pc == 0x3A6868u) {
        ctx->pc = 0x3A6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6864u;
        // 0x3a6868: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A686Cu;
        goto label_3a686c;
    }
    ctx->pc = 0x3A6864u;
    {
        const bool branch_taken_0x3a6864 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3A6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6864u;
        // 0x3a6868: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6864) {
            ctx->pc = 0x3A6894u;
            goto label_3a6894;
        }
    }
    ctx->pc = 0x3A686Cu;
label_3a686c:
    // 0x3a686c: 0x0  nop
    ctx->pc = 0x3a686cu;
    // NOP
label_3a6870:
    // 0x3a6870: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x3a6870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3a6874:
    // 0x3a6874: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a6878:
    if (ctx->pc == 0x3A6878u) {
        ctx->pc = 0x3A6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6874u;
        // 0x3a6878: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A687Cu;
        goto label_3a687c;
    }
    ctx->pc = 0x3A6874u;
    {
        const bool branch_taken_0x3a6874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6874) {
            ctx->pc = 0x3A6878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6874u;
            // 0x3a6878: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A688Cu;
            goto label_3a688c;
        }
    }
    ctx->pc = 0x3A687Cu;
label_3a687c:
    // 0x3a687c: 0x280f809  jalr        $s4
label_3a6880:
    if (ctx->pc == 0x3A6880u) {
        ctx->pc = 0x3A6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A687Cu;
        // 0x3a6880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6884u;
        goto label_3a6884;
    }
    ctx->pc = 0x3A687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3A6884u);
        ctx->pc = 0x3A6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A687Cu;
        // 0x3a6880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A687Cu, 0x3A6884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6884u;
label_3a6884:
    // 0x3a6884: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x3a6884u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_3a6888:
    // 0x3a6888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3a6888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a688c:
    // 0x3a688c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_3a6890:
    if (ctx->pc == 0x3A6890u) {
        ctx->pc = 0x3A6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A688Cu;
        // 0x3a6890: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6894u;
        goto label_3a6894;
    }
    ctx->pc = 0x3A688Cu;
    {
        const bool branch_taken_0x3a688c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3A6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A688Cu;
        // 0x3a6890: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a688c) {
            ctx->pc = 0x3A6870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6870;
        }
    }
    ctx->pc = 0x3A6894u;
label_3a6894:
    // 0x3a6894: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x3a6894u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a6898:
    // 0x3a6898: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_3a689c:
    if (ctx->pc == 0x3A689Cu) {
        ctx->pc = 0x3A689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6898u;
        // 0x3a689c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A68A0u;
        goto label_3a68a0;
    }
    ctx->pc = 0x3A6898u;
    {
        const bool branch_taken_0x3a6898 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6898) {
            ctx->pc = 0x3A689Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6898u;
            // 0x3a689c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6860;
        }
    }
    ctx->pc = 0x3A68A0u;
label_3a68a0:
    // 0x3a68a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a68a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a68a4:
    // 0x3a68a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a68a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a68a8:
    // 0x3a68a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a68a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a68ac:
    // 0x3a68ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a68acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a68b0:
    // 0x3a68b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3a68b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a68b4:
    // 0x3a68b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3a68b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a68b8:
    // 0x3a68b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a68b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a68bc:
    // 0x3a68bc: 0x3e00008  jr          $ra
label_3a68c0:
    if (ctx->pc == 0x3A68C0u) {
        ctx->pc = 0x3A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68BCu;
        // 0x3a68c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A68C4u;
        goto label_3a68c4;
    }
    ctx->pc = 0x3A68BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68BCu;
        // 0x3a68c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A68BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A68C4u;
label_3a68c4:
    // 0x3a68c4: 0x0  nop
    ctx->pc = 0x3a68c4u;
    // NOP
    ctx->pc = 0x3a68c8u;
}
