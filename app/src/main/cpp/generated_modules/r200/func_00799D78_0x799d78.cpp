#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_00799D78
// Address: 0x799d78 - 0x799f08
void func_00799D78_0x799d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D78_0x799d78");
#endif

    switch (ctx->pc) {
        case 0x799d98u: goto label_799d98;
        case 0x799ddcu: goto label_799ddc;
        case 0x799de4u: goto label_799de4;
        case 0x799decu: goto label_799dec;
        case 0x799e00u: goto label_799e00;
        case 0x799e28u: goto label_799e28;
        case 0x799e38u: goto label_799e38;
        case 0x799e44u: goto label_799e44;
        case 0x799e54u: goto label_799e54;
        case 0x799e60u: goto label_799e60;
        case 0x799e70u: goto label_799e70;
        case 0x799e84u: goto label_799e84;
        case 0x799e94u: goto label_799e94;
        case 0x799eb4u: goto label_799eb4;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ef0u: goto label_799ef0;
        default: break;
    }

    ctx->pc = 0x799d78u;

    // 0x799d78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x799d7c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x799d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x799d80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x799d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x799d84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d88: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x799d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x799d8c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799d90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x799d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x799d94: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x799d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_799d98:
    // 0x799d98: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799EC8u;
            goto label_799ec8;
        }
    }
    ctx->pc = 0x799DA0u;
    // 0x799da0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x799da4: 0x2442aa20  addiu       $v0, $v0, -0x55E0
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945312));
    // 0x799da8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799dac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799db0: 0x800008  jr          $a0
    ctx->pc = 0x799DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799DB8u: goto label_799db8;
            case 0x799DF8u: goto label_799df8;
            case 0x799E08u: goto label_799e08;
            case 0x799E8Cu: goto label_799e8c;
            case 0x799EA4u: goto label_799ea4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799dbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799dc0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799dc4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dcc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x799dccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x799dd0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799dd4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799DD4u;
    SET_GPR_U32(ctx, 31, 0x799DDCu);
    ctx->pc = 0x799DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD4u;
    // 0x799dd8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799DDCu;
    SET_GPR_U32(ctx, 31, 0x799DE4u);
    ctx->pc = 0x799DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DDCu;
    // 0x799de0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799DDCu, 0x799DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE4u;
label_799de4:
    // 0x799de4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799DE4u;
    SET_GPR_U32(ctx, 31, 0x799DECu);
    ctx->pc = 0x799DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE4u;
    // 0x799de8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799df0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x799DF0u;
    {
        const bool branch_taken_0x799df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF0u;
        // 0x799df4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df0) {
            ctx->pc = 0x799E7Cu;
            goto label_799e7c;
        }
    }
    ctx->pc = 0x799DF8u;
label_799df8:
    // 0x799df8: 0xc1e693e  jal         func_79A4F8
    ctx->pc = 0x799DF8u;
    SET_GPR_U32(ctx, 31, 0x799E00u);
    ctx->pc = 0x79A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4F8u, 0x799DF8u, 0x799E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x799E00u;
    {
        const bool branch_taken_0x799e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e00) {
            ctx->pc = 0x799E98u;
            goto label_799e98;
        }
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799e0c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799e10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799e14: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799e14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e18: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x799e18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e20: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799E20u;
    SET_GPR_U32(ctx, 31, 0x799E28u);
    ctx->pc = 0x799E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E20u;
    // 0x799e24: 0xa3a50040  sb          $a1, 0x40($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799E20u, 0x799E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E28u;
label_799e28:
    // 0x799e28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E28u;
    {
        const bool branch_taken_0x799e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E28u;
        // 0x799e2c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e28) {
            ctx->pc = 0x799E3Cu;
            goto label_799e3c;
        }
    }
    ctx->pc = 0x799E30u;
    // 0x799e30: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799E30u;
    SET_GPR_U32(ctx, 31, 0x799E38u);
    ctx->pc = 0x799E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E30u;
    // 0x799e34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799E30u, 0x799E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E38u;
label_799e38:
    // 0x799e38: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799e3c:
    // 0x799e3c: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799E3Cu;
    SET_GPR_U32(ctx, 31, 0x799E44u);
    ctx->pc = 0x799E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E3Cu;
    // 0x799e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799E3Cu, 0x799E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E44u;
    {
        const bool branch_taken_0x799e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e44) {
            ctx->pc = 0x799E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E44u;
            // 0x799e48: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E58u;
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E4Cu;
    // 0x799e4c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799E4Cu;
    SET_GPR_U32(ctx, 31, 0x799E54u);
    ctx->pc = 0x799E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E4Cu;
    // 0x799e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799E4Cu, 0x799E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E54u;
label_799e54:
    // 0x799e54: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799e58:
    // 0x799e58: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799E58u;
    SET_GPR_U32(ctx, 31, 0x799E60u);
    ctx->pc = 0x799E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E58u;
    // 0x799e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799E58u, 0x799E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E60u;
label_799e60:
    // 0x799e60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E60u;
    {
        const bool branch_taken_0x799e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E60u;
        // 0x799e64: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e60) {
            ctx->pc = 0x799E74u;
            goto label_799e74;
        }
    }
    ctx->pc = 0x799E68u;
    // 0x799e68: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799E68u;
    SET_GPR_U32(ctx, 31, 0x799E70u);
    ctx->pc = 0x799E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E68u;
    // 0x799e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799E68u, 0x799E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E70u;
label_799e70:
    // 0x799e70: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799e74:
    // 0x799e74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799e78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799e7c:
    // 0x799e7c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E7Cu;
    SET_GPR_U32(ctx, 31, 0x799E84u);
    ctx->pc = 0x799E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E7Cu;
    // 0x799e80: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E7Cu, 0x799E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E84u;
label_799e84:
    // 0x799e84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x799E84u;
    {
        const bool branch_taken_0x799e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E84u;
        // 0x799e88: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e84) {
            ctx->pc = 0x799ECCu;
            goto label_799ecc;
        }
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0xc1e695e  jal         func_79A578
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x79A578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A578u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_799e98:
    // 0x799e98: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799e9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799E9Cu;
    {
        const bool branch_taken_0x799e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e9c) {
            ctx->pc = 0x799EC8u;
            goto label_799ec8;
        }
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799ea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eac: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799EACu;
    SET_GPR_U32(ctx, 31, 0x799EB4u);
    ctx->pc = 0x799EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EACu;
    // 0x799eb0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799EACu, 0x799EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB4u;
label_799eb4:
    // 0x799eb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x799EB4u;
    {
        const bool branch_taken_0x799eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799eb4) {
            ctx->pc = 0x799EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EB4u;
            // 0x799eb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EC8u;
            goto label_799ec8;
        }
    }
    ctx->pc = 0x799EBCu;
    // 0x799ebc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799ec8:
    // 0x799ec8: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x799ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_799ecc:
    // 0x799ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799ECCu;
    {
        const bool branch_taken_0x799ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ecc) {
            ctx->pc = 0x799EE8u;
            goto label_799ee8;
        }
    }
    ctx->pc = 0x799ED4u;
    // 0x799ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ed8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799ED8u;
    SET_GPR_U32(ctx, 31, 0x799EE0u);
    ctx->pc = 0x799EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED8u;
    // 0x799edc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799ED8u, 0x799EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE0u;
label_799ee0:
    // 0x799ee0: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x799EE0u;
    {
        const bool branch_taken_0x799ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE0u;
        // 0x799ee4: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee0) {
            ctx->pc = 0x799D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d98;
        }
    }
    ctx->pc = 0x799EE8u;
label_799ee8:
    // 0x799ee8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799EE8u;
    SET_GPR_U32(ctx, 31, 0x799EF0u);
    ctx->pc = 0x799EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE8u;
    // 0x799eec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799EE8u, 0x799EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF0u;
label_799ef0:
    // 0x799ef0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x799ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799ef4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x799ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799ef8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x799ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799efc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x799efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799f00: 0x3e00008  jr          $ra
    ctx->pc = 0x799F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F08u;
}
} // namespace gh_r200
