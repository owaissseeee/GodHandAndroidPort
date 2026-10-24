#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: checkBridge__5cR508
// Address: 0x799420 - 0x799500
void checkBridge__5cR508_0x799420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBridge__5cR508_0x799420");
#endif

    switch (ctx->pc) {
        case 0x799450u: goto label_799450;
        case 0x799458u: goto label_799458;
        case 0x79946cu: goto label_79946c;
        case 0x799498u: goto label_799498;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994e4u: goto label_7994e4;
        default: break;
    }

    ctx->pc = 0x799420u;

    // 0x799420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799424: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799428: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79942c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799434: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799438: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79943c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799444: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0x8e029900  lw          $v0, -0x6700($s0)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799900u));
    // 0x79944c: 0x0  nop
    ctx->pc = 0x79944cu;
    // NOP
label_799450:
    // 0x799450: 0xc05ee06  jal         func_17B818
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B818u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799458) {
            ctx->pc = 0x799474u;
            goto label_799474;
        }
    }
    ctx->pc = 0x799460u;
    // 0x799460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799464: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x79946Cu;
    {
        const bool branch_taken_0x79946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x8e029900  lw          $v0, -0x6700($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79946c) {
            ctx->pc = 0x799450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799450;
        }
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799478: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x79947c: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799480: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799484: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799488: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79948c: 0x8e639900  lw          $v1, -0x6700($s3)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940928)));
    // 0x799490: 0xc05edba  jal         func_17B6E8
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B6E8u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79949c: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x7994a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7994A0u;
    {
        const bool branch_taken_0x7994a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a0) {
            ctx->pc = 0x7994B4u;
            goto label_7994b4;
        }
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x8e629900  lw          $v0, -0x6700($s3)
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940928)));
    // 0x7994b8: 0xc05ee06  jal         func_17B818
    ctx->pc = 0x7994B8u;
    SET_GPR_U32(ctx, 31, 0x7994C0u);
    ctx->pc = 0x7994BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B8u;
    // 0x7994bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B818u, 0x7994B8u, 0x7994C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C0u;
label_7994c0:
    // 0x7994c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7994C0u;
    {
        const bool branch_taken_0x7994c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C0u;
        // 0x7994c4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c0) {
            ctx->pc = 0x7994A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994a8;
        }
    }
    ctx->pc = 0x7994C8u;
    // 0x7994c8: 0x2624ae50  addiu       $a0, $s1, -0x51B0
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
    // 0x7994cc: 0x26059838  addiu       $a1, $s0, -0x67C8
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940728));
    // 0x7994d0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7994dc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7994e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7994e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7994ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7994ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7994f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7994f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7994f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799500u;
}
} // namespace gh_r508
