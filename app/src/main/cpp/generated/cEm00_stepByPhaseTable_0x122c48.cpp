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

// Function: cEm00_stepByPhaseTable
// Address: 0x122c48 - 0x122d18
void cEm00_stepByPhaseTable_0x122c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepByPhaseTable_0x122c48");
#endif

    switch (ctx->pc) {
        case 0x122c48u: goto label_122c48;
        case 0x122c4cu: goto label_122c4c;
        case 0x122c50u: goto label_122c50;
        case 0x122c54u: goto label_122c54;
        case 0x122c58u: goto label_122c58;
        case 0x122c5cu: goto label_122c5c;
        case 0x122c60u: goto label_122c60;
        case 0x122c64u: goto label_122c64;
        case 0x122c68u: goto label_122c68;
        case 0x122c6cu: goto label_122c6c;
        case 0x122c70u: goto label_122c70;
        case 0x122c74u: goto label_122c74;
        case 0x122c78u: goto label_122c78;
        case 0x122c7cu: goto label_122c7c;
        case 0x122c80u: goto label_122c80;
        case 0x122c84u: goto label_122c84;
        case 0x122c88u: goto label_122c88;
        case 0x122c8cu: goto label_122c8c;
        case 0x122c90u: goto label_122c90;
        case 0x122c94u: goto label_122c94;
        case 0x122c98u: goto label_122c98;
        case 0x122c9cu: goto label_122c9c;
        case 0x122ca0u: goto label_122ca0;
        case 0x122ca4u: goto label_122ca4;
        case 0x122ca8u: goto label_122ca8;
        case 0x122cacu: goto label_122cac;
        case 0x122cb0u: goto label_122cb0;
        case 0x122cb4u: goto label_122cb4;
        case 0x122cb8u: goto label_122cb8;
        case 0x122cbcu: goto label_122cbc;
        case 0x122cc0u: goto label_122cc0;
        case 0x122cc4u: goto label_122cc4;
        case 0x122cc8u: goto label_122cc8;
        case 0x122cccu: goto label_122ccc;
        case 0x122cd0u: goto label_122cd0;
        case 0x122cd4u: goto label_122cd4;
        case 0x122cd8u: goto label_122cd8;
        case 0x122cdcu: goto label_122cdc;
        case 0x122ce0u: goto label_122ce0;
        case 0x122ce4u: goto label_122ce4;
        case 0x122ce8u: goto label_122ce8;
        case 0x122cecu: goto label_122cec;
        case 0x122cf0u: goto label_122cf0;
        case 0x122cf4u: goto label_122cf4;
        case 0x122cf8u: goto label_122cf8;
        case 0x122cfcu: goto label_122cfc;
        case 0x122d00u: goto label_122d00;
        case 0x122d04u: goto label_122d04;
        case 0x122d08u: goto label_122d08;
        case 0x122d0cu: goto label_122d0c;
        case 0x122d10u: goto label_122d10;
        case 0x122d14u: goto label_122d14;
        default: break;
    }

    ctx->pc = 0x122c48u;

label_122c48:
    // 0x122c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_122c4c:
    // 0x122c4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x122c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_122c50:
    // 0x122c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_122c54:
    // 0x122c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122c58:
    // 0x122c58: 0xc049396  jal         func_124E58
label_122c5c:
    if (ctx->pc == 0x122C5Cu) {
        ctx->pc = 0x122C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C58u;
        // 0x122c5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C60u;
        goto label_122c60;
    }
    ctx->pc = 0x122C58u;
    SET_GPR_U32(ctx, 31, 0x122C60u);
    ctx->pc = 0x122C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C58u;
    // 0x122c5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x122C58u, 0x122C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C60u;
label_122c60:
    // 0x122c60: 0xc04ab0a  jal         func_12AC28
label_122c64:
    if (ctx->pc == 0x122C64u) {
        ctx->pc = 0x122C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C60u;
        // 0x122c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C68u;
        goto label_122c68;
    }
    ctx->pc = 0x122C60u;
    SET_GPR_U32(ctx, 31, 0x122C68u);
    ctx->pc = 0x122C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C60u;
    // 0x122c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x122C60u, 0x122C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C68u;
label_122c68:
    // 0x122c68: 0xc04ae4a  jal         func_12B928
label_122c6c:
    if (ctx->pc == 0x122C6Cu) {
        ctx->pc = 0x122C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C68u;
        // 0x122c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C70u;
        goto label_122c70;
    }
    ctx->pc = 0x122C68u;
    SET_GPR_U32(ctx, 31, 0x122C70u);
    ctx->pc = 0x122C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C68u;
    // 0x122c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x122C68u, 0x122C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C70u;
label_122c70:
    // 0x122c70: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x122c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_122c74:
    // 0x122c74: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x122c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_122c78:
    // 0x122c78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_122c7c:
    if (ctx->pc == 0x122C7Cu) {
        ctx->pc = 0x122C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C78u;
        // 0x122c7c: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C80u;
        goto label_122c80;
    }
    ctx->pc = 0x122C78u;
    {
        const bool branch_taken_0x122c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122c78) {
            ctx->pc = 0x122C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122C78u;
            // 0x122c7c: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122C80u;
            goto label_122c80;
        }
    }
    ctx->pc = 0x122C80u;
label_122c80:
    // 0x122c80: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_122c84:
    // 0x122c84: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x122c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_122c88:
    // 0x122c88: 0x2446d458  addiu       $a2, $v0, -0x2BA8
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956120));
label_122c8c:
    // 0x122c8c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x122c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122c90:
    // 0x122c90: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x122c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_122c94:
    // 0x122c94: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_122c98:
    // 0x122c98: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_122c9c:
    // 0x122c9c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_122ca0:
    if (ctx->pc == 0x122CA0u) {
        ctx->pc = 0x122CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C9Cu;
        // 0x122ca0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CA4u;
        goto label_122ca4;
    }
    ctx->pc = 0x122C9Cu;
    {
        const bool branch_taken_0x122c9c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x122CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C9Cu;
        // 0x122ca0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c9c) {
            ctx->pc = 0x122CC8u;
            goto label_122cc8;
        }
    }
    ctx->pc = 0x122CA4u;
label_122ca4:
    // 0x122ca4: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x122ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_122ca8:
    // 0x122ca8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_122cac:
    // 0x122cac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x122cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_122cb0:
    // 0x122cb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122cb4:
    // 0x122cb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x122cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_122cb8:
    // 0x122cb8: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x122cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_122cbc:
    // 0x122cbc: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x122cbcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_122cc0:
    // 0x122cc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_122cc4:
    if (ctx->pc == 0x122CC4u) {
        ctx->pc = 0x122CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CC0u;
        // 0x122cc4: 0x2503d458  addiu       $v1, $t0, -0x2BA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CC8u;
        goto label_122cc8;
    }
    ctx->pc = 0x122CC0u;
    {
        const bool branch_taken_0x122cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CC0u;
        // 0x122cc4: 0x2503d458  addiu       $v1, $t0, -0x2BA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cc0) {
            ctx->pc = 0x122CD4u;
            goto label_122cd4;
        }
    }
    ctx->pc = 0x122CC8u;
label_122cc8:
    // 0x122cc8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x122cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_122ccc:
    // 0x122ccc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x122cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_122cd0:
    // 0x122cd0: 0x2503d458  addiu       $v1, $t0, -0x2BA8
    ctx->pc = 0x122cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956120));
label_122cd4:
    // 0x122cd4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x122cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_122cd8:
    // 0x122cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x122cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_122cdc:
    // 0x122cdc: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_122ce0:
    if (ctx->pc == 0x122CE0u) {
        ctx->pc = 0x122CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CDCu;
        // 0x122ce0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CE4u;
        goto label_122ce4;
    }
    ctx->pc = 0x122CDCu;
    {
        const bool branch_taken_0x122cdc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x122CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CDCu;
        // 0x122ce0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cdc) {
            ctx->pc = 0x122CF8u;
            goto label_122cf8;
        }
    }
    ctx->pc = 0x122CE4u;
label_122ce4:
    // 0x122ce4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x122ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_122ce8:
    // 0x122ce8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x122ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_122cec:
    // 0x122cec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_122cf0:
    // 0x122cf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_122cf4:
    if (ctx->pc == 0x122CF4u) {
        ctx->pc = 0x122CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CF0u;
        // 0x122cf4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CF8u;
        goto label_122cf8;
    }
    ctx->pc = 0x122CF0u;
    {
        const bool branch_taken_0x122cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CF0u;
        // 0x122cf4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cf0) {
            ctx->pc = 0x122CFCu;
            goto label_122cfc;
        }
    }
    ctx->pc = 0x122CF8u;
label_122cf8:
    // 0x122cf8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x122cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_122cfc:
    // 0x122cfc: 0xc0f809  jalr        $a2
label_122d00:
    if (ctx->pc == 0x122D00u) {
        ctx->pc = 0x122D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CFCu;
        // 0x122d00: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D04u;
        goto label_122d04;
    }
    ctx->pc = 0x122CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x122D04u);
        ctx->pc = 0x122D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CFCu;
        // 0x122d00: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122CFCu, 0x122D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122D04u;
label_122d04:
    // 0x122d04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x122d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122d08:
    // 0x122d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122d0c:
    // 0x122d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122d10:
    // 0x122d10: 0x3e00008  jr          $ra
label_122d14:
    if (ctx->pc == 0x122D14u) {
        ctx->pc = 0x122D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D10u;
        // 0x122d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D18u;
        goto label_fallthrough_0x122d10;
    }
    ctx->pc = 0x122D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D10u;
        // 0x122d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122d10:
    ctx->pc = 0x122D18u;
}
