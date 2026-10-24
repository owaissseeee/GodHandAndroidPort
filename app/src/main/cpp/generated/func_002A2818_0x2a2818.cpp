#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002A2818
// Address: 0x2a2818 - 0x2a2d60
void func_002A2818_0x2a2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A2818_0x2a2818");
#endif

    switch (ctx->pc) {
        case 0x2a290cu: goto label_2a290c;
        case 0x2a29a0u: goto label_2a29a0;
        case 0x2a29e4u: goto label_2a29e4;
        case 0x2a2a38u: goto label_2a2a38;
        case 0x2a2a80u: goto label_2a2a80;
        case 0x2a2ad4u: goto label_2a2ad4;
        case 0x2a2b1cu: goto label_2a2b1c;
        case 0x2a2b70u: goto label_2a2b70;
        case 0x2a2bb8u: goto label_2a2bb8;
        case 0x2a2c0cu: goto label_2a2c0c;
        case 0x2a2c54u: goto label_2a2c54;
        case 0x2a2ca8u: goto label_2a2ca8;
        default: break;
    }

    ctx->pc = 0x2a2818u;

    // 0x2a2818: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a2818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a281c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a281cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a2820: 0x2448acc8  addiu       $t0, $v0, -0x5338
    ctx->pc = 0x2a2820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945992));
    // 0x2a2824: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a2824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a2828: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a282c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a282cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2830: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a2830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a2834: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x2a2834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a2838: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a2838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a283c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a2840: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2a2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2a2844: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2a2844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2a2848: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A2848u;
    {
        const bool branch_taken_0x2a2848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2848u;
        // 0x2a284c: 0x7fb70000  sq          $s7, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2848) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A2850u;
    // 0x2a2850: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2a2850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2a2854: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a2854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a2858: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x2a2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
    // 0x2a285c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2860: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a2860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2864: 0x800008  jr          $a0
    ctx->pc = 0x2A2864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A286Cu: goto label_2a286c;
            case 0x2A2878u: goto label_2a2878;
            case 0x2A2884u: goto label_2a2884;
            case 0x2A2890u: goto label_2a2890;
            case 0x2A289Cu: goto label_2a289c;
            case 0x2A28A8u: goto label_2a28a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A286Cu;
label_2a286c:
    // 0x2a286c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a2870: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A2870u;
    {
        const bool branch_taken_0x2a2870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2870u;
        // 0x2a2874: 0x2447b228  addiu       $a3, $v0, -0x4DD8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2870) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A2878u;
label_2a2878:
    // 0x2a2878: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a2878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a287c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A287Cu;
    {
        const bool branch_taken_0x2a287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A287Cu;
        // 0x2a2880: 0x2447b4a0  addiu       $a3, $v0, -0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a287c) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A2884u;
label_2a2884:
    // 0x2a2884: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a2884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a2888: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2888u;
    {
        const bool branch_taken_0x2a2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2888u;
        // 0x2a288c: 0x2447b718  addiu       $a3, $v0, -0x48E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2888) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A2890u;
label_2a2890:
    // 0x2a2890: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a2890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a2894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2894u;
    {
        const bool branch_taken_0x2a2894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2894u;
        // 0x2a2898: 0x2447b990  addiu       $a3, $v0, -0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2894) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A289Cu;
label_2a289c:
    // 0x2a289c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a28a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A28A0u;
    {
        const bool branch_taken_0x2a28a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28A0u;
        // 0x2a28a4: 0x2447bc08  addiu       $a3, $v0, -0x43F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28a0) {
            ctx->pc = 0x2A28B0u;
            goto label_2a28b0;
        }
    }
    ctx->pc = 0x2A28A8u;
label_2a28a8:
    // 0x2a28a8: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2a28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2a28ac: 0x2447afb0  addiu       $a3, $v0, -0x5050
    ctx->pc = 0x2a28acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946736));
label_2a28b0:
    // 0x2a28b0: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x2a28b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a28b4: 0x25060078  addiu       $a2, $t0, 0x78
    ctx->pc = 0x2a28b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 120));
    // 0x2a28b8: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x2a28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2a28bc: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x2a28bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2a28c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a28c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a28c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A28C4u;
    {
        const bool branch_taken_0x2a28c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28C4u;
        // 0x2a28c8: 0xfd030000  sd          $v1, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28c4) {
            ctx->pc = 0x2A2960u;
            goto label_2a2960;
        }
    }
    ctx->pc = 0x2A28CCu;
    // 0x2a28cc: 0x24e30068  addiu       $v1, $a3, 0x68
    ctx->pc = 0x2a28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x2a28d0: 0x250500dc  addiu       $a1, $t0, 0xDC
    ctx->pc = 0x2a28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 220));
    // 0x2a28d4: 0x24e2006c  addiu       $v0, $a3, 0x6C
    ctx->pc = 0x2a28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    // 0x2a28d8: 0x24e900cc  addiu       $t1, $a3, 0xCC
    ctx->pc = 0x2a28d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 204));
    // 0x2a28dc: 0x250f0140  addiu       $t7, $t0, 0x140
    ctx->pc = 0x2a28dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x2a28e0: 0x24ee00d0  addiu       $t6, $a3, 0xD0
    ctx->pc = 0x2a28e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x2a28e4: 0x24ea0130  addiu       $t2, $a3, 0x130
    ctx->pc = 0x2a28e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 304));
    // 0x2a28e8: 0x251901a4  addiu       $t9, $t0, 0x1A4
    ctx->pc = 0x2a28e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 420));
    // 0x2a28ec: 0x24f80134  addiu       $t8, $a3, 0x134
    ctx->pc = 0x2a28ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 308));
    // 0x2a28f0: 0x24eb0194  addiu       $t3, $a3, 0x194
    ctx->pc = 0x2a28f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 404));
    // 0x2a28f4: 0x25110274  addiu       $s1, $t0, 0x274
    ctx->pc = 0x2a28f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 628));
    // 0x2a28f8: 0x24f00198  addiu       $s0, $a3, 0x198
    ctx->pc = 0x2a28f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 408));
    // 0x2a28fc: 0x24ec01f8  addiu       $t4, $a3, 0x1F8
    ctx->pc = 0x2a28fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 504));
    // 0x2a2900: 0x25130014  addiu       $s3, $t0, 0x14
    ctx->pc = 0x2a2900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x2a2904: 0x24f201fc  addiu       $s2, $a3, 0x1FC
    ctx->pc = 0x2a2904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 508));
    // 0x2a2908: 0x24ed025c  addiu       $t5, $a3, 0x25C
    ctx->pc = 0x2a2908u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 604));
label_2a290c:
    // 0x2a290c: 0x68940007  ldl         $s4, 0x7($a0)
    ctx->pc = 0x2a290cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x2a2910: 0x6c940000  ldr         $s4, 0x0($a0)
    ctx->pc = 0x2a2910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x2a2914: 0x6895000f  ldl         $s5, 0xF($a0)
    ctx->pc = 0x2a2914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x2a2918: 0x6c950008  ldr         $s5, 0x8($a0)
    ctx->pc = 0x2a2918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x2a291c: 0x68960017  ldl         $s6, 0x17($a0)
    ctx->pc = 0x2a291cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x2a2920: 0x6c960010  ldr         $s6, 0x10($a0)
    ctx->pc = 0x2a2920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x2a2924: 0x6897001f  ldl         $s7, 0x1F($a0)
    ctx->pc = 0x2a2924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x2a2928: 0x6c970018  ldr         $s7, 0x18($a0)
    ctx->pc = 0x2a2928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2a292c: 0xb0d40007  sdl         $s4, 0x7($a2)
    ctx->pc = 0x2a292cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2930: 0xb4d40000  sdr         $s4, 0x0($a2)
    ctx->pc = 0x2a2930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2934: 0xb0d5000f  sdl         $s5, 0xF($a2)
    ctx->pc = 0x2a2934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2938: 0xb4d50008  sdr         $s5, 0x8($a2)
    ctx->pc = 0x2a2938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a293c: 0xb0d60017  sdl         $s6, 0x17($a2)
    ctx->pc = 0x2a293cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2940: 0xb4d60010  sdr         $s6, 0x10($a2)
    ctx->pc = 0x2a2940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2944: 0xb0d7001f  sdl         $s7, 0x1F($a2)
    ctx->pc = 0x2a2944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2948: 0xb4d70018  sdr         $s7, 0x18($a2)
    ctx->pc = 0x2a2948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a294c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2950: 0x1483ffee  bne         $a0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2950u;
    {
        const bool branch_taken_0x2a2950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2950u;
        // 0x2a2954: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2950) {
            ctx->pc = 0x2A290Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a290c;
        }
    }
    ctx->pc = 0x2A2958u;
    // 0x2a2958: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A2958u;
    {
        const bool branch_taken_0x2a2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2958u;
        // 0x2a295c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2958) {
            ctx->pc = 0x2A29D0u;
            goto label_2a29d0;
        }
    }
    ctx->pc = 0x2A2960u;
label_2a2960:
    // 0x2a2960: 0x24e30068  addiu       $v1, $a3, 0x68
    ctx->pc = 0x2a2960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x2a2964: 0x250500dc  addiu       $a1, $t0, 0xDC
    ctx->pc = 0x2a2964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 220));
    // 0x2a2968: 0x24e2006c  addiu       $v0, $a3, 0x6C
    ctx->pc = 0x2a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    // 0x2a296c: 0x24e900cc  addiu       $t1, $a3, 0xCC
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 204));
    // 0x2a2970: 0x250f0140  addiu       $t7, $t0, 0x140
    ctx->pc = 0x2a2970u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x2a2974: 0x24ee00d0  addiu       $t6, $a3, 0xD0
    ctx->pc = 0x2a2974u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x2a2978: 0x24ea0130  addiu       $t2, $a3, 0x130
    ctx->pc = 0x2a2978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 304));
    // 0x2a297c: 0x251901a4  addiu       $t9, $t0, 0x1A4
    ctx->pc = 0x2a297cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 420));
    // 0x2a2980: 0x24f80134  addiu       $t8, $a3, 0x134
    ctx->pc = 0x2a2980u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 308));
    // 0x2a2984: 0x24eb0194  addiu       $t3, $a3, 0x194
    ctx->pc = 0x2a2984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 404));
    // 0x2a2988: 0x25110274  addiu       $s1, $t0, 0x274
    ctx->pc = 0x2a2988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 628));
    // 0x2a298c: 0x24f00198  addiu       $s0, $a3, 0x198
    ctx->pc = 0x2a298cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 408));
    // 0x2a2990: 0x24ec01f8  addiu       $t4, $a3, 0x1F8
    ctx->pc = 0x2a2990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 504));
    // 0x2a2994: 0x25130014  addiu       $s3, $t0, 0x14
    ctx->pc = 0x2a2994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x2a2998: 0x24f201fc  addiu       $s2, $a3, 0x1FC
    ctx->pc = 0x2a2998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 508));
    // 0x2a299c: 0x24ed025c  addiu       $t5, $a3, 0x25C
    ctx->pc = 0x2a299cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 604));
label_2a29a0:
    // 0x2a29a0: 0xdc940000  ld          $s4, 0x0($a0)
    ctx->pc = 0x2a29a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a29a4: 0xdc950008  ld          $s5, 0x8($a0)
    ctx->pc = 0x2a29a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a29a8: 0xdc960010  ld          $s6, 0x10($a0)
    ctx->pc = 0x2a29a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a29ac: 0xdc970018  ld          $s7, 0x18($a0)
    ctx->pc = 0x2a29acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a29b0: 0xfcd40000  sd          $s4, 0x0($a2)
    ctx->pc = 0x2a29b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 20));
    // 0x2a29b4: 0xfcd50008  sd          $s5, 0x8($a2)
    ctx->pc = 0x2a29b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 21));
    // 0x2a29b8: 0xfcd60010  sd          $s6, 0x10($a2)
    ctx->pc = 0x2a29b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 22));
    // 0x2a29bc: 0xfcd70018  sd          $s7, 0x18($a2)
    ctx->pc = 0x2a29bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 23));
    // 0x2a29c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a29c4: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A29C4u;
    {
        const bool branch_taken_0x2a29c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29C4u;
        // 0x2a29c8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29c4) {
            ctx->pc = 0x2A29A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a29a0;
        }
    }
    ctx->pc = 0x2A29CCu;
    // 0x2a29cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a29ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a29d0:
    // 0x2a29d0: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2a29d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a29d4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x2a29d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a29d8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a29d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a29dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A29DCu;
    {
        const bool branch_taken_0x2a29dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29DCu;
        // 0x2a29e0: 0xacd40000  sw          $s4, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29dc) {
            ctx->pc = 0x2A2A38u;
            goto label_2a2a38;
        }
    }
    ctx->pc = 0x2A29E4u;
label_2a29e4:
    // 0x2a29e4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a29e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a29e8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a29e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a29ec: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2a29ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a29f0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2a29f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a29f4: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x2a29f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a29f8: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x2a29f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a29fc: 0x6874001f  ldl         $s4, 0x1F($v1)
    ctx->pc = 0x2a29fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x2a2a00: 0x6c740018  ldr         $s4, 0x18($v1)
    ctx->pc = 0x2a2a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x2a2a04: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2a2a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a08: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2a2a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a0c: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2a2a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a10: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2a2a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a14: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x2a2a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a18: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x2a2a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a1c: 0xb0b4001f  sdl         $s4, 0x1F($a1)
    ctx->pc = 0x2a2a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a20: 0xb4b40018  sdr         $s4, 0x18($a1)
    ctx->pc = 0x2a2a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2a24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2a28: 0x1469ffee  bne         $v1, $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2A28u;
    {
        const bool branch_taken_0x2a2a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2A2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A28u;
        // 0x2a2a2c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a28) {
            ctx->pc = 0x2A29E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a29e4;
        }
    }
    ctx->pc = 0x2A2A30u;
    // 0x2a2a30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2A30u;
    {
        const bool branch_taken_0x2a2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A30u;
        // 0x2a2a34: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a30) {
            ctx->pc = 0x2A2A68u;
            goto label_2a2a68;
        }
    }
    ctx->pc = 0x2A2A38u;
label_2a2a38:
    // 0x2a2a38: 0xdc750000  ld          $s5, 0x0($v1)
    ctx->pc = 0x2a2a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2a3c: 0xdc760008  ld          $s6, 0x8($v1)
    ctx->pc = 0x2a2a3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a2a40: 0xdc770010  ld          $s7, 0x10($v1)
    ctx->pc = 0x2a2a40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2a44: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x2a2a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2a48: 0xfcb50000  sd          $s5, 0x0($a1)
    ctx->pc = 0x2a2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 21));
    // 0x2a2a4c: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x2a2a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x2a2a50: 0xfcb70010  sd          $s7, 0x10($a1)
    ctx->pc = 0x2a2a50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 23));
    // 0x2a2a54: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x2a2a54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x2a2a58: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2a5c: 0x1469fff6  bne         $v1, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2A5Cu;
    {
        const bool branch_taken_0x2a2a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2A2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A5Cu;
        // 0x2a2a60: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a5c) {
            ctx->pc = 0x2A2A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2a38;
        }
    }
    ctx->pc = 0x2A2A64u;
    // 0x2a2a64: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x2a2a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a68:
    // 0x2a2a68: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2a2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a6c: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x2a2a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2a2a70: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2a2a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2a74: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2a78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2A78u;
    {
        const bool branch_taken_0x2a2a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A78u;
        // 0x2a2a7c: 0xaca90000  sw          $t1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a78) {
            ctx->pc = 0x2A2AD4u;
            goto label_2a2ad4;
        }
    }
    ctx->pc = 0x2A2A80u;
label_2a2a80:
    // 0x2a2a80: 0x68950007  ldl         $s5, 0x7($a0)
    ctx->pc = 0x2a2a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x2a2a84: 0x6c950000  ldr         $s5, 0x0($a0)
    ctx->pc = 0x2a2a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x2a2a88: 0x6896000f  ldl         $s6, 0xF($a0)
    ctx->pc = 0x2a2a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x2a2a8c: 0x6c960008  ldr         $s6, 0x8($a0)
    ctx->pc = 0x2a2a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x2a2a90: 0x68970017  ldl         $s7, 0x17($a0)
    ctx->pc = 0x2a2a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x2a2a94: 0x6c970010  ldr         $s7, 0x10($a0)
    ctx->pc = 0x2a2a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2a2a98: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x2a2a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2a9c: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x2a2a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a2aa0: 0xb0d50007  sdl         $s5, 0x7($a2)
    ctx->pc = 0x2a2aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2aa4: 0xb4d50000  sdr         $s5, 0x0($a2)
    ctx->pc = 0x2a2aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2aa8: 0xb0d6000f  sdl         $s6, 0xF($a2)
    ctx->pc = 0x2a2aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2aac: 0xb4d60008  sdr         $s6, 0x8($a2)
    ctx->pc = 0x2a2aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2ab0: 0xb0d70017  sdl         $s7, 0x17($a2)
    ctx->pc = 0x2a2ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2ab4: 0xb4d70010  sdr         $s7, 0x10($a2)
    ctx->pc = 0x2a2ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2ab8: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x2a2ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2abc: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x2a2abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2ac0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2ac4: 0x148affee  bne         $a0, $t2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2AC4u;
    {
        const bool branch_taken_0x2a2ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x2A2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AC4u;
        // 0x2a2ac8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ac4) {
            ctx->pc = 0x2A2A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2a80;
        }
    }
    ctx->pc = 0x2A2ACCu;
    // 0x2a2acc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2ACCu;
    {
        const bool branch_taken_0x2a2acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ACCu;
        // 0x2a2ad0: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2acc) {
            ctx->pc = 0x2A2B04u;
            goto label_2a2b04;
        }
    }
    ctx->pc = 0x2A2AD4u;
label_2a2ad4:
    // 0x2a2ad4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2a2ad4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2ad8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x2a2ad8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a2adc: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x2a2adcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a2ae0: 0xdc8e0018  ld          $t6, 0x18($a0)
    ctx->pc = 0x2a2ae0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a2ae4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2a2ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x2a2ae8: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2a2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2a2aec: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2a2aecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2a2af0: 0xfcce0018  sd          $t6, 0x18($a2)
    ctx->pc = 0x2a2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 14));
    // 0x2a2af4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2af8: 0x148afff6  bne         $a0, $t2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2AF8u;
    {
        const bool branch_taken_0x2a2af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x2A2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AF8u;
        // 0x2a2afc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2af8) {
            ctx->pc = 0x2A2AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2ad4;
        }
    }
    ctx->pc = 0x2A2B00u;
    // 0x2a2b00: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x2a2b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b04:
    // 0x2a2b04: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x2a2b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b08: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x2a2b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a2b0c: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2a2b0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2b10: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2b14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2B14u;
    {
        const bool branch_taken_0x2a2b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B14u;
        // 0x2a2b18: 0xaccf0000  sw          $t7, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b14) {
            ctx->pc = 0x2A2B70u;
            goto label_2a2b70;
        }
    }
    ctx->pc = 0x2A2B1Cu;
label_2a2b1c:
    // 0x2a2b1c: 0x68770007  ldl         $s7, 0x7($v1)
    ctx->pc = 0x2a2b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x2a2b20: 0x6c770000  ldr         $s7, 0x0($v1)
    ctx->pc = 0x2a2b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2a2b24: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x2a2b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2b28: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x2a2b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a2b2c: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x2a2b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a2b30: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x2a2b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a2b34: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x2a2b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a2b38: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x2a2b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a2b3c: 0xb0b70007  sdl         $s7, 0x7($a1)
    ctx->pc = 0x2a2b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b40: 0xb4b70000  sdr         $s7, 0x0($a1)
    ctx->pc = 0x2a2b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b44: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x2a2b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b48: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x2a2b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b4c: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x2a2b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b50: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x2a2b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b54: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x2a2b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b58: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x2a2b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2b5c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2b60: 0x146bffee  bne         $v1, $t3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2B60u;
    {
        const bool branch_taken_0x2a2b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x2A2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B60u;
        // 0x2a2b64: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b60) {
            ctx->pc = 0x2A2B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2b1c;
        }
    }
    ctx->pc = 0x2A2B68u;
    // 0x2a2b68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2B68u;
    {
        const bool branch_taken_0x2a2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B68u;
        // 0x2a2b6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b68) {
            ctx->pc = 0x2A2BA0u;
            goto label_2a2ba0;
        }
    }
    ctx->pc = 0x2A2B70u;
label_2a2b70:
    // 0x2a2b70: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2a2b70u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2b74: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x2a2b74u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a2b78: 0xdc6e0010  ld          $t6, 0x10($v1)
    ctx->pc = 0x2a2b78u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2b7c: 0xdc6f0018  ld          $t7, 0x18($v1)
    ctx->pc = 0x2a2b7cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2b80: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x2a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x2a2b84: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x2a2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x2a2b88: 0xfcae0010  sd          $t6, 0x10($a1)
    ctx->pc = 0x2a2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 14));
    // 0x2a2b8c: 0xfcaf0018  sd          $t7, 0x18($a1)
    ctx->pc = 0x2a2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 15));
    // 0x2a2b90: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2b94: 0x146bfff6  bne         $v1, $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2B94u;
    {
        const bool branch_taken_0x2a2b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x2A2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B94u;
        // 0x2a2b98: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b94) {
            ctx->pc = 0x2A2B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2b70;
        }
    }
    ctx->pc = 0x2A2B9Cu;
    // 0x2a2b9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ba0:
    // 0x2a2ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ba4: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x2a2ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2a2ba8: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2a2ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2bac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2bb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2BB0u;
    {
        const bool branch_taken_0x2a2bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BB0u;
        // 0x2a2bb4: 0xacb40000  sw          $s4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bb0) {
            ctx->pc = 0x2A2C0Cu;
            goto label_2a2c0c;
        }
    }
    ctx->pc = 0x2A2BB8u;
label_2a2bb8:
    // 0x2a2bb8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a2bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2bbc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a2bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a2bc0: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x2a2bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a2bc4: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x2a2bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a2bc8: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x2a2bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a2bcc: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x2a2bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a2bd0: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x2a2bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a2bd4: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x2a2bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a2bd8: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2a2bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2bdc: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2a2bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2be0: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x2a2be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2be4: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x2a2be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2be8: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x2a2be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2bec: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x2a2becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2bf0: 0xb0c9001f  sdl         $t1, 0x1F($a2)
    ctx->pc = 0x2a2bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2bf4: 0xb4c90018  sdr         $t1, 0x18($a2)
    ctx->pc = 0x2a2bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2bf8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2bfc: 0x148cffee  bne         $a0, $t4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2BFCu;
    {
        const bool branch_taken_0x2a2bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        ctx->pc = 0x2A2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BFCu;
        // 0x2a2c00: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bfc) {
            ctx->pc = 0x2A2BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2bb8;
        }
    }
    ctx->pc = 0x2A2C04u;
    // 0x2a2c04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2C04u;
    {
        const bool branch_taken_0x2a2c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C04u;
        // 0x2a2c08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c04) {
            ctx->pc = 0x2A2C3Cu;
            goto label_2a2c3c;
        }
    }
    ctx->pc = 0x2A2C0Cu;
label_2a2c0c:
    // 0x2a2c0c: 0xdc8a0000  ld          $t2, 0x0($a0)
    ctx->pc = 0x2a2c0cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2c10: 0xdc8b0008  ld          $t3, 0x8($a0)
    ctx->pc = 0x2a2c10u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a2c14: 0xdc8e0010  ld          $t6, 0x10($a0)
    ctx->pc = 0x2a2c14u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a2c18: 0xdc8f0018  ld          $t7, 0x18($a0)
    ctx->pc = 0x2a2c18u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a2c1c: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x2a2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x2a2c20: 0xfccb0008  sd          $t3, 0x8($a2)
    ctx->pc = 0x2a2c20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 11));
    // 0x2a2c24: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x2a2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x2a2c28: 0xfccf0018  sd          $t7, 0x18($a2)
    ctx->pc = 0x2a2c28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 15));
    // 0x2a2c2c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a2c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2c30: 0x148cfff6  bne         $a0, $t4, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2C30u;
    {
        const bool branch_taken_0x2a2c30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        ctx->pc = 0x2A2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C30u;
        // 0x2a2c34: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c30) {
            ctx->pc = 0x2A2C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2c0c;
        }
    }
    ctx->pc = 0x2A2C38u;
    // 0x2a2c38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a2c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c3c:
    // 0x2a2c3c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a2c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c40: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x2a2c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a2c44: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2a2c44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2c48: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2c4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2C4Cu;
    {
        const bool branch_taken_0x2a2c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C4Cu;
        // 0x2a2c50: 0xacd40000  sw          $s4, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c4c) {
            ctx->pc = 0x2A2CA8u;
            goto label_2a2ca8;
        }
    }
    ctx->pc = 0x2A2C54u;
label_2a2c54:
    // 0x2a2c54: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a2c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2c58: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a2c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a2c5c: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2a2c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a2c60: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2a2c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a2c64: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x2a2c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a2c68: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x2a2c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a2c6c: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2a2c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a2c70: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2a2c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a2c74: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2a2c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c78: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2a2c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c7c: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2a2c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c80: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2a2c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c84: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x2a2c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c88: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x2a2c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c8c: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x2a2c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c90: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x2a2c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2c94: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2c98: 0x146dffee  bne         $v1, $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2C98u;
    {
        const bool branch_taken_0x2a2c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x2A2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C98u;
        // 0x2a2c9c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c98) {
            ctx->pc = 0x2A2C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2c54;
        }
    }
    ctx->pc = 0x2A2CA0u;
    // 0x2a2ca0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A2CA0u;
    {
        const bool branch_taken_0x2a2ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ca0) {
            ctx->pc = 0x2A2CD4u;
            goto label_2a2cd4;
        }
    }
    ctx->pc = 0x2A2CA8u;
label_2a2ca8:
    // 0x2a2ca8: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x2a2ca8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2cac: 0xdc6b0008  ld          $t3, 0x8($v1)
    ctx->pc = 0x2a2cacu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a2cb0: 0xdc6c0010  ld          $t4, 0x10($v1)
    ctx->pc = 0x2a2cb0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2cb4: 0xdc6e0018  ld          $t6, 0x18($v1)
    ctx->pc = 0x2a2cb4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2cb8: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x2a2cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x2a2cbc: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x2a2cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x2a2cc0: 0xfcac0010  sd          $t4, 0x10($a1)
    ctx->pc = 0x2a2cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 12));
    // 0x2a2cc4: 0xfcae0018  sd          $t6, 0x18($a1)
    ctx->pc = 0x2a2cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 14));
    // 0x2a2cc8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2ccc: 0x146dfff6  bne         $v1, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2CCCu;
    {
        const bool branch_taken_0x2a2ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x2A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CCCu;
        // 0x2a2cd0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ccc) {
            ctx->pc = 0x2A2CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2ca8;
        }
    }
    ctx->pc = 0x2A2CD4u;
label_2a2cd4:
    // 0x2a2cd4: 0x8c6f0000  lw          $t7, 0x0($v1)
    ctx->pc = 0x2a2cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2cd8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2a2cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2cdc: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x2a2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x2a2ce0: 0x90e30268  lbu         $v1, 0x268($a3)
    ctx->pc = 0x2a2ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 616)));
    // 0x2a2ce4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a2ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a2ce8: 0xa103026c  sb          $v1, 0x26C($t0)
    ctx->pc = 0x2a2ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 620), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2cec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a2cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2cf0: 0x90e4026a  lbu         $a0, 0x26A($a3)
    ctx->pc = 0x2a2cf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 618)));
    // 0x2a2cf4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a2cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2cf8: 0xa1040010  sb          $a0, 0x10($t0)
    ctx->pc = 0x2a2cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2cfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a2cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2d00: 0x90e30269  lbu         $v1, 0x269($a3)
    ctx->pc = 0x2a2d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 617)));
    // 0x2a2d04: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a2d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2d08: 0xa103026d  sb          $v1, 0x26D($t0)
    ctx->pc = 0x2a2d08u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 621), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2d0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2a2d0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2d10: 0xc4e00260  lwc1        $f0, 0x260($a3)
    ctx->pc = 0x2a2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2d14: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2a2d14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2d18: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2a2d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2a2d1c: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x2a2d1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2d20: 0xc4e10264  lwc1        $f1, 0x264($a3)
    ctx->pc = 0x2a2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2d24: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x2a2d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2a2d28: 0x94e3026c  lhu         $v1, 0x26C($a3)
    ctx->pc = 0x2a2d28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 620)));
    // 0x2a2d2c: 0xa503026e  sh          $v1, 0x26E($t0)
    ctx->pc = 0x2a2d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 622), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a2d30: 0x94e4026e  lhu         $a0, 0x26E($a3)
    ctx->pc = 0x2a2d30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 622)));
    // 0x2a2d34: 0xa5040270  sh          $a0, 0x270($t0)
    ctx->pc = 0x2a2d34u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 624), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a2d38: 0x94e30270  lhu         $v1, 0x270($a3)
    ctx->pc = 0x2a2d38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 624)));
    // 0x2a2d3c: 0xa5030272  sh          $v1, 0x272($t0)
    ctx->pc = 0x2a2d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 626), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a2d40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D40u;
        // 0x2a2d44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2D48u;
    // 0x2a2d48: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2a2d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2d4c: 0x0  nop
    ctx->pc = 0x2a2d4cu;
    // NOP
    // 0x2a2d50: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a2d54: 0x0  nop
    ctx->pc = 0x2a2d54u;
    // NOP
    // 0x2a2d58: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a2d5c: 0x0  nop
    ctx->pc = 0x2a2d5cu;
    // NOP
    ctx->pc = 0x2a2d60u;
}
