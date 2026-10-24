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

// Function: func_001DC798
// Address: 0x1dc798 - 0x1dc980
void func_001DC798_0x1dc798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DC798_0x1dc798");
#endif

    switch (ctx->pc) {
        case 0x1dc7e4u: goto label_1dc7e4;
        case 0x1dc7fcu: goto label_1dc7fc;
        case 0x1dc83cu: goto label_1dc83c;
        case 0x1dc894u: goto label_1dc894;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc938u: goto label_1dc938;
        default: break;
    }

    ctx->pc = 0x1dc798u;

    // 0x1dc798: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1dc798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1dc79c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1dc79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1dc7a0: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dc7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7a8: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dc7ac: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1dc7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dc7b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc7b4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dc7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dc7b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc7bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dc7c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1dc7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc7c4: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dc7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dc7c8: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dc7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dc7cc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1dc7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1dc7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7d4: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dc7d8: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dc7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dc7dc: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DC7DCu;
    SET_GPR_U32(ctx, 31, 0x1DC7E4u);
    ctx->pc = 0x1DC7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7DCu;
    // 0x1dc7e0: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DC7DCu, 0x1DC7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7E4u;
label_1dc7e4:
    // 0x1dc7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1dc7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dc7ec: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x1dc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x1dc7f0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1dc7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1dc7f4: 0xc076fc6  jal         func_1DBF18
    ctx->pc = 0x1DC7F4u;
    SET_GPR_U32(ctx, 31, 0x1DC7FCu);
    ctx->pc = 0x1DC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7F4u;
    // 0x1dc7f8: 0x27a80046  addiu       $t0, $sp, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBF18u, 0x1DC7F4u, 0x1DC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7FCu;
label_1dc7fc:
    // 0x1dc7fc: 0x97a20040  lhu         $v0, 0x40($sp)
    ctx->pc = 0x1dc7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc800: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc804: 0x10430058  beq         $v0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1DC804u;
    {
        const bool branch_taken_0x1dc804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC804u;
        // 0x1dc808: 0x97a20042  lhu         $v0, 0x42($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc804) {
            ctx->pc = 0x1DC968u;
            goto label_1dc968;
        }
    }
    ctx->pc = 0x1DC80Cu;
    // 0x1dc80c: 0x10430056  beq         $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1DC80Cu;
    {
        const bool branch_taken_0x1dc80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC80Cu;
        // 0x1dc810: 0x97a20044  lhu         $v0, 0x44($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc80c) {
            ctx->pc = 0x1DC968u;
            goto label_1dc968;
        }
    }
    ctx->pc = 0x1DC814u;
    // 0x1dc814: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1DC814u;
    {
        const bool branch_taken_0x1dc814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC814u;
        // 0x1dc818: 0x97a20046  lhu         $v0, 0x46($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc814) {
            ctx->pc = 0x1DC968u;
            goto label_1dc968;
        }
    }
    ctx->pc = 0x1DC81Cu;
    // 0x1dc81c: 0x10430052  beq         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1DC81Cu;
    {
        const bool branch_taken_0x1dc81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC81Cu;
        // 0x1dc820: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc81c) {
            ctx->pc = 0x1DC968u;
            goto label_1dc968;
        }
    }
    ctx->pc = 0x1DC824u;
    // 0x1dc824: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1dc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dc828: 0x2444b4d0  addiu       $a0, $v0, -0x4B30
    ctx->pc = 0x1dc828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948048));
    // 0x1dc82c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1dc82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1dc830: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC830u;
    {
        const bool branch_taken_0x1dc830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC830u;
        // 0x1dc834: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc830) {
            ctx->pc = 0x1DC890u;
            goto label_1dc890;
        }
    }
    ctx->pc = 0x1DC838u;
    // 0x1dc838: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1dc838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1dc83c:
    // 0x1dc83c: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x1dc83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dc840: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x1dc840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dc844: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x1dc844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dc848: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x1dc848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dc84c: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x1dc84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dc850: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x1dc850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dc854: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x1dc854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1dc858: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x1dc858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1dc85c: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1dc85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc860: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1dc860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc864: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x1dc864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc868: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x1dc868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc86c: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x1dc86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc870: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1dc870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc874: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x1dc874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc878: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x1dc878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc87c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc880: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DC880u;
    {
        const bool branch_taken_0x1dc880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC880u;
        // 0x1dc884: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc880) {
            ctx->pc = 0x1DC83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC888u;
    // 0x1dc888: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DC888u;
    {
        const bool branch_taken_0x1dc888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC888u;
        // 0x1dc88c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc888) {
            ctx->pc = 0x1DC8C4u;
            goto label_1dc8c4;
        }
    }
    ctx->pc = 0x1DC890u;
label_1dc890:
    // 0x1dc890: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1dc890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1dc894:
    // 0x1dc894: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1dc894u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc898: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x1dc898u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dc89c: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x1dc89cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc8a0: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x1dc8a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc8a4: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1dc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1dc8a8: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x1dc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x1dc8ac: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x1dc8acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x1dc8b0: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x1dc8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x1dc8b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dc8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc8b8: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DC8B8u;
    {
        const bool branch_taken_0x1dc8b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8B8u;
        // 0x1dc8bc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8b8) {
            ctx->pc = 0x1DC894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc894;
        }
    }
    ctx->pc = 0x1DC8C0u;
    // 0x1dc8c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1dc8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8c4:
    // 0x1dc8c4: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1dc8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dc8c8: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1dc8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dc8cc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1dc8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc8d0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1dc8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc8d4: 0x24c700c8  addiu       $a3, $a2, 0xC8
    ctx->pc = 0x1dc8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 200));
    // 0x1dc8d8: 0x26043004  addiu       $a0, $s0, 0x3004
    ctx->pc = 0x1dc8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1dc8dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1dc8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1dc8e0:
    // 0x1dc8e0: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x1dc8e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc8e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc8e8: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC8E8u;
    {
        const bool branch_taken_0x1dc8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc8e8) {
            ctx->pc = 0x1DC8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC8E8u;
            // 0x1dc8ec: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC8F0u;
    // 0x1dc8f0: 0x97a30022  lhu         $v1, 0x22($sp)
    ctx->pc = 0x1dc8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x1dc8f4: 0x8ca2fff4  lw          $v0, -0xC($a1)
    ctx->pc = 0x1dc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x1dc8f8: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DC8F8u;
    {
        const bool branch_taken_0x1dc8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc8f8) {
            ctx->pc = 0x1DC8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC8F8u;
            // 0x1dc8fc: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC900u;
    // 0x1dc900: 0x97a30024  lhu         $v1, 0x24($sp)
    ctx->pc = 0x1dc900u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1dc904: 0x8ca2fff8  lw          $v0, -0x8($a1)
    ctx->pc = 0x1dc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x1dc908: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DC908u;
    {
        const bool branch_taken_0x1dc908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc908) {
            ctx->pc = 0x1DC90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC908u;
            // 0x1dc90c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC910u;
    // 0x1dc910: 0x97a30026  lhu         $v1, 0x26($sp)
    ctx->pc = 0x1dc910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 38)));
    // 0x1dc914: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1dc918: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DC918u;
    {
        const bool branch_taken_0x1dc918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc918) {
            ctx->pc = 0x1DC91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC918u;
            // 0x1dc91c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC920u;
    // 0x1dc920: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x1dc920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dc924: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dc924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dc928: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC928u;
    {
        const bool branch_taken_0x1dc928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc928) {
            ctx->pc = 0x1DC92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC928u;
            // 0x1dc92c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC930u;
    // 0x1dc930: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dc930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc934: 0x0  nop
    ctx->pc = 0x1dc934u;
    // NOP
label_1dc938:
    // 0x1dc938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc93c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc940: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dc940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dc944: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc948: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dc948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dc94c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC94Cu;
    {
        const bool branch_taken_0x1dc94c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC94Cu;
        // 0x1dc950: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc94c) {
            ctx->pc = 0x1DC938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc938;
        }
    }
    ctx->pc = 0x1DC954u;
    // 0x1dc954: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC954u;
    {
        const bool branch_taken_0x1dc954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC954u;
        // 0x1dc958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc954) {
            ctx->pc = 0x1DC96Cu;
            goto label_1dc96c;
        }
    }
    ctx->pc = 0x1DC95Cu;
label_1dc95c:
    // 0x1dc95c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1dc95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1dc960: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DC960u;
    {
        const bool branch_taken_0x1dc960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC960u;
        // 0x1dc964: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc960) {
            ctx->pc = 0x1DC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc8e0;
        }
    }
    ctx->pc = 0x1DC968u;
label_1dc968:
    // 0x1dc968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc96c:
    // 0x1dc96c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1dc96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1dc970: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1dc970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dc974: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC974u;
        // 0x1dc978: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC97Cu;
    // 0x1dc97c: 0x0  nop
    ctx->pc = 0x1dc97cu;
    // NOP
    ctx->pc = 0x1dc980u;
}
