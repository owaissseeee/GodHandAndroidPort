#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_007994B0
// Address: 0x7994b0 - 0x799560
void func_007994B0_0x7994b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994B0_0x7994b0");
#endif

    switch (ctx->pc) {
        case 0x7994f8u: goto label_7994f8;
        case 0x799500u: goto label_799500;
        case 0x799510u: goto label_799510;
        case 0x799528u: goto label_799528;
        case 0x799530u: goto label_799530;
        case 0x799538u: goto label_799538;
        case 0x799558u: goto label_799558;
        default: break;
    }

    ctx->pc = 0x7994b0u;

    // 0x7994b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7994b4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7994b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7994b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7994bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7994c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7994c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7994c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7994c8: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x7994cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7994ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7994d0: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x7994d4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7994d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7994d8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7994dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7994e0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7994e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7994ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7994f0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994F0u;
    SET_GPR_U32(ctx, 31, 0x7994F8u);
    ctx->pc = 0x7994F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F0u;
    // 0x7994f4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994F0u, 0x7994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0xc1e64fc  jal         func_7993F0
    ctx->pc = 0x7994F8u;
    SET_GPR_U32(ctx, 31, 0x799500u);
    ctx->pc = 0x7993F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7993F0u, 0x7994F8u, 0x799500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799500u;
label_799500:
    // 0x799500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799504: 0x26248658  addiu       $a0, $s1, -0x79A8
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x799508: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799514: 0x8e42ad00  lw          $v0, -0x5300($s2)
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946048)));
    // 0x799518: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79951c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79951cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x799520: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x799524: 0x0  nop
    ctx->pc = 0x799524u;
    // NOP
label_799528:
    // 0x799528: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0xc1e64fc  jal         func_7993F0
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7993F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7993F0u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x8e64ad00  lw          $a0, -0x5300($s3)
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946048)));
    // 0x79953c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799540: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799544: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799548: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x799548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79954c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799550: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x799528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799528;
        }
    }
    ctx->pc = 0x799560u;
}
} // namespace gh_r304
