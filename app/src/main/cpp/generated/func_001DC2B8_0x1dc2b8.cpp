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

// Function: func_001DC2B8
// Address: 0x1dc2b8 - 0x1dc4c0
void func_001DC2B8_0x1dc2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DC2B8_0x1dc2b8");
#endif

    switch (ctx->pc) {
        case 0x1dc304u: goto label_1dc304;
        case 0x1dc31cu: goto label_1dc31c;
        case 0x1dc360u: goto label_1dc360;
        case 0x1dc3b8u: goto label_1dc3b8;
        case 0x1dc420u: goto label_1dc420;
        case 0x1dc478u: goto label_1dc478;
        default: break;
    }

    ctx->pc = 0x1dc2b8u;

    // 0x1dc2b8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1dc2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1dc2bc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1dc2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1dc2c0: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dc2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2c8: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dc2cc: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dc2d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc2d4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dc2d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc2dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dc2e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1dc2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc2e4: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dc2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dc2e8: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dc2ec: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1dc2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1dc2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2f4: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dc2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dc2f8: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dc2fc: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DC2FCu;
    SET_GPR_U32(ctx, 31, 0x1DC304u);
    ctx->pc = 0x1DC300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC2FCu;
    // 0x1dc300: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DC2FCu, 0x1DC304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC304u;
label_1dc304:
    // 0x1dc304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc308: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1dc308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dc30c: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x1dc310: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1dc314: 0xc076fc6  jal         func_1DBF18
    ctx->pc = 0x1DC314u;
    SET_GPR_U32(ctx, 31, 0x1DC31Cu);
    ctx->pc = 0x1DC318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC314u;
    // 0x1dc318: 0x27a80046  addiu       $t0, $sp, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBF18u, 0x1DC314u, 0x1DC31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC31Cu;
label_1dc31c:
    // 0x1dc31c: 0x97a20040  lhu         $v0, 0x40($sp)
    ctx->pc = 0x1dc31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc320: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc324: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC324u;
    {
        const bool branch_taken_0x1dc324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC324u;
        // 0x1dc328: 0x97a20042  lhu         $v0, 0x42($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc324) {
            ctx->pc = 0x1DC344u;
            goto label_1dc344;
        }
    }
    ctx->pc = 0x1DC32Cu;
    // 0x1dc32c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC32Cu;
    {
        const bool branch_taken_0x1dc32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC32Cu;
        // 0x1dc330: 0x97a20044  lhu         $v0, 0x44($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc32c) {
            ctx->pc = 0x1DC344u;
            goto label_1dc344;
        }
    }
    ctx->pc = 0x1DC334u;
    // 0x1dc334: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC334u;
    {
        const bool branch_taken_0x1dc334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC334u;
        // 0x1dc338: 0x97a20046  lhu         $v0, 0x46($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc334) {
            ctx->pc = 0x1DC344u;
            goto label_1dc344;
        }
    }
    ctx->pc = 0x1DC33Cu;
    // 0x1dc33c: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1DC33Cu;
    {
        const bool branch_taken_0x1dc33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC33Cu;
        // 0x1dc340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc33c) {
            ctx->pc = 0x1DC4ACu;
            goto label_1dc4ac;
        }
    }
    ctx->pc = 0x1DC344u;
label_1dc344:
    // 0x1dc344: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1dc348: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dc34c: 0x2444b418  addiu       $a0, $v0, -0x4BE8
    ctx->pc = 0x1dc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947864));
    // 0x1dc350: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1dc350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1dc354: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC354u;
    {
        const bool branch_taken_0x1dc354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC354u;
        // 0x1dc358: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc354) {
            ctx->pc = 0x1DC3B4u;
            goto label_1dc3b4;
        }
    }
    ctx->pc = 0x1DC35Cu;
    // 0x1dc35c: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x1dc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_1dc360:
    // 0x1dc360: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x1dc360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dc364: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x1dc364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dc368: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x1dc368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dc36c: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x1dc36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dc370: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x1dc370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dc374: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x1dc374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dc378: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x1dc378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1dc37c: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x1dc37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1dc380: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1dc380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc384: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1dc384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc388: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x1dc388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc38c: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x1dc38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc390: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x1dc390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc394: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1dc394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc398: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x1dc398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc39c: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x1dc39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc3a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc3a4: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DC3A4u;
    {
        const bool branch_taken_0x1dc3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A4u;
        // 0x1dc3a8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3a4) {
            ctx->pc = 0x1DC360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc360;
        }
    }
    ctx->pc = 0x1DC3ACu;
    // 0x1dc3ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DC3ACu;
    {
        const bool branch_taken_0x1dc3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3ACu;
        // 0x1dc3b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3ac) {
            ctx->pc = 0x1DC3E8u;
            goto label_1dc3e8;
        }
    }
    ctx->pc = 0x1DC3B4u;
label_1dc3b4:
    // 0x1dc3b4: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x1dc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_1dc3b8:
    // 0x1dc3b8: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1dc3b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc3bc: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x1dc3bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dc3c0: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x1dc3c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc3c4: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x1dc3c4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc3c8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1dc3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1dc3cc: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x1dc3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x1dc3d0: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x1dc3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x1dc3d4: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x1dc3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x1dc3d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1dc3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc3dc: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DC3DCu;
    {
        const bool branch_taken_0x1dc3dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3DCu;
        // 0x1dc3e0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3dc) {
            ctx->pc = 0x1DC3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc3b8;
        }
    }
    ctx->pc = 0x1DC3E4u;
    // 0x1dc3e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1dc3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dc3e8:
    // 0x1dc3e8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1dc3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dc3ec: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1dc3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dc3f0: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x1dc3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1dc3f4: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x1dc3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1dc3f8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc3fc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1dc3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc400: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1dc400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc404: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x1dc404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc408: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x1dc408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dc40c: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x1dc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x1dc410: 0x24c700b4  addiu       $a3, $a2, 0xB4
    ctx->pc = 0x1dc410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 180));
    // 0x1dc414: 0x26043004  addiu       $a0, $s0, 0x3004
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1dc418: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc41c: 0x0  nop
    ctx->pc = 0x1dc41cu;
    // NOP
label_1dc420:
    // 0x1dc420: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x1dc420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dc424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc428: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC428u;
    {
        const bool branch_taken_0x1dc428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc428) {
            ctx->pc = 0x1DC42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC428u;
            // 0x1dc42c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC49Cu;
            goto label_1dc49c;
        }
    }
    ctx->pc = 0x1DC430u;
    // 0x1dc430: 0x97a30022  lhu         $v1, 0x22($sp)
    ctx->pc = 0x1dc430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x1dc434: 0x8ca2fff4  lw          $v0, -0xC($a1)
    ctx->pc = 0x1dc434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x1dc438: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DC438u;
    {
        const bool branch_taken_0x1dc438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc438) {
            ctx->pc = 0x1DC43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC438u;
            // 0x1dc43c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC49Cu;
            goto label_1dc49c;
        }
    }
    ctx->pc = 0x1DC440u;
    // 0x1dc440: 0x97a30024  lhu         $v1, 0x24($sp)
    ctx->pc = 0x1dc440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1dc444: 0x8ca2fff8  lw          $v0, -0x8($a1)
    ctx->pc = 0x1dc444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x1dc448: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DC448u;
    {
        const bool branch_taken_0x1dc448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc448) {
            ctx->pc = 0x1DC44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC448u;
            // 0x1dc44c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC49Cu;
            goto label_1dc49c;
        }
    }
    ctx->pc = 0x1DC450u;
    // 0x1dc450: 0x97a30026  lhu         $v1, 0x26($sp)
    ctx->pc = 0x1dc450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 38)));
    // 0x1dc454: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x1dc454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x1dc458: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DC458u;
    {
        const bool branch_taken_0x1dc458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc458) {
            ctx->pc = 0x1DC45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC458u;
            // 0x1dc45c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC49Cu;
            goto label_1dc49c;
        }
    }
    ctx->pc = 0x1DC460u;
    // 0x1dc460: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x1dc460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dc464: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dc468: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC468u;
    {
        const bool branch_taken_0x1dc468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc468) {
            ctx->pc = 0x1DC46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC468u;
            // 0x1dc46c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC49Cu;
            goto label_1dc49c;
        }
    }
    ctx->pc = 0x1DC470u;
    // 0x1dc470: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc474: 0x0  nop
    ctx->pc = 0x1dc474u;
    // NOP
label_1dc478:
    // 0x1dc478: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc47c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc480: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dc484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dc484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc488: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dc488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dc48c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC48Cu;
    {
        const bool branch_taken_0x1dc48c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC48Cu;
        // 0x1dc490: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc48c) {
            ctx->pc = 0x1DC478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc478;
        }
    }
    ctx->pc = 0x1DC494u;
    // 0x1dc494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC494u;
    {
        const bool branch_taken_0x1dc494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC494u;
        // 0x1dc498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc494) {
            ctx->pc = 0x1DC4ACu;
            goto label_1dc4ac;
        }
    }
    ctx->pc = 0x1DC49Cu;
label_1dc49c:
    // 0x1dc49c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1dc49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1dc4a0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DC4A0u;
    {
        const bool branch_taken_0x1dc4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4A0u;
        // 0x1dc4a4: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4a0) {
            ctx->pc = 0x1DC420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc420;
        }
    }
    ctx->pc = 0x1DC4A8u;
    // 0x1dc4a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4ac:
    // 0x1dc4ac: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1dc4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dc4b0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1dc4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1dc4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4B4u;
        // 0x1dc4b8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4BCu;
    // 0x1dc4bc: 0x0  nop
    ctx->pc = 0x1dc4bcu;
    // NOP
    ctx->pc = 0x1dc4c0u;
}
