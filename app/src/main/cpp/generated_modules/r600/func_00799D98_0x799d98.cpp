#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_00799D98
// Address: 0x799d98 - 0x79a0e0
void func_00799D98_0x799d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D98_0x799d98");
#endif

    switch (ctx->pc) {
        case 0x799e20u: goto label_799e20;
        case 0x799e28u: goto label_799e28;
        case 0x799e38u: goto label_799e38;
        case 0x799e48u: goto label_799e48;
        case 0x799e90u: goto label_799e90;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ef8u: goto label_799ef8;
        case 0x799f10u: goto label_799f10;
        case 0x799f20u: goto label_799f20;
        case 0x799f28u: goto label_799f28;
        case 0x799f30u: goto label_799f30;
        case 0x799f40u: goto label_799f40;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f90u: goto label_799f90;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fecu: goto label_799fec;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a040u: goto label_79a040;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a058u: goto label_79a058;
        case 0x79a064u: goto label_79a064;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a0b0u: goto label_79a0b0;
        default: break;
    }

    ctx->pc = 0x799d98u;

    // 0x799d98: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x799d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799da0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799da4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799da8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799dac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799db0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799db4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799db8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x799db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x799dbc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x799dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x799dc0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dc4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x799dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x799dc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dcc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x799dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x799dd0: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799dd4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x799dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x799dd8: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x799ddc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x799ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x799de0: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799de4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x799de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x799de8: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x799dec: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x799decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x799df0: 0x3c1e0074  lui         $fp, 0x74
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)116 << 16));
    // 0x799df4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x799df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x799df8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x799df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x799dfc: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x799dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e00: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799e00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e04: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x799e04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x799e08: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x799e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x799e0c: 0xa3a60028  sb          $a2, 0x28($sp)
    ctx->pc = 0x799e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x799e10: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x799e10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x799e14: 0xa3a80038  sb          $t0, 0x38($sp)
    ctx->pc = 0x799e14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 8));
    // 0x799e18: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799e18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799e1c: 0x0  nop
    ctx->pc = 0x799e1cu;
    // NOP
label_799e20:
    // 0x799e20: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799E20u;
    SET_GPR_U32(ctx, 31, 0x799E28u);
    ctx->pc = 0x799E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E20u;
    // 0x799e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799E20u, 0x799E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E28u;
label_799e28:
    // 0x799e28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e2c: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799e30: 0xc0b0bc2  jal         func_2C2F08
    ctx->pc = 0x799E30u;
    SET_GPR_U32(ctx, 31, 0x799E38u);
    ctx->pc = 0x799E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E30u;
    // 0x799e34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x799E30u, 0x799E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E38u;
label_799e38:
    // 0x799e38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E38u;
    {
        const bool branch_taken_0x799e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e38) {
            ctx->pc = 0x799E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E38u;
            // 0x799e3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E4Cu;
            goto label_799e4c;
        }
    }
    ctx->pc = 0x799E40u;
    // 0x799e40: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x799E40u;
    SET_GPR_U32(ctx, 31, 0x799E48u);
    ctx->pc = 0x799E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E40u;
    // 0x799e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799E40u, 0x799E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E48u;
label_799e48:
    // 0x799e48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799e4c:
    // 0x799e4c: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x799e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e50: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x799E50u;
    {
        const bool branch_taken_0x799e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E50u;
        // 0x799e54: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e50) {
            ctx->pc = 0x799E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e20;
        }
    }
    ctx->pc = 0x799E58u;
    // 0x799e58: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799e5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799e60: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799e64: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799e68: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x799e6c: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x799e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e70: 0xa3a30048  sb          $v1, 0x48($sp)
    ctx->pc = 0x799e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e78: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x799e78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x799e7c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799e80: 0xa3a50058  sb          $a1, 0x58($sp)
    ctx->pc = 0x799e80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x799e84: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x799e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e88: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x799e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x799e8c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799e90:
    // 0x799e90: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x799e90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799e94: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E94u;
    SET_GPR_U32(ctx, 31, 0x799E9Cu);
    ctx->pc = 0x799E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E94u;
    // 0x799e98: 0x26846ab0  addiu       $a0, $s4, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E94u, 0x799E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E9Cu;
label_799e9c:
    // 0x799e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ea0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799EA0u;
    SET_GPR_U32(ctx, 31, 0x799EA8u);
    ctx->pc = 0x799EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA0u;
    // 0x799ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799EA0u, 0x799EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0x12530003  beq         $s2, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x799EA8u;
    {
        const bool branch_taken_0x799ea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x799EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA8u;
        // 0x799eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ea8) {
            ctx->pc = 0x799EB8u;
            goto label_799eb8;
        }
    }
    ctx->pc = 0x799EB0u;
    // 0x799eb0: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799EB0u;
    SET_GPR_U32(ctx, 31, 0x799EB8u);
    ctx->pc = 0x799EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB0u;
    // 0x799eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799EB0u, 0x799EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799ebc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x799ec0: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x799ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799ec4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x799EC4u;
    {
        const bool branch_taken_0x799ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC4u;
        // 0x799ec8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ec4) {
            ctx->pc = 0x799E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e90;
        }
    }
    ctx->pc = 0x799ECCu;
    // 0x799ecc: 0x8fc37a8c  lw          $v1, 0x7A8C($fp)
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 31372)));
    // 0x799ed0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x799ed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799ed8: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799edc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799ee0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ee4: 0x24a5a0e0  addiu       $a1, $a1, -0x5F20
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942944));
    // 0x799ee8: 0xafc37a8c  sw          $v1, 0x7A8C($fp)
    ctx->pc = 0x799ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 31372), GPR_U32(ctx, 3));
    // 0x799eec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ef0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799EF0u;
    SET_GPR_U32(ctx, 31, 0x799EF8u);
    ctx->pc = 0x799EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF0u;
    // 0x799ef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799EF0u, 0x799EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF8u;
label_799ef8:
    // 0x799ef8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799efc: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799f00: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f04: 0x24a5a1d8  addiu       $a1, $a1, -0x5E28
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943192));
    // 0x799f08: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x8ee32f84  lw          $v1, 0x2F84($s7)
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799f14: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799f18: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F18u;
    SET_GPR_U32(ctx, 31, 0x799F20u);
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F18u, 0x799F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x26360001  addiu       $s6, $s1, 0x1
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799f24: 0x0  nop
    ctx->pc = 0x799f24u;
    // NOP
label_799f28:
    // 0x799f28: 0x11a0c0  sll         $s4, $s1, 3
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x799f2c: 0x2613ffff  addiu       $s3, $s0, -0x1
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_799f30:
    // 0x799f30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f34: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f38: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799f3c: 0x0  nop
    ctx->pc = 0x799f3cu;
    // NOP
label_799f40:
    // 0x799f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f44: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799F44u;
    SET_GPR_U32(ctx, 31, 0x799F4Cu);
    ctx->pc = 0x799F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F44u;
    // 0x799f48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799F44u, 0x799F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F4Cu;
label_799f4c:
    // 0x799f4c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x799f50: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799f54: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799F54u;
    {
        const bool branch_taken_0x799f54 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x799F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F54u;
        // 0x799f58: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f54) {
            ctx->pc = 0x799F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F5Cu;
    // 0x799f5c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F5Cu;
    {
        const bool branch_taken_0x799f5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f5c) {
            ctx->pc = 0x799F70u;
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F64u;
    // 0x799f64: 0x2a02012c  slti        $v0, $s0, 0x12C
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x799f68: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f68) {
            ctx->pc = 0x799F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F68u;
            // 0x799f6c: 0x2b48021  addu        $s0, $s5, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x799f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F74u;
    {
        const bool branch_taken_0x799f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f74) {
            ctx->pc = 0x799F84u;
            goto label_799f84;
        }
    }
    ctx->pc = 0x799F7Cu;
    // 0x799f7c: 0x6020006  bltzl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799F7Cu;
    {
        const bool branch_taken_0x799f7c = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x799f7c) {
            ctx->pc = 0x799F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F7Cu;
            // 0x799f80: 0x2b48021  addu        $s0, $s5, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f88: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F88u;
    SET_GPR_U32(ctx, 31, 0x799F90u);
    ctx->pc = 0x799F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F88u;
    // 0x799f8c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F88u, 0x799F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x799F90u;
    {
        const bool branch_taken_0x799f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F90u;
        // 0x799f94: 0x2613ffff  addiu       $s3, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f90) {
            ctx->pc = 0x799F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f30;
        }
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799F98u;
    SET_GPR_U32(ctx, 31, 0x799FA0u);
    ctx->pc = 0x799F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F98u;
    // 0x799f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799F98u, 0x799FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA0u;
label_799fa0:
    // 0x799fa0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x799FA0u;
    {
        const bool branch_taken_0x799fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA0u;
        // 0x799fa4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fa0) {
            ctx->pc = 0x799FF0u;
            goto label_799ff0;
        }
    }
    ctx->pc = 0x799FA8u;
    // 0x799fa8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799FA8u;
    SET_GPR_U32(ctx, 31, 0x799FB0u);
    ctx->pc = 0x799FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA8u;
    // 0x799fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799FA8u, 0x799FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB0u;
label_799fb0:
    // 0x799fb0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799FB0u;
    {
        const bool branch_taken_0x799fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB0u;
        // 0x799fb4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fb0) {
            ctx->pc = 0x799FF0u;
            goto label_799ff0;
        }
    }
    ctx->pc = 0x799FB8u;
    // 0x799fb8: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799FB8u;
    SET_GPR_U32(ctx, 31, 0x799FC0u);
    ctx->pc = 0x799FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB8u;
    // 0x799fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799FB8u, 0x799FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC0u;
label_799fc0:
    // 0x799fc0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799fc4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799fc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799fc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fd8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799FD8u;
    SET_GPR_U32(ctx, 31, 0x799FE0u);
    ctx->pc = 0x799FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD8u;
    // 0x799fdc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799FD8u, 0x799FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE0u;
label_799fe0:
    // 0x799fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe4: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799FE4u;
    SET_GPR_U32(ctx, 31, 0x799FECu);
    ctx->pc = 0x799FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE4u;
    // 0x799fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799FE4u, 0x799FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FECu;
label_799fec:
    // 0x799fec: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_799ff0:
    // 0x799ff0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x799ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799ffc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a000: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A000u;
    {
        const bool branch_taken_0x79a000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A000u;
        // 0x79a004: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a000) {
            ctx->pc = 0x79A020u;
            goto label_79a020;
        }
    }
    ctx->pc = 0x79A008u;
    // 0x79a008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a00c: 0x2442b7c0  addiu       $v0, $v0, -0x4840
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x79a010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a018: 0x800008  jr          $a0
    ctx->pc = 0x79A018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A020u: goto label_79a020;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A020u;
label_79a020:
    // 0x79a020: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x79a020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a024: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a028: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A028u;
    {
        const bool branch_taken_0x79a028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0x24100186  addiu       $s0, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a028) {
            ctx->pc = 0x79A048u;
            goto label_79a048;
        }
    }
    ctx->pc = 0x79A030u;
    // 0x79a030: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x79a034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a038: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x79A040u;
    {
        const bool branch_taken_0x79a040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0x26360001  addiu       $s6, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a040) {
            ctx->pc = 0x799F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f28;
        }
    }
    ctx->pc = 0x79A048u;
label_79a048:
    // 0x79a048: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a04c:
    // 0x79a04c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x79a04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a050: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a054: 0x0  nop
    ctx->pc = 0x79a054u;
    // NOP
label_79a058:
    // 0x79a058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a05c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A05Cu;
    SET_GPR_U32(ctx, 31, 0x79A064u);
    ctx->pc = 0x79A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A05Cu;
    // 0x79a060: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A05Cu, 0x79A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A064u;
label_79a064:
    // 0x79a064: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x79a068: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a06c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A06Cu;
    {
        const bool branch_taken_0x79a06c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A06Cu;
        // 0x79a070: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a06c) {
            ctx->pc = 0x79A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A074u;
    // 0x79a074: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x79a074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a078: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A078u;
    {
        const bool branch_taken_0x79a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a078) {
            ctx->pc = 0x79A094u;
            goto label_79a094;
        }
    }
    ctx->pc = 0x79A080u;
    // 0x79a080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a084: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A084u;
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A084u, 0x79A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A08Cu;
label_79a08c:
    // 0x79a08c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x79A08Cu;
    {
        const bool branch_taken_0x79a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A08Cu;
        // 0x79a090: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a08c) {
            ctx->pc = 0x79A04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a04c;
        }
    }
    ctx->pc = 0x79A094u;
label_79a094:
    // 0x79a094: 0x8fc27a8c  lw          $v0, 0x7A8C($fp)
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 31372)));
    // 0x79a098: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79a09c: 0x8ee52f84  lw          $a1, 0x2F84($s7)
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x79a0a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a0a4: 0xafc27a8c  sw          $v0, 0x7A8C($fp)
    ctx->pc = 0x79a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 31372), GPR_U32(ctx, 2));
    // 0x79a0a8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A0A8u;
    SET_GPR_U32(ctx, 31, 0x79A0B0u);
    ctx->pc = 0x79A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0A8u;
    // 0x79a0ac: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A0A8u, 0x79A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0B0u;
label_79a0b0:
    // 0x79a0b0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79a0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79a0b4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79a0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a0b8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79a0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a0bc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79a0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a0c0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x79a0c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a0c4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x79a0c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a0c8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x79a0c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a0cc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x79a0ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a0d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x79a0d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a0d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x79a0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0E0u;
}
} // namespace gh_r600
