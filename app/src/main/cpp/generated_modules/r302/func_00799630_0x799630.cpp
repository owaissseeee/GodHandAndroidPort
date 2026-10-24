#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: func_00799630
// Address: 0x799630 - 0x799708
void func_00799630_0x799630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799630_0x799630");
#endif

    switch (ctx->pc) {
        case 0x799674u: goto label_799674;
        case 0x799680u: goto label_799680;
        case 0x799690u: goto label_799690;
        case 0x799698u: goto label_799698;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996e8u: goto label_7996e8;
        default: break;
    }

    ctx->pc = 0x799630u;

    // 0x799630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799634: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799638: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79963c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799640: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79964c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799654: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799658: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79965c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799660u;
    {
        const bool branch_taken_0x799660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799660) {
            ctx->pc = 0x799674u;
            goto label_799674;
        }
    }
    ctx->pc = 0x799668u;
    // 0x799668: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79966c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79966Cu;
    SET_GPR_U32(ctx, 31, 0x799674u);
    ctx->pc = 0x799670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79966Cu;
    // 0x799670: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79966Cu, 0x799674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799674u;
label_799674:
    // 0x799674: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x799678: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799678u;
    {
        const bool branch_taken_0x799678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799678u;
        // 0x79967c: 0x3c120060  lui         $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799678) {
            ctx->pc = 0x799690u;
            goto label_799690;
        }
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799684: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799688: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799690u;
    SET_GPR_U32(ctx, 31, 0x799698u);
    ctx->pc = 0x799694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799690u;
    // 0x799694: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799690u, 0x799698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799698u;
    {
        const bool branch_taken_0x799698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0x8e638658  lw          $v1, -0x79A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799698) {
            ctx->pc = 0x799680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799680;
        }
    }
    ctx->pc = 0x7996A0u;
    // 0x7996a0: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x7996a4: 0x26246af0  addiu       $a0, $s1, 0x6AF0
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27376));
    // 0x7996a8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7996ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7996b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7996b4: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7996B4u;
    SET_GPR_U32(ctx, 31, 0x7996BCu);
    ctx->pc = 0x7996B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B4u;
    // 0x7996b8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7996B4u, 0x7996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996BCu;
label_7996bc:
    // 0x7996bc: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x7996c0: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7996C0u;
    SET_GPR_U32(ctx, 31, 0x7996C8u);
    ctx->pc = 0x7996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C0u;
    // 0x7996c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7996C0u, 0x7996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x7996cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x7996d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7996d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7996d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7996d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7996dc: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7996e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7996e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7996ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7996ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7996f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7996f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7996f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7996f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7996f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7996FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799704u;
    // 0x799704: 0x0  nop
    ctx->pc = 0x799704u;
    // NOP
    ctx->pc = 0x799708u;
}
} // namespace gh_r302
