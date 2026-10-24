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

// Function: func_001E1D10
// Address: 0x1e1d10 - 0x1e2008
void func_001E1D10_0x1e1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E1D10_0x1e1d10");
#endif

    switch (ctx->pc) {
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1fa8u: goto label_1e1fa8;
        default: break;
    }

    ctx->pc = 0x1e1d10u;

    // 0x1e1d10: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e1d14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1d1c: 0x2444b758  addiu       $a0, $v0, -0x48A8
    ctx->pc = 0x1e1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x1e1d20: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1e1d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1e1d24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E1D24u;
    {
        const bool branch_taken_0x1e1d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D24u;
        // 0x1e1d28: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d24) {
            ctx->pc = 0x1E1D84u;
            goto label_1e1d84;
        }
    }
    ctx->pc = 0x1E1D2Cu;
    // 0x1e1d2c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_1e1d30:
    // 0x1e1d30: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x1e1d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e1d34: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x1e1d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e1d38: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x1e1d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1e1d3c: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x1e1d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1e1d40: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x1e1d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1e1d44: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x1e1d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1e1d48: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x1e1d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e1d4c: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x1e1d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e1d50: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1e1d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d54: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1e1d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d58: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x1e1d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d5c: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x1e1d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d60: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x1e1d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d64: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1e1d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d68: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x1e1d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d6c: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x1e1d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1d70: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1e1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e1d74: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1E1D74u;
    {
        const bool branch_taken_0x1e1d74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D74u;
        // 0x1e1d78: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d74) {
            ctx->pc = 0x1E1D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1d30;
        }
    }
    ctx->pc = 0x1E1D7Cu;
    // 0x1e1d7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E1D7Cu;
    {
        const bool branch_taken_0x1e1d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D7Cu;
        // 0x1e1d80: 0x94a6048e  lhu         $a2, 0x48E($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1166)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d7c) {
            ctx->pc = 0x1E1DB8u;
            goto label_1e1db8;
        }
    }
    ctx->pc = 0x1E1D84u;
label_1e1d84:
    // 0x1e1d84: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_1e1d88:
    // 0x1e1d88: 0xdc8a0000  ld          $t2, 0x0($a0)
    ctx->pc = 0x1e1d88u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1d8c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1e1d8cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1d90: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1e1d90u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e1d94: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1e1d94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e1d98: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1e1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x1e1d9c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1e1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1e1da0: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1e1da0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1e1da4: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1e1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1e1da8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e1dac: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E1DACu;
    {
        const bool branch_taken_0x1e1dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DACu;
        // 0x1e1db0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dac) {
            ctx->pc = 0x1E1D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1d88;
        }
    }
    ctx->pc = 0x1E1DB4u;
    // 0x1e1db4: 0x94a6048e  lhu         $a2, 0x48E($a1)
    ctx->pc = 0x1e1db4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1166)));
label_1e1db8:
    // 0x1e1db8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1dbc: 0x68890007  ldl         $t1, 0x7($a0)
    ctx->pc = 0x1e1dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e1dc0: 0x6c890000  ldr         $t1, 0x0($a0)
    ctx->pc = 0x1e1dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e1dc4: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1dc8: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x1e1dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1dcc: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x1e1dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e1dd0: 0x10c2004e  beq         $a2, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1E1DD0u;
    {
        const bool branch_taken_0x1e1dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DD0u;
        // 0x1e1dd4: 0xac6a0008  sw          $t2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dd0) {
            ctx->pc = 0x1E1F0Cu;
            goto label_1e1f0c;
        }
    }
    ctx->pc = 0x1E1DD8u;
    // 0x1e1dd8: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1e1dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e1ddc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E1DDCu;
    {
        const bool branch_taken_0x1e1ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DDCu;
        // 0x1e1de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ddc) {
            ctx->pc = 0x1E1E6Cu;
            goto label_1e1e6c;
        }
    }
    ctx->pc = 0x1E1DE4u;
    // 0x1e1de4: 0x10c2006d  beq         $a2, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1E1DE4u;
    {
        const bool branch_taken_0x1e1de4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE4u;
        // 0x1e1de8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1de4) {
            ctx->pc = 0x1E1F9Cu;
            goto label_1e1f9c;
        }
    }
    ctx->pc = 0x1E1DECu;
    // 0x1e1dec: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1E1DECu;
    {
        const bool branch_taken_0x1e1dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DECu;
        // 0x1e1df0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dec) {
            ctx->pc = 0x1E1FECu;
            goto label_1e1fec;
        }
    }
    ctx->pc = 0x1E1DF4u;
label_1e1df4:
    // 0x1e1df4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e1df8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1e1dfc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1e1e00: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1e1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1e1e04: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1E1E04u;
    {
        const bool branch_taken_0x1e1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E04u;
        // 0x1e1e08: 0xaca20494  sw          $v0, 0x494($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e04) {
            ctx->pc = 0x1E2000u;
            goto label_1e2000;
        }
    }
    ctx->pc = 0x1E1E0Cu;
label_1e1e0c:
    // 0x1e1e0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1e10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1e14: 0xaca30494  sw          $v1, 0x494($a1)
    ctx->pc = 0x1e1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1172), GPR_U32(ctx, 3));
    // 0x1e1e18: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1e1e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1e1e1c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1E1E1Cu;
    {
        const bool branch_taken_0x1e1e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E1Cu;
        // 0x1e1e20: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e1c) {
            ctx->pc = 0x1E1FFCu;
            goto label_1e1ffc;
        }
    }
    ctx->pc = 0x1E1E24u;
label_1e1e24:
    // 0x1e1e24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1e28: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1e1e2c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1e1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1e1e30: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1e1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1e1e34: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1E1E34u;
    {
        const bool branch_taken_0x1e1e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E34u;
        // 0x1e1e38: 0xaca00494  sw          $zero, 0x494($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e34) {
            ctx->pc = 0x1E2000u;
            goto label_1e2000;
        }
    }
    ctx->pc = 0x1E1E3Cu;
label_1e1e3c:
    // 0x1e1e3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1e40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1e44: 0xaca30494  sw          $v1, 0x494($a1)
    ctx->pc = 0x1e1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1172), GPR_U32(ctx, 3));
    // 0x1e1e48: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1e1e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1e1e4c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1E1E4Cu;
    {
        const bool branch_taken_0x1e1e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E4Cu;
        // 0x1e1e50: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e4c) {
            ctx->pc = 0x1E1FFCu;
            goto label_1e1ffc;
        }
    }
    ctx->pc = 0x1E1E54u;
label_1e1e54:
    // 0x1e1e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1e58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1e5c: 0xaca30494  sw          $v1, 0x494($a1)
    ctx->pc = 0x1e1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1172), GPR_U32(ctx, 3));
    // 0x1e1e60: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1e1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1e1e64: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1E1E64u;
    {
        const bool branch_taken_0x1e1e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E64u;
        // 0x1e1e68: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e64) {
            ctx->pc = 0x1E1FFCu;
            goto label_1e1ffc;
        }
    }
    ctx->pc = 0x1E1E6Cu;
label_1e1e6c:
    // 0x1e1e6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1e70: 0x14c2005d  bne         $a2, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E1E70u;
    {
        const bool branch_taken_0x1e1e70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E70u;
        // 0x1e1e74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e70) {
            ctx->pc = 0x1E1FE8u;
            goto label_1e1fe8;
        }
    }
    ctx->pc = 0x1E1E78u;
    // 0x1e1e78: 0x8ca70100  lw          $a3, 0x100($a1)
    ctx->pc = 0x1e1e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x1e1e7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e84: 0x0  nop
    ctx->pc = 0x1e1e84u;
    // NOP
label_1e1e88:
    // 0x1e1e88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1e8c: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1E8Cu;
    {
        const bool branch_taken_0x1e1e8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1e8c) {
            ctx->pc = 0x1E1E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E8Cu;
            // 0x1e1e90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EB8u;
            goto label_1e1eb8;
        }
    }
    ctx->pc = 0x1E1E94u;
    // 0x1e1e94: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x1e1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1e1e98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1e9c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1E9Cu;
    {
        const bool branch_taken_0x1e1e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1e9c) {
            ctx->pc = 0x1E1EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E9Cu;
            // 0x1e1ea0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EB8u;
            goto label_1e1eb8;
        }
    }
    ctx->pc = 0x1E1EA4u;
    // 0x1e1ea4: 0x8ca30318  lw          $v1, 0x318($a1)
    ctx->pc = 0x1e1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 792)));
    // 0x1e1ea8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1eac: 0x1062ffd1  beq         $v1, $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1E1EACu;
    {
        const bool branch_taken_0x1e1eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EACu;
        // 0x1e1eb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1eac) {
            ctx->pc = 0x1E1DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1df4;
        }
    }
    ctx->pc = 0x1E1EB4u;
    // 0x1e1eb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e1eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e1eb8:
    // 0x1e1eb8: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e1eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e1ebc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E1EBCu;
    {
        const bool branch_taken_0x1e1ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EBCu;
        // 0x1e1ec0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ebc) {
            ctx->pc = 0x1E1E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e88;
        }
    }
    ctx->pc = 0x1E1EC4u;
    // 0x1e1ec4: 0x8ca70108  lw          $a3, 0x108($a1)
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x1e1ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ecc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ed0:
    // 0x1e1ed0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1ed4: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1ED4u;
    {
        const bool branch_taken_0x1e1ed4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1ed4) {
            ctx->pc = 0x1E1ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1ED4u;
            // 0x1e1ed8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F00u;
            goto label_1e1f00;
        }
    }
    ctx->pc = 0x1E1EDCu;
    // 0x1e1edc: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x1e1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1e1ee0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1ee4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1EE4u;
    {
        const bool branch_taken_0x1e1ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1ee4) {
            ctx->pc = 0x1E1EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1EE4u;
            // 0x1e1ee8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F00u;
            goto label_1e1f00;
        }
    }
    ctx->pc = 0x1E1EECu;
    // 0x1e1eec: 0x8ca30310  lw          $v1, 0x310($a1)
    ctx->pc = 0x1e1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x1e1ef0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1ef4: 0x1062ffc5  beq         $v1, $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1E1EF4u;
    {
        const bool branch_taken_0x1e1ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EF4u;
        // 0x1e1ef8: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ef4) {
            ctx->pc = 0x1E1E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e0c;
        }
    }
    ctx->pc = 0x1E1EFCu;
    // 0x1e1efc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e1efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e1f00:
    // 0x1e1f00: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e1f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e1f04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E1F04u;
    {
        const bool branch_taken_0x1e1f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F04u;
        // 0x1e1f08: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f04) {
            ctx->pc = 0x1E1ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1ed0;
        }
    }
    ctx->pc = 0x1E1F0Cu;
label_1e1f0c:
    // 0x1e1f0c: 0x8ca70100  lw          $a3, 0x100($a1)
    ctx->pc = 0x1e1f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x1e1f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f18:
    // 0x1e1f18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1f1c: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1F1Cu;
    {
        const bool branch_taken_0x1e1f1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1f1c) {
            ctx->pc = 0x1E1F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F1Cu;
            // 0x1e1f20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F48u;
            goto label_1e1f48;
        }
    }
    ctx->pc = 0x1E1F24u;
    // 0x1e1f24: 0x8ca30208  lw          $v1, 0x208($a1)
    ctx->pc = 0x1e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 520)));
    // 0x1e1f28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1f2c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1F2Cu;
    {
        const bool branch_taken_0x1e1f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1f2c) {
            ctx->pc = 0x1E1F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F2Cu;
            // 0x1e1f30: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F48u;
            goto label_1e1f48;
        }
    }
    ctx->pc = 0x1E1F34u;
    // 0x1e1f34: 0x8ca30310  lw          $v1, 0x310($a1)
    ctx->pc = 0x1e1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x1e1f38: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1f3c: 0x1062ffb9  beq         $v1, $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1E1F3Cu;
    {
        const bool branch_taken_0x1e1f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F3Cu;
        // 0x1e1f40: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f3c) {
            ctx->pc = 0x1E1E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e24;
        }
    }
    ctx->pc = 0x1E1F44u;
    // 0x1e1f44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e1f48:
    // 0x1e1f48: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e1f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e1f4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E1F4Cu;
    {
        const bool branch_taken_0x1e1f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F4Cu;
        // 0x1e1f50: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f4c) {
            ctx->pc = 0x1E1F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1f18;
        }
    }
    ctx->pc = 0x1E1F54u;
    // 0x1e1f54: 0x8ca70108  lw          $a3, 0x108($a1)
    ctx->pc = 0x1e1f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x1e1f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1f5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f60:
    // 0x1e1f60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1f64: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1F64u;
    {
        const bool branch_taken_0x1e1f64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1f64) {
            ctx->pc = 0x1E1F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F64u;
            // 0x1e1f68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F90u;
            goto label_1e1f90;
        }
    }
    ctx->pc = 0x1E1F6Cu;
    // 0x1e1f6c: 0x8ca30210  lw          $v1, 0x210($a1)
    ctx->pc = 0x1e1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x1e1f70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1f74: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1F74u;
    {
        const bool branch_taken_0x1e1f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1f74) {
            ctx->pc = 0x1E1F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F74u;
            // 0x1e1f78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1F90u;
            goto label_1e1f90;
        }
    }
    ctx->pc = 0x1E1F7Cu;
    // 0x1e1f7c: 0x8ca30318  lw          $v1, 0x318($a1)
    ctx->pc = 0x1e1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 792)));
    // 0x1e1f80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1f84: 0x1062ffad  beq         $v1, $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1E1F84u;
    {
        const bool branch_taken_0x1e1f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F84u;
        // 0x1e1f88: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f84) {
            ctx->pc = 0x1E1E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e3c;
        }
    }
    ctx->pc = 0x1E1F8Cu;
    // 0x1e1f8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e1f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e1f90:
    // 0x1e1f90: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e1f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e1f94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E1F94u;
    {
        const bool branch_taken_0x1e1f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F94u;
        // 0x1e1f98: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f94) {
            ctx->pc = 0x1E1F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1f60;
        }
    }
    ctx->pc = 0x1E1F9Cu;
label_1e1f9c:
    // 0x1e1f9c: 0x8ca70104  lw          $a3, 0x104($a1)
    ctx->pc = 0x1e1f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1e1fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e1fa8:
    // 0x1e1fa8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e1fac: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1FACu;
    {
        const bool branch_taken_0x1e1fac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1fac) {
            ctx->pc = 0x1E1FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1FACu;
            // 0x1e1fb0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1FB4u;
    // 0x1e1fb4: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x1e1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1e1fb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e1fbc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1FBCu;
    {
        const bool branch_taken_0x1e1fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1fbc) {
            ctx->pc = 0x1E1FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1FBCu;
            // 0x1e1fc0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1FC4u;
    // 0x1e1fc4: 0x8ca30314  lw          $v1, 0x314($a1)
    ctx->pc = 0x1e1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 788)));
    // 0x1e1fc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e1fcc: 0x1062ffa1  beq         $v1, $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1E1FCCu;
    {
        const bool branch_taken_0x1e1fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FCCu;
        // 0x1e1fd0: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fcc) {
            ctx->pc = 0x1E1E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e54;
        }
    }
    ctx->pc = 0x1E1FD4u;
    // 0x1e1fd4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e1fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e1fd8:
    // 0x1e1fd8: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x1e1fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e1fdc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E1FDCu;
    {
        const bool branch_taken_0x1e1fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FDCu;
        // 0x1e1fe0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fdc) {
            ctx->pc = 0x1E1FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1fa8;
        }
    }
    ctx->pc = 0x1E1FE4u;
    // 0x1e1fe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e1fe8:
    // 0x1e1fe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1fec:
    // 0x1e1fec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1ff0: 0xaca20494  sw          $v0, 0x494($a1)
    ctx->pc = 0x1e1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1172), GPR_U32(ctx, 2));
    // 0x1e1ff4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1e1ff8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1e1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1e1ffc:
    // 0x1e1ffc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1e1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1e2000:
    // 0x1e2000: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2000u;
        // 0x1e2004: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2008u;
}
