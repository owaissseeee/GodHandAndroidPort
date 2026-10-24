#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: fpdiv
// Address: 0x79b848 - 0x79b9a8
void fpdiv_0x79b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpdiv_0x79b848");
#endif

    switch (ctx->pc) {
        case 0x79b868u: goto label_79b868;
        case 0x79b878u: goto label_79b878;
        case 0x79b940u: goto label_79b940;
        case 0x79b998u: goto label_79b998;
        default: break;
    }

    ctx->pc = 0x79b848u;

    // 0x79b848: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b84c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x79b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x79b850: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b854: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79b858: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b85c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x79b85cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79b860: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B860u;
    SET_GPR_U32(ctx, 31, 0x79B868u);
    ctx->pc = 0x79B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B860u;
    // 0x79b864: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B860u, 0x79B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B868u;
label_79b868:
    // 0x79b868: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b86c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x79b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79b870: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B870u;
    SET_GPR_U32(ctx, 31, 0x79B878u);
    ctx->pc = 0x79B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B870u;
    // 0x79b874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B870u, 0x79B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B878u;
label_79b878:
    // 0x79b878: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x79b878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b87c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x79b87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B880u;
    {
        const bool branch_taken_0x79b880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B880u;
        // 0x79b884: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b880) {
            ctx->pc = 0x79B890u;
            goto label_79b890;
        }
    }
    ctx->pc = 0x79B888u;
    // 0x79b888: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x79B888u;
    {
        const bool branch_taken_0x79b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B888u;
        // 0x79b88c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b888) {
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B890u;
label_79b890:
    // 0x79b890: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x79b890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b894: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79b894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b898: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x79B898u;
    {
        const bool branch_taken_0x79b898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B898u;
        // 0x79b89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b898) {
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B8A0u;
    // 0x79b8a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b8a4: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x79b8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x79b8a8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79b8ac: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79b8b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B8B0u;
    {
        const bool branch_taken_0x79b8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8B0u;
        // 0x79b8b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8b0) {
            ctx->pc = 0x79B8C4u;
            goto label_79b8c4;
        }
    }
    ctx->pc = 0x79B8B8u;
    // 0x79b8b8: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x79b8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x79b8bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B8BCu;
    {
        const bool branch_taken_0x79b8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8BCu;
        // 0x79b8c0: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8bc) {
            ctx->pc = 0x79B8D8u;
            goto label_79b8d8;
        }
    }
    ctx->pc = 0x79B8C4u;
label_79b8c4:
    // 0x79b8c4: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x79B8C4u;
    {
        const bool branch_taken_0x79b8c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x79B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8C4u;
        // 0x79b8c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8c4) {
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B8CCu;
    // 0x79b8cc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b8d0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x79B8D0u;
    {
        const bool branch_taken_0x79b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8D0u;
        // 0x79b8d4: 0x2444cda0  addiu       $a0, $v0, -0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8d0) {
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B8D8u;
label_79b8d8:
    // 0x79b8d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B8D8u;
    {
        const bool branch_taken_0x79b8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8D8u;
        // 0x79b8dc: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8d8) {
            ctx->pc = 0x79B8F0u;
            goto label_79b8f0;
        }
    }
    ctx->pc = 0x79B8E0u;
    // 0x79b8e0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x79b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x79b8e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x79B8E8u;
    {
        const bool branch_taken_0x79b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8E8u;
        // 0x79b8ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8e8) {
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B8F0u;
label_79b8f0:
    // 0x79b8f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B8F0u;
    {
        const bool branch_taken_0x79b8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8F0u;
        // 0x79b8f4: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8f0) {
            ctx->pc = 0x79B908u;
            goto label_79b908;
        }
    }
    ctx->pc = 0x79B8F8u;
    // 0x79b8f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b8fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b900: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x79B900u;
    {
        const bool branch_taken_0x79b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B900u;
        // 0x79b904: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b900) {
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B908u;
label_79b908:
    // 0x79b908: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x79b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x79b90c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x79b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79b910: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x79b910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x79b914: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b918: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79b918u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x79b91c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B91Cu;
    {
        const bool branch_taken_0x79b91c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B91Cu;
        // 0x79b920: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b91c) {
            ctx->pc = 0x79B934u;
            goto label_79b934;
        }
    }
    ctx->pc = 0x79B924u;
    // 0x79b924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79b928: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x79b92c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79b930: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79b930u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79b934:
    // 0x79b934: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x79b934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x79b938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B938u;
    {
        const bool branch_taken_0x79b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B938u;
        // 0x79b93c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b938) {
            ctx->pc = 0x79B944u;
            goto label_79b944;
        }
    }
    ctx->pc = 0x79B940u;
label_79b940:
    // 0x79b940: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79b940u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79b944:
    // 0x79b944: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B944u;
    {
        const bool branch_taken_0x79b944 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b944) {
            ctx->pc = 0x79B948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B944u;
            // 0x79b948: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B958u;
            goto label_79b958;
        }
    }
    ctx->pc = 0x79B94Cu;
    // 0x79b94c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x79b94cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x79b950: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x79b950u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x79b954: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x79b954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_79b958:
    // 0x79b958: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79B958u;
    {
        const bool branch_taken_0x79b958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B958u;
        // 0x79b95c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b958) {
            ctx->pc = 0x79B940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b940;
        }
    }
    ctx->pc = 0x79B960u;
    // 0x79b960: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x79b960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x79b964: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79b968: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B968u;
    {
        const bool branch_taken_0x79b968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b968) {
            ctx->pc = 0x79B96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B968u;
            // 0x79b96c: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B98Cu;
            goto label_79b98c;
        }
    }
    ctx->pc = 0x79B970u;
    // 0x79b970: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x79b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x79b974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B974u;
    {
        const bool branch_taken_0x79b974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B974u;
        // 0x79b978: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b974) {
            ctx->pc = 0x79B984u;
            goto label_79b984;
        }
    }
    ctx->pc = 0x79B97Cu;
    // 0x79b97c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B97Cu;
    {
        const bool branch_taken_0x79b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B97Cu;
        // 0x79b980: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b97c) {
            ctx->pc = 0x79B988u;
            goto label_79b988;
        }
    }
    ctx->pc = 0x79B984u;
label_79b984:
    // 0x79b984: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x79b984u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_79b988:
    // 0x79b988: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x79b988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_79b98c:
    // 0x79b98c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x79b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79b990:
    // 0x79b990: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79B990u;
    SET_GPR_U32(ctx, 31, 0x79B998u);
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79B990u, 0x79B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B998u;
label_79b998:
    // 0x79b998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b99c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x79b99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9A0u;
        // 0x79b9a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9A8u;
}
} // namespace gh_r022
