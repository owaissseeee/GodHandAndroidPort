#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079B6A0
// Address: 0x79b6a0 - 0x79b7f8
void func_0079B6A0_0x79b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B6A0_0x79b6a0");
#endif

    switch (ctx->pc) {
        case 0x79b760u: goto label_79b760;
        case 0x79b76cu: goto label_79b76c;
        case 0x79b790u: goto label_79b790;
        case 0x79b7a8u: goto label_79b7a8;
        case 0x79b7b4u: goto label_79b7b4;
        case 0x79b7c8u: goto label_79b7c8;
        default: break;
    }

    ctx->pc = 0x79b6a0u;

    // 0x79b6a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x79b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79b6a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b6a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b6ac: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b6acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b6b0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79b6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b6b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79b6b8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x79b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b6bc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x79b6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79b6c0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x79b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79b6c4: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x79b6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79b6c8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x79b6c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x79b6cc: 0x240c0011  addiu       $t4, $zero, 0x11
    ctx->pc = 0x79b6ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79b6d0: 0x27ad0020  addiu       $t5, $sp, 0x20
    ctx->pc = 0x79b6d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b6d4: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x79b6d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b6d8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x79b6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b6dc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x79b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b6e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x79b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79b6e4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x79b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79b6e8: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79b6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b6ec: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x79b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x79b6f0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x79b6f4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x79b6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x79b6f8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x79b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x79b6fc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x79b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x79b700: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x79b700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x79b704: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x79b704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x79b708: 0xa3a80050  sb          $t0, 0x50($sp)
    ctx->pc = 0x79b708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 8));
    // 0x79b70c: 0xa3aa0060  sb          $t2, 0x60($sp)
    ctx->pc = 0x79b70cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 10));
    // 0x79b710: 0xa3ac0070  sb          $t4, 0x70($sp)
    ctx->pc = 0x79b710u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 12));
    // 0x79b714: 0xafad00a0  sw          $t5, 0xA0($sp)
    ctx->pc = 0x79b714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 13));
    // 0x79b718: 0xafab00a4  sw          $t3, 0xA4($sp)
    ctx->pc = 0x79b718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 11));
    // 0x79b71c: 0xafa900a8  sw          $t1, 0xA8($sp)
    ctx->pc = 0x79b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
    // 0x79b720: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x79b720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
    // 0x79b724: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x79b724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x79b728: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x79b728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b72c: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x79b72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b730: 0x6ba300af  ldl         $v1, 0xAF($sp)
    ctx->pc = 0x79b730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79b734: 0x6fa300a8  ldr         $v1, 0xA8($sp)
    ctx->pc = 0x79b734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79b738: 0x6ba500b7  ldl         $a1, 0xB7($sp)
    ctx->pc = 0x79b738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79b73c: 0x6fa500b0  ldr         $a1, 0xB0($sp)
    ctx->pc = 0x79b73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79b740: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x79b740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b744: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x79b744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b748: 0xb3a3008f  sdl         $v1, 0x8F($sp)
    ctx->pc = 0x79b748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b74c: 0xb7a30088  sdr         $v1, 0x88($sp)
    ctx->pc = 0x79b74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b750: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x79b750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b754: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x79b754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b758: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B758u;
    SET_GPR_U32(ctx, 31, 0x79B760u);
    ctx->pc = 0x79B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B758u;
    // 0x79b75c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B758u, 0x79B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B760u;
label_79b760:
    // 0x79b760: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x79b760u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79b764: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B764u;
    SET_GPR_U32(ctx, 31, 0x79B76Cu);
    ctx->pc = 0x79B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B764u;
    // 0x79b768: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B764u, 0x79B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B76Cu;
label_79b76c:
    // 0x79b76c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79b770: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x79b770u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x79b774: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79B774u;
    {
        const bool branch_taken_0x79b774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B774u;
        // 0x79b778: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b774) {
            ctx->pc = 0x79B7DCu;
            goto label_79b7dc;
        }
    }
    ctx->pc = 0x79B77Cu;
    // 0x79b77c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79b780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b784: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79b784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b788: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B788u;
    SET_GPR_U32(ctx, 31, 0x79B790u);
    ctx->pc = 0x79B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B788u;
    // 0x79b78c: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B788u, 0x79B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B790u;
label_79b790:
    // 0x79b790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b794: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B794u;
    {
        const bool branch_taken_0x79b794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B794u;
        // 0x79b798: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b794) {
            ctx->pc = 0x79B7D8u;
            goto label_79b7d8;
        }
    }
    ctx->pc = 0x79B79Cu;
    // 0x79b79c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79B79Cu;
    {
        const bool branch_taken_0x79b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B79Cu;
        // 0x79b7a0: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b79c) {
            ctx->pc = 0x79B7BCu;
            goto label_79b7bc;
        }
    }
    ctx->pc = 0x79B7A4u;
    // 0x79b7a4: 0x0  nop
    ctx->pc = 0x79b7a4u;
    // NOP
label_79b7a8:
    // 0x79b7a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79b7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79b7ac: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B7ACu;
    SET_GPR_U32(ctx, 31, 0x79B7B4u);
    ctx->pc = 0x79B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7ACu;
    // 0x79b7b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B7ACu, 0x79B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7B4u;
label_79b7b4:
    // 0x79b7b4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79b7b8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x79b7b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_79b7bc:
    // 0x79b7bc: 0x26648658  addiu       $a0, $s3, -0x79A8
    ctx->pc = 0x79b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
    // 0x79b7c0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B7C0u;
    SET_GPR_U32(ctx, 31, 0x79B7C8u);
    ctx->pc = 0x79B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7C0u;
    // 0x79b7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B7C0u, 0x79B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7C8u;
label_79b7c8:
    // 0x79b7c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b7cc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x79b7ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79b7d0: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x79B7D0u;
    {
        const bool branch_taken_0x79b7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b7d0) {
            ctx->pc = 0x79B7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B7D0u;
            // 0x79b7d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7a8;
        }
    }
    ctx->pc = 0x79B7D8u;
label_79b7d8:
    // 0x79b7d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x79b7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b7dc:
    // 0x79b7dc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79b7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79b7e0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79b7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b7e4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79b7e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b7e8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79b7e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b7ec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x79b7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7F0u;
        // 0x79b7f4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B7F8u;
}
} // namespace gh_r201
