#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r703_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r703
{
// Function: func_00799380
// Address: 0x799380 - 0x799448
void func_00799380_0x799380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799380_0x799380");
#endif

    switch (ctx->pc) {
        case 0x7993a0u: goto label_7993a0;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b8u: goto label_7993b8;
        case 0x799424u: goto label_799424;
        case 0x799430u: goto label_799430;
        default: break;
    }

    ctx->pc = 0x799380u;

    // 0x799380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799384: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79938c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0x3c11005f  lui         $s1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993B0u;
            goto label_7993b0;
        }
    }
    ctx->pc = 0x79939Cu;
    // 0x79939c: 0x0  nop
    ctx->pc = 0x79939cu;
    // NOP
label_7993a0:
    // 0x7993a0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993a8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7993B8u;
    {
        const bool branch_taken_0x7993b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x8e238658  lw          $v1, -0x79A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b8) {
            ctx->pc = 0x7993A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993a0;
        }
    }
    ctx->pc = 0x7993C0u;
    // 0x7993c0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x7993c4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x7993c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x7993cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7993ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7993d0: 0x24050701  addiu       $a1, $zero, 0x701
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x7993d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0x3c01430e  lui         $at, 0x430E
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17166 << 16));
    // 0x7993e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7993e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7993ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7993f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7993f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7993f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7993f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x7993f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993fc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799400: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79940c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799410: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x799410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799414: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x799414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799418: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x799418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79941c: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79941Cu;
    SET_GPR_U32(ctx, 31, 0x799424u);
    ctx->pc = 0x799420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79941Cu;
    // 0x799420: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799428: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799428u;
    SET_GPR_U32(ctx, 31, 0x799430u);
    ctx->pc = 0x79942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799428u;
    // 0x79942c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799428u, 0x799430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799430u;
label_799430:
    // 0x799430: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799434: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79943c: 0x3e00008  jr          $ra
    ctx->pc = 0x79943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799444u;
    // 0x799444: 0x0  nop
    ctx->pc = 0x799444u;
    // NOP
    ctx->pc = 0x799448u;
}
} // namespace gh_r703
