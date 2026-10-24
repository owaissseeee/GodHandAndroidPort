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

// Function: cSndBgmNode_Fade
// Address: 0x2ccbf8 - 0x2ccd80
void cSndBgmNode_Fade_0x2ccbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Fade_0x2ccbf8");
#endif

    switch (ctx->pc) {
        case 0x2ccc10u: goto label_2ccc10;
        case 0x2ccc60u: goto label_2ccc60;
        case 0x2ccc8cu: goto label_2ccc8c;
        case 0x2ccca0u: goto label_2ccca0;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccd8u: goto label_2cccd8;
        case 0x2cccf4u: goto label_2cccf4;
        case 0x2ccd14u: goto label_2ccd14;
        case 0x2ccd2cu: goto label_2ccd2c;
        case 0x2ccd5cu: goto label_2ccd5c;
        default: break;
    }

    ctx->pc = 0x2ccbf8u;

    // 0x2ccbf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ccbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ccbfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ccbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ccc00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ccc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ccc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ccc08: 0xc0b32d6  jal         func_2CCB58
    ctx->pc = 0x2CCC08u;
    SET_GPR_U32(ctx, 31, 0x2CCC10u);
    ctx->pc = 0x2CCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC08u;
    // 0x2ccc0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB58u, 0x2CCC08u, 0x2CCC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC10u;
label_2ccc10:
    // 0x2ccc10: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccc14: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x2ccc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ccc18: 0x10710022  beq         $v1, $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CCC18u;
    {
        const bool branch_taken_0x2ccc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CCC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC18u;
        // 0x2ccc1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc18) {
            ctx->pc = 0x2CCCA4u;
            goto label_2ccca4;
        }
    }
    ctx->pc = 0x2CCC20u;
    // 0x2ccc20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCC20u;
    {
        const bool branch_taken_0x2ccc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc20) {
            ctx->pc = 0x2CCC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC20u;
            // 0x2ccc24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC38u;
            goto label_2ccc38;
        }
    }
    ctx->pc = 0x2CCC28u;
    // 0x2ccc28: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCC28u;
    {
        const bool branch_taken_0x2ccc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc28) {
            ctx->pc = 0x2CCC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC28u;
            // 0x2ccc2c: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC48u;
            goto label_2ccc48;
        }
    }
    ctx->pc = 0x2CCC30u;
    // 0x2ccc30: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CCC30u;
    {
        const bool branch_taken_0x2ccc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC30u;
        // 0x2ccc34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc30) {
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCC38u;
label_2ccc38:
    // 0x2ccc38: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CCC38u;
    {
        const bool branch_taken_0x2ccc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ccc38) {
            ctx->pc = 0x2CCCECu;
            goto label_2cccec;
        }
    }
    ctx->pc = 0x2CCC40u;
    // 0x2ccc40: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2CCC40u;
    {
        const bool branch_taken_0x2ccc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC40u;
        // 0x2ccc44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc40) {
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCC48u;
label_2ccc48:
    // 0x2ccc48: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2ccc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2ccc4c: 0x54620047  bnel        $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CCC4Cu;
    {
        const bool branch_taken_0x2ccc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccc4c) {
            ctx->pc = 0x2CCC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC4Cu;
            // 0x2ccc50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCC54u;
    // 0x2ccc54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2ccc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ccc58: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CCC58u;
    SET_GPR_U32(ctx, 31, 0x2CCC60u);
    ctx->pc = 0x2CCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC58u;
    // 0x2ccc5c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CCC58u, 0x2CCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC60u;
label_2ccc60:
    // 0x2ccc60: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2ccc64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ccc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ccc68: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2CCC68u;
    {
        const bool branch_taken_0x2ccc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC68u;
        // 0x2ccc6c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc68) {
            ctx->pc = 0x2CCD68u;
            goto label_2ccd68;
        }
    }
    ctx->pc = 0x2CCC70u;
    // 0x2ccc70: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2ccc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2ccc74: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2ccc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2ccc78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ccc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ccc7c: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CCC7Cu;
    {
        const bool branch_taken_0x2ccc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc7c) {
            ctx->pc = 0x2CCC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC7Cu;
            // 0x2ccc80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCC84u;
    // 0x2ccc84: 0xc0b34e6  jal         func_2CD398
    ctx->pc = 0x2CCC84u;
    SET_GPR_U32(ctx, 31, 0x2CCC8Cu);
    ctx->pc = 0x2CCC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC84u;
    // 0x2ccc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD398u, 0x2CCC84u, 0x2CCC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC8Cu;
label_2ccc8c:
    // 0x2ccc8c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2CCC8Cu;
    {
        const bool branch_taken_0x2ccc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc8c) {
            ctx->pc = 0x2CCC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC8Cu;
            // 0x2ccc90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCC94u;
    // 0x2ccc94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc98: 0xc0dce04  jal         func_373810
    ctx->pc = 0x2CCC98u;
    SET_GPR_U32(ctx, 31, 0x2CCCA0u);
    ctx->pc = 0x2CCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC98u;
    // 0x2ccc9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373810u, 0x2CCC98u, 0x2CCCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCA0u;
label_2ccca0:
    // 0x2ccca0: 0xae1100b0  sw          $s1, 0xB0($s0)
    ctx->pc = 0x2ccca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
label_2ccca4:
    // 0x2ccca4: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2ccca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2ccca8: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2cccac: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCCACu;
    {
        const bool branch_taken_0x2cccac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCACu;
        // 0x2cccb0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccac) {
            ctx->pc = 0x2CCCCCu;
            goto label_2ccccc;
        }
    }
    ctx->pc = 0x2CCCB4u;
    // 0x2cccb4: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CCCB4u;
    SET_GPR_U32(ctx, 31, 0x2CCCBCu);
    ctx->pc = 0x2CCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCB4u;
    // 0x2cccb8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CCCB4u, 0x2CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCBCu;
label_2cccbc:
    // 0x2cccbc: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2cccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2cccc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cccc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cccc4: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CCCC4u;
    {
        const bool branch_taken_0x2cccc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cccc4) {
            ctx->pc = 0x2CCCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCCC4u;
            // 0x2cccc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCCCCu;
label_2ccccc:
    // 0x2ccccc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cccccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cccd0: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2CCCD0u;
    SET_GPR_U32(ctx, 31, 0x2CCCD8u);
    ctx->pc = 0x2CCCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCD0u;
    // 0x2cccd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2CCCD0u, 0x2CCCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCD8u;
label_2cccd8:
    // 0x2cccd8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2cccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cccdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccce0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x2ccce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x2ccce4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CCCE4u;
    {
        const bool branch_taken_0x2ccce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCE4u;
        // 0x2ccce8: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccce4) {
            ctx->pc = 0x2CCD68u;
            goto label_2ccd68;
        }
    }
    ctx->pc = 0x2CCCECu;
label_2cccec:
    // 0x2cccec: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x2CCCECu;
    SET_GPR_U32(ctx, 31, 0x2CCCF4u);
    ctx->pc = 0x2CCCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCECu;
    // 0x2cccf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x2CCCECu, 0x2CCCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCF4u;
label_2cccf4:
    // 0x2cccf4: 0x5451000b  bnel        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CCCF4u;
    {
        const bool branch_taken_0x2cccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2cccf4) {
            ctx->pc = 0x2CCCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCCF4u;
            // 0x2cccf8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD24u;
            goto label_2ccd24;
        }
    }
    ctx->pc = 0x2CCCFCu;
    // 0x2cccfc: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2ccd00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCD00u;
    {
        const bool branch_taken_0x2ccd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD00u;
        // 0x2ccd04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd00) {
            ctx->pc = 0x2CCD1Cu;
            goto label_2ccd1c;
        }
    }
    ctx->pc = 0x2CCD08u;
    // 0x2ccd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd0c: 0xc0dce16  jal         func_373858
    ctx->pc = 0x2CCD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD14u);
    ctx->pc = 0x2CCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD0Cu;
    // 0x2ccd10: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373858u, 0x2CCD0Cu, 0x2CCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD14u;
label_2ccd14:
    // 0x2ccd14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCD14u;
    {
        const bool branch_taken_0x2ccd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD14u;
        // 0x2ccd18: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd14) {
            ctx->pc = 0x2CCD20u;
            goto label_2ccd20;
        }
    }
    ctx->pc = 0x2CCD1Cu;
label_2ccd1c:
    // 0x2ccd1c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2ccd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_2ccd20:
    // 0x2ccd20: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2ccd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2ccd24:
    // 0x2ccd24: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CCD24u;
    SET_GPR_U32(ctx, 31, 0x2CCD2Cu);
    ctx->pc = 0x2CCD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD24u;
    // 0x2ccd28: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CCD24u, 0x2CCD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD2Cu;
label_2ccd2c:
    // 0x2ccd2c: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2ccd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2ccd30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ccd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ccd34: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CCD34u;
    {
        const bool branch_taken_0x2ccd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd34) {
            ctx->pc = 0x2CCD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD34u;
            // 0x2ccd38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCD3Cu;
    // 0x2ccd3c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2ccd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2ccd40: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2ccd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2ccd44: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CCD44u;
    {
        const bool branch_taken_0x2ccd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccd44) {
            ctx->pc = 0x2CCD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD44u;
            // 0x2ccd48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD6Cu;
            goto label_2ccd6c;
        }
    }
    ctx->pc = 0x2CCD4Cu;
    // 0x2ccd4c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2ccd50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ccd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ccd54: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2CCD54u;
    SET_GPR_U32(ctx, 31, 0x2CCD5Cu);
    ctx->pc = 0x2CCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD54u;
    // 0x2ccd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2CCD54u, 0x2CCD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD5Cu;
label_2ccd5c:
    // 0x2ccd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccd60: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2ccd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2ccd64: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x2ccd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_2ccd68:
    // 0x2ccd68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ccd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ccd6c:
    // 0x2ccd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ccd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccd74: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD74u;
        // 0x2ccd78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCD7Cu;
    // 0x2ccd7c: 0x0  nop
    ctx->pc = 0x2ccd7cu;
    // NOP
    ctx->pc = 0x2ccd80u;
}
