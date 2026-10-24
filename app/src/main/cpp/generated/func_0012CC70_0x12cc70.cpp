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

// Function: func_0012CC70
// Address: 0x12cc70 - 0x12cd70
void func_0012CC70_0x12cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012CC70_0x12cc70");
#endif

    switch (ctx->pc) {
        case 0x12ccd0u: goto label_12ccd0;
        case 0x12ccf0u: goto label_12ccf0;
        case 0x12cd18u: goto label_12cd18;
        case 0x12cd3cu: goto label_12cd3c;
        case 0x12cd60u: goto label_12cd60;
        default: break;
    }

    ctx->pc = 0x12cc70u;

    // 0x12cc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12cc74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12cc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12cc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc80: 0x8e020644  lw          $v0, 0x644($s0)
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x12cc84: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x12CC84u;
    {
        const bool branch_taken_0x12cc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cc84) {
            ctx->pc = 0x12CC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC84u;
            // 0x12cc88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD64u;
            goto label_12cd64;
        }
    }
    ctx->pc = 0x12CC8Cu;
    // 0x12cc8c: 0x8e060640  lw          $a2, 0x640($s0)
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x12cc90: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x12CC90u;
    {
        const bool branch_taken_0x12cc90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC90u;
        // 0x12cc94: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc90) {
            ctx->pc = 0x12CD60u;
            goto label_12cd60;
        }
    }
    ctx->pc = 0x12CC98u;
    // 0x12cc98: 0x8e0315f4  lw          $v1, 0x15F4($s0)
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12cc9c: 0xae060644  sw          $a2, 0x644($s0)
    ctx->pc = 0x12cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 6));
    // 0x12cca0: 0x2404026a  addiu       $a0, $zero, 0x26A
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x12cca4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cca8: 0xae0315f4  sw          $v1, 0x15F4($s0)
    ctx->pc = 0x12cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 3));
    // 0x12ccac: 0x8cc20564  lw          $v0, 0x564($a2)
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1380)));
    // 0x12ccb0: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12CCB0u;
    {
        const bool branch_taken_0x12ccb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCB0u;
        // 0x12ccb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccb0) {
            ctx->pc = 0x12CCD8u;
            goto label_12ccd8;
        }
    }
    ctx->pc = 0x12CCB8u;
    // 0x12ccb8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12ccbc: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x12ccc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12ccc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccc4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x12ccc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12ccc8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12CCC8u;
    SET_GPR_U32(ctx, 31, 0x12CCD0u);
    ctx->pc = 0x12CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CCC8u;
    // 0x12cccc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12CCC8u, 0x12CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCD0u;
label_12ccd0:
    // 0x12ccd0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x12CCD0u;
    {
        const bool branch_taken_0x12ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCD0u;
        // 0x12ccd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccd0) {
            ctx->pc = 0x12CD64u;
            goto label_12cd64;
        }
    }
    ctx->pc = 0x12CCD8u;
label_12ccd8:
    // 0x12ccd8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12ccdc: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x12ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x12cce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12cce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cce4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12cce8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12CCE8u;
    SET_GPR_U32(ctx, 31, 0x12CCF0u);
    ctx->pc = 0x12CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CCE8u;
    // 0x12ccec: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12CCE8u, 0x12CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCF0u;
label_12ccf0:
    // 0x12ccf0: 0x8e100644  lw          $s0, 0x644($s0)
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x12ccf4: 0x8e060748  lw          $a2, 0x748($s0)
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x12ccf8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CCF8u;
    {
        const bool branch_taken_0x12ccf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCF8u;
        // 0x12ccfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccf8) {
            ctx->pc = 0x12CD18u;
            goto label_12cd18;
        }
    }
    ctx->pc = 0x12CD00u;
    // 0x12cd00: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12cd00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12cd04: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x12cd08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12cd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd0c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12cd10: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12CD10u;
    SET_GPR_U32(ctx, 31, 0x12CD18u);
    ctx->pc = 0x12CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD10u;
    // 0x12cd14: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12CD10u, 0x12CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD18u;
label_12cd18:
    // 0x12cd18: 0x8e06074c  lw          $a2, 0x74C($s0)
    ctx->pc = 0x12cd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x12cd1c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CD1Cu;
    {
        const bool branch_taken_0x12cd1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD1Cu;
        // 0x12cd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd1c) {
            ctx->pc = 0x12CD3Cu;
            goto label_12cd3c;
        }
    }
    ctx->pc = 0x12CD24u;
    // 0x12cd24: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12cd28: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x12cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x12cd2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12cd2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd30: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x12cd30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12cd34: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12CD34u;
    SET_GPR_U32(ctx, 31, 0x12CD3Cu);
    ctx->pc = 0x12CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD34u;
    // 0x12cd38: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12CD34u, 0x12CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD3Cu;
label_12cd3c:
    // 0x12cd3c: 0x8e060750  lw          $a2, 0x750($s0)
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x12cd40: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CD40u;
    {
        const bool branch_taken_0x12cd40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD40u;
        // 0x12cd44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd40) {
            ctx->pc = 0x12CD60u;
            goto label_12cd60;
        }
    }
    ctx->pc = 0x12CD48u;
    // 0x12cd48: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12cd48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12cd4c: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x12cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x12cd50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12cd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd54: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12cd58: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12CD58u;
    SET_GPR_U32(ctx, 31, 0x12CD60u);
    ctx->pc = 0x12CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD58u;
    // 0x12cd5c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12CD58u, 0x12CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD60u;
label_12cd60:
    // 0x12cd60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12cd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12cd64:
    // 0x12cd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cd68: 0x3e00008  jr          $ra
    ctx->pc = 0x12CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD68u;
        // 0x12cd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CD70u;
}
