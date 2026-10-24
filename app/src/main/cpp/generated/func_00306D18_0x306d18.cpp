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

// Function: func_00306D18
// Address: 0x306d18 - 0x306e38
void func_00306D18_0x306d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306D18_0x306d18");
#endif

    switch (ctx->pc) {
        case 0x306d48u: goto label_306d48;
        case 0x306d98u: goto label_306d98;
        case 0x306dd0u: goto label_306dd0;
        case 0x306df0u: goto label_306df0;
        default: break;
    }

    ctx->pc = 0x306d18u;

    // 0x306d18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x306d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x306d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x306d20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x306d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x306d24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x306d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x306d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x306d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x306d30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x306d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306d3c: 0x26230380  addiu       $v1, $s1, 0x380
    ctx->pc = 0x306d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
    // 0x306d40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x306d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306d44: 0x0  nop
    ctx->pc = 0x306d44u;
    // NOP
label_306d48:
    // 0x306d48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x306d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306d4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x306d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x306d50: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x306d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x306d54: 0x107d0005  beq         $v1, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x306D54u;
    {
        const bool branch_taken_0x306d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x306D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D54u;
        // 0x306d58: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d54) {
            ctx->pc = 0x306D6Cu;
            goto label_306d6c;
        }
    }
    ctx->pc = 0x306D5Cu;
    // 0x306d5c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x306d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306d60: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x306d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x306d64: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x306d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x306d68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x306d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_306d6c:
    // 0x306d6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306d70: 0x2c8203e8  sltiu       $v0, $a0, 0x3E8
    ctx->pc = 0x306d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x306d74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x306D74u;
    {
        const bool branch_taken_0x306d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D74u;
        // 0x306d78: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d74) {
            ctx->pc = 0x306D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306d48;
        }
    }
    ctx->pc = 0x306D7Cu;
    // 0x306d7c: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x306d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x306d80: 0x26320380  addiu       $s2, $s1, 0x380
    ctx->pc = 0x306d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
    // 0x306d84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x306d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d88: 0x26304200  addiu       $s0, $s1, 0x4200
    ctx->pc = 0x306d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16896));
    // 0x306d8c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x306d8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x306d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x306d94: 0x0  nop
    ctx->pc = 0x306d94u;
    // NOP
label_306d98:
    // 0x306d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x306d9c: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x306d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x306da0: 0xa0600009  sb          $zero, 0x9($v1)
    ctx->pc = 0x306da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x306da4: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x306da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x306da8: 0xa4600010  sh          $zero, 0x10($v1)
    ctx->pc = 0x306da8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x306dac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x306dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x306db0: 0xa4600012  sh          $zero, 0x12($v1)
    ctx->pc = 0x306db0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x306db4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x306db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x306db8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x306db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x306dbc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x306DBCu;
    {
        const bool branch_taken_0x306dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306dbc) {
            ctx->pc = 0x306DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306DBCu;
            // 0x306dc0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306d98;
        }
    }
    ctx->pc = 0x306DC4u;
    // 0x306dc4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x306dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306dcc: 0x0  nop
    ctx->pc = 0x306dccu;
    // NOP
label_306dd0:
    // 0x306dd0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x306dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x306dd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306dd8: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x306dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x306ddc: 0x0  nop
    ctx->pc = 0x306ddcu;
    // NOP
    // 0x306de0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x306DE0u;
    {
        const bool branch_taken_0x306de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DE0u;
        // 0x306de4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306de0) {
            ctx->pc = 0x306DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306dd0;
        }
    }
    ctx->pc = 0x306DE8u;
    // 0x306de8: 0xc0c1be2  jal         func_306F88
    ctx->pc = 0x306DE8u;
    SET_GPR_U32(ctx, 31, 0x306DF0u);
    ctx->pc = 0x306DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DE8u;
    // 0x306dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306F88u, 0x306DE8u, 0x306DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF0u;
label_306df0:
    // 0x306df0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x306df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x306df4: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x306df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x306df8: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x306df8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x306dfc: 0xae204200  sw          $zero, 0x4200($s1)
    ctx->pc = 0x306dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16896), GPR_U32(ctx, 0));
    // 0x306e00: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x306e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x306e04: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x306e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x306e08: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x306e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x306e0c: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x306e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x306e10: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x306e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x306e14: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x306e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x306e18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x306e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x306e1c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x306e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x306e20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x306e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306e24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x306e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306e30: 0x3e00008  jr          $ra
    ctx->pc = 0x306E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E30u;
        // 0x306e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306E38u;
}
