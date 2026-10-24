#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_007999B8
// Address: 0x7999b8 - 0x799c78
void func_007999B8_0x7999b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007999B8_0x7999b8");
#endif

    switch (ctx->pc) {
        case 0x799a08u: goto label_799a08;
        case 0x799a38u: goto label_799a38;
        case 0x799a60u: goto label_799a60;
        case 0x799a70u: goto label_799a70;
        case 0x799b70u: goto label_799b70;
        case 0x799c24u: goto label_799c24;
        case 0x799c40u: goto label_799c40;
        case 0x799c4cu: goto label_799c4c;
        default: break;
    }

    ctx->pc = 0x7999b8u;

    // 0x7999b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7999bc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7999c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7999c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7999c4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7999c8: 0x8044bf38  lb          $a0, -0x40C8($v0)
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79BF38u));
    // 0x7999cc: 0x2446bf38  addiu       $a2, $v0, -0x40C8
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950712));
    // 0x7999d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7999d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7999d4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7999d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7999d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7999dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7999e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7999e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7999e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7999ec: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x7999f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7999f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7999f4: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x7999f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x7999f8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x7999f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x7999fc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x7999FCu;
    {
        const bool branch_taken_0x7999fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999FCu;
        // 0x799a00: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999fc) {
            ctx->pc = 0x799A30u;
            goto label_799a30;
        }
    }
    ctx->pc = 0x799A04u;
    // 0x799a04: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799a08:
    // 0x799a08: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799a0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799a10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799a14: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799a18: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A1Cu;
    {
        const bool branch_taken_0x799a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a1c) {
            ctx->pc = 0x799A30u;
            goto label_799a30;
        }
    }
    ctx->pc = 0x799A24u;
    // 0x799a24: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a28: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A28u;
    {
        const bool branch_taken_0x799a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a28) {
            ctx->pc = 0x799A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A28u;
            // 0x799a2c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a08;
        }
    }
    ctx->pc = 0x799A30u;
label_799a30:
    // 0x799a30: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799A30u;
    SET_GPR_U32(ctx, 31, 0x799A38u);
    ctx->pc = 0x799A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A30u;
    // 0x799a34: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799A30u, 0x799A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A38u;
label_799a38:
    // 0x799a38: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a40: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799a44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a48: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799a4c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a50: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a58: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A58u;
    SET_GPR_U32(ctx, 31, 0x799A60u);
    ctx->pc = 0x799A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A58u;
    // 0x799a5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A58u, 0x799A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A60u;
        // 0x799a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799C40u;
            goto label_799c40;
        }
    }
    ctx->pc = 0x799A68u;
    // 0x799a68: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x799A68u;
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x799a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799a74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A74u;
    {
        const bool branch_taken_0x799a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a74) {
            ctx->pc = 0x799A88u;
            goto label_799a88;
        }
    }
    ctx->pc = 0x799A7Cu;
    // 0x799a7c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799a80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799A8Cu;
            goto label_799a8c;
        }
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a8c:
    // 0x799a8c: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x799A8Cu;
    {
        const bool branch_taken_0x799a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A8Cu;
        // 0x799a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a8c) {
            ctx->pc = 0x799C2Cu;
            goto label_799c2c;
        }
    }
    ctx->pc = 0x799A94u;
    // 0x799a94: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x799a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799a98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A9Cu;
    {
        const bool branch_taken_0x799a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A9Cu;
        // 0x799aa0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a9c) {
            ctx->pc = 0x799AB0u;
            goto label_799ab0;
        }
    }
    ctx->pc = 0x799AA4u;
    // 0x799aa4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799aa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799AA8u;
    {
        const bool branch_taken_0x799aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA8u;
        // 0x799aac: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa8) {
            ctx->pc = 0x799AB4u;
            goto label_799ab4;
        }
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ab4:
    // 0x799ab4: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x799AB4u;
    {
        const bool branch_taken_0x799ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ab4) {
            ctx->pc = 0x799AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AB4u;
            // 0x799ab8: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C30u;
            goto label_799c30;
        }
    }
    ctx->pc = 0x799ABCu;
    // 0x799abc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x799abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799ac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799AC0u;
    {
        const bool branch_taken_0x799ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC0u;
        // 0x799ac4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac0) {
            ctx->pc = 0x799AD4u;
            goto label_799ad4;
        }
    }
    ctx->pc = 0x799AC8u;
    // 0x799ac8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799acc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799ACCu;
    {
        const bool branch_taken_0x799acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ACCu;
        // 0x799ad0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799acc) {
            ctx->pc = 0x799AD8u;
            goto label_799ad8;
        }
    }
    ctx->pc = 0x799AD4u;
label_799ad4:
    // 0x799ad4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799ad8:
    // 0x799ad8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x799adc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ae0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x799ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x799ae4: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x799ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x799ae8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x799ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799aec: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799af0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799AF0u;
    {
        const bool branch_taken_0x799af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af0) {
            ctx->pc = 0x799B04u;
            goto label_799b04;
        }
    }
    ctx->pc = 0x799AF8u;
    // 0x799af8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799afc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799AFCu;
    {
        const bool branch_taken_0x799afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799afc) {
            ctx->pc = 0x799B08u;
            goto label_799b08;
        }
    }
    ctx->pc = 0x799B04u;
label_799b04:
    // 0x799b04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799b08:
    // 0x799b08: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x799b0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b10: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x799b14: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x799b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x799b18: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x799b1c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x799b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799b20: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x799b24: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x799b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x799b28: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x799b28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x799b2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B40u;
            goto label_799b40;
        }
    }
    ctx->pc = 0x799B34u;
    // 0x799b34: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799B38u;
    {
        const bool branch_taken_0x799b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B38u;
        // 0x799b3c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b38) {
            ctx->pc = 0x799B44u;
            goto label_799b44;
        }
    }
    ctx->pc = 0x799B40u;
label_799b40:
    // 0x799b40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799b44:
    // 0x799b44: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799b48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799b50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799b54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799b58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b5c: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x799b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799b60: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799b64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x799b68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799b6c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x799b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_799b70:
    // 0x799b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b74: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x799B74u;
    {
        const bool branch_taken_0x799b74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B74u;
        // 0x799b78: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b74) {
            ctx->pc = 0x799B80u;
            goto label_799b80;
        }
    }
    ctx->pc = 0x799B7Cu;
    // 0x799b7c: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_799b80:
    // 0x799b80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x799b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x799b84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B84u;
    {
        const bool branch_taken_0x799b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b84) {
            ctx->pc = 0x799B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B84u;
            // 0x799b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B98u;
            goto label_799b98;
        }
    }
    ctx->pc = 0x799B8Cu;
    // 0x799b8c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799b90: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x799b94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799b98:
    // 0x799b98: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799b9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x799b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799ba0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x799ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x799ba4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x799ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799ba8: 0x0  nop
    ctx->pc = 0x799ba8u;
    // NOP
    // 0x799bac: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BACu;
            // 0x799bb0: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C30u;
            goto label_799c30;
        }
    }
    ctx->pc = 0x799BB4u;
    // 0x799bb4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x799bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799bb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BB8u;
    {
        const bool branch_taken_0x799bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB8u;
        // 0x799bbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb8) {
            ctx->pc = 0x799BCCu;
            goto label_799bcc;
        }
    }
    ctx->pc = 0x799BC0u;
    // 0x799bc0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799bc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799BC4u;
    {
        const bool branch_taken_0x799bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC4u;
        // 0x799bc8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc4) {
            ctx->pc = 0x799BD0u;
            goto label_799bd0;
        }
    }
    ctx->pc = 0x799BCCu;
label_799bcc:
    // 0x799bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799bd0:
    // 0x799bd0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bd8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x799bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799bdc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x799bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x799be0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x799be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x799be4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x799be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x799be8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x799bec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BECu;
    {
        const bool branch_taken_0x799bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BECu;
        // 0x799bf0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bec) {
            ctx->pc = 0x799C00u;
            goto label_799c00;
        }
    }
    ctx->pc = 0x799BF4u;
    // 0x799bf4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x799bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799BF8u;
    {
        const bool branch_taken_0x799bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf8) {
            ctx->pc = 0x799C04u;
            goto label_799c04;
        }
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c04:
    // 0x799c04: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x799c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799c10: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x799c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x799c14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x799c18: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799c1c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C1Cu;
    SET_GPR_U32(ctx, 31, 0x799C24u);
    ctx->pc = 0x799C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C1Cu;
    // 0x799c20: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C1Cu, 0x799C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C24u;
label_799c24:
    // 0x799c24: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x799C24u;
    {
        const bool branch_taken_0x799c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C24u;
        // 0x799c28: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c24) {
            ctx->pc = 0x799B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b70;
        }
    }
    ctx->pc = 0x799C2Cu;
label_799c2c:
    // 0x799c2c: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_799c30:
    // 0x799c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799c38: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x799C38u;
    SET_GPR_U32(ctx, 31, 0x799C40u);
    ctx->pc = 0x799C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C38u;
    // 0x799c3c: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x799C38u, 0x799C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C40u;
label_799c40:
    // 0x799c40: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799c44: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C44u;
    SET_GPR_U32(ctx, 31, 0x799C4Cu);
    ctx->pc = 0x799C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C44u;
    // 0x799c48: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C44u, 0x799C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C4Cu;
label_799c4c:
    // 0x799c4c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799c50: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799c54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c5c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799c64: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x799c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799c68: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x799c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799c6c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x799c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799c70: 0x3e00008  jr          $ra
    ctx->pc = 0x799C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C70u;
        // 0x799c74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C78u;
}
} // namespace gh_r102
