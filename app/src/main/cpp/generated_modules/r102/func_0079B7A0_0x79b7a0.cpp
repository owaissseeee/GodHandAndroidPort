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
// Function: func_0079B7A0
// Address: 0x79b7a0 - 0x79b8e8
void func_0079B7A0_0x79b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B7A0_0x79b7a0");
#endif

    switch (ctx->pc) {
        case 0x79b7d8u: goto label_79b7d8;
        case 0x79b7e4u: goto label_79b7e4;
        case 0x79b80cu: goto label_79b80c;
        case 0x79b838u: goto label_79b838;
        case 0x79b864u: goto label_79b864;
        case 0x79b878u: goto label_79b878;
        case 0x79b890u: goto label_79b890;
        case 0x79b898u: goto label_79b898;
        case 0x79b8b0u: goto label_79b8b0;
        case 0x79b8c0u: goto label_79b8c0;
        default: break;
    }

    ctx->pc = 0x79b7a0u;

    // 0x79b7a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b7a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79b7a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79b7ac: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b7acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b7b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79b7b4: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x79b7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x79b7b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79b7bc: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x79b7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x79b7c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79b7c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x79b7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b7c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b7cc: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x79b7ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x79b7d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79b7d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79b7d4: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79b7d8:
    // 0x79b7d8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79b7dc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B7DCu;
    SET_GPR_U32(ctx, 31, 0x79B7E4u);
    ctx->pc = 0x79B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7DCu;
    // 0x79b7e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B7DCu, 0x79B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7E4u;
label_79b7e4:
    // 0x79b7e4: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B7E4u;
    {
        const bool branch_taken_0x79b7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x79B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7E4u;
        // 0x79b7e8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7e4) {
            ctx->pc = 0x79B800u;
            goto label_79b800;
        }
    }
    ctx->pc = 0x79B7ECu;
    // 0x79b7ec: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x79b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x79b7f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b7f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x79b7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x79b7f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B7F8u;
    {
        const bool branch_taken_0x79b7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7F8u;
        // 0x79b7fc: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7f8) {
            ctx->pc = 0x79B814u;
            goto label_79b814;
        }
    }
    ctx->pc = 0x79B800u;
label_79b800:
    // 0x79b800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b804: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B804u;
    SET_GPR_U32(ctx, 31, 0x79B80Cu);
    ctx->pc = 0x79B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B804u;
    // 0x79b808: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B804u, 0x79B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B80Cu;
label_79b80c:
    // 0x79b80c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x79B80Cu;
    {
        const bool branch_taken_0x79b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B80Cu;
        // 0x79b810: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b80c) {
            ctx->pc = 0x79B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7d8;
        }
    }
    ctx->pc = 0x79B814u;
label_79b814:
    // 0x79b814: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79b814u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79b818: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x79b818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79b81c: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79b81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79b820: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x79b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79b824: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79b824u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b82c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b830: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B830u;
    SET_GPR_U32(ctx, 31, 0x79B838u);
    ctx->pc = 0x79B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B830u;
    // 0x79b834: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B830u, 0x79B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B838u;
label_79b838:
    // 0x79b838: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79b838u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79b83c: 0x8e23c000  lw          $v1, -0x4000($s1)
    ctx->pc = 0x79b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C000u));
    // 0x79b840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b844: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b848: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b84c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b858: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b85c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B85Cu;
    SET_GPR_U32(ctx, 31, 0x79B864u);
    ctx->pc = 0x79B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B85Cu;
    // 0x79b860: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B85Cu, 0x79B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B864u;
label_79b864:
    // 0x79b864: 0x8e23c000  lw          $v1, -0x4000($s1)
    ctx->pc = 0x79b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950912)));
    // 0x79b868: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b870: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B870u;
    SET_GPR_U32(ctx, 31, 0x79B878u);
    ctx->pc = 0x79B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B870u;
    // 0x79b874: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B870u, 0x79B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B878u;
label_79b878:
    // 0x79b878: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b87c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b880: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b884: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b888: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B888u;
    SET_GPR_U32(ctx, 31, 0x79B890u);
    ctx->pc = 0x79B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B888u;
    // 0x79b88c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B888u, 0x79B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B890u;
label_79b890:
    // 0x79b890: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B890u;
    SET_GPR_U32(ctx, 31, 0x79B898u);
    ctx->pc = 0x79B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B890u;
    // 0x79b894: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B890u, 0x79B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B898u;
label_79b898:
    // 0x79b898: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b8a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b8a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b8a8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B8A8u;
    SET_GPR_U32(ctx, 31, 0x79B8B0u);
    ctx->pc = 0x79B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8A8u;
    // 0x79b8ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B8A8u, 0x79B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8B0u;
label_79b8b0:
    // 0x79b8b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b8b4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b8b8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B8B8u;
    SET_GPR_U32(ctx, 31, 0x79B8C0u);
    ctx->pc = 0x79B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8B8u;
    // 0x79b8bc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B8B8u, 0x79B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8C0u;
label_79b8c0:
    // 0x79b8c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79b8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b8c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79b8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b8c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79b8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b8cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79b8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b8d0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79b8d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b8d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b8d8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x79b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8DCu;
        // 0x79b8e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B8E4u;
    // 0x79b8e4: 0x0  nop
    ctx->pc = 0x79b8e4u;
    // NOP
    ctx->pc = 0x79b8e8u;
}
} // namespace gh_r102
