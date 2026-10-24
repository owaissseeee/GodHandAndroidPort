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

// Function: cOmBase_runPhaseHandler
// Address: 0x282d70 - 0x282e48
void cOmBase_runPhaseHandler_0x282d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_runPhaseHandler_0x282d70");
#endif

    switch (ctx->pc) {
        case 0x282d70u: goto label_282d70;
        case 0x282d74u: goto label_282d74;
        case 0x282d78u: goto label_282d78;
        case 0x282d7cu: goto label_282d7c;
        case 0x282d80u: goto label_282d80;
        case 0x282d84u: goto label_282d84;
        case 0x282d88u: goto label_282d88;
        case 0x282d8cu: goto label_282d8c;
        case 0x282d90u: goto label_282d90;
        case 0x282d94u: goto label_282d94;
        case 0x282d98u: goto label_282d98;
        case 0x282d9cu: goto label_282d9c;
        case 0x282da0u: goto label_282da0;
        case 0x282da4u: goto label_282da4;
        case 0x282da8u: goto label_282da8;
        case 0x282dacu: goto label_282dac;
        case 0x282db0u: goto label_282db0;
        case 0x282db4u: goto label_282db4;
        case 0x282db8u: goto label_282db8;
        case 0x282dbcu: goto label_282dbc;
        case 0x282dc0u: goto label_282dc0;
        case 0x282dc4u: goto label_282dc4;
        case 0x282dc8u: goto label_282dc8;
        case 0x282dccu: goto label_282dcc;
        case 0x282dd0u: goto label_282dd0;
        case 0x282dd4u: goto label_282dd4;
        case 0x282dd8u: goto label_282dd8;
        case 0x282ddcu: goto label_282ddc;
        case 0x282de0u: goto label_282de0;
        case 0x282de4u: goto label_282de4;
        case 0x282de8u: goto label_282de8;
        case 0x282decu: goto label_282dec;
        case 0x282df0u: goto label_282df0;
        case 0x282df4u: goto label_282df4;
        case 0x282df8u: goto label_282df8;
        case 0x282dfcu: goto label_282dfc;
        case 0x282e00u: goto label_282e00;
        case 0x282e04u: goto label_282e04;
        case 0x282e08u: goto label_282e08;
        case 0x282e0cu: goto label_282e0c;
        case 0x282e10u: goto label_282e10;
        case 0x282e14u: goto label_282e14;
        case 0x282e18u: goto label_282e18;
        case 0x282e1cu: goto label_282e1c;
        case 0x282e20u: goto label_282e20;
        case 0x282e24u: goto label_282e24;
        case 0x282e28u: goto label_282e28;
        case 0x282e2cu: goto label_282e2c;
        case 0x282e30u: goto label_282e30;
        case 0x282e34u: goto label_282e34;
        case 0x282e38u: goto label_282e38;
        case 0x282e3cu: goto label_282e3c;
        case 0x282e40u: goto label_282e40;
        case 0x282e44u: goto label_282e44;
        default: break;
    }

    ctx->pc = 0x282d70u;

label_282d70:
    // 0x282d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_282d74:
    // 0x282d74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x282d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_282d78:
    // 0x282d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_282d7c:
    // 0x282d7c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_282d80:
    // 0x282d80: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x282d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_282d84:
    // 0x282d84: 0x24698768  addiu       $t1, $v1, -0x7898
    ctx->pc = 0x282d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936424));
label_282d88:
    // 0x282d88: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x282d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_282d8c:
    // 0x282d8c: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x282d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_282d90:
    // 0x282d90: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x282d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_282d94:
    // 0x282d94: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x282d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_282d98:
    // 0x282d98: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x282d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_282d9c:
    // 0x282d9c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x282d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_282da0:
    // 0x282da0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x282da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_282da4:
    // 0x282da4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x282da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_282da8:
    // 0x282da8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x282da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_282dac:
    // 0x282dac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_282db0:
    if (ctx->pc == 0x282DB0u) {
        ctx->pc = 0x282DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DACu;
        // 0x282db0: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282DB4u;
        goto label_282db4;
    }
    ctx->pc = 0x282DACu;
    {
        const bool branch_taken_0x282dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282dac) {
            ctx->pc = 0x282DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282DACu;
            // 0x282db0: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282DB4u;
            goto label_282db4;
        }
    }
    ctx->pc = 0x282DB4u;
label_282db4:
    // 0x282db4: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x282db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_282db8:
    // 0x282db8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x282db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_282dbc:
    // 0x282dbc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x282dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282dc0:
    // 0x282dc0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x282dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_282dc4:
    // 0x282dc4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x282dc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_282dc8:
    // 0x282dc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x282dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_282dcc:
    // 0x282dcc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x282dccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_282dd0:
    // 0x282dd0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_282dd4:
    if (ctx->pc == 0x282DD4u) {
        ctx->pc = 0x282DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DD0u;
        // 0x282dd4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282DD8u;
        goto label_282dd8;
    }
    ctx->pc = 0x282DD0u;
    {
        const bool branch_taken_0x282dd0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x282DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DD0u;
        // 0x282dd4: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dd0) {
            ctx->pc = 0x282E04u;
            goto label_282e04;
        }
    }
    ctx->pc = 0x282DD8u;
label_282dd8:
    // 0x282dd8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x282dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_282ddc:
    // 0x282ddc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x282ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_282de0:
    // 0x282de0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x282de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_282de4:
    // 0x282de4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x282de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_282de8:
    // 0x282de8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x282de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_282dec:
    // 0x282dec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282df0:
    // 0x282df0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x282df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_282df4:
    // 0x282df4: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x282df4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_282df8:
    // 0x282df8: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x282df8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_282dfc:
    // 0x282dfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_282e00:
    if (ctx->pc == 0x282E00u) {
        ctx->pc = 0x282E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DFCu;
        // 0x282e00: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282E04u;
        goto label_282e04;
    }
    ctx->pc = 0x282DFCu;
    {
        const bool branch_taken_0x282dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DFCu;
        // 0x282e00: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dfc) {
            ctx->pc = 0x282E10u;
            goto label_282e10;
        }
    }
    ctx->pc = 0x282E04u;
label_282e04:
    // 0x282e04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x282e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_282e08:
    // 0x282e08: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x282e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282e0c:
    // 0x282e0c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x282e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_282e10:
    // 0x282e10: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_282e14:
    // 0x282e14: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_282e18:
    if (ctx->pc == 0x282E18u) {
        ctx->pc = 0x282E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E14u;
        // 0x282e18: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282E1Cu;
        goto label_282e1c;
    }
    ctx->pc = 0x282E14u;
    {
        const bool branch_taken_0x282e14 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x282E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E14u;
        // 0x282e18: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e14) {
            ctx->pc = 0x282E30u;
            goto label_282e30;
        }
    }
    ctx->pc = 0x282E1Cu;
label_282e1c:
    // 0x282e1c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x282e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_282e20:
    // 0x282e20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x282e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_282e24:
    // 0x282e24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x282e24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_282e28:
    // 0x282e28: 0x10000002  b           . + 4 + (0x2 << 2)
label_282e2c:
    if (ctx->pc == 0x282E2Cu) {
        ctx->pc = 0x282E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E28u;
        // 0x282e2c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282E30u;
        goto label_282e30;
    }
    ctx->pc = 0x282E28u;
    {
        const bool branch_taken_0x282e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E28u;
        // 0x282e2c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e28) {
            ctx->pc = 0x282E34u;
            goto label_282e34;
        }
    }
    ctx->pc = 0x282E30u;
label_282e30:
    // 0x282e30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x282e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_282e34:
    // 0x282e34: 0xe0f809  jalr        $a3
label_282e38:
    if (ctx->pc == 0x282E38u) {
        ctx->pc = 0x282E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E34u;
        // 0x282e38: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282E3Cu;
        goto label_282e3c;
    }
    ctx->pc = 0x282E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x282E3Cu);
        ctx->pc = 0x282E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E34u;
        // 0x282e38: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282E34u, 0x282E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282E3Cu;
label_282e3c:
    // 0x282e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_282e40:
    // 0x282e40: 0x3e00008  jr          $ra
label_282e44:
    if (ctx->pc == 0x282E44u) {
        ctx->pc = 0x282E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E40u;
        // 0x282e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282E48u;
        goto label_fallthrough_0x282e40;
    }
    ctx->pc = 0x282E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E40u;
        // 0x282e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x282e40:
    ctx->pc = 0x282E48u;
}
