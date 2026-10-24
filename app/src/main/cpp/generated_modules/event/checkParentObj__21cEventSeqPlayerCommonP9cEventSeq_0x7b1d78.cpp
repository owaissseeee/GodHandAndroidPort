#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: checkParentObj__21cEventSeqPlayerCommonP9cEventSeq
// Address: 0x7b1d78 - 0x7b1e58
void checkParentObj__21cEventSeqPlayerCommonP9cEventSeq_0x7b1d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkParentObj__21cEventSeqPlayerCommonP9cEventSeq_0x7b1d78");
#endif

    switch (ctx->pc) {
        case 0x7b1dd0u: goto label_7b1dd0;
        case 0x7b1de0u: goto label_7b1de0;
        case 0x7b1e1cu: goto label_7b1e1c;
        default: break;
    }

    ctx->pc = 0x7b1d78u;

    // 0x7b1d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b1d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b1d7c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x7b1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7b1d80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b1d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b1d84: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b1d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b1d88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7b1d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1d8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b1d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b1d90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b1d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b1d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7b1d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7b1d98: 0x82220005  lb          $v0, 0x5($s1)
    ctx->pc = 0x7b1d98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x7b1d9c: 0x54430028  bnel        $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x7B1D9Cu;
    {
        const bool branch_taken_0x7b1d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7b1d9c) {
            ctx->pc = 0x7B1DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B1D9Cu;
            // 0x7b1da0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B1E40u;
            goto label_7b1e40;
        }
    }
    ctx->pc = 0x7B1DA4u;
    // 0x7b1da4: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7b1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7b1da8: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x7b1da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x7b1dac: 0x8c435288  lw          $v1, 0x5288($v0)
    ctx->pc = 0x7b1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7B5288u));
    // 0x7b1db0: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b1db0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b1db4: 0x26105248  addiu       $s0, $s0, 0x5248
    ctx->pc = 0x7b1db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21064));
    // 0x7b1db8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x7b1db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b1dbc: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x7b1dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7b1dc0: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x7b1dc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x7b1dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1dc8: 0xc1eb3c0  jal         func_7ACF00
    ctx->pc = 0x7B1DC8u;
    SET_GPR_U32(ctx, 31, 0x7B1DD0u);
    ctx->pc = 0x7B1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1DC8u;
    // 0x7b1dcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF00u, 0x7B1DC8u, 0x7B1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1DD0u;
label_7b1dd0:
    // 0x7b1dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1dd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x7b1dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1dd8: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7B1DD8u;
    SET_GPR_U32(ctx, 31, 0x7B1DE0u);
    ctx->pc = 0x7B1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1DD8u;
    // 0x7b1ddc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7B1DD8u, 0x7B1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1DE0u;
label_7b1de0:
    // 0x7b1de0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x7b1de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x7b1de4: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B1DE4u;
    {
        const bool branch_taken_0x7b1de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x7B1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1DE4u;
        // 0x7b1de8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1de4) {
            ctx->pc = 0x7B1E04u;
            goto label_7b1e04;
        }
    }
    ctx->pc = 0x7B1DECu;
    // 0x7b1dec: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x7b1decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x7b1df0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x7b1df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x7b1df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7B1DF4u;
    {
        const bool branch_taken_0x7b1df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1DF4u;
        // 0x7b1df8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1df4) {
            ctx->pc = 0x7B1E08u;
            goto label_7b1e08;
        }
    }
    ctx->pc = 0x7B1DFCu;
    // 0x7b1dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7B1DFCu;
    {
        const bool branch_taken_0x7b1dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1DFCu;
        // 0x7b1e00: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1dfc) {
            ctx->pc = 0x7B1E08u;
            goto label_7b1e08;
        }
    }
    ctx->pc = 0x7B1E04u;
label_7b1e04:
    // 0x7b1e04: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x7b1e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_7b1e08:
    // 0x7b1e08: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7b1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7b1e0c: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x7b1e0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7b1e10: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7b1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7b1e14: 0xc0b1354  jal         func_2C4D50
    ctx->pc = 0x7B1E14u;
    SET_GPR_U32(ctx, 31, 0x7B1E1Cu);
    ctx->pc = 0x7B1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1E14u;
    // 0x7b1e18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D50u, 0x7B1E14u, 0x7B1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1E1Cu;
label_7b1e1c:
    // 0x7b1e1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7b1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b1e20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b1e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b1e24: 0xa6300006  sh          $s0, 0x6($s1)
    ctx->pc = 0x7b1e24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x7b1e28: 0xa2230005  sb          $v1, 0x5($s1)
    ctx->pc = 0x7b1e28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1e2c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x7b1e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b1e30: 0xa2320003  sb          $s2, 0x3($s1)
    ctx->pc = 0x7b1e30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x7b1e34: 0xa2330004  sb          $s3, 0x4($s1)
    ctx->pc = 0x7b1e34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 19));
    // 0x7b1e38: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x7b1e38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7b1e3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b1e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7b1e40:
    // 0x7b1e40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b1e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b1e44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b1e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b1e48: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b1e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b1e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7b1e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b1e50: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1E50u;
        // 0x7b1e54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B1E58u;
}
} // namespace gh_event
