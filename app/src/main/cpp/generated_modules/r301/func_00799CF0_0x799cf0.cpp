#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_00799CF0
// Address: 0x799cf0 - 0x799e30
void func_00799CF0_0x799cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799CF0_0x799cf0");
#endif

    switch (ctx->pc) {
        case 0x799d40u: goto label_799d40;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d70u: goto label_799d70;
        case 0x799d84u: goto label_799d84;
        case 0x799d8cu: goto label_799d8c;
        case 0x799dacu: goto label_799dac;
        case 0x799db8u: goto label_799db8;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd8u: goto label_799dd8;
        case 0x799de4u: goto label_799de4;
        case 0x799decu: goto label_799dec;
        case 0x799e00u: goto label_799e00;
        case 0x799e0cu: goto label_799e0c;
        default: break;
    }

    ctx->pc = 0x799cf0u;

    // 0x799cf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799cf4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799cf8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799cfc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799d00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799d04: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799d08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799d0c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799d10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799d14: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799d18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x799d1c: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x799d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799d24: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799d28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799d30: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D60u;
            goto label_799d60;
        }
    }
    ctx->pc = 0x799D38u;
    // 0x799d38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799D38u;
    {
        const bool branch_taken_0x799d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D38u;
        // 0x799d3c: 0x8e03e010  lw          $v1, -0x1FF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d38) {
            ctx->pc = 0x799D50u;
            goto label_799d50;
        }
    }
    ctx->pc = 0x799D40u;
label_799d40:
    // 0x799d40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d44: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799D44u;
    SET_GPR_U32(ctx, 31, 0x799D4Cu);
    ctx->pc = 0x799D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D44u;
    // 0x799d48: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799D44u, 0x799D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D4Cu;
label_799d4c:
    // 0x799d4c: 0x8e03e010  lw          $v1, -0x1FF0($s0)
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959120)));
label_799d50:
    // 0x799d50: 0x9c62009c  lwu         $v0, 0x9C($v1)
    ctx->pc = 0x799d50u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x799d54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799d58: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799D58u;
    {
        const bool branch_taken_0x799d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D58u;
        // 0x799d5c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d58) {
            ctx->pc = 0x799D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d40;
        }
    }
    ctx->pc = 0x799D60u;
label_799d60:
    // 0x799d60: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d68: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D68u;
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x2645a150  addiu       $a1, $s2, -0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D68u, 0x799D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D70u;
label_799d70:
    // 0x799d70: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799d74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799d78: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x799d78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x799d7c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799D7Cu;
    SET_GPR_U32(ctx, 31, 0x799D84u);
    ctx->pc = 0x799D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D7Cu;
    // 0x799d80: 0x26646ab0  addiu       $a0, $s3, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799D7Cu, 0x799D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D84u;
label_799d84:
    // 0x799d84: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799D84u;
    SET_GPR_U32(ctx, 31, 0x799D8Cu);
    ctx->pc = 0x799D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D84u;
    // 0x799d88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799D84u, 0x799D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D8Cu;
label_799d8c:
    // 0x799d8c: 0x8e03e010  lw          $v1, -0x1FF0($s0)
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959120)));
    // 0x799d90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d94: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x799d98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799d9c: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799da4: 0xc0a5834  jal         func_2960D0
    ctx->pc = 0x799DA4u;
    SET_GPR_U32(ctx, 31, 0x799DACu);
    ctx->pc = 0x799DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA4u;
    // 0x799da8: 0xac620460  sw          $v0, 0x460($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960D0u, 0x799DA4u, 0x799DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DACu;
label_799dac:
    // 0x799dac: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799dacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799db0: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799DB8u;
    {
        const bool branch_taken_0x799db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB8u;
        // 0x799dbc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799db8) {
            ctx->pc = 0x799DD0u;
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DC0u;
    // 0x799dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dc4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x799dc8: 0xc04d484  jal         func_135210
    ctx->pc = 0x799DC8u;
    SET_GPR_U32(ctx, 31, 0x799DD0u);
    ctx->pc = 0x799DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC8u;
    // 0x799dcc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x799DC8u, 0x799DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD0u;
        // 0x799dd4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799DE4u;
            goto label_799de4;
        }
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ddc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DDCu;
    SET_GPR_U32(ctx, 31, 0x799DE4u);
    ctx->pc = 0x799DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DDCu;
    // 0x799de0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DDCu, 0x799DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE4u;
label_799de4:
    // 0x799de4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799DE4u;
    SET_GPR_U32(ctx, 31, 0x799DECu);
    ctx->pc = 0x799DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE4u;
    // 0x799de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799DECu;
    {
        const bool branch_taken_0x799dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x799DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DECu;
        // 0x799df0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dec) {
            ctx->pc = 0x799DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799DF4u;
    // 0x799df4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799df8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DF8u;
    SET_GPR_U32(ctx, 31, 0x799E00u);
    ctx->pc = 0x799DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF8u;
    // 0x799dfc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DF8u, 0x799E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799e04: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E04u;
    SET_GPR_U32(ctx, 31, 0x799E0Cu);
    ctx->pc = 0x799E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E04u;
    // 0x799e08: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E04u, 0x799E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E0Cu;
label_799e0c:
    // 0x799e0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799e10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799e14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799e18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799e1c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e24: 0x3e00008  jr          $ra
    ctx->pc = 0x799E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E2Cu;
    // 0x799e2c: 0x0  nop
    ctx->pc = 0x799e2cu;
    // NOP
    ctx->pc = 0x799e30u;
}
} // namespace gh_r301
