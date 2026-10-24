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

// Function: func_0034B198
// Address: 0x34b198 - 0x34b270
void func_0034B198_0x34b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B198_0x34b198");
#endif

    switch (ctx->pc) {
        case 0x34b198u: goto label_34b198;
        case 0x34b19cu: goto label_34b19c;
        case 0x34b1a0u: goto label_34b1a0;
        case 0x34b1a4u: goto label_34b1a4;
        case 0x34b1a8u: goto label_34b1a8;
        case 0x34b1acu: goto label_34b1ac;
        case 0x34b1b0u: goto label_34b1b0;
        case 0x34b1b4u: goto label_34b1b4;
        case 0x34b1b8u: goto label_34b1b8;
        case 0x34b1bcu: goto label_34b1bc;
        case 0x34b1c0u: goto label_34b1c0;
        case 0x34b1c4u: goto label_34b1c4;
        case 0x34b1c8u: goto label_34b1c8;
        case 0x34b1ccu: goto label_34b1cc;
        case 0x34b1d0u: goto label_34b1d0;
        case 0x34b1d4u: goto label_34b1d4;
        case 0x34b1d8u: goto label_34b1d8;
        case 0x34b1dcu: goto label_34b1dc;
        case 0x34b1e0u: goto label_34b1e0;
        case 0x34b1e4u: goto label_34b1e4;
        case 0x34b1e8u: goto label_34b1e8;
        case 0x34b1ecu: goto label_34b1ec;
        case 0x34b1f0u: goto label_34b1f0;
        case 0x34b1f4u: goto label_34b1f4;
        case 0x34b1f8u: goto label_34b1f8;
        case 0x34b1fcu: goto label_34b1fc;
        case 0x34b200u: goto label_34b200;
        case 0x34b204u: goto label_34b204;
        case 0x34b208u: goto label_34b208;
        case 0x34b20cu: goto label_34b20c;
        case 0x34b210u: goto label_34b210;
        case 0x34b214u: goto label_34b214;
        case 0x34b218u: goto label_34b218;
        case 0x34b21cu: goto label_34b21c;
        case 0x34b220u: goto label_34b220;
        case 0x34b224u: goto label_34b224;
        case 0x34b228u: goto label_34b228;
        case 0x34b22cu: goto label_34b22c;
        case 0x34b230u: goto label_34b230;
        case 0x34b234u: goto label_34b234;
        case 0x34b238u: goto label_34b238;
        case 0x34b23cu: goto label_34b23c;
        case 0x34b240u: goto label_34b240;
        case 0x34b244u: goto label_34b244;
        case 0x34b248u: goto label_34b248;
        case 0x34b24cu: goto label_34b24c;
        case 0x34b250u: goto label_34b250;
        case 0x34b254u: goto label_34b254;
        case 0x34b258u: goto label_34b258;
        case 0x34b25cu: goto label_34b25c;
        case 0x34b260u: goto label_34b260;
        case 0x34b264u: goto label_34b264;
        case 0x34b268u: goto label_34b268;
        case 0x34b26cu: goto label_34b26c;
        default: break;
    }

    ctx->pc = 0x34b198u;

label_34b198:
    // 0x34b198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34b19c:
    // 0x34b19c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b1a0:
    // 0x34b1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34b1a4:
    // 0x34b1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34b1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b1a8:
    // 0x34b1a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34b1ac:
    // 0x34b1ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34b1b0:
    // 0x34b1b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34b1b4:
    // 0x34b1b4: 0x8e232004  lw          $v1, 0x2004($s1)
    ctx->pc = 0x34b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8196)));
label_34b1b8:
    // 0x34b1b8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x34b1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34b1bc:
    // 0x34b1bc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_34b1c0:
    if (ctx->pc == 0x34B1C0u) {
        ctx->pc = 0x34B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1BCu;
        // 0x34b1c0: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B1C4u;
        goto label_34b1c4;
    }
    ctx->pc = 0x34B1BCu;
    {
        const bool branch_taken_0x34b1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B1BCu;
        // 0x34b1c0: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b1bc) {
            ctx->pc = 0x34B258u;
            goto label_34b258;
        }
    }
    ctx->pc = 0x34B1C4u;
label_34b1c4:
    // 0x34b1c4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x34b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_34b1c8:
    // 0x34b1c8: 0x24470d90  addiu       $a3, $v0, 0xD90
    ctx->pc = 0x34b1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
label_34b1cc:
    // 0x34b1cc: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x34b1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_34b1d0:
    // 0x34b1d0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x34b1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_34b1d4:
    // 0x34b1d4: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x34b1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_34b1d8:
    // 0x34b1d8: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x34b1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_34b1dc:
    // 0x34b1dc: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x34b1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_34b1e0:
    // 0x34b1e0: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x34b1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_34b1e4:
    // 0x34b1e4: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x34b1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_34b1e8:
    // 0x34b1e8: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x34b1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34b1ec:
    // 0x34b1ec: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x34b1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_34b1f0:
    // 0x34b1f0: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x34b1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34b1f4:
    // 0x34b1f4: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x34b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_34b1f8:
    // 0x34b1f8: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x34b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_34b1fc:
    // 0x34b1fc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x34b1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_34b200:
    // 0x34b200: 0xc0d628e  jal         func_358A38
label_34b204:
    if (ctx->pc == 0x34B204u) {
        ctx->pc = 0x34B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B200u;
        // 0x34b204: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B208u;
        goto label_34b208;
    }
    ctx->pc = 0x34B200u;
    SET_GPR_U32(ctx, 31, 0x34B208u);
    ctx->pc = 0x34B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B200u;
    // 0x34b204: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A38u, 0x34B200u, 0x34B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B208u;
label_34b208:
    // 0x34b208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b20c:
    // 0x34b20c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_34b210:
    if (ctx->pc == 0x34B210u) {
        ctx->pc = 0x34B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B20Cu;
        // 0x34b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B214u;
        goto label_34b214;
    }
    ctx->pc = 0x34B20Cu;
    {
        const bool branch_taken_0x34b20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B20Cu;
        // 0x34b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b20c) {
            ctx->pc = 0x34B228u;
            goto label_34b228;
        }
    }
    ctx->pc = 0x34B214u;
label_34b214:
    // 0x34b214: 0xc0d2c9c  jal         func_34B270
label_34b218:
    if (ctx->pc == 0x34B218u) {
        ctx->pc = 0x34B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B214u;
        // 0x34b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B21Cu;
        goto label_34b21c;
    }
    ctx->pc = 0x34B214u;
    SET_GPR_U32(ctx, 31, 0x34B21Cu);
    ctx->pc = 0x34B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B214u;
    // 0x34b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B270u, 0x34B214u, 0x34B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B21Cu;
label_34b21c:
    // 0x34b21c: 0x10000007  b           . + 4 + (0x7 << 2)
label_34b220:
    if (ctx->pc == 0x34B220u) {
        ctx->pc = 0x34B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B21Cu;
        // 0x34b220: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B224u;
        goto label_34b224;
    }
    ctx->pc = 0x34B21Cu;
    {
        const bool branch_taken_0x34b21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B21Cu;
        // 0x34b220: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b21c) {
            ctx->pc = 0x34B23Cu;
            goto label_34b23c;
        }
    }
    ctx->pc = 0x34B224u;
label_34b224:
    // 0x34b224: 0x0  nop
    ctx->pc = 0x34b224u;
    // NOP
label_34b228:
    // 0x34b228: 0xc0d2cb2  jal         func_34B2C8
label_34b22c:
    if (ctx->pc == 0x34B22Cu) {
        ctx->pc = 0x34B230u;
        goto label_34b230;
    }
    ctx->pc = 0x34B228u;
    SET_GPR_U32(ctx, 31, 0x34B230u);
    ctx->pc = 0x34B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B2C8u, 0x34B228u, 0x34B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B230u;
label_34b230:
    // 0x34b230: 0xc0d2ca4  jal         func_34B290
label_34b234:
    if (ctx->pc == 0x34B234u) {
        ctx->pc = 0x34B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B230u;
        // 0x34b234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B238u;
        goto label_34b238;
    }
    ctx->pc = 0x34B230u;
    SET_GPR_U32(ctx, 31, 0x34B238u);
    ctx->pc = 0x34B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B230u;
    // 0x34b234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B290u, 0x34B230u, 0x34B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B238u;
label_34b238:
    // 0x34b238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34b238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b23c:
    // 0x34b23c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34b240:
    // 0x34b240: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_34b244:
    // 0x34b244: 0x40f809  jalr        $v0
label_34b248:
    if (ctx->pc == 0x34B248u) {
        ctx->pc = 0x34B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B244u;
        // 0x34b248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B24Cu;
        goto label_34b24c;
    }
    ctx->pc = 0x34B244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34B24Cu);
        ctx->pc = 0x34B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B244u;
        // 0x34b248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B244u, 0x34B24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B24Cu;
label_34b24c:
    // 0x34b24c: 0xc0d82aa  jal         func_360AA8
label_34b250:
    if (ctx->pc == 0x34B250u) {
        ctx->pc = 0x34B254u;
        goto label_34b254;
    }
    ctx->pc = 0x34B24Cu;
    SET_GPR_U32(ctx, 31, 0x34B254u);
    ctx->pc = 0x360AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360AA8u, 0x34B24Cu, 0x34B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B254u;
label_34b254:
    // 0x34b254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34b254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b258:
    // 0x34b258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b25c:
    // 0x34b25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34b260:
    // 0x34b260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34b260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b264:
    // 0x34b264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34b264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34b268:
    // 0x34b268: 0x3e00008  jr          $ra
label_34b26c:
    if (ctx->pc == 0x34B26Cu) {
        ctx->pc = 0x34B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B268u;
        // 0x34b26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B270u;
        goto label_fallthrough_0x34b268;
    }
    ctx->pc = 0x34B268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B268u;
        // 0x34b26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34b268:
    ctx->pc = 0x34B270u;
}
