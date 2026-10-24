#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: ctrlEmSet__5cR405
// Address: 0x79a250 - 0x79a300
void ctrlEmSet__5cR405_0x79a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ctrlEmSet__5cR405_0x79a250");
#endif

    switch (ctx->pc) {
        case 0x79a298u: goto label_79a298;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c8u: goto label_79a2c8;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2f8u: goto label_79a2f8;
        default: break;
    }

    ctx->pc = 0x79a250u;

    // 0x79a250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a254: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a258: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a25c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a260: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a264: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a268: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a26c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a270: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x79a274: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a278: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a27c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a280: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x79a280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a284: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a288: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79a288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a290: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A290u;
    SET_GPR_U32(ctx, 31, 0x79A298u);
    ctx->pc = 0x79A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A290u;
    // 0x79a294: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A290u, 0x79A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A298u;
label_79a298:
    // 0x79a298: 0xc1e686a  jal         func_79A1A8
    ctx->pc = 0x79A298u;
    SET_GPR_U32(ctx, 31, 0x79A2A0u);
    ctx->pc = 0x79A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A298u;
    // 0x79a29c: 0x8e24a800  lw          $a0, -0x5800($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A1A8u, 0x79A298u, 0x79A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2a4: 0x26448658  addiu       $a0, $s2, -0x79A8
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936152));
    // 0x79a2a8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A2A8u;
    SET_GPR_U32(ctx, 31, 0x79A2B0u);
    ctx->pc = 0x79A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A8u;
    // 0x79a2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A2A8u, 0x79A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B0u;
label_79a2b0:
    // 0x79a2b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a2b4: 0x8e22a800  lw          $v0, -0x5800($s1)
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944768)));
    // 0x79a2b8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79a2bc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x79a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_79a2c0:
    // 0x79a2c0: 0xc1e686a  jal         func_79A1A8
    ctx->pc = 0x79A2C0u;
    SET_GPR_U32(ctx, 31, 0x79A2C8u);
    ctx->pc = 0x79A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2C0u;
    // 0x79a2c4: 0x8e64a800  lw          $a0, -0x5800($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A1A8u, 0x79A2C0u, 0x79A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C8u;
label_79a2c8:
    // 0x79a2c8: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79a2cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A2D0u;
    SET_GPR_U32(ctx, 31, 0x79A2D8u);
    ctx->pc = 0x79A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D0u;
    // 0x79a2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A2D0u, 0x79A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D8u;
label_79a2d8:
    // 0x79a2d8: 0x8e64a800  lw          $a0, -0x5800($s3)
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944768)));
    // 0x79a2dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a2e4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x79a2e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x79a2ec: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79a2f0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A2F0u;
    SET_GPR_U32(ctx, 31, 0x79A2F8u);
    ctx->pc = 0x79A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F0u;
    // 0x79a2f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A2F0u, 0x79A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F8u;
label_79a2f8:
    // 0x79a2f8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x79A2F8u;
    {
        const bool branch_taken_0x79a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2f8) {
            ctx->pc = 0x79A2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2c0;
        }
    }
    ctx->pc = 0x79A300u;
}
} // namespace gh_r405
