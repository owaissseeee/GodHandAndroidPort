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

// Function: func_0019C848
// Address: 0x19c848 - 0x19c980
void func_0019C848_0x19c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C848_0x19c848");
#endif

    switch (ctx->pc) {
        case 0x19c848u: goto label_19c848;
        case 0x19c84cu: goto label_19c84c;
        case 0x19c850u: goto label_19c850;
        case 0x19c854u: goto label_19c854;
        case 0x19c858u: goto label_19c858;
        case 0x19c85cu: goto label_19c85c;
        case 0x19c860u: goto label_19c860;
        case 0x19c864u: goto label_19c864;
        case 0x19c868u: goto label_19c868;
        case 0x19c86cu: goto label_19c86c;
        case 0x19c870u: goto label_19c870;
        case 0x19c874u: goto label_19c874;
        case 0x19c878u: goto label_19c878;
        case 0x19c87cu: goto label_19c87c;
        case 0x19c880u: goto label_19c880;
        case 0x19c884u: goto label_19c884;
        case 0x19c888u: goto label_19c888;
        case 0x19c88cu: goto label_19c88c;
        case 0x19c890u: goto label_19c890;
        case 0x19c894u: goto label_19c894;
        case 0x19c898u: goto label_19c898;
        case 0x19c89cu: goto label_19c89c;
        case 0x19c8a0u: goto label_19c8a0;
        case 0x19c8a4u: goto label_19c8a4;
        case 0x19c8a8u: goto label_19c8a8;
        case 0x19c8acu: goto label_19c8ac;
        case 0x19c8b0u: goto label_19c8b0;
        case 0x19c8b4u: goto label_19c8b4;
        case 0x19c8b8u: goto label_19c8b8;
        case 0x19c8bcu: goto label_19c8bc;
        case 0x19c8c0u: goto label_19c8c0;
        case 0x19c8c4u: goto label_19c8c4;
        case 0x19c8c8u: goto label_19c8c8;
        case 0x19c8ccu: goto label_19c8cc;
        case 0x19c8d0u: goto label_19c8d0;
        case 0x19c8d4u: goto label_19c8d4;
        case 0x19c8d8u: goto label_19c8d8;
        case 0x19c8dcu: goto label_19c8dc;
        case 0x19c8e0u: goto label_19c8e0;
        case 0x19c8e4u: goto label_19c8e4;
        case 0x19c8e8u: goto label_19c8e8;
        case 0x19c8ecu: goto label_19c8ec;
        case 0x19c8f0u: goto label_19c8f0;
        case 0x19c8f4u: goto label_19c8f4;
        case 0x19c8f8u: goto label_19c8f8;
        case 0x19c8fcu: goto label_19c8fc;
        case 0x19c900u: goto label_19c900;
        case 0x19c904u: goto label_19c904;
        case 0x19c908u: goto label_19c908;
        case 0x19c90cu: goto label_19c90c;
        case 0x19c910u: goto label_19c910;
        case 0x19c914u: goto label_19c914;
        case 0x19c918u: goto label_19c918;
        case 0x19c91cu: goto label_19c91c;
        case 0x19c920u: goto label_19c920;
        case 0x19c924u: goto label_19c924;
        case 0x19c928u: goto label_19c928;
        case 0x19c92cu: goto label_19c92c;
        case 0x19c930u: goto label_19c930;
        case 0x19c934u: goto label_19c934;
        case 0x19c938u: goto label_19c938;
        case 0x19c93cu: goto label_19c93c;
        case 0x19c940u: goto label_19c940;
        case 0x19c944u: goto label_19c944;
        case 0x19c948u: goto label_19c948;
        case 0x19c94cu: goto label_19c94c;
        case 0x19c950u: goto label_19c950;
        case 0x19c954u: goto label_19c954;
        case 0x19c958u: goto label_19c958;
        case 0x19c95cu: goto label_19c95c;
        case 0x19c960u: goto label_19c960;
        case 0x19c964u: goto label_19c964;
        case 0x19c968u: goto label_19c968;
        case 0x19c96cu: goto label_19c96c;
        case 0x19c970u: goto label_19c970;
        case 0x19c974u: goto label_19c974;
        case 0x19c978u: goto label_19c978;
        case 0x19c97cu: goto label_19c97c;
        default: break;
    }

    ctx->pc = 0x19c848u;

label_19c848:
    // 0x19c848: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19c84c:
    // 0x19c84c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19c84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19c850:
    // 0x19c850: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19c854:
    // 0x19c854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19c858:
    // 0x19c858: 0xc06ddac  jal         func_1B76B0
label_19c85c:
    if (ctx->pc == 0x19C85Cu) {
        ctx->pc = 0x19C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C858u;
        // 0x19c85c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C860u;
        goto label_19c860;
    }
    ctx->pc = 0x19C858u;
    SET_GPR_U32(ctx, 31, 0x19C860u);
    ctx->pc = 0x19C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C858u;
    // 0x19c85c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x19C858u, 0x19C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C860u;
label_19c860:
    // 0x19c860: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_19c864:
    if (ctx->pc == 0x19C864u) {
        ctx->pc = 0x19C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C860u;
        // 0x19c864: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C868u;
        goto label_19c868;
    }
    ctx->pc = 0x19C860u;
    {
        const bool branch_taken_0x19c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c860) {
            ctx->pc = 0x19C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C860u;
            // 0x19c864: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C970u;
            goto label_19c970;
        }
    }
    ctx->pc = 0x19C868u;
label_19c868:
    // 0x19c868: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x19c868u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_19c86c:
    // 0x19c86c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x19c86cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_19c870:
    // 0x19c870: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19c874:
    // 0x19c874: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_19c878:
    if (ctx->pc == 0x19C878u) {
        ctx->pc = 0x19C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C874u;
        // 0x19c878: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C87Cu;
        goto label_19c87c;
    }
    ctx->pc = 0x19C874u;
    {
        const bool branch_taken_0x19c874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C874u;
        // 0x19c878: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c874) {
            ctx->pc = 0x19C964u;
            goto label_19c964;
        }
    }
    ctx->pc = 0x19C87Cu;
label_19c87c:
    // 0x19c87c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x19c87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_19c880:
    // 0x19c880: 0x24475c58  addiu       $a3, $v0, 0x5C58
    ctx->pc = 0x19c880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23640));
label_19c884:
    // 0x19c884: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x19c884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19c888:
    // 0x19c888: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x19c888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19c88c:
    // 0x19c88c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19c88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19c890:
    // 0x19c890: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x19c890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19c894:
    // 0x19c894: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x19c894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19c898:
    // 0x19c898: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x19c898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19c89c:
    // 0x19c89c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x19c89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8a0:
    // 0x19c8a0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x19c8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8a4:
    // 0x19c8a4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x19c8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8a8:
    // 0x19c8a8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x19c8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8ac:
    // 0x19c8ac: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x19c8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8b0:
    // 0x19c8b0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x19c8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8b4:
    // 0x19c8b4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x19c8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19c8b8:
    // 0x19c8b8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x19c8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19c8bc:
    // 0x19c8bc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x19c8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8c0:
    // 0x19c8c0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x19c8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19c8c4:
    // 0x19c8c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19c8c8:
    // 0x19c8c8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x19c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_19c8cc:
    // 0x19c8cc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x19c8ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_19c8d0:
    // 0x19c8d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19c8d4:
    // 0x19c8d4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_19c8d8:
    // 0x19c8d8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_19c8dc:
    if (ctx->pc == 0x19C8DCu) {
        ctx->pc = 0x19C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8D8u;
        // 0x19c8dc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8E0u;
        goto label_19c8e0;
    }
    ctx->pc = 0x19C8D8u;
    {
        const bool branch_taken_0x19c8d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8D8u;
        // 0x19c8dc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8d8) {
            ctx->pc = 0x19C90Cu;
            goto label_19c90c;
        }
    }
    ctx->pc = 0x19C8E0u;
label_19c8e0:
    // 0x19c8e0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x19c8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_19c8e4:
    // 0x19c8e4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19c8e8:
    // 0x19c8e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19c8ec:
    // 0x19c8ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19c8ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19c8f0:
    // 0x19c8f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19c8f4:
    // 0x19c8f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c8f8:
    // 0x19c8f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19c8fc:
    // 0x19c8fc: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x19c8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_19c900:
    // 0x19c900: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x19c900u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_19c904:
    // 0x19c904: 0x10000004  b           . + 4 + (0x4 << 2)
label_19c908:
    if (ctx->pc == 0x19C908u) {
        ctx->pc = 0x19C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C904u;
        // 0x19c908: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C90Cu;
        goto label_19c90c;
    }
    ctx->pc = 0x19C904u;
    {
        const bool branch_taken_0x19c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C904u;
        // 0x19c908: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c904) {
            ctx->pc = 0x19C918u;
            goto label_19c918;
        }
    }
    ctx->pc = 0x19C90Cu;
label_19c90c:
    // 0x19c90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c910:
    // 0x19c910: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19c910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c914:
    // 0x19c914: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x19c914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_19c918:
    // 0x19c918: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19c91c:
    // 0x19c91c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19c920:
    // 0x19c920: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_19c924:
    if (ctx->pc == 0x19C924u) {
        ctx->pc = 0x19C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C920u;
        // 0x19c924: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C928u;
        goto label_19c928;
    }
    ctx->pc = 0x19C920u;
    {
        const bool branch_taken_0x19c920 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C920u;
        // 0x19c924: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c920) {
            ctx->pc = 0x19C93Cu;
            goto label_19c93c;
        }
    }
    ctx->pc = 0x19C928u;
label_19c928:
    // 0x19c928: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x19c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_19c92c:
    // 0x19c92c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19c930:
    // 0x19c930: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19c934:
    // 0x19c934: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c938:
    if (ctx->pc == 0x19C938u) {
        ctx->pc = 0x19C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C934u;
        // 0x19c938: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C93Cu;
        goto label_19c93c;
    }
    ctx->pc = 0x19C934u;
    {
        const bool branch_taken_0x19c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C934u;
        // 0x19c938: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c934) {
            ctx->pc = 0x19C940u;
            goto label_19c940;
        }
    }
    ctx->pc = 0x19C93Cu;
label_19c93c:
    // 0x19c93c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19c93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19c940:
    // 0x19c940: 0xc0f809  jalr        $a2
label_19c944:
    if (ctx->pc == 0x19C944u) {
        ctx->pc = 0x19C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C940u;
        // 0x19c944: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C948u;
        goto label_19c948;
    }
    ctx->pc = 0x19C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19C948u);
        ctx->pc = 0x19C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C940u;
        // 0x19c944: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C940u, 0x19C948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C948u;
label_19c948:
    // 0x19c948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c94c:
    // 0x19c94c: 0xc0aa1fa  jal         func_2A87E8
label_19c950:
    if (ctx->pc == 0x19C950u) {
        ctx->pc = 0x19C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C94Cu;
        // 0x19c950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C954u;
        goto label_19c954;
    }
    ctx->pc = 0x19C94Cu;
    SET_GPR_U32(ctx, 31, 0x19C954u);
    ctx->pc = 0x19C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C94Cu;
    // 0x19c950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x19C94Cu, 0x19C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C954u;
label_19c954:
    // 0x19c954: 0xc06ddb6  jal         func_1B76D8
label_19c958:
    if (ctx->pc == 0x19C958u) {
        ctx->pc = 0x19C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C954u;
        // 0x19c958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C95Cu;
        goto label_19c95c;
    }
    ctx->pc = 0x19C954u;
    SET_GPR_U32(ctx, 31, 0x19C95Cu);
    ctx->pc = 0x19C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C954u;
    // 0x19c958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x19C954u, 0x19C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C95Cu;
label_19c95c:
    // 0x19c95c: 0x10000004  b           . + 4 + (0x4 << 2)
label_19c960:
    if (ctx->pc == 0x19C960u) {
        ctx->pc = 0x19C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C95Cu;
        // 0x19c960: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C964u;
        goto label_19c964;
    }
    ctx->pc = 0x19C95Cu;
    {
        const bool branch_taken_0x19c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C95Cu;
        // 0x19c960: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c95c) {
            ctx->pc = 0x19C970u;
            goto label_19c970;
        }
    }
    ctx->pc = 0x19C964u;
label_19c964:
    // 0x19c964: 0xc071f8c  jal         func_1C7E30
label_19c968:
    if (ctx->pc == 0x19C968u) {
        ctx->pc = 0x19C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C964u;
        // 0x19c968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C96Cu;
        goto label_19c96c;
    }
    ctx->pc = 0x19C964u;
    SET_GPR_U32(ctx, 31, 0x19C96Cu);
    ctx->pc = 0x19C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C964u;
    // 0x19c968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x19C964u, 0x19C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C96Cu;
label_19c96c:
    // 0x19c96c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19c96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c970:
    // 0x19c970: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19c970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c974:
    // 0x19c974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c978:
    // 0x19c978: 0x3e00008  jr          $ra
label_19c97c:
    if (ctx->pc == 0x19C97Cu) {
        ctx->pc = 0x19C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C978u;
        // 0x19c97c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C980u;
        goto label_fallthrough_0x19c978;
    }
    ctx->pc = 0x19C978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C978u;
        // 0x19c97c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c978:
    ctx->pc = 0x19C980u;
}
