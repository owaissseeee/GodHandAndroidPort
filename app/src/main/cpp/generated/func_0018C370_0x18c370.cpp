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

// Function: func_0018C370
// Address: 0x18c370 - 0x18c4a8
void func_0018C370_0x18c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C370_0x18c370");
#endif

    switch (ctx->pc) {
        case 0x18c370u: goto label_18c370;
        case 0x18c374u: goto label_18c374;
        case 0x18c378u: goto label_18c378;
        case 0x18c37cu: goto label_18c37c;
        case 0x18c380u: goto label_18c380;
        case 0x18c384u: goto label_18c384;
        case 0x18c388u: goto label_18c388;
        case 0x18c38cu: goto label_18c38c;
        case 0x18c390u: goto label_18c390;
        case 0x18c394u: goto label_18c394;
        case 0x18c398u: goto label_18c398;
        case 0x18c39cu: goto label_18c39c;
        case 0x18c3a0u: goto label_18c3a0;
        case 0x18c3a4u: goto label_18c3a4;
        case 0x18c3a8u: goto label_18c3a8;
        case 0x18c3acu: goto label_18c3ac;
        case 0x18c3b0u: goto label_18c3b0;
        case 0x18c3b4u: goto label_18c3b4;
        case 0x18c3b8u: goto label_18c3b8;
        case 0x18c3bcu: goto label_18c3bc;
        case 0x18c3c0u: goto label_18c3c0;
        case 0x18c3c4u: goto label_18c3c4;
        case 0x18c3c8u: goto label_18c3c8;
        case 0x18c3ccu: goto label_18c3cc;
        case 0x18c3d0u: goto label_18c3d0;
        case 0x18c3d4u: goto label_18c3d4;
        case 0x18c3d8u: goto label_18c3d8;
        case 0x18c3dcu: goto label_18c3dc;
        case 0x18c3e0u: goto label_18c3e0;
        case 0x18c3e4u: goto label_18c3e4;
        case 0x18c3e8u: goto label_18c3e8;
        case 0x18c3ecu: goto label_18c3ec;
        case 0x18c3f0u: goto label_18c3f0;
        case 0x18c3f4u: goto label_18c3f4;
        case 0x18c3f8u: goto label_18c3f8;
        case 0x18c3fcu: goto label_18c3fc;
        case 0x18c400u: goto label_18c400;
        case 0x18c404u: goto label_18c404;
        case 0x18c408u: goto label_18c408;
        case 0x18c40cu: goto label_18c40c;
        case 0x18c410u: goto label_18c410;
        case 0x18c414u: goto label_18c414;
        case 0x18c418u: goto label_18c418;
        case 0x18c41cu: goto label_18c41c;
        case 0x18c420u: goto label_18c420;
        case 0x18c424u: goto label_18c424;
        case 0x18c428u: goto label_18c428;
        case 0x18c42cu: goto label_18c42c;
        case 0x18c430u: goto label_18c430;
        case 0x18c434u: goto label_18c434;
        case 0x18c438u: goto label_18c438;
        case 0x18c43cu: goto label_18c43c;
        case 0x18c440u: goto label_18c440;
        case 0x18c444u: goto label_18c444;
        case 0x18c448u: goto label_18c448;
        case 0x18c44cu: goto label_18c44c;
        case 0x18c450u: goto label_18c450;
        case 0x18c454u: goto label_18c454;
        case 0x18c458u: goto label_18c458;
        case 0x18c45cu: goto label_18c45c;
        case 0x18c460u: goto label_18c460;
        case 0x18c464u: goto label_18c464;
        case 0x18c468u: goto label_18c468;
        case 0x18c46cu: goto label_18c46c;
        case 0x18c470u: goto label_18c470;
        case 0x18c474u: goto label_18c474;
        case 0x18c478u: goto label_18c478;
        case 0x18c47cu: goto label_18c47c;
        case 0x18c480u: goto label_18c480;
        case 0x18c484u: goto label_18c484;
        case 0x18c488u: goto label_18c488;
        case 0x18c48cu: goto label_18c48c;
        case 0x18c490u: goto label_18c490;
        case 0x18c494u: goto label_18c494;
        case 0x18c498u: goto label_18c498;
        case 0x18c49cu: goto label_18c49c;
        case 0x18c4a0u: goto label_18c4a0;
        case 0x18c4a4u: goto label_18c4a4;
        default: break;
    }

    ctx->pc = 0x18c370u;

label_18c370:
    // 0x18c370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18c374:
    // 0x18c374: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18c374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18c378:
    // 0x18c378: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18c378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18c37c:
    // 0x18c37c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18c380:
    // 0x18c380: 0xc06ddac  jal         func_1B76B0
label_18c384:
    if (ctx->pc == 0x18C384u) {
        ctx->pc = 0x18C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C380u;
        // 0x18c384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C388u;
        goto label_18c388;
    }
    ctx->pc = 0x18C380u;
    SET_GPR_U32(ctx, 31, 0x18C388u);
    ctx->pc = 0x18C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C380u;
    // 0x18c384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x18C380u, 0x18C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C388u;
label_18c388:
    // 0x18c388: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_18c38c:
    if (ctx->pc == 0x18C38Cu) {
        ctx->pc = 0x18C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C388u;
        // 0x18c38c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C390u;
        goto label_18c390;
    }
    ctx->pc = 0x18C388u;
    {
        const bool branch_taken_0x18c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c388) {
            ctx->pc = 0x18C38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C388u;
            // 0x18c38c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C498u;
            goto label_18c498;
        }
    }
    ctx->pc = 0x18C390u;
label_18c390:
    // 0x18c390: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x18c390u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_18c394:
    // 0x18c394: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x18c394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_18c398:
    // 0x18c398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c39c:
    // 0x18c39c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_18c3a0:
    if (ctx->pc == 0x18C3A0u) {
        ctx->pc = 0x18C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C39Cu;
        // 0x18c3a0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3A4u;
        goto label_18c3a4;
    }
    ctx->pc = 0x18C39Cu;
    {
        const bool branch_taken_0x18c39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C39Cu;
        // 0x18c3a0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c39c) {
            ctx->pc = 0x18C48Cu;
            goto label_18c48c;
        }
    }
    ctx->pc = 0x18C3A4u;
label_18c3a4:
    // 0x18c3a4: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18c3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18c3a8:
    // 0x18c3a8: 0x244738b8  addiu       $a3, $v0, 0x38B8
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 14520));
label_18c3ac:
    // 0x18c3ac: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x18c3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18c3b0:
    // 0x18c3b0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18c3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18c3b4:
    // 0x18c3b4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x18c3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18c3b8:
    // 0x18c3b8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18c3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_18c3bc:
    // 0x18c3bc: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x18c3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18c3c0:
    // 0x18c3c0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18c3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18c3c4:
    // 0x18c3c4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x18c3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3c8:
    // 0x18c3c8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18c3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3cc:
    // 0x18c3cc: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x18c3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3d0:
    // 0x18c3d0: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18c3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3d4:
    // 0x18c3d4: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x18c3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3d8:
    // 0x18c3d8: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18c3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3dc:
    // 0x18c3dc: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x18c3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18c3e0:
    // 0x18c3e0: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18c3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18c3e4:
    // 0x18c3e4: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x18c3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3e8:
    // 0x18c3e8: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18c3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c3ec:
    // 0x18c3ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18c3f0:
    // 0x18c3f0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_18c3f4:
    // 0x18c3f4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x18c3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18c3f8:
    // 0x18c3f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18c3fc:
    // 0x18c3fc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18c400:
    // 0x18c400: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_18c404:
    if (ctx->pc == 0x18C404u) {
        ctx->pc = 0x18C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C400u;
        // 0x18c404: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C408u;
        goto label_18c408;
    }
    ctx->pc = 0x18C400u;
    {
        const bool branch_taken_0x18c400 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C400u;
        // 0x18c404: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c400) {
            ctx->pc = 0x18C434u;
            goto label_18c434;
        }
    }
    ctx->pc = 0x18C408u;
label_18c408:
    // 0x18c408: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18c408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18c40c:
    // 0x18c40c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18c410:
    // 0x18c410: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18c410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18c414:
    // 0x18c414: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18c414u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18c418:
    // 0x18c418: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18c41c:
    // 0x18c41c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c420:
    // 0x18c420: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18c424:
    // 0x18c424: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x18c424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18c428:
    // 0x18c428: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18c428u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18c42c:
    // 0x18c42c: 0x10000004  b           . + 4 + (0x4 << 2)
label_18c430:
    if (ctx->pc == 0x18C430u) {
        ctx->pc = 0x18C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C42Cu;
        // 0x18c430: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C434u;
        goto label_18c434;
    }
    ctx->pc = 0x18C42Cu;
    {
        const bool branch_taken_0x18c42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C42Cu;
        // 0x18c430: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c42c) {
            ctx->pc = 0x18C440u;
            goto label_18c440;
        }
    }
    ctx->pc = 0x18C434u;
label_18c434:
    // 0x18c434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c438:
    // 0x18c438: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18c438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c43c:
    // 0x18c43c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x18c43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18c440:
    // 0x18c440: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18c444:
    // 0x18c444: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18c448:
    // 0x18c448: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18c44c:
    if (ctx->pc == 0x18C44Cu) {
        ctx->pc = 0x18C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C448u;
        // 0x18c44c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C450u;
        goto label_18c450;
    }
    ctx->pc = 0x18C448u;
    {
        const bool branch_taken_0x18c448 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C448u;
        // 0x18c44c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c448) {
            ctx->pc = 0x18C464u;
            goto label_18c464;
        }
    }
    ctx->pc = 0x18C450u;
label_18c450:
    // 0x18c450: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x18c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18c454:
    // 0x18c454: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18c454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18c458:
    // 0x18c458: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18c45c:
    // 0x18c45c: 0x10000002  b           . + 4 + (0x2 << 2)
label_18c460:
    if (ctx->pc == 0x18C460u) {
        ctx->pc = 0x18C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C45Cu;
        // 0x18c460: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C464u;
        goto label_18c464;
    }
    ctx->pc = 0x18C45Cu;
    {
        const bool branch_taken_0x18c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C45Cu;
        // 0x18c460: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c45c) {
            ctx->pc = 0x18C468u;
            goto label_18c468;
        }
    }
    ctx->pc = 0x18C464u;
label_18c464:
    // 0x18c464: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18c464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18c468:
    // 0x18c468: 0xc0f809  jalr        $a2
label_18c46c:
    if (ctx->pc == 0x18C46Cu) {
        ctx->pc = 0x18C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C468u;
        // 0x18c46c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C470u;
        goto label_18c470;
    }
    ctx->pc = 0x18C468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18C470u);
        ctx->pc = 0x18C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C468u;
        // 0x18c46c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C468u, 0x18C470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C470u;
label_18c470:
    // 0x18c470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c474:
    // 0x18c474: 0xc0aa1fa  jal         func_2A87E8
label_18c478:
    if (ctx->pc == 0x18C478u) {
        ctx->pc = 0x18C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C474u;
        // 0x18c478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C47Cu;
        goto label_18c47c;
    }
    ctx->pc = 0x18C474u;
    SET_GPR_U32(ctx, 31, 0x18C47Cu);
    ctx->pc = 0x18C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C474u;
    // 0x18c478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18C474u, 0x18C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C47Cu;
label_18c47c:
    // 0x18c47c: 0xc06ddb6  jal         func_1B76D8
label_18c480:
    if (ctx->pc == 0x18C480u) {
        ctx->pc = 0x18C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C47Cu;
        // 0x18c480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C484u;
        goto label_18c484;
    }
    ctx->pc = 0x18C47Cu;
    SET_GPR_U32(ctx, 31, 0x18C484u);
    ctx->pc = 0x18C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C47Cu;
    // 0x18c480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x18C47Cu, 0x18C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C484u;
label_18c484:
    // 0x18c484: 0x10000004  b           . + 4 + (0x4 << 2)
label_18c488:
    if (ctx->pc == 0x18C488u) {
        ctx->pc = 0x18C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C484u;
        // 0x18c488: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C48Cu;
        goto label_18c48c;
    }
    ctx->pc = 0x18C484u;
    {
        const bool branch_taken_0x18c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C484u;
        // 0x18c488: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c484) {
            ctx->pc = 0x18C498u;
            goto label_18c498;
        }
    }
    ctx->pc = 0x18C48Cu;
label_18c48c:
    // 0x18c48c: 0xc071f8c  jal         func_1C7E30
label_18c490:
    if (ctx->pc == 0x18C490u) {
        ctx->pc = 0x18C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C48Cu;
        // 0x18c490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C494u;
        goto label_18c494;
    }
    ctx->pc = 0x18C48Cu;
    SET_GPR_U32(ctx, 31, 0x18C494u);
    ctx->pc = 0x18C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C48Cu;
    // 0x18c490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x18C48Cu, 0x18C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C494u;
label_18c494:
    // 0x18c494: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18c494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18c498:
    // 0x18c498: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18c498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18c49c:
    // 0x18c49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c4a0:
    // 0x18c4a0: 0x3e00008  jr          $ra
label_18c4a4:
    if (ctx->pc == 0x18C4A4u) {
        ctx->pc = 0x18C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4A0u;
        // 0x18c4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4A8u;
        goto label_fallthrough_0x18c4a0;
    }
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4A0u;
        // 0x18c4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18c4a0:
    ctx->pc = 0x18C4A8u;
}
