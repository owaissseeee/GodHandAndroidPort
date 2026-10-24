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

// Function: func_002F1B60
// Address: 0x2f1b60 - 0x2f1d58
void func_002F1B60_0x2f1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1B60_0x2f1b60");
#endif

    switch (ctx->pc) {
        case 0x2f1b60u: goto label_2f1b60;
        case 0x2f1b64u: goto label_2f1b64;
        case 0x2f1b68u: goto label_2f1b68;
        case 0x2f1b6cu: goto label_2f1b6c;
        case 0x2f1b70u: goto label_2f1b70;
        case 0x2f1b74u: goto label_2f1b74;
        case 0x2f1b78u: goto label_2f1b78;
        case 0x2f1b7cu: goto label_2f1b7c;
        case 0x2f1b80u: goto label_2f1b80;
        case 0x2f1b84u: goto label_2f1b84;
        case 0x2f1b88u: goto label_2f1b88;
        case 0x2f1b8cu: goto label_2f1b8c;
        case 0x2f1b90u: goto label_2f1b90;
        case 0x2f1b94u: goto label_2f1b94;
        case 0x2f1b98u: goto label_2f1b98;
        case 0x2f1b9cu: goto label_2f1b9c;
        case 0x2f1ba0u: goto label_2f1ba0;
        case 0x2f1ba4u: goto label_2f1ba4;
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bacu: goto label_2f1bac;
        case 0x2f1bb0u: goto label_2f1bb0;
        case 0x2f1bb4u: goto label_2f1bb4;
        case 0x2f1bb8u: goto label_2f1bb8;
        case 0x2f1bbcu: goto label_2f1bbc;
        case 0x2f1bc0u: goto label_2f1bc0;
        case 0x2f1bc4u: goto label_2f1bc4;
        case 0x2f1bc8u: goto label_2f1bc8;
        case 0x2f1bccu: goto label_2f1bcc;
        case 0x2f1bd0u: goto label_2f1bd0;
        case 0x2f1bd4u: goto label_2f1bd4;
        case 0x2f1bd8u: goto label_2f1bd8;
        case 0x2f1bdcu: goto label_2f1bdc;
        case 0x2f1be0u: goto label_2f1be0;
        case 0x2f1be4u: goto label_2f1be4;
        case 0x2f1be8u: goto label_2f1be8;
        case 0x2f1becu: goto label_2f1bec;
        case 0x2f1bf0u: goto label_2f1bf0;
        case 0x2f1bf4u: goto label_2f1bf4;
        case 0x2f1bf8u: goto label_2f1bf8;
        case 0x2f1bfcu: goto label_2f1bfc;
        case 0x2f1c00u: goto label_2f1c00;
        case 0x2f1c04u: goto label_2f1c04;
        case 0x2f1c08u: goto label_2f1c08;
        case 0x2f1c0cu: goto label_2f1c0c;
        case 0x2f1c10u: goto label_2f1c10;
        case 0x2f1c14u: goto label_2f1c14;
        case 0x2f1c18u: goto label_2f1c18;
        case 0x2f1c1cu: goto label_2f1c1c;
        case 0x2f1c20u: goto label_2f1c20;
        case 0x2f1c24u: goto label_2f1c24;
        case 0x2f1c28u: goto label_2f1c28;
        case 0x2f1c2cu: goto label_2f1c2c;
        case 0x2f1c30u: goto label_2f1c30;
        case 0x2f1c34u: goto label_2f1c34;
        case 0x2f1c38u: goto label_2f1c38;
        case 0x2f1c3cu: goto label_2f1c3c;
        case 0x2f1c40u: goto label_2f1c40;
        case 0x2f1c44u: goto label_2f1c44;
        case 0x2f1c48u: goto label_2f1c48;
        case 0x2f1c4cu: goto label_2f1c4c;
        case 0x2f1c50u: goto label_2f1c50;
        case 0x2f1c54u: goto label_2f1c54;
        case 0x2f1c58u: goto label_2f1c58;
        case 0x2f1c5cu: goto label_2f1c5c;
        case 0x2f1c60u: goto label_2f1c60;
        case 0x2f1c64u: goto label_2f1c64;
        case 0x2f1c68u: goto label_2f1c68;
        case 0x2f1c6cu: goto label_2f1c6c;
        case 0x2f1c70u: goto label_2f1c70;
        case 0x2f1c74u: goto label_2f1c74;
        case 0x2f1c78u: goto label_2f1c78;
        case 0x2f1c7cu: goto label_2f1c7c;
        case 0x2f1c80u: goto label_2f1c80;
        case 0x2f1c84u: goto label_2f1c84;
        case 0x2f1c88u: goto label_2f1c88;
        case 0x2f1c8cu: goto label_2f1c8c;
        case 0x2f1c90u: goto label_2f1c90;
        case 0x2f1c94u: goto label_2f1c94;
        case 0x2f1c98u: goto label_2f1c98;
        case 0x2f1c9cu: goto label_2f1c9c;
        case 0x2f1ca0u: goto label_2f1ca0;
        case 0x2f1ca4u: goto label_2f1ca4;
        case 0x2f1ca8u: goto label_2f1ca8;
        case 0x2f1cacu: goto label_2f1cac;
        case 0x2f1cb0u: goto label_2f1cb0;
        case 0x2f1cb4u: goto label_2f1cb4;
        case 0x2f1cb8u: goto label_2f1cb8;
        case 0x2f1cbcu: goto label_2f1cbc;
        case 0x2f1cc0u: goto label_2f1cc0;
        case 0x2f1cc4u: goto label_2f1cc4;
        case 0x2f1cc8u: goto label_2f1cc8;
        case 0x2f1cccu: goto label_2f1ccc;
        case 0x2f1cd0u: goto label_2f1cd0;
        case 0x2f1cd4u: goto label_2f1cd4;
        case 0x2f1cd8u: goto label_2f1cd8;
        case 0x2f1cdcu: goto label_2f1cdc;
        case 0x2f1ce0u: goto label_2f1ce0;
        case 0x2f1ce4u: goto label_2f1ce4;
        case 0x2f1ce8u: goto label_2f1ce8;
        case 0x2f1cecu: goto label_2f1cec;
        case 0x2f1cf0u: goto label_2f1cf0;
        case 0x2f1cf4u: goto label_2f1cf4;
        case 0x2f1cf8u: goto label_2f1cf8;
        case 0x2f1cfcu: goto label_2f1cfc;
        case 0x2f1d00u: goto label_2f1d00;
        case 0x2f1d04u: goto label_2f1d04;
        case 0x2f1d08u: goto label_2f1d08;
        case 0x2f1d0cu: goto label_2f1d0c;
        case 0x2f1d10u: goto label_2f1d10;
        case 0x2f1d14u: goto label_2f1d14;
        case 0x2f1d18u: goto label_2f1d18;
        case 0x2f1d1cu: goto label_2f1d1c;
        case 0x2f1d20u: goto label_2f1d20;
        case 0x2f1d24u: goto label_2f1d24;
        case 0x2f1d28u: goto label_2f1d28;
        case 0x2f1d2cu: goto label_2f1d2c;
        case 0x2f1d30u: goto label_2f1d30;
        case 0x2f1d34u: goto label_2f1d34;
        case 0x2f1d38u: goto label_2f1d38;
        case 0x2f1d3cu: goto label_2f1d3c;
        case 0x2f1d40u: goto label_2f1d40;
        case 0x2f1d44u: goto label_2f1d44;
        case 0x2f1d48u: goto label_2f1d48;
        case 0x2f1d4cu: goto label_2f1d4c;
        case 0x2f1d50u: goto label_2f1d50;
        case 0x2f1d54u: goto label_2f1d54;
        default: break;
    }

    ctx->pc = 0x2f1b60u;

label_2f1b60:
    // 0x2f1b60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f1b64:
    // 0x2f1b64: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f1b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2f1b68:
    // 0x2f1b68: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2f1b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f1b6c:
    // 0x2f1b6c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f1b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f1b70:
    // 0x2f1b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1b74:
    // 0x2f1b74: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2f1b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2f1b78:
    // 0x2f1b78: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x2f1b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2f1b7c:
    // 0x2f1b7c: 0x8e0502b4  lw          $a1, 0x2B4($s0)
    ctx->pc = 0x2f1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_2f1b80:
    // 0x2f1b80: 0xc0c1b1e  jal         func_306C78
label_2f1b84:
    if (ctx->pc == 0x2F1B84u) {
        ctx->pc = 0x2F1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B80u;
        // 0x2f1b84: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1B88u;
        goto label_2f1b88;
    }
    ctx->pc = 0x2F1B80u;
    SET_GPR_U32(ctx, 31, 0x2F1B88u);
    ctx->pc = 0x2F1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B80u;
    // 0x2f1b84: 0x24841dc8  addiu       $a0, $a0, 0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306C78u, 0x2F1B80u, 0x2F1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B88u;
label_2f1b88:
    // 0x2f1b88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f1b8c:
    if (ctx->pc == 0x2F1B8Cu) {
        ctx->pc = 0x2F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B88u;
        // 0x2f1b8c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1B90u;
        goto label_2f1b90;
    }
    ctx->pc = 0x2F1B88u;
    {
        const bool branch_taken_0x2f1b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B88u;
        // 0x2f1b8c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b88) {
            ctx->pc = 0x2F1BACu;
            goto label_2f1bac;
        }
    }
    ctx->pc = 0x2F1B90u;
label_2f1b90:
    // 0x2f1b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1b94:
    // 0x2f1b94: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f1b98:
    // 0x2f1b98: 0x8c8602b4  lw          $a2, 0x2B4($a0)
    ctx->pc = 0x2f1b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
label_2f1b9c:
    // 0x2f1b9c: 0xc0b67da  jal         func_2D9F68
label_2f1ba0:
    if (ctx->pc == 0x2F1BA0u) {
        ctx->pc = 0x2F1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B9Cu;
        // 0x2f1ba0: 0x24a5ed00  addiu       $a1, $a1, -0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BA4u;
        goto label_2f1ba4;
    }
    ctx->pc = 0x2F1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2F1BA4u);
    ctx->pc = 0x2F1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B9Cu;
    // 0x2f1ba0: 0x24a5ed00  addiu       $a1, $a1, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F1B9Cu, 0x2F1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BA4u;
label_2f1ba4:
    // 0x2f1ba4: 0x10000068  b           . + 4 + (0x68 << 2)
label_2f1ba8:
    if (ctx->pc == 0x2F1BA8u) {
        ctx->pc = 0x2F1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BA4u;
        // 0x2f1ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BACu;
        goto label_2f1bac;
    }
    ctx->pc = 0x2F1BA4u;
    {
        const bool branch_taken_0x2f1ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BA4u;
        // 0x2f1ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ba4) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1BACu;
label_2f1bac:
    // 0x2f1bac: 0xc0c3ea6  jal         func_30FA98
label_2f1bb0:
    if (ctx->pc == 0x2F1BB0u) {
        ctx->pc = 0x2F1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BACu;
        // 0x2f1bb0: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BB4u;
        goto label_2f1bb4;
    }
    ctx->pc = 0x2F1BACu;
    SET_GPR_U32(ctx, 31, 0x2F1BB4u);
    ctx->pc = 0x2F1BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BACu;
    // 0x2f1bb0: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x2F1BACu, 0x2F1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BB4u;
label_2f1bb4:
    // 0x2f1bb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f1bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bb8:
    // 0x2f1bb8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_2f1bbc:
    if (ctx->pc == 0x2F1BBCu) {
        ctx->pc = 0x2F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BB8u;
        // 0x2f1bbc: 0xae0502b0  sw          $a1, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BC0u;
        goto label_2f1bc0;
    }
    ctx->pc = 0x2F1BB8u;
    {
        const bool branch_taken_0x2f1bb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BB8u;
        // 0x2f1bbc: 0xae0502b0  sw          $a1, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bb8) {
            ctx->pc = 0x2F1BD8u;
            goto label_2f1bd8;
        }
    }
    ctx->pc = 0x2F1BC0u;
label_2f1bc0:
    // 0x2f1bc0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f1bc4:
    // 0x2f1bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bc8:
    // 0x2f1bc8: 0xc0b67da  jal         func_2D9F68
label_2f1bcc:
    if (ctx->pc == 0x2F1BCCu) {
        ctx->pc = 0x2F1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BC8u;
        // 0x2f1bcc: 0x24a5ed28  addiu       $a1, $a1, -0x12D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BD0u;
        goto label_2f1bd0;
    }
    ctx->pc = 0x2F1BC8u;
    SET_GPR_U32(ctx, 31, 0x2F1BD0u);
    ctx->pc = 0x2F1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BC8u;
    // 0x2f1bcc: 0x24a5ed28  addiu       $a1, $a1, -0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F1BC8u, 0x2F1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BD0u;
label_2f1bd0:
    // 0x2f1bd0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2f1bd4:
    if (ctx->pc == 0x2F1BD4u) {
        ctx->pc = 0x2F1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BD0u;
        // 0x2f1bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BD8u;
        goto label_2f1bd8;
    }
    ctx->pc = 0x2F1BD0u;
    {
        const bool branch_taken_0x2f1bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BD0u;
        // 0x2f1bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bd0) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1BD8u;
label_2f1bd8:
    // 0x2f1bd8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x2f1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2f1bdc:
    // 0x2f1bdc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2f1bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2f1be0:
    // 0x2f1be0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f1be4:
    // 0x2f1be4: 0x40f809  jalr        $v0
label_2f1be8:
    if (ctx->pc == 0x2F1BE8u) {
        ctx->pc = 0x2F1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BE4u;
        // 0x2f1be8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BECu;
        goto label_2f1bec;
    }
    ctx->pc = 0x2F1BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1BECu);
        ctx->pc = 0x2F1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BE4u;
        // 0x2f1be8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1BE4u, 0x2F1BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1BECu;
label_2f1bec:
    // 0x2f1bec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2f1bf0:
    if (ctx->pc == 0x2F1BF0u) {
        ctx->pc = 0x2F1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BECu;
        // 0x2f1bf0: 0x8e0302dc  lw          $v1, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BF4u;
        goto label_2f1bf4;
    }
    ctx->pc = 0x2F1BECu;
    {
        const bool branch_taken_0x2f1bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1bec) {
            ctx->pc = 0x2F1BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1BECu;
            // 0x2f1bf0: 0x8e0302dc  lw          $v1, 0x2DC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1C04u;
            goto label_2f1c04;
        }
    }
    ctx->pc = 0x2F1BF4u;
label_2f1bf4:
    // 0x2f1bf4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f1bf8:
    // 0x2f1bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1bfc:
    // 0x2f1bfc: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f1c00:
    if (ctx->pc == 0x2F1C00u) {
        ctx->pc = 0x2F1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BFCu;
        // 0x2f1c00: 0x24a5ed48  addiu       $a1, $a1, -0x12B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C04u;
        goto label_2f1c04;
    }
    ctx->pc = 0x2F1BFCu;
    {
        const bool branch_taken_0x2f1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BFCu;
        // 0x2f1c00: 0x24a5ed48  addiu       $a1, $a1, -0x12B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bfc) {
            ctx->pc = 0x2F1C80u;
            goto label_2f1c80;
        }
    }
    ctx->pc = 0x2F1C04u;
label_2f1c04:
    // 0x2f1c04: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2f1c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2f1c08:
    // 0x2f1c08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f1c0c:
    if (ctx->pc == 0x2F1C0Cu) {
        ctx->pc = 0x2F1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C08u;
        // 0x2f1c0c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C10u;
        goto label_2f1c10;
    }
    ctx->pc = 0x2F1C08u;
    {
        const bool branch_taken_0x2f1c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C08u;
        // 0x2f1c0c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c08) {
            ctx->pc = 0x2F1C20u;
            goto label_2f1c20;
        }
    }
    ctx->pc = 0x2F1C10u;
label_2f1c10:
    // 0x2f1c10: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f1c14:
    // 0x2f1c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c18:
    // 0x2f1c18: 0x10000019  b           . + 4 + (0x19 << 2)
label_2f1c1c:
    if (ctx->pc == 0x2F1C1Cu) {
        ctx->pc = 0x2F1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C18u;
        // 0x2f1c1c: 0x24a5ed68  addiu       $a1, $a1, -0x1298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C20u;
        goto label_2f1c20;
    }
    ctx->pc = 0x2F1C18u;
    {
        const bool branch_taken_0x2f1c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C18u;
        // 0x2f1c1c: 0x24a5ed68  addiu       $a1, $a1, -0x1298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c18) {
            ctx->pc = 0x2F1C80u;
            goto label_2f1c80;
        }
    }
    ctx->pc = 0x2F1C20u;
label_2f1c20:
    // 0x2f1c20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2f1c24:
    if (ctx->pc == 0x2F1C24u) {
        ctx->pc = 0x2F1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C20u;
        // 0x2f1c24: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C28u;
        goto label_2f1c28;
    }
    ctx->pc = 0x2F1C20u;
    {
        const bool branch_taken_0x2f1c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C20u;
        // 0x2f1c24: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c20) {
            ctx->pc = 0x2F1C54u;
            goto label_2f1c54;
        }
    }
    ctx->pc = 0x2F1C28u;
label_2f1c28:
    // 0x2f1c28: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2f1c2c:
    // 0x2f1c2c: 0x8e0602e0  lw          $a2, 0x2E0($s0)
    ctx->pc = 0x2f1c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_2f1c30:
    // 0x2f1c30: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2f1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
label_2f1c34:
    // 0x2f1c34: 0xc0c182c  jal         func_3060B0
label_2f1c38:
    if (ctx->pc == 0x2F1C38u) {
        ctx->pc = 0x2F1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C34u;
        // 0x2f1c38: 0x8445028c  lh          $a1, 0x28C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C3Cu;
        goto label_2f1c3c;
    }
    ctx->pc = 0x2F1C34u;
    SET_GPR_U32(ctx, 31, 0x2F1C3Cu);
    ctx->pc = 0x2F1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C34u;
    // 0x2f1c38: 0x8445028c  lh          $a1, 0x28C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3060B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3060B0u, 0x2F1C34u, 0x2F1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C3Cu;
label_2f1c3c:
    // 0x2f1c3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f1c40:
    if (ctx->pc == 0x2F1C40u) {
        ctx->pc = 0x2F1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C3Cu;
        // 0x2f1c40: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C44u;
        goto label_2f1c44;
    }
    ctx->pc = 0x2F1C3Cu;
    {
        const bool branch_taken_0x2f1c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C3Cu;
        // 0x2f1c40: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c3c) {
            ctx->pc = 0x2F1C54u;
            goto label_2f1c54;
        }
    }
    ctx->pc = 0x2F1C44u;
label_2f1c44:
    // 0x2f1c44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f1c48:
    // 0x2f1c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c4c:
    // 0x2f1c4c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f1c50:
    if (ctx->pc == 0x2F1C50u) {
        ctx->pc = 0x2F1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C4Cu;
        // 0x2f1c50: 0x24a5ed80  addiu       $a1, $a1, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C54u;
        goto label_2f1c54;
    }
    ctx->pc = 0x2F1C4Cu;
    {
        const bool branch_taken_0x2f1c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C4Cu;
        // 0x2f1c50: 0x24a5ed80  addiu       $a1, $a1, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c4c) {
            ctx->pc = 0x2F1C80u;
            goto label_2f1c80;
        }
    }
    ctx->pc = 0x2F1C54u;
label_2f1c54:
    // 0x2f1c54: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x2f1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_2f1c58:
    // 0x2f1c58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c5c:
    // 0x2f1c5c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f1c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f1c60:
    // 0x2f1c60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f1c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c64:
    // 0x2f1c64: 0xc0525ce  jal         func_149738
label_2f1c68:
    if (ctx->pc == 0x2F1C68u) {
        ctx->pc = 0x2F1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C64u;
        // 0x2f1c68: 0x8fa60084  lw          $a2, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C6Cu;
        goto label_2f1c6c;
    }
    ctx->pc = 0x2F1C64u;
    SET_GPR_U32(ctx, 31, 0x2F1C6Cu);
    ctx->pc = 0x2F1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C64u;
    // 0x2f1c68: 0x8fa60084  lw          $a2, 0x84($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x2F1C64u, 0x2F1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C6Cu;
label_2f1c6c:
    // 0x2f1c6c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2f1c70:
    if (ctx->pc == 0x2F1C70u) {
        ctx->pc = 0x2F1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C6Cu;
        // 0x2f1c70: 0x920a02e8  lbu         $t2, 0x2E8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C74u;
        goto label_2f1c74;
    }
    ctx->pc = 0x2F1C6Cu;
    {
        const bool branch_taken_0x2f1c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1c6c) {
            ctx->pc = 0x2F1C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1C6Cu;
            // 0x2f1c70: 0x920a02e8  lbu         $t2, 0x2E8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1C98u;
            goto label_2f1c98;
        }
    }
    ctx->pc = 0x2F1C74u;
label_2f1c74:
    // 0x2f1c74: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f1c78:
    // 0x2f1c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1c7c:
    // 0x2f1c7c: 0x24a5eda0  addiu       $a1, $a1, -0x1260
    ctx->pc = 0x2f1c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962592));
label_2f1c80:
    // 0x2f1c80: 0xc0b67da  jal         func_2D9F68
label_2f1c84:
    if (ctx->pc == 0x2F1C84u) {
        ctx->pc = 0x2F1C88u;
        goto label_2f1c88;
    }
    ctx->pc = 0x2F1C80u;
    SET_GPR_U32(ctx, 31, 0x2F1C88u);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F1C80u, 0x2F1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C88u;
label_2f1c88:
    // 0x2f1c88: 0xc0c49c2  jal         func_312708
label_2f1c8c:
    if (ctx->pc == 0x2F1C8Cu) {
        ctx->pc = 0x2F1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C88u;
        // 0x2f1c8c: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C90u;
        goto label_2f1c90;
    }
    ctx->pc = 0x2F1C88u;
    SET_GPR_U32(ctx, 31, 0x2F1C90u);
    ctx->pc = 0x2F1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C88u;
    // 0x2f1c8c: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2F1C88u, 0x2F1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C90u;
label_2f1c90:
    // 0x2f1c90: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2f1c94:
    if (ctx->pc == 0x2F1C94u) {
        ctx->pc = 0x2F1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C90u;
        // 0x2f1c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C98u;
        goto label_2f1c98;
    }
    ctx->pc = 0x2F1C90u;
    {
        const bool branch_taken_0x2f1c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C90u;
        // 0x2f1c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c90) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1C98u;
label_2f1c98:
    // 0x2f1c98: 0x1140002b  beqz        $t2, . + 4 + (0x2B << 2)
label_2f1c9c:
    if (ctx->pc == 0x2F1C9Cu) {
        ctx->pc = 0x2F1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C98u;
        // 0x2f1c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CA0u;
        goto label_2f1ca0;
    }
    ctx->pc = 0x2F1C98u;
    {
        const bool branch_taken_0x2f1c98 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C98u;
        // 0x2f1c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c98) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1CA0u;
label_2f1ca0:
    // 0x2f1ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f1ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f1ca4:
    // 0x2f1ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ca8:
    // 0x2f1ca8: 0x0  nop
    ctx->pc = 0x2f1ca8u;
    // NOP
label_2f1cac:
    // 0x2f1cac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f1cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f1cb0:
    // 0x2f1cb0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f1cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f1cb4:
    // 0x2f1cb4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f1cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f1cb8:
    // 0x2f1cb8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f1cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f1cbc:
    // 0x2f1cbc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2f1cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1cc0:
    // 0x2f1cc0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f1cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1cc4:
    // 0x2f1cc4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f1cc8:
    // 0x2f1cc8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f1cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2f1ccc:
    // 0x2f1ccc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2f1cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2f1cd0:
    // 0x2f1cd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f1cd4:
    // 0x2f1cd4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f1cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f1cd8:
    // 0x2f1cd8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2f1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f1cdc:
    // 0x2f1cdc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f1cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f1ce0:
    // 0x2f1ce0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f1ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f1ce4:
    // 0x2f1ce4: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2f1ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_2f1ce8:
    // 0x2f1ce8: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2f1ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
label_2f1cec:
    // 0x2f1cec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2f1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2f1cf0:
    // 0x2f1cf0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2f1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2f1cf4:
    // 0x2f1cf4: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2f1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
label_2f1cf8:
    // 0x2f1cf8: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x2f1cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
label_2f1cfc:
    // 0x2f1cfc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2f1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2f1d00:
    // 0x2f1d00: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2f1d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1d04:
    // 0x2f1d04: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2f1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f1d08:
    // 0x2f1d08: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2f1d08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_2f1d0c:
    // 0x2f1d0c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x2f1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1d10:
    // 0x2f1d10: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2f1d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d14:
    // 0x2f1d14: 0x8e0602b0  lw          $a2, 0x2B0($s0)
    ctx->pc = 0x2f1d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_2f1d18:
    // 0x2f1d18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f1d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f1d1c:
    // 0x2f1d1c: 0x8604023a  lh          $a0, 0x23A($s0)
    ctx->pc = 0x2f1d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
label_2f1d20:
    // 0x2f1d20: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2f1d20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_2f1d24:
    // 0x2f1d24: 0x9605023c  lhu         $a1, 0x23C($s0)
    ctx->pc = 0x2f1d24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
label_2f1d28:
    // 0x2f1d28: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2f1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2f1d2c:
    // 0x2f1d2c: 0xa3aa0074  sb          $t2, 0x74($sp)
    ctx->pc = 0x2f1d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 10));
label_2f1d30:
    // 0x2f1d30: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f1d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2f1d34:
    // 0x2f1d34: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x2f1d34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
label_2f1d38:
    // 0x2f1d38: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x2f1d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
label_2f1d3c:
    // 0x2f1d3c: 0xc0c194a  jal         func_306528
label_2f1d40:
    if (ctx->pc == 0x2F1D40u) {
        ctx->pc = 0x2F1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D3Cu;
        // 0x2f1d40: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D44u;
        goto label_2f1d44;
    }
    ctx->pc = 0x2F1D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F1D44u);
    ctx->pc = 0x2F1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D3Cu;
    // 0x2f1d40: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2F1D3Cu, 0x2F1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D44u;
label_2f1d44:
    // 0x2f1d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1d48:
    // 0x2f1d48: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f1d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f1d4c:
    // 0x2f1d4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f1d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f1d50:
    // 0x2f1d50: 0x3e00008  jr          $ra
label_2f1d54:
    if (ctx->pc == 0x2F1D54u) {
        ctx->pc = 0x2F1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D50u;
        // 0x2f1d54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D58u;
        goto label_fallthrough_0x2f1d50;
    }
    ctx->pc = 0x2F1D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D50u;
        // 0x2f1d54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f1d50:
    ctx->pc = 0x2F1D58u;
}
