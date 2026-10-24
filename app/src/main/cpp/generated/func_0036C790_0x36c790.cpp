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

// Function: func_0036C790
// Address: 0x36c790 - 0x36c8d0
void func_0036C790_0x36c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C790_0x36c790");
#endif

    switch (ctx->pc) {
        case 0x36c7acu: goto label_36c7ac;
        case 0x36c7b8u: goto label_36c7b8;
        case 0x36c7ccu: goto label_36c7cc;
        case 0x36c7dcu: goto label_36c7dc;
        case 0x36c7f0u: goto label_36c7f0;
        case 0x36c854u: goto label_36c854;
        default: break;
    }

    ctx->pc = 0x36c790u;

    // 0x36c790: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36c794: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x36c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x36c798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c79c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x36c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x36c7a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x36c7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7a4: 0xc0db39a  jal         func_36CE68
    ctx->pc = 0x36C7A4u;
    SET_GPR_U32(ctx, 31, 0x36C7ACu);
    ctx->pc = 0x36C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7A4u;
    // 0x36c7a8: 0x8e0403b4  lw          $a0, 0x3B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE68u, 0x36C7A4u, 0x36C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7ACu;
label_36c7ac:
    // 0x36c7ac: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x36c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x36c7b0: 0xc0db3a4  jal         func_36CE90
    ctx->pc = 0x36C7B0u;
    SET_GPR_U32(ctx, 31, 0x36C7B8u);
    ctx->pc = 0x36C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7B0u;
    // 0x36c7b4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE90u, 0x36C7B0u, 0x36C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7B8u;
label_36c7b8:
    // 0x36c7b8: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x36c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x36c7bc: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x36c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x36c7c0: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x36c7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x36c7c4: 0xc0db3ae  jal         func_36CEB8
    ctx->pc = 0x36C7C4u;
    SET_GPR_U32(ctx, 31, 0x36C7CCu);
    ctx->pc = 0x36C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7C4u;
    // 0x36c7c8: 0x27a7008c  addiu       $a3, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CEB8u, 0x36C7C4u, 0x36C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7CCu;
label_36c7cc:
    // 0x36c7cc: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x36c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x36c7d0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x36c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c7d4: 0xc0db3b8  jal         func_36CEE0
    ctx->pc = 0x36C7D4u;
    SET_GPR_U32(ctx, 31, 0x36C7DCu);
    ctx->pc = 0x36C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7D4u;
    // 0x36c7d8: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CEE0u, 0x36C7D4u, 0x36C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7DCu;
label_36c7dc:
    // 0x36c7dc: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x36c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x36c7e0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x36c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x36c7e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36C7E4u;
    {
        const bool branch_taken_0x36c7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7E4u;
        // 0x36c7e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c7e4) {
            ctx->pc = 0x36C850u;
            goto label_36c850;
        }
    }
    ctx->pc = 0x36C7ECu;
    // 0x36c7ec: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x36c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_36c7f0:
    // 0x36c7f0: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x36c7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36c7f4: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x36c7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36c7f8: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x36c7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36c7fc: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x36c7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36c800: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x36c800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x36c804: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x36c804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x36c808: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x36c808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x36c80c: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x36c80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x36c810: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x36c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c814: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x36c814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c818: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x36c818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c81c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x36c81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c820: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x36c820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c824: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x36c824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c828: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x36c828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c82c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x36c82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36c830: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x36c830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x36c834: 0x0  nop
    ctx->pc = 0x36c834u;
    // NOP
    // 0x36c838: 0x0  nop
    ctx->pc = 0x36c838u;
    // NOP
    // 0x36c83c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x36C83Cu;
    {
        const bool branch_taken_0x36c83c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C83Cu;
        // 0x36c840: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c83c) {
            ctx->pc = 0x36C7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c7f0;
        }
    }
    ctx->pc = 0x36C844u;
    // 0x36c844: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x36C844u;
    {
        const bool branch_taken_0x36c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C844u;
        // 0x36c848: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c844) {
            ctx->pc = 0x36C88Cu;
            goto label_36c88c;
        }
    }
    ctx->pc = 0x36C84Cu;
    // 0x36c84c: 0x0  nop
    ctx->pc = 0x36c84cu;
    // NOP
label_36c850:
    // 0x36c850: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x36c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_36c854:
    // 0x36c854: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x36c854u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c858: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x36c858u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36c85c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x36c85cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36c860: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x36c860u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36c864: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x36c864u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x36c868: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x36c868u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x36c86c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x36c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x36c870: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x36c870u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x36c874: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x36c874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x36c878: 0x0  nop
    ctx->pc = 0x36c878u;
    // NOP
    // 0x36c87c: 0x0  nop
    ctx->pc = 0x36c87cu;
    // NOP
    // 0x36c880: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x36C880u;
    {
        const bool branch_taken_0x36c880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C880u;
        // 0x36c884: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c880) {
            ctx->pc = 0x36C854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c854;
        }
    }
    ctx->pc = 0x36C888u;
    // 0x36c888: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x36c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_36c88c:
    // 0x36c88c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x36c88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36c890: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x36c890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x36c894: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x36c894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36c898: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x36c898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36c89c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x36c89cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x36c8a0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x36c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36c8a4: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x36c8a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x36c8a8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x36c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x36c8ac: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x36c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c8b0: 0xae0602a8  sw          $a2, 0x2A8($s0)
    ctx->pc = 0x36c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 6));
    // 0x36c8b4: 0xae0302b8  sw          $v1, 0x2B8($s0)
    ctx->pc = 0x36c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 3));
    // 0x36c8b8: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x36c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x36c8bc: 0xae0502bc  sw          $a1, 0x2BC($s0)
    ctx->pc = 0x36c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 5));
    // 0x36c8c0: 0xae0402b4  sw          $a0, 0x2B4($s0)
    ctx->pc = 0x36c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 4));
    // 0x36c8c4: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x36c8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8C8u;
        // 0x36c8cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C8D0u;
}
