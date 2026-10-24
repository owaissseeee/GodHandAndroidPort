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

// Function: cOmBase_tickModeTableC
// Address: 0x192458 - 0x192588
void cOmBase_tickModeTableC_0x192458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_tickModeTableC_0x192458");
#endif

    switch (ctx->pc) {
        case 0x192458u: goto label_192458;
        case 0x19245cu: goto label_19245c;
        case 0x192460u: goto label_192460;
        case 0x192464u: goto label_192464;
        case 0x192468u: goto label_192468;
        case 0x19246cu: goto label_19246c;
        case 0x192470u: goto label_192470;
        case 0x192474u: goto label_192474;
        case 0x192478u: goto label_192478;
        case 0x19247cu: goto label_19247c;
        case 0x192480u: goto label_192480;
        case 0x192484u: goto label_192484;
        case 0x192488u: goto label_192488;
        case 0x19248cu: goto label_19248c;
        case 0x192490u: goto label_192490;
        case 0x192494u: goto label_192494;
        case 0x192498u: goto label_192498;
        case 0x19249cu: goto label_19249c;
        case 0x1924a0u: goto label_1924a0;
        case 0x1924a4u: goto label_1924a4;
        case 0x1924a8u: goto label_1924a8;
        case 0x1924acu: goto label_1924ac;
        case 0x1924b0u: goto label_1924b0;
        case 0x1924b4u: goto label_1924b4;
        case 0x1924b8u: goto label_1924b8;
        case 0x1924bcu: goto label_1924bc;
        case 0x1924c0u: goto label_1924c0;
        case 0x1924c4u: goto label_1924c4;
        case 0x1924c8u: goto label_1924c8;
        case 0x1924ccu: goto label_1924cc;
        case 0x1924d0u: goto label_1924d0;
        case 0x1924d4u: goto label_1924d4;
        case 0x1924d8u: goto label_1924d8;
        case 0x1924dcu: goto label_1924dc;
        case 0x1924e0u: goto label_1924e0;
        case 0x1924e4u: goto label_1924e4;
        case 0x1924e8u: goto label_1924e8;
        case 0x1924ecu: goto label_1924ec;
        case 0x1924f0u: goto label_1924f0;
        case 0x1924f4u: goto label_1924f4;
        case 0x1924f8u: goto label_1924f8;
        case 0x1924fcu: goto label_1924fc;
        case 0x192500u: goto label_192500;
        case 0x192504u: goto label_192504;
        case 0x192508u: goto label_192508;
        case 0x19250cu: goto label_19250c;
        case 0x192510u: goto label_192510;
        case 0x192514u: goto label_192514;
        case 0x192518u: goto label_192518;
        case 0x19251cu: goto label_19251c;
        case 0x192520u: goto label_192520;
        case 0x192524u: goto label_192524;
        case 0x192528u: goto label_192528;
        case 0x19252cu: goto label_19252c;
        case 0x192530u: goto label_192530;
        case 0x192534u: goto label_192534;
        case 0x192538u: goto label_192538;
        case 0x19253cu: goto label_19253c;
        case 0x192540u: goto label_192540;
        case 0x192544u: goto label_192544;
        case 0x192548u: goto label_192548;
        case 0x19254cu: goto label_19254c;
        case 0x192550u: goto label_192550;
        case 0x192554u: goto label_192554;
        case 0x192558u: goto label_192558;
        case 0x19255cu: goto label_19255c;
        case 0x192560u: goto label_192560;
        case 0x192564u: goto label_192564;
        case 0x192568u: goto label_192568;
        case 0x19256cu: goto label_19256c;
        case 0x192570u: goto label_192570;
        case 0x192574u: goto label_192574;
        case 0x192578u: goto label_192578;
        case 0x19257cu: goto label_19257c;
        case 0x192580u: goto label_192580;
        case 0x192584u: goto label_192584;
        default: break;
    }

    ctx->pc = 0x192458u;

label_192458:
    // 0x192458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19245c:
    // 0x19245c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_192460:
    // 0x192460: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x192460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_192464:
    // 0x192464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_192468:
    // 0x192468: 0xc06ddac  jal         func_1B76B0
label_19246c:
    if (ctx->pc == 0x19246Cu) {
        ctx->pc = 0x19246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192468u;
        // 0x19246c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192470u;
        goto label_192470;
    }
    ctx->pc = 0x192468u;
    SET_GPR_U32(ctx, 31, 0x192470u);
    ctx->pc = 0x19246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192468u;
    // 0x19246c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x192468u, 0x192470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192470u;
label_192470:
    // 0x192470: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_192474:
    if (ctx->pc == 0x192474u) {
        ctx->pc = 0x192474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192470u;
        // 0x192474: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192478u;
        goto label_192478;
    }
    ctx->pc = 0x192470u;
    {
        const bool branch_taken_0x192470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192470) {
            ctx->pc = 0x192474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192470u;
            // 0x192474: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192574u;
            goto label_192574;
        }
    }
    ctx->pc = 0x192478u;
label_192478:
    // 0x192478: 0x86020602  lh          $v0, 0x602($s0)
    ctx->pc = 0x192478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
label_19247c:
    // 0x19247c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_192480:
    if (ctx->pc == 0x192480u) {
        ctx->pc = 0x192480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19247Cu;
        // 0x192480: 0x96030602  lhu         $v1, 0x602($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192484u;
        goto label_192484;
    }
    ctx->pc = 0x19247Cu;
    {
        const bool branch_taken_0x19247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19247Cu;
        // 0x192480: 0x96030602  lhu         $v1, 0x602($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19247c) {
            ctx->pc = 0x19248Cu;
            goto label_19248c;
        }
    }
    ctx->pc = 0x192484u;
label_192484:
    // 0x192484: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x192484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_192488:
    // 0x192488: 0xa6020602  sh          $v0, 0x602($s0)
    ctx->pc = 0x192488u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 2));
label_19248c:
    // 0x19248c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x19248cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_192490:
    // 0x192490: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_192494:
    // 0x192494: 0x24474308  addiu       $a3, $v0, 0x4308
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17160));
label_192498:
    // 0x192498: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x192498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19249c:
    // 0x19249c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x19249cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1924a0:
    // 0x1924a0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1924a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1924a4:
    // 0x1924a4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1924a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1924a8:
    // 0x1924a8: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1924a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1924ac:
    // 0x1924ac: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1924acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1924b0:
    // 0x1924b0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1924b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924b4:
    // 0x1924b4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1924b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924b8:
    // 0x1924b8: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1924b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924bc:
    // 0x1924bc: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1924bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924c0:
    // 0x1924c0: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1924c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924c4:
    // 0x1924c4: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1924c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924c8:
    // 0x1924c8: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1924c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1924cc:
    // 0x1924cc: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1924ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1924d0:
    // 0x1924d0: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1924d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924d4:
    // 0x1924d4: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1924d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1924d8:
    // 0x1924d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1924d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1924dc:
    // 0x1924dc: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1924dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1924e0:
    // 0x1924e0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1924e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1924e4:
    // 0x1924e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1924e8:
    // 0x1924e8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1924e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1924ec:
    // 0x1924ec: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1924f0:
    if (ctx->pc == 0x1924F0u) {
        ctx->pc = 0x1924F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924ECu;
        // 0x1924f0: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924F4u;
        goto label_1924f4;
    }
    ctx->pc = 0x1924ECu;
    {
        const bool branch_taken_0x1924ec = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1924F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924ECu;
        // 0x1924f0: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924ec) {
            ctx->pc = 0x192520u;
            goto label_192520;
        }
    }
    ctx->pc = 0x1924F4u;
label_1924f4:
    // 0x1924f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1924f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1924f8:
    // 0x1924f8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1924f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1924fc:
    // 0x1924fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1924fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_192500:
    // 0x192500: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_192504:
    // 0x192504: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_192508:
    // 0x192508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x192508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19250c:
    // 0x19250c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_192510:
    // 0x192510: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x192510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_192514:
    // 0x192514: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x192514u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_192518:
    // 0x192518: 0x10000004  b           . + 4 + (0x4 << 2)
label_19251c:
    if (ctx->pc == 0x19251Cu) {
        ctx->pc = 0x19251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192518u;
        // 0x19251c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192520u;
        goto label_192520;
    }
    ctx->pc = 0x192518u;
    {
        const bool branch_taken_0x192518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192518u;
        // 0x19251c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192518) {
            ctx->pc = 0x19252Cu;
            goto label_19252c;
        }
    }
    ctx->pc = 0x192520u;
label_192520:
    // 0x192520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192524:
    // 0x192524: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_192528:
    // 0x192528: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x192528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_19252c:
    // 0x19252c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_192530:
    // 0x192530: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x192530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_192534:
    // 0x192534: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_192538:
    if (ctx->pc == 0x192538u) {
        ctx->pc = 0x192538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192534u;
        // 0x192538: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19253Cu;
        goto label_19253c;
    }
    ctx->pc = 0x192534u;
    {
        const bool branch_taken_0x192534 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x192538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192534u;
        // 0x192538: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192534) {
            ctx->pc = 0x192550u;
            goto label_192550;
        }
    }
    ctx->pc = 0x19253Cu;
label_19253c:
    // 0x19253c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x19253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_192540:
    // 0x192540: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x192540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_192544:
    // 0x192544: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x192544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_192548:
    // 0x192548: 0x10000002  b           . + 4 + (0x2 << 2)
label_19254c:
    if (ctx->pc == 0x19254Cu) {
        ctx->pc = 0x19254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192548u;
        // 0x19254c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192550u;
        goto label_192550;
    }
    ctx->pc = 0x192548u;
    {
        const bool branch_taken_0x192548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192548u;
        // 0x19254c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192548) {
            ctx->pc = 0x192554u;
            goto label_192554;
        }
    }
    ctx->pc = 0x192550u;
label_192550:
    // 0x192550: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x192550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_192554:
    // 0x192554: 0xc0f809  jalr        $a2
label_192558:
    if (ctx->pc == 0x192558u) {
        ctx->pc = 0x192558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192554u;
        // 0x192558: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19255Cu;
        goto label_19255c;
    }
    ctx->pc = 0x192554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19255Cu);
        ctx->pc = 0x192558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192554u;
        // 0x192558: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192554u, 0x19255Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19255Cu;
label_19255c:
    // 0x19255c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192560:
    // 0x192560: 0xc0aa1fa  jal         func_2A87E8
label_192564:
    if (ctx->pc == 0x192564u) {
        ctx->pc = 0x192564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192560u;
        // 0x192564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192568u;
        goto label_192568;
    }
    ctx->pc = 0x192560u;
    SET_GPR_U32(ctx, 31, 0x192568u);
    ctx->pc = 0x192564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192560u;
    // 0x192564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x192560u, 0x192568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192568u;
label_192568:
    // 0x192568: 0xc06ddb6  jal         func_1B76D8
label_19256c:
    if (ctx->pc == 0x19256Cu) {
        ctx->pc = 0x19256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192568u;
        // 0x19256c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192570u;
        goto label_192570;
    }
    ctx->pc = 0x192568u;
    SET_GPR_U32(ctx, 31, 0x192570u);
    ctx->pc = 0x19256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192568u;
    // 0x19256c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x192568u, 0x192570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192570u;
label_192570:
    // 0x192570: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x192570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_192574:
    // 0x192574: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x192574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192578:
    // 0x192578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19257c:
    // 0x19257c: 0x3e00008  jr          $ra
label_192580:
    if (ctx->pc == 0x192580u) {
        ctx->pc = 0x192580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19257Cu;
        // 0x192580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192584u;
        goto label_192584;
    }
    ctx->pc = 0x19257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19257Cu;
        // 0x192580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192584u;
label_192584:
    // 0x192584: 0x0  nop
    ctx->pc = 0x192584u;
    // NOP
    ctx->pc = 0x192588u;
}
