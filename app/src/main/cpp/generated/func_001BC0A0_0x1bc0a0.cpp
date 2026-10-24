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

// Function: func_001BC0A0
// Address: 0x1bc0a0 - 0x1bc1c8
void func_001BC0A0_0x1bc0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BC0A0_0x1bc0a0");
#endif

    switch (ctx->pc) {
        case 0x1bc0a0u: goto label_1bc0a0;
        case 0x1bc0a4u: goto label_1bc0a4;
        case 0x1bc0a8u: goto label_1bc0a8;
        case 0x1bc0acu: goto label_1bc0ac;
        case 0x1bc0b0u: goto label_1bc0b0;
        case 0x1bc0b4u: goto label_1bc0b4;
        case 0x1bc0b8u: goto label_1bc0b8;
        case 0x1bc0bcu: goto label_1bc0bc;
        case 0x1bc0c0u: goto label_1bc0c0;
        case 0x1bc0c4u: goto label_1bc0c4;
        case 0x1bc0c8u: goto label_1bc0c8;
        case 0x1bc0ccu: goto label_1bc0cc;
        case 0x1bc0d0u: goto label_1bc0d0;
        case 0x1bc0d4u: goto label_1bc0d4;
        case 0x1bc0d8u: goto label_1bc0d8;
        case 0x1bc0dcu: goto label_1bc0dc;
        case 0x1bc0e0u: goto label_1bc0e0;
        case 0x1bc0e4u: goto label_1bc0e4;
        case 0x1bc0e8u: goto label_1bc0e8;
        case 0x1bc0ecu: goto label_1bc0ec;
        case 0x1bc0f0u: goto label_1bc0f0;
        case 0x1bc0f4u: goto label_1bc0f4;
        case 0x1bc0f8u: goto label_1bc0f8;
        case 0x1bc0fcu: goto label_1bc0fc;
        case 0x1bc100u: goto label_1bc100;
        case 0x1bc104u: goto label_1bc104;
        case 0x1bc108u: goto label_1bc108;
        case 0x1bc10cu: goto label_1bc10c;
        case 0x1bc110u: goto label_1bc110;
        case 0x1bc114u: goto label_1bc114;
        case 0x1bc118u: goto label_1bc118;
        case 0x1bc11cu: goto label_1bc11c;
        case 0x1bc120u: goto label_1bc120;
        case 0x1bc124u: goto label_1bc124;
        case 0x1bc128u: goto label_1bc128;
        case 0x1bc12cu: goto label_1bc12c;
        case 0x1bc130u: goto label_1bc130;
        case 0x1bc134u: goto label_1bc134;
        case 0x1bc138u: goto label_1bc138;
        case 0x1bc13cu: goto label_1bc13c;
        case 0x1bc140u: goto label_1bc140;
        case 0x1bc144u: goto label_1bc144;
        case 0x1bc148u: goto label_1bc148;
        case 0x1bc14cu: goto label_1bc14c;
        case 0x1bc150u: goto label_1bc150;
        case 0x1bc154u: goto label_1bc154;
        case 0x1bc158u: goto label_1bc158;
        case 0x1bc15cu: goto label_1bc15c;
        case 0x1bc160u: goto label_1bc160;
        case 0x1bc164u: goto label_1bc164;
        case 0x1bc168u: goto label_1bc168;
        case 0x1bc16cu: goto label_1bc16c;
        case 0x1bc170u: goto label_1bc170;
        case 0x1bc174u: goto label_1bc174;
        case 0x1bc178u: goto label_1bc178;
        case 0x1bc17cu: goto label_1bc17c;
        case 0x1bc180u: goto label_1bc180;
        case 0x1bc184u: goto label_1bc184;
        case 0x1bc188u: goto label_1bc188;
        case 0x1bc18cu: goto label_1bc18c;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc194u: goto label_1bc194;
        case 0x1bc198u: goto label_1bc198;
        case 0x1bc19cu: goto label_1bc19c;
        case 0x1bc1a0u: goto label_1bc1a0;
        case 0x1bc1a4u: goto label_1bc1a4;
        case 0x1bc1a8u: goto label_1bc1a8;
        case 0x1bc1acu: goto label_1bc1ac;
        case 0x1bc1b0u: goto label_1bc1b0;
        case 0x1bc1b4u: goto label_1bc1b4;
        case 0x1bc1b8u: goto label_1bc1b8;
        case 0x1bc1bcu: goto label_1bc1bc;
        case 0x1bc1c0u: goto label_1bc1c0;
        case 0x1bc1c4u: goto label_1bc1c4;
        default: break;
    }

    ctx->pc = 0x1bc0a0u;

label_1bc0a0:
    // 0x1bc0a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bc0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bc0a4:
    // 0x1bc0a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bc0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1bc0a8:
    // 0x1bc0a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bc0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1bc0ac:
    // 0x1bc0ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bc0b0:
    // 0x1bc0b0: 0xc06ddac  jal         func_1B76B0
label_1bc0b4:
    if (ctx->pc == 0x1BC0B4u) {
        ctx->pc = 0x1BC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0B0u;
        // 0x1bc0b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0B8u;
        goto label_1bc0b8;
    }
    ctx->pc = 0x1BC0B0u;
    SET_GPR_U32(ctx, 31, 0x1BC0B8u);
    ctx->pc = 0x1BC0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0B0u;
    // 0x1bc0b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BC0B0u, 0x1BC0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0B8u;
label_1bc0b8:
    // 0x1bc0b8: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_1bc0bc:
    if (ctx->pc == 0x1BC0BCu) {
        ctx->pc = 0x1BC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0B8u;
        // 0x1bc0bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0C0u;
        goto label_1bc0c0;
    }
    ctx->pc = 0x1BC0B8u;
    {
        const bool branch_taken_0x1bc0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc0b8) {
            ctx->pc = 0x1BC0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC0B8u;
            // 0x1bc0bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC1B8u;
            goto label_1bc1b8;
        }
    }
    ctx->pc = 0x1BC0C0u;
label_1bc0c0:
    // 0x1bc0c0: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1bc0c0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1bc0c4:
    // 0x1bc0c4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1bc0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1bc0c8:
    // 0x1bc0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bc0cc:
    // 0x1bc0cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1bc0d0:
    if (ctx->pc == 0x1BC0D0u) {
        ctx->pc = 0x1BC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0CCu;
        // 0x1bc0d0: 0x920302f4  lbu         $v1, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0D4u;
        goto label_1bc0d4;
    }
    ctx->pc = 0x1BC0CCu;
    {
        const bool branch_taken_0x1bc0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc0cc) {
            ctx->pc = 0x1BC0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC0CCu;
            // 0x1bc0d0: 0x920302f4  lbu         $v1, 0x2F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC0E0u;
            goto label_1bc0e0;
        }
    }
    ctx->pc = 0x1BC0D4u;
label_1bc0d4:
    // 0x1bc0d4: 0xc06f50c  jal         func_1BD430
label_1bc0d8:
    if (ctx->pc == 0x1BC0D8u) {
        ctx->pc = 0x1BC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0D4u;
        // 0x1bc0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0DCu;
        goto label_1bc0dc;
    }
    ctx->pc = 0x1BC0D4u;
    SET_GPR_U32(ctx, 31, 0x1BC0DCu);
    ctx->pc = 0x1BC0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0D4u;
    // 0x1bc0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD430u, 0x1BC0D4u, 0x1BC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0DCu;
label_1bc0dc:
    // 0x1bc0dc: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1bc0dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bc0e0:
    // 0x1bc0e0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1bc0e4:
    // 0x1bc0e4: 0x24479258  addiu       $a3, $v0, -0x6DA8
    ctx->pc = 0x1bc0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939224));
label_1bc0e8:
    // 0x1bc0e8: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1bc0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bc0ec:
    // 0x1bc0ec: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1bc0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bc0f0:
    // 0x1bc0f0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1bc0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bc0f4:
    // 0x1bc0f4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1bc0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bc0f8:
    // 0x1bc0f8: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1bc0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1bc0fc:
    // 0x1bc0fc: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1bc0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1bc100:
    // 0x1bc100: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1bc100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc104:
    // 0x1bc104: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1bc104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc108:
    // 0x1bc108: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1bc108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc10c:
    // 0x1bc10c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1bc10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc110:
    // 0x1bc110: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1bc110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc114:
    // 0x1bc114: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1bc114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc118:
    // 0x1bc118: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1bc118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1bc11c:
    // 0x1bc11c: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1bc11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1bc120:
    // 0x1bc120: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1bc120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc124:
    // 0x1bc124: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1bc124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bc128:
    // 0x1bc128: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bc128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bc12c:
    // 0x1bc12c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1bc12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1bc130:
    // 0x1bc130: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1bc130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bc134:
    // 0x1bc134: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bc134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc138:
    // 0x1bc138: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1bc138u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1bc13c:
    // 0x1bc13c: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1bc140:
    if (ctx->pc == 0x1BC140u) {
        ctx->pc = 0x1BC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC13Cu;
        // 0x1bc140: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC144u;
        goto label_1bc144;
    }
    ctx->pc = 0x1BC13Cu;
    {
        const bool branch_taken_0x1bc13c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC13Cu;
        // 0x1bc140: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc13c) {
            ctx->pc = 0x1BC170u;
            goto label_1bc170;
        }
    }
    ctx->pc = 0x1BC144u;
label_1bc144:
    // 0x1bc144: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1bc144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bc148:
    // 0x1bc148: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bc148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bc14c:
    // 0x1bc14c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc150:
    // 0x1bc150: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bc150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bc154:
    // 0x1bc154: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bc154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bc158:
    // 0x1bc158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bc158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc15c:
    // 0x1bc15c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bc15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bc160:
    // 0x1bc160: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1bc160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1bc164:
    // 0x1bc164: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1bc164u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1bc168:
    // 0x1bc168: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bc16c:
    if (ctx->pc == 0x1BC16Cu) {
        ctx->pc = 0x1BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC168u;
        // 0x1bc16c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC170u;
        goto label_1bc170;
    }
    ctx->pc = 0x1BC168u;
    {
        const bool branch_taken_0x1bc168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC168u;
        // 0x1bc16c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc168) {
            ctx->pc = 0x1BC17Cu;
            goto label_1bc17c;
        }
    }
    ctx->pc = 0x1BC170u;
label_1bc170:
    // 0x1bc170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bc174:
    // 0x1bc174: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bc174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc178:
    // 0x1bc178: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1bc178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bc17c:
    // 0x1bc17c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bc180:
    // 0x1bc180: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1bc180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1bc184:
    // 0x1bc184: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1bc188:
    if (ctx->pc == 0x1BC188u) {
        ctx->pc = 0x1BC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC184u;
        // 0x1bc188: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC18Cu;
        goto label_1bc18c;
    }
    ctx->pc = 0x1BC184u;
    {
        const bool branch_taken_0x1bc184 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC184u;
        // 0x1bc188: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc184) {
            ctx->pc = 0x1BC1A0u;
            goto label_1bc1a0;
        }
    }
    ctx->pc = 0x1BC18Cu;
label_1bc18c:
    // 0x1bc18c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1bc18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1bc190:
    // 0x1bc190: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bc194:
    // 0x1bc194: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bc194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bc198:
    // 0x1bc198: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bc19c:
    if (ctx->pc == 0x1BC19Cu) {
        ctx->pc = 0x1BC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC198u;
        // 0x1bc19c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1A0u;
        goto label_1bc1a0;
    }
    ctx->pc = 0x1BC198u;
    {
        const bool branch_taken_0x1bc198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC198u;
        // 0x1bc19c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc198) {
            ctx->pc = 0x1BC1A4u;
            goto label_1bc1a4;
        }
    }
    ctx->pc = 0x1BC1A0u;
label_1bc1a0:
    // 0x1bc1a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bc1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bc1a4:
    // 0x1bc1a4: 0xc0f809  jalr        $a2
label_1bc1a8:
    if (ctx->pc == 0x1BC1A8u) {
        ctx->pc = 0x1BC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1A4u;
        // 0x1bc1a8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1ACu;
        goto label_1bc1ac;
    }
    ctx->pc = 0x1BC1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BC1ACu);
        ctx->pc = 0x1BC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1A4u;
        // 0x1bc1a8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC1A4u, 0x1BC1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC1ACu;
label_1bc1ac:
    // 0x1bc1ac: 0xc06ddb6  jal         func_1B76D8
label_1bc1b0:
    if (ctx->pc == 0x1BC1B0u) {
        ctx->pc = 0x1BC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1ACu;
        // 0x1bc1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1B4u;
        goto label_1bc1b4;
    }
    ctx->pc = 0x1BC1ACu;
    SET_GPR_U32(ctx, 31, 0x1BC1B4u);
    ctx->pc = 0x1BC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1ACu;
    // 0x1bc1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BC1ACu, 0x1BC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1B4u;
label_1bc1b4:
    // 0x1bc1b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bc1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc1b8:
    // 0x1bc1b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bc1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc1bc:
    // 0x1bc1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc1c0:
    // 0x1bc1c0: 0x3e00008  jr          $ra
label_1bc1c4:
    if (ctx->pc == 0x1BC1C4u) {
        ctx->pc = 0x1BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1C0u;
        // 0x1bc1c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1C8u;
        goto label_fallthrough_0x1bc1c0;
    }
    ctx->pc = 0x1BC1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1C0u;
        // 0x1bc1c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bc1c0:
    ctx->pc = 0x1BC1C8u;
}
