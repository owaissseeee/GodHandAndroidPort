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

// Function: func_0018D160
// Address: 0x18d160 - 0x18d298
void func_0018D160_0x18d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018D160_0x18d160");
#endif

    switch (ctx->pc) {
        case 0x18d160u: goto label_18d160;
        case 0x18d164u: goto label_18d164;
        case 0x18d168u: goto label_18d168;
        case 0x18d16cu: goto label_18d16c;
        case 0x18d170u: goto label_18d170;
        case 0x18d174u: goto label_18d174;
        case 0x18d178u: goto label_18d178;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d180u: goto label_18d180;
        case 0x18d184u: goto label_18d184;
        case 0x18d188u: goto label_18d188;
        case 0x18d18cu: goto label_18d18c;
        case 0x18d190u: goto label_18d190;
        case 0x18d194u: goto label_18d194;
        case 0x18d198u: goto label_18d198;
        case 0x18d19cu: goto label_18d19c;
        case 0x18d1a0u: goto label_18d1a0;
        case 0x18d1a4u: goto label_18d1a4;
        case 0x18d1a8u: goto label_18d1a8;
        case 0x18d1acu: goto label_18d1ac;
        case 0x18d1b0u: goto label_18d1b0;
        case 0x18d1b4u: goto label_18d1b4;
        case 0x18d1b8u: goto label_18d1b8;
        case 0x18d1bcu: goto label_18d1bc;
        case 0x18d1c0u: goto label_18d1c0;
        case 0x18d1c4u: goto label_18d1c4;
        case 0x18d1c8u: goto label_18d1c8;
        case 0x18d1ccu: goto label_18d1cc;
        case 0x18d1d0u: goto label_18d1d0;
        case 0x18d1d4u: goto label_18d1d4;
        case 0x18d1d8u: goto label_18d1d8;
        case 0x18d1dcu: goto label_18d1dc;
        case 0x18d1e0u: goto label_18d1e0;
        case 0x18d1e4u: goto label_18d1e4;
        case 0x18d1e8u: goto label_18d1e8;
        case 0x18d1ecu: goto label_18d1ec;
        case 0x18d1f0u: goto label_18d1f0;
        case 0x18d1f4u: goto label_18d1f4;
        case 0x18d1f8u: goto label_18d1f8;
        case 0x18d1fcu: goto label_18d1fc;
        case 0x18d200u: goto label_18d200;
        case 0x18d204u: goto label_18d204;
        case 0x18d208u: goto label_18d208;
        case 0x18d20cu: goto label_18d20c;
        case 0x18d210u: goto label_18d210;
        case 0x18d214u: goto label_18d214;
        case 0x18d218u: goto label_18d218;
        case 0x18d21cu: goto label_18d21c;
        case 0x18d220u: goto label_18d220;
        case 0x18d224u: goto label_18d224;
        case 0x18d228u: goto label_18d228;
        case 0x18d22cu: goto label_18d22c;
        case 0x18d230u: goto label_18d230;
        case 0x18d234u: goto label_18d234;
        case 0x18d238u: goto label_18d238;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d240u: goto label_18d240;
        case 0x18d244u: goto label_18d244;
        case 0x18d248u: goto label_18d248;
        case 0x18d24cu: goto label_18d24c;
        case 0x18d250u: goto label_18d250;
        case 0x18d254u: goto label_18d254;
        case 0x18d258u: goto label_18d258;
        case 0x18d25cu: goto label_18d25c;
        case 0x18d260u: goto label_18d260;
        case 0x18d264u: goto label_18d264;
        case 0x18d268u: goto label_18d268;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d270u: goto label_18d270;
        case 0x18d274u: goto label_18d274;
        case 0x18d278u: goto label_18d278;
        case 0x18d27cu: goto label_18d27c;
        case 0x18d280u: goto label_18d280;
        case 0x18d284u: goto label_18d284;
        case 0x18d288u: goto label_18d288;
        case 0x18d28cu: goto label_18d28c;
        case 0x18d290u: goto label_18d290;
        case 0x18d294u: goto label_18d294;
        default: break;
    }

    ctx->pc = 0x18d160u;

label_18d160:
    // 0x18d160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18d164:
    // 0x18d164: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18d168:
    // 0x18d168: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18d16c:
    // 0x18d16c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18d170:
    // 0x18d170: 0xc06ddac  jal         func_1B76B0
label_18d174:
    if (ctx->pc == 0x18D174u) {
        ctx->pc = 0x18D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D170u;
        // 0x18d174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D178u;
        goto label_18d178;
    }
    ctx->pc = 0x18D170u;
    SET_GPR_U32(ctx, 31, 0x18D178u);
    ctx->pc = 0x18D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D170u;
    // 0x18d174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x18D170u, 0x18D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D178u;
label_18d178:
    // 0x18d178: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_18d17c:
    if (ctx->pc == 0x18D17Cu) {
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D178u;
        // 0x18d17c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D180u;
        goto label_18d180;
    }
    ctx->pc = 0x18D178u;
    {
        const bool branch_taken_0x18d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d178) {
            ctx->pc = 0x18D17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D178u;
            // 0x18d17c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D288u;
            goto label_18d288;
        }
    }
    ctx->pc = 0x18D180u;
label_18d180:
    // 0x18d180: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x18d180u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_18d184:
    // 0x18d184: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x18d184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_18d188:
    // 0x18d188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d18c:
    // 0x18d18c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_18d190:
    if (ctx->pc == 0x18D190u) {
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D194u;
        goto label_18d194;
    }
    ctx->pc = 0x18D18Cu;
    {
        const bool branch_taken_0x18d18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d18c) {
            ctx->pc = 0x18D27Cu;
            goto label_18d27c;
        }
    }
    ctx->pc = 0x18D194u;
label_18d194:
    // 0x18d194: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18d194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18d198:
    // 0x18d198: 0x244739a8  addiu       $a3, $v0, 0x39A8
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 14760));
label_18d19c:
    // 0x18d19c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x18d19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18d1a0:
    // 0x18d1a0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18d1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18d1a4:
    // 0x18d1a4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x18d1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18d1a8:
    // 0x18d1a8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18d1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_18d1ac:
    // 0x18d1ac: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x18d1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18d1b0:
    // 0x18d1b0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18d1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18d1b4:
    // 0x18d1b4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x18d1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1b8:
    // 0x18d1b8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18d1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1bc:
    // 0x18d1bc: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x18d1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1c0:
    // 0x18d1c0: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18d1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1c4:
    // 0x18d1c4: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x18d1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1c8:
    // 0x18d1c8: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18d1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1cc:
    // 0x18d1cc: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x18d1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18d1d0:
    // 0x18d1d0: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18d1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18d1d4:
    // 0x18d1d4: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x18d1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1d8:
    // 0x18d1d8: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18d1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18d1dc:
    // 0x18d1dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d1e0:
    // 0x18d1e0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_18d1e4:
    // 0x18d1e4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x18d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18d1e8:
    // 0x18d1e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18d1ec:
    // 0x18d1ec: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x18d1ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18d1f0:
    // 0x18d1f0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_18d1f4:
    if (ctx->pc == 0x18D1F4u) {
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1F8u;
        goto label_18d1f8;
    }
    ctx->pc = 0x18D1F0u;
    {
        const bool branch_taken_0x18d1f0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1f0) {
            ctx->pc = 0x18D224u;
            goto label_18d224;
        }
    }
    ctx->pc = 0x18D1F8u;
label_18d1f8:
    // 0x18d1f8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18d1f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18d1fc:
    // 0x18d1fc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18d200:
    // 0x18d200: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18d204:
    // 0x18d204: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18d208:
    // 0x18d208: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18d20c:
    // 0x18d20c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d210:
    // 0x18d210: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18d214:
    // 0x18d214: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x18d214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18d218:
    // 0x18d218: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18d218u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18d21c:
    // 0x18d21c: 0x10000004  b           . + 4 + (0x4 << 2)
label_18d220:
    if (ctx->pc == 0x18D220u) {
        ctx->pc = 0x18D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D21Cu;
        // 0x18d220: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D224u;
        goto label_18d224;
    }
    ctx->pc = 0x18D21Cu;
    {
        const bool branch_taken_0x18d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D21Cu;
        // 0x18d220: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d21c) {
            ctx->pc = 0x18D230u;
            goto label_18d230;
        }
    }
    ctx->pc = 0x18D224u;
label_18d224:
    // 0x18d224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d228:
    // 0x18d228: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d22c:
    // 0x18d22c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x18d22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18d230:
    // 0x18d230: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d234:
    // 0x18d234: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18d238:
    // 0x18d238: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18d23c:
    if (ctx->pc == 0x18D23Cu) {
        ctx->pc = 0x18D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D238u;
        // 0x18d23c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D240u;
        goto label_18d240;
    }
    ctx->pc = 0x18D238u;
    {
        const bool branch_taken_0x18d238 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D238u;
        // 0x18d23c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d238) {
            ctx->pc = 0x18D254u;
            goto label_18d254;
        }
    }
    ctx->pc = 0x18D240u;
label_18d240:
    // 0x18d240: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x18d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18d244:
    // 0x18d244: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18d244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18d248:
    // 0x18d248: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18d24c:
    // 0x18d24c: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d250:
    if (ctx->pc == 0x18D250u) {
        ctx->pc = 0x18D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D24Cu;
        // 0x18d250: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D254u;
        goto label_18d254;
    }
    ctx->pc = 0x18D24Cu;
    {
        const bool branch_taken_0x18d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D24Cu;
        // 0x18d250: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d24c) {
            ctx->pc = 0x18D258u;
            goto label_18d258;
        }
    }
    ctx->pc = 0x18D254u;
label_18d254:
    // 0x18d254: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18d254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18d258:
    // 0x18d258: 0xc0f809  jalr        $a2
label_18d25c:
    if (ctx->pc == 0x18D25Cu) {
        ctx->pc = 0x18D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D258u;
        // 0x18d25c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D260u;
        goto label_18d260;
    }
    ctx->pc = 0x18D258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18D260u);
        ctx->pc = 0x18D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D258u;
        // 0x18d25c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D258u, 0x18D260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D260u;
label_18d260:
    // 0x18d260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d264:
    // 0x18d264: 0xc0aa1fa  jal         func_2A87E8
label_18d268:
    if (ctx->pc == 0x18D268u) {
        ctx->pc = 0x18D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D264u;
        // 0x18d268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D26Cu;
        goto label_18d26c;
    }
    ctx->pc = 0x18D264u;
    SET_GPR_U32(ctx, 31, 0x18D26Cu);
    ctx->pc = 0x18D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D264u;
    // 0x18d268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18D264u, 0x18D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D26Cu;
label_18d26c:
    // 0x18d26c: 0xc06ddb6  jal         func_1B76D8
label_18d270:
    if (ctx->pc == 0x18D270u) {
        ctx->pc = 0x18D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D26Cu;
        // 0x18d270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D274u;
        goto label_18d274;
    }
    ctx->pc = 0x18D26Cu;
    SET_GPR_U32(ctx, 31, 0x18D274u);
    ctx->pc = 0x18D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D26Cu;
    // 0x18d270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x18D26Cu, 0x18D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D274u;
label_18d274:
    // 0x18d274: 0x10000004  b           . + 4 + (0x4 << 2)
label_18d278:
    if (ctx->pc == 0x18D278u) {
        ctx->pc = 0x18D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D274u;
        // 0x18d278: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D27Cu;
        goto label_18d27c;
    }
    ctx->pc = 0x18D274u;
    {
        const bool branch_taken_0x18d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D274u;
        // 0x18d278: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d274) {
            ctx->pc = 0x18D288u;
            goto label_18d288;
        }
    }
    ctx->pc = 0x18D27Cu;
label_18d27c:
    // 0x18d27c: 0xc071f8c  jal         func_1C7E30
label_18d280:
    if (ctx->pc == 0x18D280u) {
        ctx->pc = 0x18D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D27Cu;
        // 0x18d280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D284u;
        goto label_18d284;
    }
    ctx->pc = 0x18D27Cu;
    SET_GPR_U32(ctx, 31, 0x18D284u);
    ctx->pc = 0x18D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D27Cu;
    // 0x18d280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x18D27Cu, 0x18D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D284u;
label_18d284:
    // 0x18d284: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18d284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18d288:
    // 0x18d288: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18d288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18d28c:
    // 0x18d28c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d290:
    // 0x18d290: 0x3e00008  jr          $ra
label_18d294:
    if (ctx->pc == 0x18D294u) {
        ctx->pc = 0x18D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D290u;
        // 0x18d294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D298u;
        goto label_fallthrough_0x18d290;
    }
    ctx->pc = 0x18D290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D290u;
        // 0x18d294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18d290:
    ctx->pc = 0x18D298u;
}
