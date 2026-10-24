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

// Function: _sceSifLoadModuleBuffer
// Address: 0x3b5c48 - 0x3b5e50
void _sceSifLoadModuleBuffer_0x3b5c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSifLoadModuleBuffer_0x3b5c48");
#endif

    switch (ctx->pc) {
        case 0x3b5c80u: goto label_3b5c80;
        case 0x3b5c90u: goto label_3b5c90;
        case 0x3b5cdcu: goto label_3b5cdc;
        case 0x3b5d40u: goto label_3b5d40;
        case 0x3b5dd0u: goto label_3b5dd0;
        case 0x3b5e0cu: goto label_3b5e0c;
        default: break;
    }

    ctx->pc = 0x3b5c48u;

    // 0x3b5c48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b5c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b5c4c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3b5c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3b5c50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3b5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3b5c54: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3b5c54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c58: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3b5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3b5c5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b5c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b5c64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b5c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b5c6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b5c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5c70: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3b5c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x3b5c74: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3b5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3b5c78: 0xc0ed6a0  jal         func_3B5A80
    ctx->pc = 0x3B5C78u;
    SET_GPR_U32(ctx, 31, 0x3B5C80u);
    ctx->pc = 0x3B5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5C78u;
    // 0x3b5c7c: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A80u, 0x3B5C78u, 0x3B5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C80u;
label_3b5c80:
    // 0x3b5c80: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x3B5C80u;
    {
        const bool branch_taken_0x3b5c80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C80u;
        // 0x3b5c84: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c80) {
            ctx->pc = 0x3B5E28u;
            goto label_3b5e28;
        }
    }
    ctx->pc = 0x3B5C88u;
    // 0x3b5c88: 0xc0ed6e0  jal         func_3B5B80
    ctx->pc = 0x3B5C88u;
    SET_GPR_U32(ctx, 31, 0x3B5C90u);
    ctx->pc = 0x3B5B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B80u, 0x3B5C88u, 0x3B5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5C90u;
label_3b5c90:
    // 0x3b5c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5C90u;
    {
        const bool branch_taken_0x3b5c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C90u;
        // 0x3b5c94: 0x3c140078  lui         $s4, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c90) {
            ctx->pc = 0x3B5CA4u;
            goto label_3b5ca4;
        }
    }
    ctx->pc = 0x3B5C98u;
    // 0x3b5c98: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b5c9c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x3B5C9Cu;
    {
        const bool branch_taken_0x3b5c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C9Cu;
        // 0x3b5ca0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c9c) {
            ctx->pc = 0x3B5E28u;
            goto label_3b5e28;
        }
    }
    ctx->pc = 0x3B5CA4u;
label_3b5ca4:
    // 0x3b5ca4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3b5ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ca8: 0x26921980  addiu       $s2, $s4, 0x1980
    ctx->pc = 0x3b5ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 6528));
    // 0x3b5cac: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3B5CACu;
    {
        const bool branch_taken_0x3b5cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CACu;
        // 0x3b5cb0: 0xae931980  sw          $s3, 0x1980($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6528), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5cac) {
            ctx->pc = 0x3B5DD8u;
            goto label_3b5dd8;
        }
    }
    ctx->pc = 0x3B5CB4u;
    // 0x3b5cb4: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x3b5cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x3b5cb8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3B5CB8u;
    {
        const bool branch_taken_0x3b5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CB8u;
        // 0x3b5cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5cb8) {
            ctx->pc = 0x3B5DC4u;
            goto label_3b5dc4;
        }
    }
    ctx->pc = 0x3B5CC0u;
    // 0x3b5cc0: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x3b5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x3b5cc4: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x3b5cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x3b5cc8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3b5cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3b5ccc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B5CCCu;
    {
        const bool branch_taken_0x3b5ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5CCCu;
        // 0x3b5cd0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ccc) {
            ctx->pc = 0x3B5D38u;
            goto label_3b5d38;
        }
    }
    ctx->pc = 0x3B5CD4u;
    // 0x3b5cd4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x3b5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3b5cd8: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
label_3b5cdc:
    // 0x3b5cdc: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3b5cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b5ce0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3b5ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b5ce4: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x3b5ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b5ce8: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x3b5ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b5cec: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x3b5cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b5cf0: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x3b5cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b5cf4: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x3b5cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3b5cf8: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x3b5cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3b5cfc: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x3b5cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d00: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x3b5d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d04: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x3b5d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d08: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x3b5d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d0c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x3b5d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d10: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x3b5d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d14: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x3b5d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d18: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x3b5d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d1c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3b5d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3b5d20: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b5d24: 0x0  nop
    ctx->pc = 0x3b5d24u;
    // NOP
    // 0x3b5d28: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3B5D28u;
    {
        const bool branch_taken_0x3b5d28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5d28) {
            ctx->pc = 0x3B5CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5cdc;
        }
    }
    ctx->pc = 0x3B5D30u;
    // 0x3b5d30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B5D30u;
    {
        const bool branch_taken_0x3b5d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5d30) {
            ctx->pc = 0x3B5D74u;
            goto label_3b5d74;
        }
    }
    ctx->pc = 0x3B5D38u;
label_3b5d38:
    // 0x3b5d38: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x3b5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3b5d3c: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b5d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
label_3b5d40:
    // 0x3b5d40: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x3b5d40u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b5d44: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x3b5d44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3b5d48: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x3b5d48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3b5d4c: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x3b5d4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3b5d50: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x3b5d50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x3b5d54: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x3b5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x3b5d58: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x3b5d58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x3b5d5c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x3b5d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x3b5d60: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3b5d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3b5d64: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b5d68: 0x0  nop
    ctx->pc = 0x3b5d68u;
    // NOP
    // 0x3b5d6c: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B5D6Cu;
    {
        const bool branch_taken_0x3b5d6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5d6c) {
            ctx->pc = 0x3B5D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5d40;
        }
    }
    ctx->pc = 0x3B5D74u;
label_3b5d74:
    // 0x3b5d74: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x3b5d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3b5d78: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x3b5d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3b5d7c: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x3b5d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3b5d80: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x3b5d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3b5d84: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x3b5d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b5d88: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x3b5d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b5d8c: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x3b5d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x3b5d90: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x3b5d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x3b5d94: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x3b5d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d98: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x3b5d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5d9c: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x3b5d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5da0: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x3b5da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5da4: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x3b5da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5da8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x3b5da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b5dac: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x3b5dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b5db0: 0x26a31980  addiu       $v1, $s5, 0x1980
    ctx->pc = 0x3b5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6528));
    // 0x3b5db4: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x3b5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3b5db8: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x3b5db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b5dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B5DBCu;
    {
        const bool branch_taken_0x3b5dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5DBCu;
        // 0x3b5dc0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5dbc) {
            ctx->pc = 0x3B5DE0u;
            goto label_3b5de0;
        }
    }
    ctx->pc = 0x3B5DC4u;
label_3b5dc4:
    // 0x3b5dc4: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x3b5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x3b5dc8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3B5DC8u;
    SET_GPR_U32(ctx, 31, 0x3B5DD0u);
    ctx->pc = 0x3B5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5DC8u;
    // 0x3b5dcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3B5DC8u, 0x3B5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5DD0u;
label_3b5dd0:
    // 0x3b5dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5DD0u;
    {
        const bool branch_taken_0x3b5dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5DD0u;
        // 0x3b5dd4: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5dd0) {
            ctx->pc = 0x3B5DDCu;
            goto label_3b5ddc;
        }
    }
    ctx->pc = 0x3B5DD8u;
label_3b5dd8:
    // 0x3b5dd8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3b5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3b5ddc:
    // 0x3b5ddc: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b5ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
label_3b5de0:
    // 0x3b5de0: 0x26b01980  addiu       $s0, $s5, 0x1980
    ctx->pc = 0x3b5de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 6528));
    // 0x3b5de4: 0x24a41b80  addiu       $a0, $a1, 0x1B80
    ctx->pc = 0x3b5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7040));
    // 0x3b5de8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5dec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3b5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b5df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5df4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b5df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5df8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x3b5df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3b5dfc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b5dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5e00: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3b5e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b5e04: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3B5E04u;
    SET_GPR_U32(ctx, 31, 0x3B5E0Cu);
    ctx->pc = 0x3B5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E04u;
    // 0x3b5e08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3B5E04u, 0x3B5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5E0Cu;
label_3b5e0c:
    // 0x3b5e0c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5E0Cu;
    {
        const bool branch_taken_0x3b5e0c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3b5e0c) {
            ctx->pc = 0x3B5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5E0Cu;
            // 0x3b5e10: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5E20u;
            goto label_3b5e20;
        }
    }
    ctx->pc = 0x3B5E14u;
    // 0x3b5e14: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3b5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x3b5e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5E18u;
    {
        const bool branch_taken_0x3b5e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E18u;
        // 0x3b5e1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5e18) {
            ctx->pc = 0x3B5E28u;
            goto label_3b5e28;
        }
    }
    ctx->pc = 0x3B5E20u;
label_3b5e20:
    // 0x3b5e20: 0x8e821980  lw          $v0, 0x1980($s4)
    ctx->pc = 0x3b5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6528)));
    // 0x3b5e24: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x3b5e24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_3b5e28:
    // 0x3b5e28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b5e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b5e2c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3b5e2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b5e30: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3b5e30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b5e34: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3b5e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5e38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3b5e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5e3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b5e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5e40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3b5e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5e44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b5e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E48u;
        // 0x3b5e4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5E50u;
}
