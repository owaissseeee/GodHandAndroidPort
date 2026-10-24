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

// Function: ColiseumWaveDirectorB
// Address: 0x1f1b20 - 0x1f1c48
void ColiseumWaveDirectorB_0x1f1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumWaveDirectorB_0x1f1b20");
#endif

    switch (ctx->pc) {
        case 0x1f1b74u: goto label_1f1b74;
        case 0x1f1ba0u: goto label_1f1ba0;
        case 0x1f1bbcu: goto label_1f1bbc;
        case 0x1f1bc4u: goto label_1f1bc4;
        case 0x1f1becu: goto label_1f1bec;
        case 0x1f1c08u: goto label_1f1c08;
        case 0x1f1c10u: goto label_1f1c10;
        default: break;
    }

    ctx->pc = 0x1f1b20u;

    // 0x1f1b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f1b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1b28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f1b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f1b2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f1b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f1b38: 0x8e110b94  lw          $s1, 0xB94($s0)
    ctx->pc = 0x1f1b38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1b3c: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1B3Cu;
    {
        const bool branch_taken_0x1f1b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B3Cu;
        // 0x1f1b40: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b3c) {
            ctx->pc = 0x1F1B88u;
            goto label_1f1b88;
        }
    }
    ctx->pc = 0x1F1B44u;
    // 0x1f1b44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1B44u;
    {
        const bool branch_taken_0x1f1b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b44) {
            ctx->pc = 0x1F1B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B44u;
            // 0x1f1b48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B5Cu;
            goto label_1f1b5c;
        }
    }
    ctx->pc = 0x1F1B4Cu;
    // 0x1f1b4c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1B4Cu;
    {
        const bool branch_taken_0x1f1b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b4c) {
            ctx->pc = 0x1F1B6Cu;
            goto label_1f1b6c;
        }
    }
    ctx->pc = 0x1F1B54u;
    // 0x1f1b54: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1F1B54u;
    {
        const bool branch_taken_0x1f1b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B54u;
        // 0x1f1b58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b54) {
            ctx->pc = 0x1F1C38u;
            goto label_1f1c38;
        }
    }
    ctx->pc = 0x1F1B5Cu;
label_1f1b5c:
    // 0x1f1b5c: 0x5222001e  beql        $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F1B5Cu;
    {
        const bool branch_taken_0x1f1b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1b5c) {
            ctx->pc = 0x1F1B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B5Cu;
            // 0x1f1b60: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1BD8u;
            goto label_1f1bd8;
        }
    }
    ctx->pc = 0x1F1B64u;
    // 0x1f1b64: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1F1B64u;
    {
        const bool branch_taken_0x1f1b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B64u;
        // 0x1f1b68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b64) {
            ctx->pc = 0x1F1C38u;
            goto label_1f1c38;
        }
    }
    ctx->pc = 0x1F1B6Cu;
label_1f1b6c:
    // 0x1f1b6c: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B74u);
    ctx->pc = 0x1F1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B6Cu;
    // 0x1f1b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F1B6Cu, 0x1F1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B74u;
label_1f1b74:
    // 0x1f1b74: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1b78: 0xae000ba0  sw          $zero, 0xBA0($s0)
    ctx->pc = 0x1f1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 0));
    // 0x1f1b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1b80: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F1B80u;
    {
        const bool branch_taken_0x1f1b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B80u;
        // 0x1f1b84: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b80) {
            ctx->pc = 0x1F1C34u;
            goto label_1f1c34;
        }
    }
    ctx->pc = 0x1F1B88u;
label_1f1b88:
    // 0x1f1b88: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f1b8c: 0x284202ee  slti        $v0, $v0, 0x2EE
    ctx->pc = 0x1f1b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)750) ? 1 : 0);
    // 0x1f1b90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1B90u;
    {
        const bool branch_taken_0x1f1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B90u;
        // 0x1f1b94: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b90) {
            ctx->pc = 0x1F1BACu;
            goto label_1f1bac;
        }
    }
    ctx->pc = 0x1F1B98u;
    // 0x1f1b98: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1B98u;
    SET_GPR_U32(ctx, 31, 0x1F1BA0u);
    ctx->pc = 0x1F1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B98u;
    // 0x1f1b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1B98u, 0x1F1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BA0u;
label_1f1ba0:
    // 0x1f1ba0: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F1BA0u;
    {
        const bool branch_taken_0x1f1ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ba0) {
            ctx->pc = 0x1F1BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1BA0u;
            // 0x1f1ba4: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C2Cu;
            goto label_1f1c2c;
        }
    }
    ctx->pc = 0x1F1BA8u;
    // 0x1f1ba8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1f1bac:
    // 0x1f1bac: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f1bacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f1bb0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1bb4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1BB4u;
    SET_GPR_U32(ctx, 31, 0x1F1BBCu);
    ctx->pc = 0x1F1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BB4u;
    // 0x1f1bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1BB4u, 0x1F1BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BBCu;
label_1f1bbc:
    // 0x1f1bbc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1BBCu;
    SET_GPR_U32(ctx, 31, 0x1F1BC4u);
    ctx->pc = 0x1F1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BBCu;
    // 0x1f1bc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1BBCu, 0x1F1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BC4u;
label_1f1bc4:
    // 0x1f1bc4: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1bc8: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1bd0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1BD0u;
    {
        const bool branch_taken_0x1f1bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BD0u;
        // 0x1f1bd4: 0xae000ba0  sw          $zero, 0xBA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bd0) {
            ctx->pc = 0x1F1C1Cu;
            goto label_1f1c1c;
        }
    }
    ctx->pc = 0x1F1BD8u;
label_1f1bd8:
    // 0x1f1bd8: 0x284202ee  slti        $v0, $v0, 0x2EE
    ctx->pc = 0x1f1bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)750) ? 1 : 0);
    // 0x1f1bdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1BDCu;
    {
        const bool branch_taken_0x1f1bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BDCu;
        // 0x1f1be0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bdc) {
            ctx->pc = 0x1F1BF8u;
            goto label_1f1bf8;
        }
    }
    ctx->pc = 0x1F1BE4u;
    // 0x1f1be4: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1BE4u;
    SET_GPR_U32(ctx, 31, 0x1F1BECu);
    ctx->pc = 0x1F1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BE4u;
    // 0x1f1be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1BE4u, 0x1F1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BECu;
label_1f1bec:
    // 0x1f1bec: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1BECu;
    {
        const bool branch_taken_0x1f1bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1bec) {
            ctx->pc = 0x1F1BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1BECu;
            // 0x1f1bf0: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C2Cu;
            goto label_1f1c2c;
        }
    }
    ctx->pc = 0x1F1BF4u;
    // 0x1f1bf4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1f1bf8:
    // 0x1f1bf8: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f1bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f1bfc: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1c00: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1C00u;
    SET_GPR_U32(ctx, 31, 0x1F1C08u);
    ctx->pc = 0x1F1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C00u;
    // 0x1f1c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1C00u, 0x1F1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C08u;
label_1f1c08:
    // 0x1f1c08: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1C08u;
    SET_GPR_U32(ctx, 31, 0x1F1C10u);
    ctx->pc = 0x1F1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C08u;
    // 0x1f1c0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1C08u, 0x1F1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C10u;
label_1f1c10:
    // 0x1f1c10: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1c14: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1c1c:
    // 0x1f1c1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1c20: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f1c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1C24u;
    {
        const bool branch_taken_0x1f1c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C24u;
        // 0x1f1c28: 0xae030b94  sw          $v1, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c24) {
            ctx->pc = 0x1F1C34u;
            goto label_1f1c34;
        }
    }
    ctx->pc = 0x1F1C2Cu;
label_1f1c2c:
    // 0x1f1c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1c30: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f1c34:
    // 0x1f1c34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f1c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1c38:
    // 0x1f1c38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C40u;
        // 0x1f1c44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1C48u;
}
