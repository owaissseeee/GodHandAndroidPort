#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_007997A0
// Address: 0x7997a0 - 0x799850
void func_007997A0_0x7997a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007997A0_0x7997a0");
#endif

    switch (ctx->pc) {
        case 0x7997e8u: goto label_7997e8;
        case 0x7997f0u: goto label_7997f0;
        case 0x799800u: goto label_799800;
        case 0x799818u: goto label_799818;
        case 0x799820u: goto label_799820;
        case 0x799828u: goto label_799828;
        case 0x799848u: goto label_799848;
        default: break;
    }

    ctx->pc = 0x7997a0u;

    // 0x7997a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7997a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7997a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7997a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7997ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7997b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7997b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7997b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7997b8: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x7997bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7997bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7997c0: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x7997c4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7997c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7997c8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997cc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7997ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7997d0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7997d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7997dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7997e0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997E0u;
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->pc = 0x7997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997E0u, 0x7997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E8u;
label_7997e8:
    // 0x7997e8: 0xc1e65b8  jal         func_7996E0
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7996E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996E0u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7997f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f4: 0x26248658  addiu       $a0, $s1, -0x79A8
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x7997f8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7997F8u;
    SET_GPR_U32(ctx, 31, 0x799800u);
    ctx->pc = 0x7997FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F8u;
    // 0x7997fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7997F8u, 0x799800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799804: 0x8e42e010  lw          $v0, -0x1FF0($s2)
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
    // 0x799808: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79980c: 0xac500460  sw          $s0, 0x460($v0)
    ctx->pc = 0x79980cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1120), GPR_U32(ctx, 16));
    // 0x799810: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x799814: 0x0  nop
    ctx->pc = 0x799814u;
    // NOP
label_799818:
    // 0x799818: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0xc1e65b8  jal         func_7996E0
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996E0u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x8e64e010  lw          $a0, -0x1FF0($s3)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294959120)));
    // 0x79982c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799830: 0x8c830460  lw          $v1, 0x460($a0)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x799834: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799838: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x799838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79983c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799840: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799840u;
    SET_GPR_U32(ctx, 31, 0x799848u);
    ctx->pc = 0x799844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799840u;
    // 0x799844: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799840u, 0x799848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x799848u;
    {
        const bool branch_taken_0x799848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799848) {
            ctx->pc = 0x799818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799818;
        }
    }
    ctx->pc = 0x799850u;
}
} // namespace gh_r301
