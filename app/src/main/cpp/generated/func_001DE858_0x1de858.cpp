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

// Function: func_001DE858
// Address: 0x1de858 - 0x1dea50
void func_001DE858_0x1de858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE858_0x1de858");
#endif

    switch (ctx->pc) {
        case 0x1de8e8u: goto label_1de8e8;
        case 0x1de900u: goto label_1de900;
        case 0x1de918u: goto label_1de918;
        case 0x1de924u: goto label_1de924;
        case 0x1de934u: goto label_1de934;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea20u: goto label_1dea20;
        default: break;
    }

    ctx->pc = 0x1de858u;

    // 0x1de858: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1de85c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1de860: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1de860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1de864: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1de864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1de868: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1de868u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de86c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1de86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1de870: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1de870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de874: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1de874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1de878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1de878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de87c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1de87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1de880: 0x2412007c  addiu       $s2, $zero, 0x7C
    ctx->pc = 0x1de880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1de884: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1de884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1de888: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x1de888u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de88c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1de88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1de890: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1de890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1de894: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1de894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1de898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1de898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1de89c: 0x2447b698  addiu       $a3, $v0, -0x4968
    ctx->pc = 0x1de89cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948504));
    // 0x1de8a0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1de8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de8a4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1de8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de8a8: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x1de8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1de8ac: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x1de8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1de8b0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1de8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1de8b4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1de8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1de8b8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1de8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8bc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1de8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8c0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1de8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8c4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1de8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8c8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1de8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8cc: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1de8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8d0: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x1de8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1de8d4: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x1de8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1de8d8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1de8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8dc: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1de8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de8e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1de8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de8e4: 0x0  nop
    ctx->pc = 0x1de8e4u;
    // NOP
label_1de8e8:
    // 0x1de8e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1de8ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1de8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1de8f0: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x1de8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1de8f4: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1de8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1de8f8: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DE8F8u;
    SET_GPR_U32(ctx, 31, 0x1DE900u);
    ctx->pc = 0x1DE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8F8u;
    // 0x1de8fc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DE8F8u, 0x1DE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE900u;
label_1de900:
    // 0x1de900: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1de900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1de904: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DE904u;
    {
        const bool branch_taken_0x1de904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de904) {
            ctx->pc = 0x1DE908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE904u;
            // 0x1de908: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de8e8;
        }
    }
    ctx->pc = 0x1DE90Cu;
    // 0x1de90c: 0x26b60df0  addiu       $s6, $s5, 0xDF0
    ctx->pc = 0x1de90cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 3568));
    // 0x1de910: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1DE910u;
    SET_GPR_U32(ctx, 31, 0x1DE918u);
    ctx->pc = 0x1DE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE910u;
    // 0x1de914: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1DE910u, 0x1DE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE918u;
label_1de918:
    // 0x1de918: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1de918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de91c: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DE91Cu;
    SET_GPR_U32(ctx, 31, 0x1DE924u);
    ctx->pc = 0x1DE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE91Cu;
    // 0x1de920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DE91Cu, 0x1DE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE924u;
label_1de924:
    // 0x1de924: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de928: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1de928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1de92c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DE92Cu;
    SET_GPR_U32(ctx, 31, 0x1DE934u);
    ctx->pc = 0x1DE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE92Cu;
    // 0x1de930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DE92Cu, 0x1DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE934u;
label_1de934:
    // 0x1de934: 0x2ee20008  sltiu       $v0, $s7, 0x8
    ctx->pc = 0x1de934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1de938: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DE938u;
    {
        const bool branch_taken_0x1de938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE938u;
        // 0x1de93c: 0x2410ff00  addiu       $s0, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de938) {
            ctx->pc = 0x1DEA20u;
            goto label_1dea20;
        }
    }
    ctx->pc = 0x1DE940u;
    // 0x1de940: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1de944: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1de944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1de948: 0x2702824  and         $a1, $s3, $s0
    ctx->pc = 0x1de948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x1de94c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1de94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de950: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x1de950u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x1de954: 0x367300ff  ori         $s3, $s3, 0xFF
    ctx->pc = 0x1de954u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)255);
    // 0x1de958: 0x34a500e1  ori         $a1, $a1, 0xE1
    ctx->pc = 0x1de958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)225);
    // 0x1de95c: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x1de95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1de960: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x1de960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x1de964: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1de964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1de968: 0x3c11ff00  lui         $s1, 0xFF00
    ctx->pc = 0x1de968u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65280 << 16));
    // 0x1de96c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1de96cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1de970: 0x34a55100  ori         $a1, $a1, 0x5100
    ctx->pc = 0x1de970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20736);
    // 0x1de974: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1de974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1de978: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x1de978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x1de97c: 0x3c1200ff  lui         $s2, 0xFF
    ctx->pc = 0x1de97cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)255 << 16));
    // 0x1de980: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1de980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1de984: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1de984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x1de988: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1de988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1de98c: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x1de98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x1de990: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1de990u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x1de994: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x1de994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x1de998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de99c: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1DE99Cu;
    SET_GPR_U32(ctx, 31, 0x1DE9A4u);
    ctx->pc = 0x1DE9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE99Cu;
    // 0x1de9a0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1DE99Cu, 0x1DE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9A4u;
label_1de9a4:
    // 0x1de9a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1de9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de9a8: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1de9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1de9ac: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x1de9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x1de9b0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de9b4: 0x503024  and         $a2, $v0, $s0
    ctx->pc = 0x1de9b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1de9b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1de9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9bc: 0x3d08024  and         $s0, $fp, $s0
    ctx->pc = 0x1de9bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 16));
    // 0x1de9c0: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1de9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1de9c4: 0x36100060  ori         $s0, $s0, 0x60
    ctx->pc = 0x1de9c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)96);
    // 0x1de9c8: 0xd33024  and         $a2, $a2, $s3
    ctx->pc = 0x1de9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 19));
    // 0x1de9cc: 0x2138024  and         $s0, $s0, $s3
    ctx->pc = 0x1de9ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x1de9d0: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1de9d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1de9d4: 0x36106000  ori         $s0, $s0, 0x6000
    ctx->pc = 0x1de9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)24576);
    // 0x1de9d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1de9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1de9dc: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x1de9dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x1de9e0: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x1de9e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x1de9e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1de9e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1de9e8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1de9e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1de9ec: 0x2128024  and         $s0, $s0, $s2
    ctx->pc = 0x1de9ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x1de9f0: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x1de9f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x1de9f4: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x1de9f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x1de9f8: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1DE9F8u;
    SET_GPR_U32(ctx, 31, 0x1DEA00u);
    ctx->pc = 0x1DE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE9F8u;
    // 0x1de9fc: 0x2052825  or          $a1, $s0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1DE9F8u, 0x1DEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA00u;
label_1dea00:
    // 0x1dea00: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1dea04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dea04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea08: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1DEA08u;
    SET_GPR_U32(ctx, 31, 0x1DEA10u);
    ctx->pc = 0x1DEA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA08u;
    // 0x1dea0c: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1DEA08u, 0x1DEA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA10u;
label_1dea10:
    // 0x1dea10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea14: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1dea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1dea18: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DEA18u;
    SET_GPR_U32(ctx, 31, 0x1DEA20u);
    ctx->pc = 0x1DEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA18u;
    // 0x1dea1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DEA18u, 0x1DEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA20u;
label_1dea20:
    // 0x1dea20: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1dea20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dea24: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1dea24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dea28: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1dea28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dea2c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1dea2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dea30: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1dea30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dea34: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1dea34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dea38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dea38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dea3c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1dea3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dea40: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1dea40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dea44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dea44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dea48: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA48u;
        // 0x1dea4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA50u;
}
