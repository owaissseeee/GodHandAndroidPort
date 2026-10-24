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

// Function: func_00179220
// Address: 0x179220 - 0x179358
void func_00179220_0x179220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179220_0x179220");
#endif

    switch (ctx->pc) {
        case 0x179220u: goto label_179220;
        case 0x179224u: goto label_179224;
        case 0x179228u: goto label_179228;
        case 0x17922cu: goto label_17922c;
        case 0x179230u: goto label_179230;
        case 0x179234u: goto label_179234;
        case 0x179238u: goto label_179238;
        case 0x17923cu: goto label_17923c;
        case 0x179240u: goto label_179240;
        case 0x179244u: goto label_179244;
        case 0x179248u: goto label_179248;
        case 0x17924cu: goto label_17924c;
        case 0x179250u: goto label_179250;
        case 0x179254u: goto label_179254;
        case 0x179258u: goto label_179258;
        case 0x17925cu: goto label_17925c;
        case 0x179260u: goto label_179260;
        case 0x179264u: goto label_179264;
        case 0x179268u: goto label_179268;
        case 0x17926cu: goto label_17926c;
        case 0x179270u: goto label_179270;
        case 0x179274u: goto label_179274;
        case 0x179278u: goto label_179278;
        case 0x17927cu: goto label_17927c;
        case 0x179280u: goto label_179280;
        case 0x179284u: goto label_179284;
        case 0x179288u: goto label_179288;
        case 0x17928cu: goto label_17928c;
        case 0x179290u: goto label_179290;
        case 0x179294u: goto label_179294;
        case 0x179298u: goto label_179298;
        case 0x17929cu: goto label_17929c;
        case 0x1792a0u: goto label_1792a0;
        case 0x1792a4u: goto label_1792a4;
        case 0x1792a8u: goto label_1792a8;
        case 0x1792acu: goto label_1792ac;
        case 0x1792b0u: goto label_1792b0;
        case 0x1792b4u: goto label_1792b4;
        case 0x1792b8u: goto label_1792b8;
        case 0x1792bcu: goto label_1792bc;
        case 0x1792c0u: goto label_1792c0;
        case 0x1792c4u: goto label_1792c4;
        case 0x1792c8u: goto label_1792c8;
        case 0x1792ccu: goto label_1792cc;
        case 0x1792d0u: goto label_1792d0;
        case 0x1792d4u: goto label_1792d4;
        case 0x1792d8u: goto label_1792d8;
        case 0x1792dcu: goto label_1792dc;
        case 0x1792e0u: goto label_1792e0;
        case 0x1792e4u: goto label_1792e4;
        case 0x1792e8u: goto label_1792e8;
        case 0x1792ecu: goto label_1792ec;
        case 0x1792f0u: goto label_1792f0;
        case 0x1792f4u: goto label_1792f4;
        case 0x1792f8u: goto label_1792f8;
        case 0x1792fcu: goto label_1792fc;
        case 0x179300u: goto label_179300;
        case 0x179304u: goto label_179304;
        case 0x179308u: goto label_179308;
        case 0x17930cu: goto label_17930c;
        case 0x179310u: goto label_179310;
        case 0x179314u: goto label_179314;
        case 0x179318u: goto label_179318;
        case 0x17931cu: goto label_17931c;
        case 0x179320u: goto label_179320;
        case 0x179324u: goto label_179324;
        case 0x179328u: goto label_179328;
        case 0x17932cu: goto label_17932c;
        case 0x179330u: goto label_179330;
        case 0x179334u: goto label_179334;
        case 0x179338u: goto label_179338;
        case 0x17933cu: goto label_17933c;
        case 0x179340u: goto label_179340;
        case 0x179344u: goto label_179344;
        case 0x179348u: goto label_179348;
        case 0x17934cu: goto label_17934c;
        case 0x179350u: goto label_179350;
        case 0x179354u: goto label_179354;
        default: break;
    }

    ctx->pc = 0x179220u;

label_179220:
    // 0x179220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_179224:
    // 0x179224: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x179224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_179228:
    // 0x179228: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x179228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_17922c:
    // 0x17922c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_179230:
    // 0x179230: 0xc06ddac  jal         func_1B76B0
label_179234:
    if (ctx->pc == 0x179234u) {
        ctx->pc = 0x179234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179230u;
        // 0x179234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179238u;
        goto label_179238;
    }
    ctx->pc = 0x179230u;
    SET_GPR_U32(ctx, 31, 0x179238u);
    ctx->pc = 0x179234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179230u;
    // 0x179234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x179230u, 0x179238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179238u;
label_179238:
    // 0x179238: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_17923c:
    if (ctx->pc == 0x17923Cu) {
        ctx->pc = 0x17923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179238u;
        // 0x17923c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179240u;
        goto label_179240;
    }
    ctx->pc = 0x179238u;
    {
        const bool branch_taken_0x179238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179238) {
            ctx->pc = 0x17923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179238u;
            // 0x17923c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x179240u;
label_179240:
    // 0x179240: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x179240u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_179244:
    // 0x179244: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x179244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_179248:
    // 0x179248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17924c:
    // 0x17924c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_179250:
    if (ctx->pc == 0x179250u) {
        ctx->pc = 0x179250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17924Cu;
        // 0x179250: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179254u;
        goto label_179254;
    }
    ctx->pc = 0x17924Cu;
    {
        const bool branch_taken_0x17924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17924Cu;
        // 0x179250: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17924c) {
            ctx->pc = 0x17933Cu;
            goto label_17933c;
        }
    }
    ctx->pc = 0x179254u;
label_179254:
    // 0x179254: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x179254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_179258:
    // 0x179258: 0x24471828  addiu       $a3, $v0, 0x1828
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6184));
label_17925c:
    // 0x17925c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x17925cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_179260:
    // 0x179260: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x179260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_179264:
    // 0x179264: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x179264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_179268:
    // 0x179268: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x179268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17926c:
    // 0x17926c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x17926cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_179270:
    // 0x179270: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x179270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_179274:
    // 0x179274: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x179274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179278:
    // 0x179278: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x179278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17927c:
    // 0x17927c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x17927cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179280:
    // 0x179280: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x179280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_179284:
    // 0x179284: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x179284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179288:
    // 0x179288: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x179288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17928c:
    // 0x17928c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x17928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_179290:
    // 0x179290: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x179290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_179294:
    // 0x179294: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x179294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_179298:
    // 0x179298: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x179298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17929c:
    // 0x17929c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17929cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1792a0:
    // 0x1792a0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1792a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1792a4:
    // 0x1792a4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1792a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1792a8:
    // 0x1792a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1792a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1792ac:
    // 0x1792ac: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1792acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1792b0:
    // 0x1792b0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1792b4:
    if (ctx->pc == 0x1792B4u) {
        ctx->pc = 0x1792B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792B0u;
        // 0x1792b4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792B8u;
        goto label_1792b8;
    }
    ctx->pc = 0x1792B0u;
    {
        const bool branch_taken_0x1792b0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1792B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792B0u;
        // 0x1792b4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792b0) {
            ctx->pc = 0x1792E4u;
            goto label_1792e4;
        }
    }
    ctx->pc = 0x1792B8u;
label_1792b8:
    // 0x1792b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1792b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1792bc:
    // 0x1792bc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1792bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1792c0:
    // 0x1792c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1792c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1792c4:
    // 0x1792c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1792c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1792c8:
    // 0x1792c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1792c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1792cc:
    // 0x1792cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1792ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1792d0:
    // 0x1792d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1792d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1792d4:
    // 0x1792d4: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1792d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1792d8:
    // 0x1792d8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1792d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1792dc:
    // 0x1792dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1792e0:
    if (ctx->pc == 0x1792E0u) {
        ctx->pc = 0x1792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792DCu;
        // 0x1792e0: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1792E4u;
        goto label_1792e4;
    }
    ctx->pc = 0x1792DCu;
    {
        const bool branch_taken_0x1792dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792DCu;
        // 0x1792e0: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792dc) {
            ctx->pc = 0x1792F0u;
            goto label_1792f0;
        }
    }
    ctx->pc = 0x1792E4u;
label_1792e4:
    // 0x1792e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1792e8:
    // 0x1792e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1792e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1792ec:
    // 0x1792ec: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1792ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1792f0:
    // 0x1792f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1792f4:
    // 0x1792f4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1792f8:
    // 0x1792f8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1792fc:
    if (ctx->pc == 0x1792FCu) {
        ctx->pc = 0x1792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792F8u;
        // 0x1792fc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179300u;
        goto label_179300;
    }
    ctx->pc = 0x1792F8u;
    {
        const bool branch_taken_0x1792f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792F8u;
        // 0x1792fc: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792f8) {
            ctx->pc = 0x179314u;
            goto label_179314;
        }
    }
    ctx->pc = 0x179300u;
label_179300:
    // 0x179300: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x179300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_179304:
    // 0x179304: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x179304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_179308:
    // 0x179308: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17930c:
    // 0x17930c: 0x10000002  b           . + 4 + (0x2 << 2)
label_179310:
    if (ctx->pc == 0x179310u) {
        ctx->pc = 0x179310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17930Cu;
        // 0x179310: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179314u;
        goto label_179314;
    }
    ctx->pc = 0x17930Cu;
    {
        const bool branch_taken_0x17930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17930Cu;
        // 0x179310: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17930c) {
            ctx->pc = 0x179318u;
            goto label_179318;
        }
    }
    ctx->pc = 0x179314u;
label_179314:
    // 0x179314: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x179314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_179318:
    // 0x179318: 0xc0f809  jalr        $a2
label_17931c:
    if (ctx->pc == 0x17931Cu) {
        ctx->pc = 0x17931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179318u;
        // 0x17931c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179320u;
        goto label_179320;
    }
    ctx->pc = 0x179318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x179320u);
        ctx->pc = 0x17931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179318u;
        // 0x17931c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179318u, 0x179320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179320u;
label_179320:
    // 0x179320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179324:
    // 0x179324: 0xc0aa1fa  jal         func_2A87E8
label_179328:
    if (ctx->pc == 0x179328u) {
        ctx->pc = 0x179328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179324u;
        // 0x179328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17932Cu;
        goto label_17932c;
    }
    ctx->pc = 0x179324u;
    SET_GPR_U32(ctx, 31, 0x17932Cu);
    ctx->pc = 0x179328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179324u;
    // 0x179328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x179324u, 0x17932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17932Cu;
label_17932c:
    // 0x17932c: 0xc06ddb6  jal         func_1B76D8
label_179330:
    if (ctx->pc == 0x179330u) {
        ctx->pc = 0x179330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17932Cu;
        // 0x179330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179334u;
        goto label_179334;
    }
    ctx->pc = 0x17932Cu;
    SET_GPR_U32(ctx, 31, 0x179334u);
    ctx->pc = 0x179330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17932Cu;
    // 0x179330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17932Cu, 0x179334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179334u;
label_179334:
    // 0x179334: 0x10000004  b           . + 4 + (0x4 << 2)
label_179338:
    if (ctx->pc == 0x179338u) {
        ctx->pc = 0x179338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179334u;
        // 0x179338: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17933Cu;
        goto label_17933c;
    }
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179334u;
        // 0x179338: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179334) {
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x17933Cu;
label_17933c:
    // 0x17933c: 0xc071f8c  jal         func_1C7E30
label_179340:
    if (ctx->pc == 0x179340u) {
        ctx->pc = 0x179340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17933Cu;
        // 0x179340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179344u;
        goto label_179344;
    }
    ctx->pc = 0x17933Cu;
    SET_GPR_U32(ctx, 31, 0x179344u);
    ctx->pc = 0x179340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17933Cu;
    // 0x179340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x17933Cu, 0x179344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179344u;
label_179344:
    // 0x179344: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x179344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179348:
    // 0x179348: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x179348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17934c:
    // 0x17934c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179350:
    // 0x179350: 0x3e00008  jr          $ra
label_179354:
    if (ctx->pc == 0x179354u) {
        ctx->pc = 0x179354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179350u;
        // 0x179354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179358u;
        goto label_fallthrough_0x179350;
    }
    ctx->pc = 0x179350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179350u;
        // 0x179354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x179350:
    ctx->pc = 0x179358u;
}
