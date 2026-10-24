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

// Function: cEmManage_ReleaseEm
// Address: 0x290770 - 0x290868
void cEmManage_ReleaseEm_0x290770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_ReleaseEm_0x290770");
#endif

    switch (ctx->pc) {
        case 0x290798u: goto label_290798;
        case 0x2907b0u: goto label_2907b0;
        case 0x2907c4u: goto label_2907c4;
        case 0x2907ccu: goto label_2907cc;
        case 0x290804u: goto label_290804;
        case 0x290810u: goto label_290810;
        default: break;
    }

    ctx->pc = 0x290770u;

    // 0x290770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290774: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x290774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x290778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x290778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29077c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x29077cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x290780: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x290780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x290784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x290784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290788: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29078c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290790: 0xc0a55bc  jal         func_2956F0
    ctx->pc = 0x290790u;
    SET_GPR_U32(ctx, 31, 0x290798u);
    ctx->pc = 0x290794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290790u;
    // 0x290794: 0x26046ab0  addiu       $a0, $s0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956F0u, 0x290790u, 0x290798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290798u;
label_290798:
    // 0x290798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29079c: 0x8e500500  lw          $s0, 0x500($s2)
    ctx->pc = 0x29079cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2907a0: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2907A0u;
    {
        const bool branch_taken_0x2907a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907A0u;
        // 0x2907a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907a0) {
            ctx->pc = 0x290844u;
            goto label_290844;
        }
    }
    ctx->pc = 0x2907A8u;
    // 0x2907a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2907a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2907ac: 0x0  nop
    ctx->pc = 0x2907acu;
    // NOP
label_2907b0:
    // 0x2907b0: 0x54510021  bnel        $v0, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2907B0u;
    {
        const bool branch_taken_0x2907b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2907b0) {
            ctx->pc = 0x2907B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2907B0u;
            // 0x2907b4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290838u;
            goto label_290838;
        }
    }
    ctx->pc = 0x2907B8u;
    // 0x2907b8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x2907b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x2907bc: 0xc0a55a8  jal         func_2956A0
    ctx->pc = 0x2907BCu;
    SET_GPR_U32(ctx, 31, 0x2907C4u);
    ctx->pc = 0x2907C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907BCu;
    // 0x2907c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956A0u, 0x2907BCu, 0x2907C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907C4u;
label_2907c4:
    // 0x2907c4: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x2907C4u;
    SET_GPR_U32(ctx, 31, 0x2907CCu);
    ctx->pc = 0x2907C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907C4u;
    // 0x2907c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2907C4u, 0x2907CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907CCu;
label_2907cc:
    // 0x2907cc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2907CCu;
    {
        const bool branch_taken_0x2907cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907CCu;
        // 0x2907d0: 0x26440500  addiu       $a0, $s2, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907cc) {
            ctx->pc = 0x2907F8u;
            goto label_2907f8;
        }
    }
    ctx->pc = 0x2907D4u;
    // 0x2907d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2907d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2907d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2907D8u;
    {
        const bool branch_taken_0x2907d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2907DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907D8u;
        // 0x2907dc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907d8) {
            ctx->pc = 0x2907E8u;
            goto label_2907e8;
        }
    }
    ctx->pc = 0x2907E0u;
    // 0x2907e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2907E0u;
    {
        const bool branch_taken_0x2907e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907E0u;
        // 0x2907e4: 0xae420500  sw          $v0, 0x500($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907e0) {
            ctx->pc = 0x2907ECu;
            goto label_2907ec;
        }
    }
    ctx->pc = 0x2907E8u;
label_2907e8:
    // 0x2907e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2907e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2907ec:
    // 0x2907ec: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2907ECu;
    {
        const bool branch_taken_0x2907ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2907ec) {
            ctx->pc = 0x2907F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2907ECu;
            // 0x2907f0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2907F8u;
            goto label_2907f8;
        }
    }
    ctx->pc = 0x2907F4u;
    // 0x2907f4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2907f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2907f8:
    // 0x2907f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2907f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907fc: 0xc0a400a  jal         func_290028
    ctx->pc = 0x2907FCu;
    SET_GPR_U32(ctx, 31, 0x290804u);
    ctx->pc = 0x290800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2907FCu;
    // 0x290800: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290028u, 0x2907FCu, 0x290804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290804u;
label_290804:
    // 0x290804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290808: 0xc0a4262  jal         func_290988
    ctx->pc = 0x290808u;
    SET_GPR_U32(ctx, 31, 0x290810u);
    ctx->pc = 0x29080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290808u;
    // 0x29080c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290988u, 0x290808u, 0x290810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290810u;
label_290810:
    // 0x290810: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x290810u;
    {
        const bool branch_taken_0x290810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290810) {
            ctx->pc = 0x290814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290810u;
            // 0x290814: 0x8e430508  lw          $v1, 0x508($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290828u;
            goto label_290828;
        }
    }
    ctx->pc = 0x290818u;
    // 0x290818: 0x8e42050c  lw          $v0, 0x50C($s2)
    ctx->pc = 0x290818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1292)));
    // 0x29081c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x290820: 0xae42050c  sw          $v0, 0x50C($s2)
    ctx->pc = 0x290820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1292), GPR_U32(ctx, 2));
    // 0x290824: 0x8e430508  lw          $v1, 0x508($s2)
    ctx->pc = 0x290824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1288)));
label_290828:
    // 0x290828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29082c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290830u;
    {
        const bool branch_taken_0x290830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290830u;
        // 0x290834: 0xae430508  sw          $v1, 0x508($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290830) {
            ctx->pc = 0x290844u;
            goto label_290844;
        }
    }
    ctx->pc = 0x290838u;
label_290838:
    // 0x290838: 0x5600ffdd  bnel        $s0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x290838u;
    {
        const bool branch_taken_0x290838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x290838) {
            ctx->pc = 0x29083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290838u;
            // 0x29083c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2907B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2907b0;
        }
    }
    ctx->pc = 0x290840u;
    // 0x290840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290844:
    // 0x290844: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29084c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29084cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290854: 0x3e00008  jr          $ra
    ctx->pc = 0x290854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290854u;
        // 0x290858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29085Cu;
    // 0x29085c: 0x0  nop
    ctx->pc = 0x29085cu;
    // NOP
    // 0x290860: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x290860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x290864: 0x0  nop
    ctx->pc = 0x290864u;
    // NOP
    ctx->pc = 0x290868u;
}
