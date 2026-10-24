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

// Function: func_0019F378
// Address: 0x19f378 - 0x19f4b0
void func_0019F378_0x19f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019F378_0x19f378");
#endif

    switch (ctx->pc) {
        case 0x19f378u: goto label_19f378;
        case 0x19f37cu: goto label_19f37c;
        case 0x19f380u: goto label_19f380;
        case 0x19f384u: goto label_19f384;
        case 0x19f388u: goto label_19f388;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f390u: goto label_19f390;
        case 0x19f394u: goto label_19f394;
        case 0x19f398u: goto label_19f398;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3a4u: goto label_19f3a4;
        case 0x19f3a8u: goto label_19f3a8;
        case 0x19f3acu: goto label_19f3ac;
        case 0x19f3b0u: goto label_19f3b0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c0u: goto label_19f3c0;
        case 0x19f3c4u: goto label_19f3c4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3ccu: goto label_19f3cc;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3d4u: goto label_19f3d4;
        case 0x19f3d8u: goto label_19f3d8;
        case 0x19f3dcu: goto label_19f3dc;
        case 0x19f3e0u: goto label_19f3e0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3e8u: goto label_19f3e8;
        case 0x19f3ecu: goto label_19f3ec;
        case 0x19f3f0u: goto label_19f3f0;
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f3f8u: goto label_19f3f8;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f400u: goto label_19f400;
        case 0x19f404u: goto label_19f404;
        case 0x19f408u: goto label_19f408;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f410u: goto label_19f410;
        case 0x19f414u: goto label_19f414;
        case 0x19f418u: goto label_19f418;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f420u: goto label_19f420;
        case 0x19f424u: goto label_19f424;
        case 0x19f428u: goto label_19f428;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f430u: goto label_19f430;
        case 0x19f434u: goto label_19f434;
        case 0x19f438u: goto label_19f438;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f440u: goto label_19f440;
        case 0x19f444u: goto label_19f444;
        case 0x19f448u: goto label_19f448;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f450u: goto label_19f450;
        case 0x19f454u: goto label_19f454;
        case 0x19f458u: goto label_19f458;
        case 0x19f45cu: goto label_19f45c;
        case 0x19f460u: goto label_19f460;
        case 0x19f464u: goto label_19f464;
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        case 0x19f498u: goto label_19f498;
        case 0x19f49cu: goto label_19f49c;
        case 0x19f4a0u: goto label_19f4a0;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4a8u: goto label_19f4a8;
        case 0x19f4acu: goto label_19f4ac;
        default: break;
    }

    ctx->pc = 0x19f378u;

label_19f378:
    // 0x19f378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f37c:
    // 0x19f37c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19f380:
    // 0x19f380: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19f384:
    // 0x19f384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19f388:
    // 0x19f388: 0xc06ddac  jal         func_1B76B0
label_19f38c:
    if (ctx->pc == 0x19F38Cu) {
        ctx->pc = 0x19F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F388u;
        // 0x19f38c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F390u;
        goto label_19f390;
    }
    ctx->pc = 0x19F388u;
    SET_GPR_U32(ctx, 31, 0x19F390u);
    ctx->pc = 0x19F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F388u;
    // 0x19f38c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x19F388u, 0x19F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F390u;
label_19f390:
    // 0x19f390: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_19f394:
    if (ctx->pc == 0x19F394u) {
        ctx->pc = 0x19F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F390u;
        // 0x19f394: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F398u;
        goto label_19f398;
    }
    ctx->pc = 0x19F390u;
    {
        const bool branch_taken_0x19f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f390) {
            ctx->pc = 0x19F394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F390u;
            // 0x19f394: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F4A0u;
            goto label_19f4a0;
        }
    }
    ctx->pc = 0x19F398u;
label_19f398:
    // 0x19f398: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x19f398u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_19f39c:
    // 0x19f39c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x19f39cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_19f3a0:
    // 0x19f3a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19f3a4:
    // 0x19f3a4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_19f3a8:
    if (ctx->pc == 0x19F3A8u) {
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3ACu;
        goto label_19f3ac;
    }
    ctx->pc = 0x19F3A4u;
    {
        const bool branch_taken_0x19f3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a4) {
            ctx->pc = 0x19F494u;
            goto label_19f494;
        }
    }
    ctx->pc = 0x19F3ACu;
label_19f3ac:
    // 0x19f3ac: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x19f3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_19f3b0:
    // 0x19f3b0: 0x244767d8  addiu       $a3, $v0, 0x67D8
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 26584));
label_19f3b4:
    // 0x19f3b4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x19f3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19f3b8:
    // 0x19f3b8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x19f3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19f3bc:
    // 0x19f3bc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19f3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19f3c0:
    // 0x19f3c0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x19f3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19f3c4:
    // 0x19f3c4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x19f3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19f3c8:
    // 0x19f3c8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x19f3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19f3cc:
    // 0x19f3cc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x19f3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3d0:
    // 0x19f3d0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x19f3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3d4:
    // 0x19f3d4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x19f3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3d8:
    // 0x19f3d8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x19f3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3dc:
    // 0x19f3dc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x19f3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3e0:
    // 0x19f3e0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x19f3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3e4:
    // 0x19f3e4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x19f3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19f3e8:
    // 0x19f3e8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x19f3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19f3ec:
    // 0x19f3ec: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x19f3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3f0:
    // 0x19f3f0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x19f3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19f3f4:
    // 0x19f3f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19f3f8:
    // 0x19f3f8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x19f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_19f3fc:
    // 0x19f3fc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x19f3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_19f400:
    // 0x19f400: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19f404:
    // 0x19f404: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_19f408:
    // 0x19f408: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_19f40c:
    if (ctx->pc == 0x19F40Cu) {
        ctx->pc = 0x19F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F408u;
        // 0x19f40c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F410u;
        goto label_19f410;
    }
    ctx->pc = 0x19F408u;
    {
        const bool branch_taken_0x19f408 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F408u;
        // 0x19f40c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f408) {
            ctx->pc = 0x19F43Cu;
            goto label_19f43c;
        }
    }
    ctx->pc = 0x19F410u;
label_19f410:
    // 0x19f410: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x19f410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_19f414:
    // 0x19f414: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19f418:
    // 0x19f418: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19f41c:
    // 0x19f41c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19f41cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19f420:
    // 0x19f420: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19f424:
    // 0x19f424: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f428:
    // 0x19f428: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19f428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19f42c:
    // 0x19f42c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x19f42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_19f430:
    // 0x19f430: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x19f430u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_19f434:
    // 0x19f434: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f438:
    if (ctx->pc == 0x19F438u) {
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F43Cu;
        goto label_19f43c;
    }
    ctx->pc = 0x19F434u;
    {
        const bool branch_taken_0x19f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f434) {
            ctx->pc = 0x19F448u;
            goto label_19f448;
        }
    }
    ctx->pc = 0x19F43Cu;
label_19f43c:
    // 0x19f43c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19f440:
    // 0x19f440: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19f440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f444:
    // 0x19f444: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x19f444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_19f448:
    // 0x19f448: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19f44c:
    // 0x19f44c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19f450:
    // 0x19f450: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_19f454:
    if (ctx->pc == 0x19F454u) {
        ctx->pc = 0x19F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F450u;
        // 0x19f454: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F458u;
        goto label_19f458;
    }
    ctx->pc = 0x19F450u;
    {
        const bool branch_taken_0x19f450 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F450u;
        // 0x19f454: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f450) {
            ctx->pc = 0x19F46Cu;
            goto label_19f46c;
        }
    }
    ctx->pc = 0x19F458u;
label_19f458:
    // 0x19f458: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x19f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_19f45c:
    // 0x19f45c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19f460:
    // 0x19f460: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19f460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19f464:
    // 0x19f464: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f468:
    if (ctx->pc == 0x19F468u) {
        ctx->pc = 0x19F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F464u;
        // 0x19f468: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F46Cu;
        goto label_19f46c;
    }
    ctx->pc = 0x19F464u;
    {
        const bool branch_taken_0x19f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F464u;
        // 0x19f468: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f464) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F46Cu;
label_19f46c:
    // 0x19f46c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19f46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19f470:
    // 0x19f470: 0xc0f809  jalr        $a2
label_19f474:
    if (ctx->pc == 0x19F474u) {
        ctx->pc = 0x19F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F470u;
        // 0x19f474: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F478u;
        goto label_19f478;
    }
    ctx->pc = 0x19F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19F478u);
        ctx->pc = 0x19F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F470u;
        // 0x19f474: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F470u, 0x19F478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F478u;
label_19f478:
    // 0x19f478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f47c:
    // 0x19f47c: 0xc0aa1fa  jal         func_2A87E8
label_19f480:
    if (ctx->pc == 0x19F480u) {
        ctx->pc = 0x19F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F47Cu;
        // 0x19f480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F484u;
        goto label_19f484;
    }
    ctx->pc = 0x19F47Cu;
    SET_GPR_U32(ctx, 31, 0x19F484u);
    ctx->pc = 0x19F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F47Cu;
    // 0x19f480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x19F47Cu, 0x19F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F484u;
label_19f484:
    // 0x19f484: 0xc06ddb6  jal         func_1B76D8
label_19f488:
    if (ctx->pc == 0x19F488u) {
        ctx->pc = 0x19F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F484u;
        // 0x19f488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F48Cu;
        goto label_19f48c;
    }
    ctx->pc = 0x19F484u;
    SET_GPR_U32(ctx, 31, 0x19F48Cu);
    ctx->pc = 0x19F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F484u;
    // 0x19f488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x19F484u, 0x19F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F48Cu;
label_19f48c:
    // 0x19f48c: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f490:
    if (ctx->pc == 0x19F490u) {
        ctx->pc = 0x19F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F48Cu;
        // 0x19f490: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F494u;
        goto label_19f494;
    }
    ctx->pc = 0x19F48Cu;
    {
        const bool branch_taken_0x19f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F48Cu;
        // 0x19f490: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f48c) {
            ctx->pc = 0x19F4A0u;
            goto label_19f4a0;
        }
    }
    ctx->pc = 0x19F494u;
label_19f494:
    // 0x19f494: 0xc071f8c  jal         func_1C7E30
label_19f498:
    if (ctx->pc == 0x19F498u) {
        ctx->pc = 0x19F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F494u;
        // 0x19f498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F49Cu;
        goto label_19f49c;
    }
    ctx->pc = 0x19F494u;
    SET_GPR_U32(ctx, 31, 0x19F49Cu);
    ctx->pc = 0x19F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F494u;
    // 0x19f498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x19F494u, 0x19F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F49Cu;
label_19f49c:
    // 0x19f49c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19f49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19f4a0:
    // 0x19f4a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19f4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19f4a4:
    // 0x19f4a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f4a8:
    // 0x19f4a8: 0x3e00008  jr          $ra
label_19f4ac:
    if (ctx->pc == 0x19F4ACu) {
        ctx->pc = 0x19F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A8u;
        // 0x19f4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4B0u;
        goto label_fallthrough_0x19f4a8;
    }
    ctx->pc = 0x19F4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A8u;
        // 0x19f4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f4a8:
    ctx->pc = 0x19F4B0u;
}
