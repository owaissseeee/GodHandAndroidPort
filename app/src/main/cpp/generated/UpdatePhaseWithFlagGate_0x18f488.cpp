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

// Function: UpdatePhaseWithFlagGate
// Address: 0x18f488 - 0x18f5d0
void UpdatePhaseWithFlagGate_0x18f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithFlagGate_0x18f488");
#endif

    switch (ctx->pc) {
        case 0x18f488u: goto label_18f488;
        case 0x18f48cu: goto label_18f48c;
        case 0x18f490u: goto label_18f490;
        case 0x18f494u: goto label_18f494;
        case 0x18f498u: goto label_18f498;
        case 0x18f49cu: goto label_18f49c;
        case 0x18f4a0u: goto label_18f4a0;
        case 0x18f4a4u: goto label_18f4a4;
        case 0x18f4a8u: goto label_18f4a8;
        case 0x18f4acu: goto label_18f4ac;
        case 0x18f4b0u: goto label_18f4b0;
        case 0x18f4b4u: goto label_18f4b4;
        case 0x18f4b8u: goto label_18f4b8;
        case 0x18f4bcu: goto label_18f4bc;
        case 0x18f4c0u: goto label_18f4c0;
        case 0x18f4c4u: goto label_18f4c4;
        case 0x18f4c8u: goto label_18f4c8;
        case 0x18f4ccu: goto label_18f4cc;
        case 0x18f4d0u: goto label_18f4d0;
        case 0x18f4d4u: goto label_18f4d4;
        case 0x18f4d8u: goto label_18f4d8;
        case 0x18f4dcu: goto label_18f4dc;
        case 0x18f4e0u: goto label_18f4e0;
        case 0x18f4e4u: goto label_18f4e4;
        case 0x18f4e8u: goto label_18f4e8;
        case 0x18f4ecu: goto label_18f4ec;
        case 0x18f4f0u: goto label_18f4f0;
        case 0x18f4f4u: goto label_18f4f4;
        case 0x18f4f8u: goto label_18f4f8;
        case 0x18f4fcu: goto label_18f4fc;
        case 0x18f500u: goto label_18f500;
        case 0x18f504u: goto label_18f504;
        case 0x18f508u: goto label_18f508;
        case 0x18f50cu: goto label_18f50c;
        case 0x18f510u: goto label_18f510;
        case 0x18f514u: goto label_18f514;
        case 0x18f518u: goto label_18f518;
        case 0x18f51cu: goto label_18f51c;
        case 0x18f520u: goto label_18f520;
        case 0x18f524u: goto label_18f524;
        case 0x18f528u: goto label_18f528;
        case 0x18f52cu: goto label_18f52c;
        case 0x18f530u: goto label_18f530;
        case 0x18f534u: goto label_18f534;
        case 0x18f538u: goto label_18f538;
        case 0x18f53cu: goto label_18f53c;
        case 0x18f540u: goto label_18f540;
        case 0x18f544u: goto label_18f544;
        case 0x18f548u: goto label_18f548;
        case 0x18f54cu: goto label_18f54c;
        case 0x18f550u: goto label_18f550;
        case 0x18f554u: goto label_18f554;
        case 0x18f558u: goto label_18f558;
        case 0x18f55cu: goto label_18f55c;
        case 0x18f560u: goto label_18f560;
        case 0x18f564u: goto label_18f564;
        case 0x18f568u: goto label_18f568;
        case 0x18f56cu: goto label_18f56c;
        case 0x18f570u: goto label_18f570;
        case 0x18f574u: goto label_18f574;
        case 0x18f578u: goto label_18f578;
        case 0x18f57cu: goto label_18f57c;
        case 0x18f580u: goto label_18f580;
        case 0x18f584u: goto label_18f584;
        case 0x18f588u: goto label_18f588;
        case 0x18f58cu: goto label_18f58c;
        case 0x18f590u: goto label_18f590;
        case 0x18f594u: goto label_18f594;
        case 0x18f598u: goto label_18f598;
        case 0x18f59cu: goto label_18f59c;
        case 0x18f5a0u: goto label_18f5a0;
        case 0x18f5a4u: goto label_18f5a4;
        case 0x18f5a8u: goto label_18f5a8;
        case 0x18f5acu: goto label_18f5ac;
        case 0x18f5b0u: goto label_18f5b0;
        case 0x18f5b4u: goto label_18f5b4;
        case 0x18f5b8u: goto label_18f5b8;
        case 0x18f5bcu: goto label_18f5bc;
        case 0x18f5c0u: goto label_18f5c0;
        case 0x18f5c4u: goto label_18f5c4;
        case 0x18f5c8u: goto label_18f5c8;
        case 0x18f5ccu: goto label_18f5cc;
        default: break;
    }

    ctx->pc = 0x18f488u;

label_18f488:
    // 0x18f488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18f488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18f48c:
    // 0x18f48c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18f490:
    // 0x18f490: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18f494:
    // 0x18f494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18f498:
    // 0x18f498: 0xc06ddac  jal         func_1B76B0
label_18f49c:
    if (ctx->pc == 0x18F49Cu) {
        ctx->pc = 0x18F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F498u;
        // 0x18f49c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4A0u;
        goto label_18f4a0;
    }
    ctx->pc = 0x18F498u;
    SET_GPR_U32(ctx, 31, 0x18F4A0u);
    ctx->pc = 0x18F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F498u;
    // 0x18f49c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x18F498u, 0x18F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4A0u;
label_18f4a0:
    // 0x18f4a0: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_18f4a4:
    if (ctx->pc == 0x18F4A4u) {
        ctx->pc = 0x18F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4A0u;
        // 0x18f4a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4A8u;
        goto label_18f4a8;
    }
    ctx->pc = 0x18F4A0u;
    {
        const bool branch_taken_0x18f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f4a0) {
            ctx->pc = 0x18F4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F4A0u;
            // 0x18f4a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F5C0u;
            goto label_18f5c0;
        }
    }
    ctx->pc = 0x18F4A8u;
label_18f4a8:
    // 0x18f4a8: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x18f4a8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_18f4ac:
    // 0x18f4ac: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x18f4acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_18f4b0:
    // 0x18f4b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18f4b4:
    // 0x18f4b4: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_18f4b8:
    if (ctx->pc == 0x18F4B8u) {
        ctx->pc = 0x18F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4B4u;
        // 0x18f4b8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4BCu;
        goto label_18f4bc;
    }
    ctx->pc = 0x18F4B4u;
    {
        const bool branch_taken_0x18f4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4B4u;
        // 0x18f4b8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4b4) {
            ctx->pc = 0x18F5B4u;
            goto label_18f5b4;
        }
    }
    ctx->pc = 0x18F4BCu;
label_18f4bc:
    // 0x18f4bc: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18f4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18f4c0:
    // 0x18f4c0: 0x24473e10  addiu       $a3, $v0, 0x3E10
    ctx->pc = 0x18f4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15888));
label_18f4c4:
    // 0x18f4c4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x18f4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18f4c8:
    // 0x18f4c8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18f4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18f4cc:
    // 0x18f4cc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x18f4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18f4d0:
    // 0x18f4d0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18f4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_18f4d4:
    // 0x18f4d4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x18f4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18f4d8:
    // 0x18f4d8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18f4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18f4dc:
    // 0x18f4dc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x18f4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f4e0:
    // 0x18f4e0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18f4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f4e4:
    // 0x18f4e4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x18f4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f4e8:
    // 0x18f4e8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18f4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f4ec:
    // 0x18f4ec: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x18f4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f4f0:
    // 0x18f4f0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18f4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f4f4:
    // 0x18f4f4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x18f4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18f4f8:
    // 0x18f4f8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18f4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18f4fc:
    // 0x18f4fc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x18f4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f500:
    // 0x18f500: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18f500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f504:
    // 0x18f504: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18f504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18f508:
    // 0x18f508: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_18f50c:
    // 0x18f50c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x18f50cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18f510:
    // 0x18f510: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18f510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18f514:
    // 0x18f514: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x18f514u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18f518:
    // 0x18f518: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_18f51c:
    if (ctx->pc == 0x18F51Cu) {
        ctx->pc = 0x18F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F518u;
        // 0x18f51c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F520u;
        goto label_18f520;
    }
    ctx->pc = 0x18F518u;
    {
        const bool branch_taken_0x18f518 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F518u;
        // 0x18f51c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f518) {
            ctx->pc = 0x18F54Cu;
            goto label_18f54c;
        }
    }
    ctx->pc = 0x18F520u;
label_18f520:
    // 0x18f520: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18f520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18f524:
    // 0x18f524: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18f524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18f528:
    // 0x18f528: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18f52c:
    // 0x18f52c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18f52cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18f530:
    // 0x18f530: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18f534:
    // 0x18f534: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18f538:
    // 0x18f538: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18f53c:
    // 0x18f53c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x18f53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18f540:
    // 0x18f540: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18f540u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18f544:
    // 0x18f544: 0x10000004  b           . + 4 + (0x4 << 2)
label_18f548:
    if (ctx->pc == 0x18F548u) {
        ctx->pc = 0x18F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F544u;
        // 0x18f548: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F54Cu;
        goto label_18f54c;
    }
    ctx->pc = 0x18F544u;
    {
        const bool branch_taken_0x18f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F544u;
        // 0x18f548: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f544) {
            ctx->pc = 0x18F558u;
            goto label_18f558;
        }
    }
    ctx->pc = 0x18F54Cu;
label_18f54c:
    // 0x18f54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18f550:
    // 0x18f550: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18f550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18f554:
    // 0x18f554: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x18f554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18f558:
    // 0x18f558: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18f558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18f55c:
    // 0x18f55c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x18f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18f560:
    // 0x18f560: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18f564:
    if (ctx->pc == 0x18F564u) {
        ctx->pc = 0x18F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F560u;
        // 0x18f564: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F568u;
        goto label_18f568;
    }
    ctx->pc = 0x18F560u;
    {
        const bool branch_taken_0x18f560 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F560u;
        // 0x18f564: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f560) {
            ctx->pc = 0x18F57Cu;
            goto label_18f57c;
        }
    }
    ctx->pc = 0x18F568u;
label_18f568:
    // 0x18f568: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x18f568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18f56c:
    // 0x18f56c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18f570:
    // 0x18f570: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18f570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18f574:
    // 0x18f574: 0x10000002  b           . + 4 + (0x2 << 2)
label_18f578:
    if (ctx->pc == 0x18F578u) {
        ctx->pc = 0x18F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F574u;
        // 0x18f578: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F57Cu;
        goto label_18f57c;
    }
    ctx->pc = 0x18F574u;
    {
        const bool branch_taken_0x18f574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F574u;
        // 0x18f578: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f574) {
            ctx->pc = 0x18F580u;
            goto label_18f580;
        }
    }
    ctx->pc = 0x18F57Cu;
label_18f57c:
    // 0x18f57c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18f57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18f580:
    // 0x18f580: 0xc0f809  jalr        $a2
label_18f584:
    if (ctx->pc == 0x18F584u) {
        ctx->pc = 0x18F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F580u;
        // 0x18f584: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F588u;
        goto label_18f588;
    }
    ctx->pc = 0x18F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18F588u);
        ctx->pc = 0x18F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F580u;
        // 0x18f584: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F580u, 0x18F588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F588u;
label_18f588:
    // 0x18f588: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x18f588u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_18f58c:
    // 0x18f58c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x18f58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_18f590:
    // 0x18f590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18f594:
    // 0x18f594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18f598:
    if (ctx->pc == 0x18F598u) {
        ctx->pc = 0x18F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F594u;
        // 0x18f598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F59Cu;
        goto label_18f59c;
    }
    ctx->pc = 0x18F594u;
    {
        const bool branch_taken_0x18f594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F594u;
        // 0x18f598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f594) {
            ctx->pc = 0x18F5A4u;
            goto label_18f5a4;
        }
    }
    ctx->pc = 0x18F59Cu;
label_18f59c:
    // 0x18f59c: 0xc0aa1fa  jal         func_2A87E8
label_18f5a0:
    if (ctx->pc == 0x18F5A0u) {
        ctx->pc = 0x18F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F59Cu;
        // 0x18f5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5A4u;
        goto label_18f5a4;
    }
    ctx->pc = 0x18F59Cu;
    SET_GPR_U32(ctx, 31, 0x18F5A4u);
    ctx->pc = 0x18F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F59Cu;
    // 0x18f5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18F59Cu, 0x18F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5A4u;
label_18f5a4:
    // 0x18f5a4: 0xc06ddb6  jal         func_1B76D8
label_18f5a8:
    if (ctx->pc == 0x18F5A8u) {
        ctx->pc = 0x18F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5A4u;
        // 0x18f5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5ACu;
        goto label_18f5ac;
    }
    ctx->pc = 0x18F5A4u;
    SET_GPR_U32(ctx, 31, 0x18F5ACu);
    ctx->pc = 0x18F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5A4u;
    // 0x18f5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x18F5A4u, 0x18F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5ACu;
label_18f5ac:
    // 0x18f5ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_18f5b0:
    if (ctx->pc == 0x18F5B0u) {
        ctx->pc = 0x18F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5ACu;
        // 0x18f5b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5B4u;
        goto label_18f5b4;
    }
    ctx->pc = 0x18F5ACu;
    {
        const bool branch_taken_0x18f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5ACu;
        // 0x18f5b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5ac) {
            ctx->pc = 0x18F5C0u;
            goto label_18f5c0;
        }
    }
    ctx->pc = 0x18F5B4u;
label_18f5b4:
    // 0x18f5b4: 0xc071f8c  jal         func_1C7E30
label_18f5b8:
    if (ctx->pc == 0x18F5B8u) {
        ctx->pc = 0x18F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5B4u;
        // 0x18f5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5BCu;
        goto label_18f5bc;
    }
    ctx->pc = 0x18F5B4u;
    SET_GPR_U32(ctx, 31, 0x18F5BCu);
    ctx->pc = 0x18F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5B4u;
    // 0x18f5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x18F5B4u, 0x18F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5BCu;
label_18f5bc:
    // 0x18f5bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18f5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f5c0:
    // 0x18f5c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18f5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f5c4:
    // 0x18f5c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18f5c8:
    // 0x18f5c8: 0x3e00008  jr          $ra
label_18f5cc:
    if (ctx->pc == 0x18F5CCu) {
        ctx->pc = 0x18F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5C8u;
        // 0x18f5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5D0u;
        goto label_fallthrough_0x18f5c8;
    }
    ctx->pc = 0x18F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5C8u;
        // 0x18f5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f5c8:
    ctx->pc = 0x18F5D0u;
}
