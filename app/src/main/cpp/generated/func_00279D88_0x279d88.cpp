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

// Function: func_00279D88
// Address: 0x279d88 - 0x279e70
void func_00279D88_0x279d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279D88_0x279d88");
#endif

    switch (ctx->pc) {
        case 0x279dc4u: goto label_279dc4;
        case 0x279de0u: goto label_279de0;
        case 0x279df0u: goto label_279df0;
        case 0x279dfcu: goto label_279dfc;
        case 0x279e04u: goto label_279e04;
        case 0x279e28u: goto label_279e28;
        case 0x279e34u: goto label_279e34;
        default: break;
    }

    ctx->pc = 0x279d88u;

    // 0x279d88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x279d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x279d8c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x279d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x279d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279d98: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x279d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x279d9c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x279d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x279da0: 0x2403023f  addiu       $v1, $zero, 0x23F
    ctx->pc = 0x279da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    // 0x279da4: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x279da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x279da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dac: 0xae030564  sw          $v1, 0x564($s0)
    ctx->pc = 0x279dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
    // 0x279db0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x279db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x279db4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x279db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x279db8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x279db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x279dbc: 0xc09e7da  jal         func_279F68
    ctx->pc = 0x279DBCu;
    SET_GPR_U32(ctx, 31, 0x279DC4u);
    ctx->pc = 0x279DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DBCu;
    // 0x279dc0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F68u, 0x279DBCu, 0x279DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DC4u;
label_279dc4:
    // 0x279dc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279DC4u;
    {
        const bool branch_taken_0x279dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DC4u;
        // 0x279dc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dc4) {
            ctx->pc = 0x279DD4u;
            goto label_279dd4;
        }
    }
    ctx->pc = 0x279DCCu;
    // 0x279dcc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x279DCCu;
    {
        const bool branch_taken_0x279dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DCCu;
        // 0x279dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dcc) {
            ctx->pc = 0x279E5Cu;
            goto label_279e5c;
        }
    }
    ctx->pc = 0x279DD4u;
label_279dd4:
    // 0x279dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x279dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dd8: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x279DD8u;
    SET_GPR_U32(ctx, 31, 0x279DE0u);
    ctx->pc = 0x279DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DD8u;
    // 0x279ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x279DD8u, 0x279DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DE0u;
label_279de0:
    // 0x279de0: 0xae001580  sw          $zero, 0x1580($s0)
    ctx->pc = 0x279de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5504), GPR_U32(ctx, 0));
    // 0x279de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279de8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x279DE8u;
    SET_GPR_U32(ctx, 31, 0x279DF0u);
    ctx->pc = 0x279DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DE8u;
    // 0x279dec: 0xae001584  sw          $zero, 0x1584($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5508), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x279DE8u, 0x279DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DF0u;
label_279df0:
    // 0x279df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279df4: 0xc054a88  jal         func_152A20
    ctx->pc = 0x279DF4u;
    SET_GPR_U32(ctx, 31, 0x279DFCu);
    ctx->pc = 0x279DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DF4u;
    // 0x279df8: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x279DF4u, 0x279DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DFCu;
label_279dfc:
    // 0x279dfc: 0xc05280e  jal         func_14A038
    ctx->pc = 0x279DFCu;
    SET_GPR_U32(ctx, 31, 0x279E04u);
    ctx->pc = 0x279E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279DFCu;
    // 0x279e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x279DFCu, 0x279E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E04u;
label_279e04:
    // 0x279e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279e08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x279e0c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x279e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x279e10: 0xa2020616  sb          $v0, 0x616($s0)
    ctx->pc = 0x279e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1558), (uint8_t)GPR_U32(ctx, 2));
    // 0x279e14: 0xa2030531  sb          $v1, 0x531($s0)
    ctx->pc = 0x279e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x279e18: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x279e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x279e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e20: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x279E20u;
    SET_GPR_U32(ctx, 31, 0x279E28u);
    ctx->pc = 0x279E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E20u;
    // 0x279e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x279E20u, 0x279E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E28u;
label_279e28:
    // 0x279e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e2c: 0xc05404a  jal         func_150128
    ctx->pc = 0x279E2Cu;
    SET_GPR_U32(ctx, 31, 0x279E34u);
    ctx->pc = 0x279E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E2Cu;
    // 0x279e30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x279E2Cu, 0x279E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E34u;
label_279e34:
    // 0x279e34: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x279e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x279e38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x279e38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x279e3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279e44: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x279e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x279e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279e4c: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x279e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x279e50: 0xa2000617  sb          $zero, 0x617($s0)
    ctx->pc = 0x279e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 0));
    // 0x279e54: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x279e54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x279e58: 0xae001568  sw          $zero, 0x1568($s0)
    ctx->pc = 0x279e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5480), GPR_U32(ctx, 0));
label_279e5c:
    // 0x279e5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x279e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279e60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x279e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279e64: 0x3e00008  jr          $ra
    ctx->pc = 0x279E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E64u;
        // 0x279e68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279E6Cu;
    // 0x279e6c: 0x0  nop
    ctx->pc = 0x279e6cu;
    // NOP
    ctx->pc = 0x279e70u;
}
