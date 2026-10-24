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

// Function: func_00329B60
// Address: 0x329b60 - 0x329c68
void func_00329B60_0x329b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329B60_0x329b60");
#endif

    switch (ctx->pc) {
        case 0x329b60u: goto label_329b60;
        case 0x329b64u: goto label_329b64;
        case 0x329b68u: goto label_329b68;
        case 0x329b6cu: goto label_329b6c;
        case 0x329b70u: goto label_329b70;
        case 0x329b74u: goto label_329b74;
        case 0x329b78u: goto label_329b78;
        case 0x329b7cu: goto label_329b7c;
        case 0x329b80u: goto label_329b80;
        case 0x329b84u: goto label_329b84;
        case 0x329b88u: goto label_329b88;
        case 0x329b8cu: goto label_329b8c;
        case 0x329b90u: goto label_329b90;
        case 0x329b94u: goto label_329b94;
        case 0x329b98u: goto label_329b98;
        case 0x329b9cu: goto label_329b9c;
        case 0x329ba0u: goto label_329ba0;
        case 0x329ba4u: goto label_329ba4;
        case 0x329ba8u: goto label_329ba8;
        case 0x329bacu: goto label_329bac;
        case 0x329bb0u: goto label_329bb0;
        case 0x329bb4u: goto label_329bb4;
        case 0x329bb8u: goto label_329bb8;
        case 0x329bbcu: goto label_329bbc;
        case 0x329bc0u: goto label_329bc0;
        case 0x329bc4u: goto label_329bc4;
        case 0x329bc8u: goto label_329bc8;
        case 0x329bccu: goto label_329bcc;
        case 0x329bd0u: goto label_329bd0;
        case 0x329bd4u: goto label_329bd4;
        case 0x329bd8u: goto label_329bd8;
        case 0x329bdcu: goto label_329bdc;
        case 0x329be0u: goto label_329be0;
        case 0x329be4u: goto label_329be4;
        case 0x329be8u: goto label_329be8;
        case 0x329becu: goto label_329bec;
        case 0x329bf0u: goto label_329bf0;
        case 0x329bf4u: goto label_329bf4;
        case 0x329bf8u: goto label_329bf8;
        case 0x329bfcu: goto label_329bfc;
        case 0x329c00u: goto label_329c00;
        case 0x329c04u: goto label_329c04;
        case 0x329c08u: goto label_329c08;
        case 0x329c0cu: goto label_329c0c;
        case 0x329c10u: goto label_329c10;
        case 0x329c14u: goto label_329c14;
        case 0x329c18u: goto label_329c18;
        case 0x329c1cu: goto label_329c1c;
        case 0x329c20u: goto label_329c20;
        case 0x329c24u: goto label_329c24;
        case 0x329c28u: goto label_329c28;
        case 0x329c2cu: goto label_329c2c;
        case 0x329c30u: goto label_329c30;
        case 0x329c34u: goto label_329c34;
        case 0x329c38u: goto label_329c38;
        case 0x329c3cu: goto label_329c3c;
        case 0x329c40u: goto label_329c40;
        case 0x329c44u: goto label_329c44;
        case 0x329c48u: goto label_329c48;
        case 0x329c4cu: goto label_329c4c;
        case 0x329c50u: goto label_329c50;
        case 0x329c54u: goto label_329c54;
        case 0x329c58u: goto label_329c58;
        case 0x329c5cu: goto label_329c5c;
        case 0x329c60u: goto label_329c60;
        case 0x329c64u: goto label_329c64;
        default: break;
    }

    ctx->pc = 0x329b60u;

label_329b60:
    // 0x329b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_329b64:
    // 0x329b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329b68:
    // 0x329b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329b6c:
    // 0x329b6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_329b70:
    // 0x329b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x329b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329b74:
    // 0x329b74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x329b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_329b78:
    // 0x329b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329b7c:
    // 0x329b7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_329b80:
    // 0x329b80: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x329b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_329b84:
    // 0x329b84: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_329b88:
    if (ctx->pc == 0x329B88u) {
        ctx->pc = 0x329B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B84u;
        // 0x329b88: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B8Cu;
        goto label_329b8c;
    }
    ctx->pc = 0x329B84u;
    {
        const bool branch_taken_0x329b84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x329B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B84u;
        // 0x329b88: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b84) {
            ctx->pc = 0x329BBCu;
            goto label_329bbc;
        }
    }
    ctx->pc = 0x329B8Cu;
label_329b8c:
    // 0x329b8c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x329b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_329b90:
    // 0x329b90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x329b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_329b94:
    // 0x329b94: 0x0  nop
    ctx->pc = 0x329b94u;
    // NOP
label_329b98:
    // 0x329b98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x329b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_329b9c:
    // 0x329b9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x329b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329ba0:
    // 0x329ba0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x329ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_329ba4:
    // 0x329ba4: 0x60f809  jalr        $v1
label_329ba8:
    if (ctx->pc == 0x329BA8u) {
        ctx->pc = 0x329BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BA4u;
        // 0x329ba8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BACu;
        goto label_329bac;
    }
    ctx->pc = 0x329BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329BACu);
        ctx->pc = 0x329BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BA4u;
        // 0x329ba8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329BA4u, 0x329BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329BACu;
label_329bac:
    // 0x329bac: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x329bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_329bb0:
    // 0x329bb0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x329bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_329bb4:
    // 0x329bb4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_329bb8:
    if (ctx->pc == 0x329BB8u) {
        ctx->pc = 0x329BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BB4u;
        // 0x329bb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BBCu;
        goto label_329bbc;
    }
    ctx->pc = 0x329BB4u;
    {
        const bool branch_taken_0x329bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329bb4) {
            ctx->pc = 0x329BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329BB4u;
            // 0x329bb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329b98;
        }
    }
    ctx->pc = 0x329BBCu;
label_329bbc:
    // 0x329bbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x329bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_329bc0:
    // 0x329bc0: 0xc0c99e0  jal         func_326780
label_329bc4:
    if (ctx->pc == 0x329BC4u) {
        ctx->pc = 0x329BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BC0u;
        // 0x329bc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BC8u;
        goto label_329bc8;
    }
    ctx->pc = 0x329BC0u;
    SET_GPR_U32(ctx, 31, 0x329BC8u);
    ctx->pc = 0x329BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329BC0u;
    // 0x329bc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326780u, 0x329BC0u, 0x329BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329BC8u;
label_329bc8:
    // 0x329bc8: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x329bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_329bcc:
    // 0x329bcc: 0xc0c9a0c  jal         func_326830
label_329bd0:
    if (ctx->pc == 0x329BD0u) {
        ctx->pc = 0x329BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BCCu;
        // 0x329bd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BD4u;
        goto label_329bd4;
    }
    ctx->pc = 0x329BCCu;
    SET_GPR_U32(ctx, 31, 0x329BD4u);
    ctx->pc = 0x329BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329BCCu;
    // 0x329bd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326830u, 0x329BCCu, 0x329BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329BD4u;
label_329bd4:
    // 0x329bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329bd8:
    // 0x329bd8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x329bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_329bdc:
    // 0x329bdc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x329bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_329be0:
    // 0x329be0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x329be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_329be4:
    // 0x329be4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x329be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_329be8:
    // 0x329be8: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x329be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_329bec:
    // 0x329bec: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x329becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_329bf0:
    // 0x329bf0: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x329bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_329bf4:
    // 0x329bf4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x329bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_329bf8:
    // 0x329bf8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x329bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_329bfc:
    // 0x329bfc: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x329bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_329c00:
    // 0x329c00: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x329c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_329c04:
    // 0x329c04: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x329c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_329c08:
    // 0x329c08: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x329c08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_329c0c:
    // 0x329c0c: 0x8ca27418  lw          $v0, 0x7418($a1)
    ctx->pc = 0x329c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29720)));
label_329c10:
    // 0x329c10: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x329c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_329c14:
    // 0x329c14: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_329c18:
    if (ctx->pc == 0x329C18u) {
        ctx->pc = 0x329C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C14u;
        // 0x329c18: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C1Cu;
        goto label_329c1c;
    }
    ctx->pc = 0x329C14u;
    {
        const bool branch_taken_0x329c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x329C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C14u;
        // 0x329c18: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c14) {
            ctx->pc = 0x329C28u;
            goto label_329c28;
        }
    }
    ctx->pc = 0x329C1Cu;
label_329c1c:
    // 0x329c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329c20:
    // 0x329c20: 0xc0cac62  jal         func_32B188
label_329c24:
    if (ctx->pc == 0x329C24u) {
        ctx->pc = 0x329C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C20u;
        // 0x329c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C28u;
        goto label_329c28;
    }
    ctx->pc = 0x329C20u;
    SET_GPR_U32(ctx, 31, 0x329C28u);
    ctx->pc = 0x329C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C20u;
    // 0x329c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B188u, 0x329C20u, 0x329C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C28u;
label_329c28:
    // 0x329c28: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x329c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_329c2c:
    // 0x329c2c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_329c30:
    if (ctx->pc == 0x329C30u) {
        ctx->pc = 0x329C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C2Cu;
        // 0x329c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C34u;
        goto label_329c34;
    }
    ctx->pc = 0x329C2Cu;
    {
        const bool branch_taken_0x329c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C2Cu;
        // 0x329c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c2c) {
            ctx->pc = 0x329C50u;
            goto label_329c50;
        }
    }
    ctx->pc = 0x329C34u;
label_329c34:
    // 0x329c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329c38:
    // 0x329c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329c3c:
    // 0x329c3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329c40:
    // 0x329c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329c44:
    // 0x329c44: 0x80cf022  j           func_33C088
label_329c48:
    if (ctx->pc == 0x329C48u) {
        ctx->pc = 0x329C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C44u;
        // 0x329c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C4Cu;
        goto label_329c4c;
    }
    ctx->pc = 0x329C44u;
    ctx->pc = 0x329C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C44u;
    // 0x329c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C088u, 0x329C44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329C4Cu;
label_329c4c:
    // 0x329c4c: 0x0  nop
    ctx->pc = 0x329c4cu;
    // NOP
label_329c50:
    // 0x329c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329c54:
    // 0x329c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329c58:
    // 0x329c58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329c5c:
    // 0x329c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329c60:
    // 0x329c60: 0x3e00008  jr          $ra
label_329c64:
    if (ctx->pc == 0x329C64u) {
        ctx->pc = 0x329C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C60u;
        // 0x329c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C68u;
        goto label_fallthrough_0x329c60;
    }
    ctx->pc = 0x329C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C60u;
        // 0x329c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x329c60:
    ctx->pc = 0x329C68u;
}
