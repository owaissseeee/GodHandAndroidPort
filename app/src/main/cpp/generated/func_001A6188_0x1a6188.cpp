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

// Function: func_001A6188
// Address: 0x1a6188 - 0x1a62b8
void func_001A6188_0x1a6188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6188_0x1a6188");
#endif

    switch (ctx->pc) {
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        default: break;
    }

    ctx->pc = 0x1a6188u;

label_1a6188:
    // 0x1a6188: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a618c:
    // 0x1a618c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a6190:
    // 0x1a6190: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a6190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a6194:
    // 0x1a6194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a6198:
    // 0x1a6198: 0xc06ddac  jal         func_1B76B0
label_1a619c:
    if (ctx->pc == 0x1A619Cu) {
        ctx->pc = 0x1A619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6198u;
        // 0x1a619c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61A0u;
        goto label_1a61a0;
    }
    ctx->pc = 0x1A6198u;
    SET_GPR_U32(ctx, 31, 0x1A61A0u);
    ctx->pc = 0x1A619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6198u;
    // 0x1a619c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A6198u, 0x1A61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61A0u;
label_1a61a0:
    // 0x1a61a0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_1a61a4:
    if (ctx->pc == 0x1A61A4u) {
        ctx->pc = 0x1A61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A0u;
        // 0x1a61a4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61A8u;
        goto label_1a61a8;
    }
    ctx->pc = 0x1A61A0u;
    {
        const bool branch_taken_0x1a61a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A0u;
        // 0x1a61a4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61a0) {
            ctx->pc = 0x1A62A0u;
            goto label_1a62a0;
        }
    }
    ctx->pc = 0x1A61A8u;
label_1a61a8:
    // 0x1a61a8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a61a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a61ac:
    // 0x1a61ac: 0x244773c0  addiu       $a3, $v0, 0x73C0
    ctx->pc = 0x1a61acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 29632));
label_1a61b0:
    // 0x1a61b0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1a61b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a61b4:
    // 0x1a61b4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1a61b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a61b8:
    // 0x1a61b8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1a61b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a61bc:
    // 0x1a61bc: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1a61bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a61c0:
    // 0x1a61c0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1a61c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a61c4:
    // 0x1a61c4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1a61c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a61c8:
    // 0x1a61c8: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1a61c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61cc:
    // 0x1a61cc: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1a61ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61d0:
    // 0x1a61d0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1a61d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61d4:
    // 0x1a61d4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1a61d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61d8:
    // 0x1a61d8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1a61d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61dc:
    // 0x1a61dc: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1a61dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61e0:
    // 0x1a61e0: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1a61e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a61e4:
    // 0x1a61e4: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1a61e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a61e8:
    // 0x1a61e8: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1a61e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61ec:
    // 0x1a61ec: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1a61ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a61f0:
    // 0x1a61f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a61f4:
    // 0x1a61f4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1a61f8:
    // 0x1a61f8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a61f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a61fc:
    // 0x1a61fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a6200:
    // 0x1a6200: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1a6200u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1a6204:
    // 0x1a6204: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1a6208:
    if (ctx->pc == 0x1A6208u) {
        ctx->pc = 0x1A6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6204u;
        // 0x1a6208: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A620Cu;
        goto label_1a620c;
    }
    ctx->pc = 0x1A6204u;
    {
        const bool branch_taken_0x1a6204 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6204u;
        // 0x1a6208: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6204) {
            ctx->pc = 0x1A6238u;
            goto label_1a6238;
        }
    }
    ctx->pc = 0x1A620Cu;
label_1a620c:
    // 0x1a620c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1a620cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a6210:
    // 0x1a6210: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a6210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a6214:
    // 0x1a6214: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a6218:
    // 0x1a6218: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a6218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a621c:
    // 0x1a621c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a6220:
    // 0x1a6220: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6224:
    // 0x1a6224: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a6228:
    // 0x1a6228: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1a6228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1a622c:
    // 0x1a622c: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a622cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a6230:
    // 0x1a6230: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a6234:
    if (ctx->pc == 0x1A6234u) {
        ctx->pc = 0x1A6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6230u;
        // 0x1a6234: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6238u;
        goto label_1a6238;
    }
    ctx->pc = 0x1A6230u;
    {
        const bool branch_taken_0x1a6230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6230u;
        // 0x1a6234: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6230) {
            ctx->pc = 0x1A6244u;
            goto label_1a6244;
        }
    }
    ctx->pc = 0x1A6238u;
label_1a6238:
    // 0x1a6238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a623c:
    // 0x1a623c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a623cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6240:
    // 0x1a6240: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1a6240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a6244:
    // 0x1a6244: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a6248:
    // 0x1a6248: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1a6248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1a624c:
    // 0x1a624c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a6250:
    if (ctx->pc == 0x1A6250u) {
        ctx->pc = 0x1A6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A624Cu;
        // 0x1a6250: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6254u;
        goto label_1a6254;
    }
    ctx->pc = 0x1A624Cu;
    {
        const bool branch_taken_0x1a624c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A624Cu;
        // 0x1a6250: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a624c) {
            ctx->pc = 0x1A6268u;
            goto label_1a6268;
        }
    }
    ctx->pc = 0x1A6254u;
label_1a6254:
    // 0x1a6254: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a6258:
    // 0x1a6258: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a625c:
    // 0x1a625c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a625cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a6260:
    // 0x1a6260: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6264:
    if (ctx->pc == 0x1A6264u) {
        ctx->pc = 0x1A6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6260u;
        // 0x1a6264: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6268u;
        goto label_1a6268;
    }
    ctx->pc = 0x1A6260u;
    {
        const bool branch_taken_0x1a6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6260u;
        // 0x1a6264: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6260) {
            ctx->pc = 0x1A626Cu;
            goto label_1a626c;
        }
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a6268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a626c:
    // 0x1a626c: 0xc0f809  jalr        $a2
label_1a6270:
    if (ctx->pc == 0x1A6270u) {
        ctx->pc = 0x1A6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A626Cu;
        // 0x1a6270: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6274u;
        goto label_1a6274;
    }
    ctx->pc = 0x1A626Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6274u);
        ctx->pc = 0x1A6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A626Cu;
        // 0x1a6270: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A626Cu, 0x1A6274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6274u;
label_1a6274:
    // 0x1a6274: 0xc069956  jal         func_1A6558
label_1a6278:
    if (ctx->pc == 0x1A6278u) {
        ctx->pc = 0x1A6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6274u;
        // 0x1a6278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A627Cu;
        goto label_1a627c;
    }
    ctx->pc = 0x1A6274u;
    SET_GPR_U32(ctx, 31, 0x1A627Cu);
    ctx->pc = 0x1A6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6274u;
    // 0x1a6278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6558u, 0x1A6274u, 0x1A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A627Cu;
label_1a627c:
    // 0x1a627c: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1a627cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1a6280:
    // 0x1a6280: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1a6280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1a6284:
    // 0x1a6284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a6288:
    // 0x1a6288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a628c:
    if (ctx->pc == 0x1A628Cu) {
        ctx->pc = 0x1A628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6288u;
        // 0x1a628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6290u;
        goto label_1a6290;
    }
    ctx->pc = 0x1A6288u;
    {
        const bool branch_taken_0x1a6288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6288u;
        // 0x1a628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6288) {
            ctx->pc = 0x1A6298u;
            goto label_1a6298;
        }
    }
    ctx->pc = 0x1A6290u;
label_1a6290:
    // 0x1a6290: 0xc0aa1fa  jal         func_2A87E8
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6298u;
        goto label_1a6298;
    }
    ctx->pc = 0x1A6290u;
    SET_GPR_U32(ctx, 31, 0x1A6298u);
    ctx->pc = 0x1A6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6290u;
    // 0x1a6294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1A6290u, 0x1A6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6298u;
label_1a6298:
    // 0x1a6298: 0xc06ddb6  jal         func_1B76D8
label_1a629c:
    if (ctx->pc == 0x1A629Cu) {
        ctx->pc = 0x1A629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6298u;
        // 0x1a629c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62A0u;
        goto label_1a62a0;
    }
    ctx->pc = 0x1A6298u;
    SET_GPR_U32(ctx, 31, 0x1A62A0u);
    ctx->pc = 0x1A629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6298u;
    // 0x1a629c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A6298u, 0x1A62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62A0u;
label_1a62a0:
    // 0x1a62a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a62a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a62a4:
    // 0x1a62a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a62a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a62a8:
    // 0x1a62a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a62a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a62ac:
    // 0x1a62ac: 0x3e00008  jr          $ra
label_1a62b0:
    if (ctx->pc == 0x1A62B0u) {
        ctx->pc = 0x1A62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62ACu;
        // 0x1a62b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62B4u;
        goto label_1a62b4;
    }
    ctx->pc = 0x1A62ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62ACu;
        // 0x1a62b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A62ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A62B4u;
label_1a62b4:
    // 0x1a62b4: 0x0  nop
    ctx->pc = 0x1a62b4u;
    // NOP
    ctx->pc = 0x1a62b8u;
}
