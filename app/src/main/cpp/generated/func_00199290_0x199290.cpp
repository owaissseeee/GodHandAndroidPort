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

// Function: func_00199290
// Address: 0x199290 - 0x1993c8
void func_00199290_0x199290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00199290_0x199290");
#endif

    switch (ctx->pc) {
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        case 0x1992f8u: goto label_1992f8;
        case 0x1992fcu: goto label_1992fc;
        case 0x199300u: goto label_199300;
        case 0x199304u: goto label_199304;
        case 0x199308u: goto label_199308;
        case 0x19930cu: goto label_19930c;
        case 0x199310u: goto label_199310;
        case 0x199314u: goto label_199314;
        case 0x199318u: goto label_199318;
        case 0x19931cu: goto label_19931c;
        case 0x199320u: goto label_199320;
        case 0x199324u: goto label_199324;
        case 0x199328u: goto label_199328;
        case 0x19932cu: goto label_19932c;
        case 0x199330u: goto label_199330;
        case 0x199334u: goto label_199334;
        case 0x199338u: goto label_199338;
        case 0x19933cu: goto label_19933c;
        case 0x199340u: goto label_199340;
        case 0x199344u: goto label_199344;
        case 0x199348u: goto label_199348;
        case 0x19934cu: goto label_19934c;
        case 0x199350u: goto label_199350;
        case 0x199354u: goto label_199354;
        case 0x199358u: goto label_199358;
        case 0x19935cu: goto label_19935c;
        case 0x199360u: goto label_199360;
        case 0x199364u: goto label_199364;
        case 0x199368u: goto label_199368;
        case 0x19936cu: goto label_19936c;
        case 0x199370u: goto label_199370;
        case 0x199374u: goto label_199374;
        case 0x199378u: goto label_199378;
        case 0x19937cu: goto label_19937c;
        case 0x199380u: goto label_199380;
        case 0x199384u: goto label_199384;
        case 0x199388u: goto label_199388;
        case 0x19938cu: goto label_19938c;
        case 0x199390u: goto label_199390;
        case 0x199394u: goto label_199394;
        case 0x199398u: goto label_199398;
        case 0x19939cu: goto label_19939c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993a4u: goto label_1993a4;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993acu: goto label_1993ac;
        case 0x1993b0u: goto label_1993b0;
        case 0x1993b4u: goto label_1993b4;
        case 0x1993b8u: goto label_1993b8;
        case 0x1993bcu: goto label_1993bc;
        case 0x1993c0u: goto label_1993c0;
        case 0x1993c4u: goto label_1993c4;
        default: break;
    }

    ctx->pc = 0x199290u;

label_199290:
    // 0x199290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_199294:
    // 0x199294: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x199294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_199298:
    // 0x199298: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x199298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19929c:
    // 0x19929c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1992a0:
    // 0x1992a0: 0xc06ddac  jal         func_1B76B0
label_1992a4:
    if (ctx->pc == 0x1992A4u) {
        ctx->pc = 0x1992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992A0u;
        // 0x1992a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992A8u;
        goto label_1992a8;
    }
    ctx->pc = 0x1992A0u;
    SET_GPR_U32(ctx, 31, 0x1992A8u);
    ctx->pc = 0x1992A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992A0u;
    // 0x1992a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1992A0u, 0x1992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992A8u;
label_1992a8:
    // 0x1992a8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_1992ac:
    if (ctx->pc == 0x1992ACu) {
        ctx->pc = 0x1992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992A8u;
        // 0x1992ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992B0u;
        goto label_1992b0;
    }
    ctx->pc = 0x1992A8u;
    {
        const bool branch_taken_0x1992a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1992a8) {
            ctx->pc = 0x1992ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1992A8u;
            // 0x1992ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x1992B0u;
label_1992b0:
    // 0x1992b0: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1992b0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1992b4:
    // 0x1992b4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1992b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_1992b8:
    // 0x1992b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1992b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1992bc:
    // 0x1992bc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1992c0:
    if (ctx->pc == 0x1992C0u) {
        ctx->pc = 0x1992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992BCu;
        // 0x1992c0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992C4u;
        goto label_1992c4;
    }
    ctx->pc = 0x1992BCu;
    {
        const bool branch_taken_0x1992bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992BCu;
        // 0x1992c0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992bc) {
            ctx->pc = 0x1993ACu;
            goto label_1993ac;
        }
    }
    ctx->pc = 0x1992C4u;
label_1992c4:
    // 0x1992c4: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1992c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1992c8:
    // 0x1992c8: 0x244750d0  addiu       $a3, $v0, 0x50D0
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20688));
label_1992cc:
    // 0x1992cc: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1992ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1992d0:
    // 0x1992d0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1992d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1992d4:
    // 0x1992d4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1992d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1992d8:
    // 0x1992d8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1992d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1992dc:
    // 0x1992dc: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1992dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1992e0:
    // 0x1992e0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1992e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1992e4:
    // 0x1992e4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1992e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992e8:
    // 0x1992e8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1992e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992ec:
    // 0x1992ec: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1992ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992f0:
    // 0x1992f0: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1992f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992f4:
    // 0x1992f4: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1992f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992f8:
    // 0x1992f8: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1992f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1992fc:
    // 0x1992fc: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1992fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_199300:
    // 0x199300: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x199300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_199304:
    // 0x199304: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x199304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199308:
    // 0x199308: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x199308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19930c:
    // 0x19930c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19930cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_199310:
    // 0x199310: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_199314:
    // 0x199314: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x199314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_199318:
    // 0x199318: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19931c:
    // 0x19931c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x19931cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_199320:
    // 0x199320: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_199324:
    if (ctx->pc == 0x199324u) {
        ctx->pc = 0x199324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199320u;
        // 0x199324: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199328u;
        goto label_199328;
    }
    ctx->pc = 0x199320u;
    {
        const bool branch_taken_0x199320 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x199324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199320u;
        // 0x199324: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199320) {
            ctx->pc = 0x199354u;
            goto label_199354;
        }
    }
    ctx->pc = 0x199328u;
label_199328:
    // 0x199328: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x199328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_19932c:
    // 0x19932c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_199330:
    // 0x199330: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_199334:
    // 0x199334: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x199334u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_199338:
    // 0x199338: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19933c:
    // 0x19933c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199340:
    // 0x199340: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x199340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_199344:
    // 0x199344: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x199344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_199348:
    // 0x199348: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x199348u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_19934c:
    // 0x19934c: 0x10000004  b           . + 4 + (0x4 << 2)
label_199350:
    if (ctx->pc == 0x199350u) {
        ctx->pc = 0x199350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19934Cu;
        // 0x199350: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199354u;
        goto label_199354;
    }
    ctx->pc = 0x19934Cu;
    {
        const bool branch_taken_0x19934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19934Cu;
        // 0x199350: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19934c) {
            ctx->pc = 0x199360u;
            goto label_199360;
        }
    }
    ctx->pc = 0x199354u;
label_199354:
    // 0x199354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_199358:
    // 0x199358: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x199358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19935c:
    // 0x19935c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x19935cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_199360:
    // 0x199360: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_199364:
    // 0x199364: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x199364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_199368:
    // 0x199368: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_19936c:
    if (ctx->pc == 0x19936Cu) {
        ctx->pc = 0x19936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199368u;
        // 0x19936c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199370u;
        goto label_199370;
    }
    ctx->pc = 0x199368u;
    {
        const bool branch_taken_0x199368 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199368u;
        // 0x19936c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199368) {
            ctx->pc = 0x199384u;
            goto label_199384;
        }
    }
    ctx->pc = 0x199370u;
label_199370:
    // 0x199370: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x199370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_199374:
    // 0x199374: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_199378:
    // 0x199378: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19937c:
    // 0x19937c: 0x10000002  b           . + 4 + (0x2 << 2)
label_199380:
    if (ctx->pc == 0x199380u) {
        ctx->pc = 0x199380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19937Cu;
        // 0x199380: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199384u;
        goto label_199384;
    }
    ctx->pc = 0x19937Cu;
    {
        const bool branch_taken_0x19937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19937Cu;
        // 0x199380: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19937c) {
            ctx->pc = 0x199388u;
            goto label_199388;
        }
    }
    ctx->pc = 0x199384u;
label_199384:
    // 0x199384: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x199384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_199388:
    // 0x199388: 0xc0f809  jalr        $a2
label_19938c:
    if (ctx->pc == 0x19938Cu) {
        ctx->pc = 0x19938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199388u;
        // 0x19938c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199390u;
        goto label_199390;
    }
    ctx->pc = 0x199388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x199390u);
        ctx->pc = 0x19938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199388u;
        // 0x19938c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199388u, 0x199390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199390u;
label_199390:
    // 0x199390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199394:
    // 0x199394: 0xc0aa1fa  jal         func_2A87E8
label_199398:
    if (ctx->pc == 0x199398u) {
        ctx->pc = 0x199398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199394u;
        // 0x199398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19939Cu;
        goto label_19939c;
    }
    ctx->pc = 0x199394u;
    SET_GPR_U32(ctx, 31, 0x19939Cu);
    ctx->pc = 0x199398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199394u;
    // 0x199398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x199394u, 0x19939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19939Cu;
label_19939c:
    // 0x19939c: 0xc06ddb6  jal         func_1B76D8
label_1993a0:
    if (ctx->pc == 0x1993A0u) {
        ctx->pc = 0x1993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19939Cu;
        // 0x1993a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993A4u;
        goto label_1993a4;
    }
    ctx->pc = 0x19939Cu;
    SET_GPR_U32(ctx, 31, 0x1993A4u);
    ctx->pc = 0x1993A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19939Cu;
    // 0x1993a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x19939Cu, 0x1993A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993A4u;
label_1993a4:
    // 0x1993a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1993a8:
    if (ctx->pc == 0x1993A8u) {
        ctx->pc = 0x1993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993A4u;
        // 0x1993a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993ACu;
        goto label_1993ac;
    }
    ctx->pc = 0x1993A4u;
    {
        const bool branch_taken_0x1993a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993A4u;
        // 0x1993a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993a4) {
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x1993ACu;
label_1993ac:
    // 0x1993ac: 0xc071f8c  jal         func_1C7E30
label_1993b0:
    if (ctx->pc == 0x1993B0u) {
        ctx->pc = 0x1993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993ACu;
        // 0x1993b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993B4u;
        goto label_1993b4;
    }
    ctx->pc = 0x1993ACu;
    SET_GPR_U32(ctx, 31, 0x1993B4u);
    ctx->pc = 0x1993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993ACu;
    // 0x1993b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x1993ACu, 0x1993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993B4u;
label_1993b4:
    // 0x1993b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1993b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1993b8:
    // 0x1993b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1993b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1993bc:
    // 0x1993bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1993bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1993c0:
    // 0x1993c0: 0x3e00008  jr          $ra
label_1993c4:
    if (ctx->pc == 0x1993C4u) {
        ctx->pc = 0x1993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993C0u;
        // 0x1993c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993C8u;
        goto label_fallthrough_0x1993c0;
    }
    ctx->pc = 0x1993C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993C0u;
        // 0x1993c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1993C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1993c0:
    ctx->pc = 0x1993C8u;
}
