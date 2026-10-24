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

// Function: _request_end
// Address: 0x3b2c00 - 0x3b2cd0
void _request_end_0x3b2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_end_0x3b2c00");
#endif

    switch (ctx->pc) {
        case 0x3b2c00u: goto label_3b2c00;
        case 0x3b2c04u: goto label_3b2c04;
        case 0x3b2c08u: goto label_3b2c08;
        case 0x3b2c0cu: goto label_3b2c0c;
        case 0x3b2c10u: goto label_3b2c10;
        case 0x3b2c14u: goto label_3b2c14;
        case 0x3b2c18u: goto label_3b2c18;
        case 0x3b2c1cu: goto label_3b2c1c;
        case 0x3b2c20u: goto label_3b2c20;
        case 0x3b2c24u: goto label_3b2c24;
        case 0x3b2c28u: goto label_3b2c28;
        case 0x3b2c2cu: goto label_3b2c2c;
        case 0x3b2c30u: goto label_3b2c30;
        case 0x3b2c34u: goto label_3b2c34;
        case 0x3b2c38u: goto label_3b2c38;
        case 0x3b2c3cu: goto label_3b2c3c;
        case 0x3b2c40u: goto label_3b2c40;
        case 0x3b2c44u: goto label_3b2c44;
        case 0x3b2c48u: goto label_3b2c48;
        case 0x3b2c4cu: goto label_3b2c4c;
        case 0x3b2c50u: goto label_3b2c50;
        case 0x3b2c54u: goto label_3b2c54;
        case 0x3b2c58u: goto label_3b2c58;
        case 0x3b2c5cu: goto label_3b2c5c;
        case 0x3b2c60u: goto label_3b2c60;
        case 0x3b2c64u: goto label_3b2c64;
        case 0x3b2c68u: goto label_3b2c68;
        case 0x3b2c6cu: goto label_3b2c6c;
        case 0x3b2c70u: goto label_3b2c70;
        case 0x3b2c74u: goto label_3b2c74;
        case 0x3b2c78u: goto label_3b2c78;
        case 0x3b2c7cu: goto label_3b2c7c;
        case 0x3b2c80u: goto label_3b2c80;
        case 0x3b2c84u: goto label_3b2c84;
        case 0x3b2c88u: goto label_3b2c88;
        case 0x3b2c8cu: goto label_3b2c8c;
        case 0x3b2c90u: goto label_3b2c90;
        case 0x3b2c94u: goto label_3b2c94;
        case 0x3b2c98u: goto label_3b2c98;
        case 0x3b2c9cu: goto label_3b2c9c;
        case 0x3b2ca0u: goto label_3b2ca0;
        case 0x3b2ca4u: goto label_3b2ca4;
        case 0x3b2ca8u: goto label_3b2ca8;
        case 0x3b2cacu: goto label_3b2cac;
        case 0x3b2cb0u: goto label_3b2cb0;
        case 0x3b2cb4u: goto label_3b2cb4;
        case 0x3b2cb8u: goto label_3b2cb8;
        case 0x3b2cbcu: goto label_3b2cbc;
        case 0x3b2cc0u: goto label_3b2cc0;
        case 0x3b2cc4u: goto label_3b2cc4;
        case 0x3b2cc8u: goto label_3b2cc8;
        case 0x3b2cccu: goto label_3b2ccc;
        default: break;
    }

    ctx->pc = 0x3b2c00u;

label_3b2c00:
    // 0x3b2c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b2c04:
    // 0x3b2c04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b2c08:
    // 0x3b2c08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b2c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b2c0c:
    // 0x3b2c0c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x3b2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_3b2c10:
    // 0x3b2c10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b2c14:
    // 0x3b2c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b2c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c18:
    // 0x3b2c18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b2c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3b2c1c:
    // 0x3b2c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b2c20:
    // 0x3b2c20: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3b2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3b2c24:
    // 0x3b2c24: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3b2c28:
    if (ctx->pc == 0x3B2C28u) {
        ctx->pc = 0x3B2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C24u;
        // 0x3b2c28: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C2Cu;
        goto label_3b2c2c;
    }
    ctx->pc = 0x3B2C24u;
    {
        const bool branch_taken_0x3b2c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C24u;
        // 0x3b2c28: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c24) {
            ctx->pc = 0x3B2C4Cu;
            goto label_3b2c4c;
        }
    }
    ctx->pc = 0x3B2C2Cu;
label_3b2c2c:
    // 0x3b2c2c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3b2c30:
    if (ctx->pc == 0x3B2C30u) {
        ctx->pc = 0x3B2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C2Cu;
        // 0x3b2c30: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C34u;
        goto label_3b2c34;
    }
    ctx->pc = 0x3B2C2Cu;
    {
        const bool branch_taken_0x3b2c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C2Cu;
        // 0x3b2c30: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c2c) {
            ctx->pc = 0x3B2C94u;
            goto label_3b2c94;
        }
    }
    ctx->pc = 0x3B2C34u;
label_3b2c34:
    // 0x3b2c34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b2c38:
    // 0x3b2c38: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x3b2c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_3b2c3c:
    // 0x3b2c3c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_3b2c40:
    if (ctx->pc == 0x3B2C40u) {
        ctx->pc = 0x3B2C44u;
        goto label_3b2c44;
    }
    ctx->pc = 0x3B2C3Cu;
    {
        const bool branch_taken_0x3b2c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b2c3c) {
            ctx->pc = 0x3B2C84u;
            goto label_3b2c84;
        }
    }
    ctx->pc = 0x3B2C44u;
label_3b2c44:
    // 0x3b2c44: 0x10000014  b           . + 4 + (0x14 << 2)
label_3b2c48:
    if (ctx->pc == 0x3B2C48u) {
        ctx->pc = 0x3B2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C44u;
        // 0x3b2c48: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C4Cu;
        goto label_3b2c4c;
    }
    ctx->pc = 0x3B2C44u;
    {
        const bool branch_taken_0x3b2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C44u;
        // 0x3b2c48: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c44) {
            ctx->pc = 0x3B2C98u;
            goto label_3b2c98;
        }
    }
    ctx->pc = 0x3B2C4Cu;
label_3b2c4c:
    // 0x3b2c4c: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x3b2c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3b2c50:
    // 0x3b2c50: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b2c54:
    // 0x3b2c54: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3b2c58:
    if (ctx->pc == 0x3B2C58u) {
        ctx->pc = 0x3B2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C54u;
        // 0x3b2c58: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C5Cu;
        goto label_3b2c5c;
    }
    ctx->pc = 0x3B2C54u;
    {
        const bool branch_taken_0x3b2c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2c54) {
            ctx->pc = 0x3B2C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2C54u;
            // 0x3b2c58: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2C98u;
            goto label_3b2c98;
        }
    }
    ctx->pc = 0x3B2C5Cu;
label_3b2c5c:
    // 0x3b2c5c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3b2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b2c60:
    // 0x3b2c60: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3b2c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c64:
    // 0x3b2c64: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x3b2c64u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c68:
    // 0x3b2c68: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3b2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b2c6c:
    // 0x3b2c6c: 0x40f809  jalr        $v0
label_3b2c70:
    if (ctx->pc == 0x3B2C70u) {
        ctx->pc = 0x3B2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C6Cu;
        // 0x3b2c70: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C74u;
        goto label_3b2c74;
    }
    ctx->pc = 0x3B2C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2C74u);
        ctx->pc = 0x3B2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C6Cu;
        // 0x3b2c70: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2C6Cu, 0x3B2C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2C74u;
label_3b2c74:
    // 0x3b2c74: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3b2c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c78:
    // 0x3b2c78: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3b2c78u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c7c:
    // 0x3b2c7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b2c80:
    if (ctx->pc == 0x3B2C80u) {
        ctx->pc = 0x3B2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C7Cu;
        // 0x3b2c80: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C84u;
        goto label_3b2c84;
    }
    ctx->pc = 0x3B2C7Cu;
    {
        const bool branch_taken_0x3b2c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C7Cu;
        // 0x3b2c80: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c7c) {
            ctx->pc = 0x3B2C94u;
            goto label_3b2c94;
        }
    }
    ctx->pc = 0x3B2C84u;
label_3b2c84:
    // 0x3b2c84: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3b2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3b2c88:
    // 0x3b2c88: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3b2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_3b2c8c:
    // 0x3b2c8c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3b2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3b2c90:
    // 0x3b2c90: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3b2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3b2c94:
    // 0x3b2c94: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b2c98:
    // 0x3b2c98: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_3b2c9c:
    if (ctx->pc == 0x3B2C9Cu) {
        ctx->pc = 0x3B2CA0u;
        goto label_3b2ca0;
    }
    ctx->pc = 0x3B2C98u;
    {
        const bool branch_taken_0x3b2c98 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x3b2c98) {
            ctx->pc = 0x3B2CA8u;
            goto label_3b2ca8;
        }
    }
    ctx->pc = 0x3B2CA0u;
label_3b2ca0:
    // 0x3b2ca0: 0xc0ebf34  jal         func_3AFCD0
label_3b2ca4:
    if (ctx->pc == 0x3B2CA4u) {
        ctx->pc = 0x3B2CA8u;
        goto label_3b2ca8;
    }
    ctx->pc = 0x3B2CA0u;
    SET_GPR_U32(ctx, 31, 0x3B2CA8u);
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x3B2CA0u, 0x3B2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2CA8u;
label_3b2ca8:
    // 0x3b2ca8: 0xc0ecadc  jal         func_3B2B70
label_3b2cac:
    if (ctx->pc == 0x3B2CACu) {
        ctx->pc = 0x3B2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CA8u;
        // 0x3b2cac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2CB0u;
        goto label_3b2cb0;
    }
    ctx->pc = 0x3B2CA8u;
    SET_GPR_U32(ctx, 31, 0x3B2CB0u);
    ctx->pc = 0x3B2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2CA8u;
    // 0x3b2cac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B70u, 0x3B2CA8u, 0x3B2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2CB0u;
label_3b2cb0:
    // 0x3b2cb0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3b2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3b2cb4:
    // 0x3b2cb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2cb8:
    // 0x3b2cb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b2cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b2cbc:
    // 0x3b2cbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2cc0:
    // 0x3b2cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2cc4:
    // 0x3b2cc4: 0x3e00008  jr          $ra
label_3b2cc8:
    if (ctx->pc == 0x3B2CC8u) {
        ctx->pc = 0x3B2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CC4u;
        // 0x3b2cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2CCCu;
        goto label_3b2ccc;
    }
    ctx->pc = 0x3B2CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CC4u;
        // 0x3b2cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2CCCu;
label_3b2ccc:
    // 0x3b2ccc: 0x0  nop
    ctx->pc = 0x3b2cccu;
    // NOP
    ctx->pc = 0x3b2cd0u;
}
