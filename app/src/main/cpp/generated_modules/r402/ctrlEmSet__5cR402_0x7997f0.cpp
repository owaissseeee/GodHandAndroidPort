#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: ctrlEmSet__5cR402
// Address: 0x7997f0 - 0x7998a8
void ctrlEmSet__5cR402_0x7997f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ctrlEmSet__5cR402_0x7997f0");
#endif

    switch (ctx->pc) {
        case 0x799838u: goto label_799838;
        case 0x799840u: goto label_799840;
        case 0x799850u: goto label_799850;
        case 0x799868u: goto label_799868;
        case 0x799870u: goto label_799870;
        case 0x79987cu: goto label_79987c;
        case 0x79989cu: goto label_79989c;
        default: break;
    }

    ctx->pc = 0x7997f0u;

    // 0x7997f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7997f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7997f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7997f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7997fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799800: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799804: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799808: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79980c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799810: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x799814: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x799818: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x799818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79981c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799820: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799824: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799828: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79982c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799830: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799830u;
    SET_GPR_U32(ctx, 31, 0x799838u);
    ctx->pc = 0x799834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799830u;
    // 0x799834: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799830u, 0x799838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0xc1e65d2  jal         func_799748
    ctx->pc = 0x799838u;
    SET_GPR_U32(ctx, 31, 0x799840u);
    ctx->pc = 0x79983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799838u;
    // 0x79983c: 0x8e249c80  lw          $a0, -0x6380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799748u, 0x799838u, 0x799840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799844: 0x26448658  addiu       $a0, $s2, -0x79A8
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936152));
    // 0x799848: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799854: 0x8e229c80  lw          $v0, -0x6380($s1)
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941824)));
    // 0x799858: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79985c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x79985cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x799860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799864: 0x0  nop
    ctx->pc = 0x799864u;
    // NOP
label_799868:
    // 0x799868: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x8e649c80  lw          $a0, -0x6380($s3)
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941824)));
    // 0x799874: 0xc1e65d2  jal         func_799748
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799748u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x8e649c80  lw          $a0, -0x6380($s3)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941824)));
    // 0x799880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799884: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799888: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79988c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x79988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x799890: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799894: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x799868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799868;
        }
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0x0  nop
    ctx->pc = 0x7998a4u;
    // NOP
    ctx->pc = 0x7998a8u;
}
} // namespace gh_r402
