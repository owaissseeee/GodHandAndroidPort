#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: func_007994A0
// Address: 0x7994a0 - 0x799590
void func_007994A0_0x7994a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994A0_0x7994a0");
#endif

    switch (ctx->pc) {
        case 0x7994d0u: goto label_7994d0;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e8u: goto label_7994e8;
        case 0x799514u: goto label_799514;
        case 0x799520u: goto label_799520;
        case 0x799540u: goto label_799540;
        case 0x79954cu: goto label_79954c;
        case 0x799558u: goto label_799558;
        case 0x799564u: goto label_799564;
        case 0x799570u: goto label_799570;
        default: break;
    }

    ctx->pc = 0x7994a0u;

    // 0x7994a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7994a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7994a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7994a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7994a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7994ac: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7994b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7994b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7994b4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7994b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7994b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7994bc: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x7994c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7994c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7994c4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x7994c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7994C8u;
    {
        const bool branch_taken_0x7994c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C8u;
        // 0x7994cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c8) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994D0u;
label_7994d0:
    // 0x7994d0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7994d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994d8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994D8u;
    SET_GPR_U32(ctx, 31, 0x7994E0u);
    ctx->pc = 0x7994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D8u;
    // 0x7994dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994D8u, 0x7994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7994E8u;
    {
        const bool branch_taken_0x7994e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E8u;
        // 0x7994ec: 0x8e438658  lw          $v1, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994e8) {
            ctx->pc = 0x7994D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994d0;
        }
    }
    ctx->pc = 0x7994F0u;
    // 0x7994f0: 0x3c134000  lui         $s3, 0x4000
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16384 << 16));
    // 0x7994f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7994f8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x7994fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994FCu;
    {
        const bool branch_taken_0x7994fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994fc) {
            ctx->pc = 0x799500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994FCu;
            // 0x799500: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799518u;
            goto label_799518;
        }
    }
    ctx->pc = 0x799504u;
    // 0x799504: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799508: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x79950c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79950Cu;
    SET_GPR_U32(ctx, 31, 0x799514u);
    ctx->pc = 0x799510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79950Cu;
    // 0x799510: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79950Cu, 0x799514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_799518:
    // 0x799518: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x2690ea60  addiu       $s0, $s4, -0x15A0
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x799524: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79952c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799530: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799534: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x799538: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799544: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x799548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799544u;
    // 0x799548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799550: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79955c: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799568: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799574: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799578: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79957c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79957cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799580: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799588: 0x3e00008  jr          $ra
    ctx->pc = 0x799588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799590u;
}
} // namespace gh_r203
