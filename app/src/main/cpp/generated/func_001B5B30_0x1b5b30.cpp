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

// Function: func_001B5B30
// Address: 0x1b5b30 - 0x1b5ea0
void func_001B5B30_0x1b5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B5B30_0x1b5b30");
#endif

    switch (ctx->pc) {
        case 0x1b5b30u: goto label_1b5b30;
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b38u: goto label_1b5b38;
        case 0x1b5b3cu: goto label_1b5b3c;
        case 0x1b5b40u: goto label_1b5b40;
        case 0x1b5b44u: goto label_1b5b44;
        case 0x1b5b48u: goto label_1b5b48;
        case 0x1b5b4cu: goto label_1b5b4c;
        case 0x1b5b50u: goto label_1b5b50;
        case 0x1b5b54u: goto label_1b5b54;
        case 0x1b5b58u: goto label_1b5b58;
        case 0x1b5b5cu: goto label_1b5b5c;
        case 0x1b5b60u: goto label_1b5b60;
        case 0x1b5b64u: goto label_1b5b64;
        case 0x1b5b68u: goto label_1b5b68;
        case 0x1b5b6cu: goto label_1b5b6c;
        case 0x1b5b70u: goto label_1b5b70;
        case 0x1b5b74u: goto label_1b5b74;
        case 0x1b5b78u: goto label_1b5b78;
        case 0x1b5b7cu: goto label_1b5b7c;
        case 0x1b5b80u: goto label_1b5b80;
        case 0x1b5b84u: goto label_1b5b84;
        case 0x1b5b88u: goto label_1b5b88;
        case 0x1b5b8cu: goto label_1b5b8c;
        case 0x1b5b90u: goto label_1b5b90;
        case 0x1b5b94u: goto label_1b5b94;
        case 0x1b5b98u: goto label_1b5b98;
        case 0x1b5b9cu: goto label_1b5b9c;
        case 0x1b5ba0u: goto label_1b5ba0;
        case 0x1b5ba4u: goto label_1b5ba4;
        case 0x1b5ba8u: goto label_1b5ba8;
        case 0x1b5bacu: goto label_1b5bac;
        case 0x1b5bb0u: goto label_1b5bb0;
        case 0x1b5bb4u: goto label_1b5bb4;
        case 0x1b5bb8u: goto label_1b5bb8;
        case 0x1b5bbcu: goto label_1b5bbc;
        case 0x1b5bc0u: goto label_1b5bc0;
        case 0x1b5bc4u: goto label_1b5bc4;
        case 0x1b5bc8u: goto label_1b5bc8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bd0u: goto label_1b5bd0;
        case 0x1b5bd4u: goto label_1b5bd4;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5be0u: goto label_1b5be0;
        case 0x1b5be4u: goto label_1b5be4;
        case 0x1b5be8u: goto label_1b5be8;
        case 0x1b5becu: goto label_1b5bec;
        case 0x1b5bf0u: goto label_1b5bf0;
        case 0x1b5bf4u: goto label_1b5bf4;
        case 0x1b5bf8u: goto label_1b5bf8;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c00u: goto label_1b5c00;
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c0cu: goto label_1b5c0c;
        case 0x1b5c10u: goto label_1b5c10;
        case 0x1b5c14u: goto label_1b5c14;
        case 0x1b5c18u: goto label_1b5c18;
        case 0x1b5c1cu: goto label_1b5c1c;
        case 0x1b5c20u: goto label_1b5c20;
        case 0x1b5c24u: goto label_1b5c24;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c2cu: goto label_1b5c2c;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c34u: goto label_1b5c34;
        case 0x1b5c38u: goto label_1b5c38;
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c40u: goto label_1b5c40;
        case 0x1b5c44u: goto label_1b5c44;
        case 0x1b5c48u: goto label_1b5c48;
        case 0x1b5c4cu: goto label_1b5c4c;
        case 0x1b5c50u: goto label_1b5c50;
        case 0x1b5c54u: goto label_1b5c54;
        case 0x1b5c58u: goto label_1b5c58;
        case 0x1b5c5cu: goto label_1b5c5c;
        case 0x1b5c60u: goto label_1b5c60;
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c68u: goto label_1b5c68;
        case 0x1b5c6cu: goto label_1b5c6c;
        case 0x1b5c70u: goto label_1b5c70;
        case 0x1b5c74u: goto label_1b5c74;
        case 0x1b5c78u: goto label_1b5c78;
        case 0x1b5c7cu: goto label_1b5c7c;
        case 0x1b5c80u: goto label_1b5c80;
        case 0x1b5c84u: goto label_1b5c84;
        case 0x1b5c88u: goto label_1b5c88;
        case 0x1b5c8cu: goto label_1b5c8c;
        case 0x1b5c90u: goto label_1b5c90;
        case 0x1b5c94u: goto label_1b5c94;
        case 0x1b5c98u: goto label_1b5c98;
        case 0x1b5c9cu: goto label_1b5c9c;
        case 0x1b5ca0u: goto label_1b5ca0;
        case 0x1b5ca4u: goto label_1b5ca4;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cacu: goto label_1b5cac;
        case 0x1b5cb0u: goto label_1b5cb0;
        case 0x1b5cb4u: goto label_1b5cb4;
        case 0x1b5cb8u: goto label_1b5cb8;
        case 0x1b5cbcu: goto label_1b5cbc;
        case 0x1b5cc0u: goto label_1b5cc0;
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5cc8u: goto label_1b5cc8;
        case 0x1b5cccu: goto label_1b5ccc;
        case 0x1b5cd0u: goto label_1b5cd0;
        case 0x1b5cd4u: goto label_1b5cd4;
        case 0x1b5cd8u: goto label_1b5cd8;
        case 0x1b5cdcu: goto label_1b5cdc;
        case 0x1b5ce0u: goto label_1b5ce0;
        case 0x1b5ce4u: goto label_1b5ce4;
        case 0x1b5ce8u: goto label_1b5ce8;
        case 0x1b5cecu: goto label_1b5cec;
        case 0x1b5cf0u: goto label_1b5cf0;
        case 0x1b5cf4u: goto label_1b5cf4;
        case 0x1b5cf8u: goto label_1b5cf8;
        case 0x1b5cfcu: goto label_1b5cfc;
        case 0x1b5d00u: goto label_1b5d00;
        case 0x1b5d04u: goto label_1b5d04;
        case 0x1b5d08u: goto label_1b5d08;
        case 0x1b5d0cu: goto label_1b5d0c;
        case 0x1b5d10u: goto label_1b5d10;
        case 0x1b5d14u: goto label_1b5d14;
        case 0x1b5d18u: goto label_1b5d18;
        case 0x1b5d1cu: goto label_1b5d1c;
        case 0x1b5d20u: goto label_1b5d20;
        case 0x1b5d24u: goto label_1b5d24;
        case 0x1b5d28u: goto label_1b5d28;
        case 0x1b5d2cu: goto label_1b5d2c;
        case 0x1b5d30u: goto label_1b5d30;
        case 0x1b5d34u: goto label_1b5d34;
        case 0x1b5d38u: goto label_1b5d38;
        case 0x1b5d3cu: goto label_1b5d3c;
        case 0x1b5d40u: goto label_1b5d40;
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d48u: goto label_1b5d48;
        case 0x1b5d4cu: goto label_1b5d4c;
        case 0x1b5d50u: goto label_1b5d50;
        case 0x1b5d54u: goto label_1b5d54;
        case 0x1b5d58u: goto label_1b5d58;
        case 0x1b5d5cu: goto label_1b5d5c;
        case 0x1b5d60u: goto label_1b5d60;
        case 0x1b5d64u: goto label_1b5d64;
        case 0x1b5d68u: goto label_1b5d68;
        case 0x1b5d6cu: goto label_1b5d6c;
        case 0x1b5d70u: goto label_1b5d70;
        case 0x1b5d74u: goto label_1b5d74;
        case 0x1b5d78u: goto label_1b5d78;
        case 0x1b5d7cu: goto label_1b5d7c;
        case 0x1b5d80u: goto label_1b5d80;
        case 0x1b5d84u: goto label_1b5d84;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d8cu: goto label_1b5d8c;
        case 0x1b5d90u: goto label_1b5d90;
        case 0x1b5d94u: goto label_1b5d94;
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5d9cu: goto label_1b5d9c;
        case 0x1b5da0u: goto label_1b5da0;
        case 0x1b5da4u: goto label_1b5da4;
        case 0x1b5da8u: goto label_1b5da8;
        case 0x1b5dacu: goto label_1b5dac;
        case 0x1b5db0u: goto label_1b5db0;
        case 0x1b5db4u: goto label_1b5db4;
        case 0x1b5db8u: goto label_1b5db8;
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dc0u: goto label_1b5dc0;
        case 0x1b5dc4u: goto label_1b5dc4;
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5dd0u: goto label_1b5dd0;
        case 0x1b5dd4u: goto label_1b5dd4;
        case 0x1b5dd8u: goto label_1b5dd8;
        case 0x1b5ddcu: goto label_1b5ddc;
        case 0x1b5de0u: goto label_1b5de0;
        case 0x1b5de4u: goto label_1b5de4;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5decu: goto label_1b5dec;
        case 0x1b5df0u: goto label_1b5df0;
        case 0x1b5df4u: goto label_1b5df4;
        case 0x1b5df8u: goto label_1b5df8;
        case 0x1b5dfcu: goto label_1b5dfc;
        case 0x1b5e00u: goto label_1b5e00;
        case 0x1b5e04u: goto label_1b5e04;
        case 0x1b5e08u: goto label_1b5e08;
        case 0x1b5e0cu: goto label_1b5e0c;
        case 0x1b5e10u: goto label_1b5e10;
        case 0x1b5e14u: goto label_1b5e14;
        case 0x1b5e18u: goto label_1b5e18;
        case 0x1b5e1cu: goto label_1b5e1c;
        case 0x1b5e20u: goto label_1b5e20;
        case 0x1b5e24u: goto label_1b5e24;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e2cu: goto label_1b5e2c;
        case 0x1b5e30u: goto label_1b5e30;
        case 0x1b5e34u: goto label_1b5e34;
        case 0x1b5e38u: goto label_1b5e38;
        case 0x1b5e3cu: goto label_1b5e3c;
        case 0x1b5e40u: goto label_1b5e40;
        case 0x1b5e44u: goto label_1b5e44;
        case 0x1b5e48u: goto label_1b5e48;
        case 0x1b5e4cu: goto label_1b5e4c;
        case 0x1b5e50u: goto label_1b5e50;
        case 0x1b5e54u: goto label_1b5e54;
        case 0x1b5e58u: goto label_1b5e58;
        case 0x1b5e5cu: goto label_1b5e5c;
        case 0x1b5e60u: goto label_1b5e60;
        case 0x1b5e64u: goto label_1b5e64;
        case 0x1b5e68u: goto label_1b5e68;
        case 0x1b5e6cu: goto label_1b5e6c;
        case 0x1b5e70u: goto label_1b5e70;
        case 0x1b5e74u: goto label_1b5e74;
        case 0x1b5e78u: goto label_1b5e78;
        case 0x1b5e7cu: goto label_1b5e7c;
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e88u: goto label_1b5e88;
        case 0x1b5e8cu: goto label_1b5e8c;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5e94u: goto label_1b5e94;
        case 0x1b5e98u: goto label_1b5e98;
        case 0x1b5e9cu: goto label_1b5e9c;
        default: break;
    }

    ctx->pc = 0x1b5b30u;

label_1b5b30:
    // 0x1b5b30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b5b34:
    // 0x1b5b34: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1b5b38:
    // 0x1b5b38: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1b5b3c:
    // 0x1b5b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b40:
    // 0x1b5b40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b5b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b5b44:
    // 0x1b5b44: 0xc06dce0  jal         func_1B7380
label_1b5b48:
    if (ctx->pc == 0x1B5B48u) {
        ctx->pc = 0x1B5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B44u;
        // 0x1b5b48: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B4Cu;
        goto label_1b5b4c;
    }
    ctx->pc = 0x1B5B44u;
    SET_GPR_U32(ctx, 31, 0x1B5B4Cu);
    ctx->pc = 0x1B5B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B44u;
    // 0x1b5b48: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1B5B44u, 0x1B5B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B4Cu;
label_1b5b4c:
    // 0x1b5b4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b5b4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b50:
    // 0x1b5b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5b54:
    // 0x1b5b54: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_1b5b58:
    if (ctx->pc == 0x1B5B58u) {
        ctx->pc = 0x1B5B5Cu;
        goto label_1b5b5c;
    }
    ctx->pc = 0x1B5B54u;
    {
        const bool branch_taken_0x1b5b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5b54) {
            ctx->pc = 0x1B5BACu;
            goto label_1b5bac;
        }
    }
    ctx->pc = 0x1B5B5Cu;
label_1b5b5c:
    // 0x1b5b5c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1b5b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1b5b60:
    // 0x1b5b60: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_1b5b64:
    if (ctx->pc == 0x1B5B64u) {
        ctx->pc = 0x1B5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B60u;
        // 0x1b5b64: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B68u;
        goto label_1b5b68;
    }
    ctx->pc = 0x1B5B60u;
    {
        const bool branch_taken_0x1b5b60 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B60u;
        // 0x1b5b64: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b60) {
            ctx->pc = 0x1B5B88u;
            goto label_1b5b88;
        }
    }
    ctx->pc = 0x1B5B68u;
label_1b5b68:
    // 0x1b5b68: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1b5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1b5b6c:
    // 0x1b5b6c: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x1b5b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_1b5b70:
    // 0x1b5b70: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b5b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1b5b74:
    // 0x1b5b74: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1b5b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1b5b78:
    // 0x1b5b78: 0xae0205b0  sw          $v0, 0x5B0($s0)
    ctx->pc = 0x1b5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
label_1b5b7c:
    // 0x1b5b7c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1b5b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b5b80:
    // 0x1b5b80: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1b5b84:
    if (ctx->pc == 0x1B5B84u) {
        ctx->pc = 0x1B5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B80u;
        // 0x1b5b84: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B88u;
        goto label_1b5b88;
    }
    ctx->pc = 0x1B5B80u;
    {
        const bool branch_taken_0x1b5b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B80u;
        // 0x1b5b84: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b80) {
            ctx->pc = 0x1B5E88u;
            goto label_1b5e88;
        }
    }
    ctx->pc = 0x1B5B88u;
label_1b5b88:
    // 0x1b5b88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5b8c:
    // 0x1b5b8c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1b5b90:
    // 0x1b5b90: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x1b5b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1b5b94:
    // 0x1b5b94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b5b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b98:
    // 0x1b5b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b5b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b9c:
    // 0x1b5b9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b5b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ba0:
    // 0x1b5ba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b5ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ba4:
    // 0x1b5ba4: 0xc0b2e92  jal         func_2CBA48
label_1b5ba8:
    if (ctx->pc == 0x1B5BA8u) {
        ctx->pc = 0x1B5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BA4u;
        // 0x1b5ba8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BACu;
        goto label_1b5bac;
    }
    ctx->pc = 0x1B5BA4u;
    SET_GPR_U32(ctx, 31, 0x1B5BACu);
    ctx->pc = 0x1B5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BA4u;
    // 0x1b5ba8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B5BA4u, 0x1B5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BACu;
label_1b5bac:
    // 0x1b5bac: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1b5bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b5bb0:
    // 0x1b5bb0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1b5bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1b5bb4:
    // 0x1b5bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5bb8:
    // 0x1b5bb8: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
label_1b5bbc:
    if (ctx->pc == 0x1B5BBCu) {
        ctx->pc = 0x1B5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BB8u;
        // 0x1b5bbc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BC0u;
        goto label_1b5bc0;
    }
    ctx->pc = 0x1B5BB8u;
    {
        const bool branch_taken_0x1b5bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BB8u;
        // 0x1b5bbc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bb8) {
            ctx->pc = 0x1B5E08u;
            goto label_1b5e08;
        }
    }
    ctx->pc = 0x1B5BC0u;
label_1b5bc0:
    // 0x1b5bc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b5bc4:
    if (ctx->pc == 0x1B5BC4u) {
        ctx->pc = 0x1B5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BC0u;
        // 0x1b5bc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BC8u;
        goto label_1b5bc8;
    }
    ctx->pc = 0x1B5BC0u;
    {
        const bool branch_taken_0x1b5bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bc0) {
            ctx->pc = 0x1B5BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BC0u;
            // 0x1b5bc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BD8u;
            goto label_1b5bd8;
        }
    }
    ctx->pc = 0x1B5BC8u;
label_1b5bc8:
    // 0x1b5bc8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1b5bcc:
    if (ctx->pc == 0x1B5BCCu) {
        ctx->pc = 0x1B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BC8u;
        // 0x1b5bcc: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BD0u;
        goto label_1b5bd0;
    }
    ctx->pc = 0x1B5BC8u;
    {
        const bool branch_taken_0x1b5bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bc8) {
            ctx->pc = 0x1B5BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BC8u;
            // 0x1b5bcc: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BE8u;
            goto label_1b5be8;
        }
    }
    ctx->pc = 0x1B5BD0u;
label_1b5bd0:
    // 0x1b5bd0: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1b5bd4:
    if (ctx->pc == 0x1B5BD4u) {
        ctx->pc = 0x1B5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD0u;
        // 0x1b5bd4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BD8u;
        goto label_1b5bd8;
    }
    ctx->pc = 0x1B5BD0u;
    {
        const bool branch_taken_0x1b5bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD0u;
        // 0x1b5bd4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bd0) {
            ctx->pc = 0x1B5E8Cu;
            goto label_1b5e8c;
        }
    }
    ctx->pc = 0x1B5BD8u;
label_1b5bd8:
    // 0x1b5bd8: 0x5062009b  beql        $v1, $v0, . + 4 + (0x9B << 2)
label_1b5bdc:
    if (ctx->pc == 0x1B5BDCu) {
        ctx->pc = 0x1B5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD8u;
        // 0x1b5bdc: 0x9e0205b8  lwu         $v0, 0x5B8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BE0u;
        goto label_1b5be0;
    }
    ctx->pc = 0x1B5BD8u;
    {
        const bool branch_taken_0x1b5bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5bd8) {
            ctx->pc = 0x1B5BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BD8u;
            // 0x1b5bdc: 0x9e0205b8  lwu         $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E48u;
            goto label_1b5e48;
        }
    }
    ctx->pc = 0x1B5BE0u;
label_1b5be0:
    // 0x1b5be0: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1b5be4:
    if (ctx->pc == 0x1B5BE4u) {
        ctx->pc = 0x1B5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BE0u;
        // 0x1b5be4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BE8u;
        goto label_1b5be8;
    }
    ctx->pc = 0x1B5BE0u;
    {
        const bool branch_taken_0x1b5be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BE0u;
        // 0x1b5be4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5be0) {
            ctx->pc = 0x1B5E8Cu;
            goto label_1b5e8c;
        }
    }
    ctx->pc = 0x1B5BE8u;
label_1b5be8:
    // 0x1b5be8: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
label_1b5bec:
    if (ctx->pc == 0x1B5BECu) {
        ctx->pc = 0x1B5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BE8u;
        // 0x1b5bec: 0x9e0205b8  lwu         $v0, 0x5B8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BF0u;
        goto label_1b5bf0;
    }
    ctx->pc = 0x1B5BE8u;
    {
        const bool branch_taken_0x1b5be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5be8) {
            ctx->pc = 0x1B5BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BE8u;
            // 0x1b5bec: 0x9e0205b8  lwu         $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5DECu;
            goto label_1b5dec;
        }
    }
    ctx->pc = 0x1B5BF0u;
label_1b5bf0:
    // 0x1b5bf0: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
label_1b5bf4:
    // 0x1b5bf4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1b5bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1b5bf8:
    // 0x1b5bf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5bfc:
    // 0x1b5bfc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b5c00:
    // 0x1b5c00: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1b5c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_1b5c04:
    // 0x1b5c04: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1b5c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1b5c08:
    // 0x1b5c08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5c0c:
    // 0x1b5c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5c10:
    // 0x1b5c10: 0x3c013fbd  lui         $at, 0x3FBD
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16317 << 16));
label_1b5c14:
    // 0x1b5c14: 0x3421c62a  ori         $at, $at, 0xC62A
    ctx->pc = 0x1b5c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50730);
label_1b5c18:
    // 0x1b5c18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b5c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b5c1c:
    // 0x1b5c1c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b5c20:
    // 0x1b5c20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b5c24:
    // 0x1b5c24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b5c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b5c28:
    // 0x1b5c28: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b5c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b5c2c:
    // 0x1b5c2c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1b5c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b5c30:
    // 0x1b5c30: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1b5c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1b5c34:
    // 0x1b5c34: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1b5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1b5c38:
    // 0x1b5c38: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1b5c38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1b5c3c:
    // 0x1b5c3c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b5c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b5c40:
    // 0x1b5c40: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1b5c40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b5c44:
    // 0x1b5c44: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1b5c48:
    // 0x1b5c48: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x1b5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5c4c:
    // 0x1b5c4c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_1b5c50:
    if (ctx->pc == 0x1B5C50u) {
        ctx->pc = 0x1B5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C4Cu;
        // 0x1b5c50: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C54u;
        goto label_1b5c54;
    }
    ctx->pc = 0x1B5C4Cu;
    {
        const bool branch_taken_0x1b5c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C4Cu;
        // 0x1b5c50: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c4c) {
            ctx->pc = 0x1B5D10u;
            goto label_1b5d10;
        }
    }
    ctx->pc = 0x1B5C54u;
label_1b5c54:
    // 0x1b5c54: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x1b5c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5c58:
    // 0x1b5c58: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1b5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b5c5c:
    // 0x1b5c5c: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x1b5c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5c60:
    // 0x1b5c60: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1b5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b5c64:
    // 0x1b5c64: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1b5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5c68:
    // 0x1b5c68: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1b5c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1b5c6c:
    // 0x1b5c6c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1b5c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1b5c70:
    // 0x1b5c70: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b5c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1b5c74:
    // 0x1b5c74: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1b5c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b5c78:
    // 0x1b5c78: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b5c78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5c7c:
    // 0x1b5c7c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b5c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5c80:
    // 0x1b5c80: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b5c80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5c84:
    // 0x1b5c84: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b5c84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5c88:
    // 0x1b5c88: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b5c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b5c8c:
    // 0x1b5c8c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5c90:
    // 0x1b5c90: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b5c90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5c94:
    // 0x1b5c94: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b5c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5c98:
    // 0x1b5c98: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
label_1b5c9c:
    if (ctx->pc == 0x1B5C9Cu) {
        ctx->pc = 0x1B5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C98u;
        // 0x1b5c9c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CA0u;
        goto label_1b5ca0;
    }
    ctx->pc = 0x1B5C98u;
    {
        const bool branch_taken_0x1b5c98 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C98u;
        // 0x1b5c9c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c98) {
            ctx->pc = 0x1B5CB4u;
            goto label_1b5cb4;
        }
    }
    ctx->pc = 0x1B5CA0u;
label_1b5ca0:
    // 0x1b5ca0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1b5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5ca4:
    // 0x1b5ca4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1b5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5ca8:
    // 0x1b5ca8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b5cac:
    // 0x1b5cac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b5cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b5cb0:
    // 0x1b5cb0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b5cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5cb4:
    // 0x1b5cb4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5cb8:
    // 0x1b5cb8: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x1b5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b5cbc:
    // 0x1b5cbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b5cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b5cc0:
    // 0x1b5cc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5cc4:
    // 0x1b5cc4: 0x8e060604  lw          $a2, 0x604($s0)
    ctx->pc = 0x1b5cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5cc8:
    // 0x1b5cc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b5ccc:
    // 0x1b5ccc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5cd0:
    // 0x1b5cd0: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1b5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1b5cd4:
    // 0x1b5cd4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1b5cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1b5cd8:
    // 0x1b5cd8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1b5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1b5cdc:
    // 0x1b5cdc: 0x60f809  jalr        $v1
label_1b5ce0:
    if (ctx->pc == 0x1B5CE0u) {
        ctx->pc = 0x1B5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CDCu;
        // 0x1b5ce0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CE4u;
        goto label_1b5ce4;
    }
    ctx->pc = 0x1B5CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5CE4u);
        ctx->pc = 0x1B5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CDCu;
        // 0x1b5ce0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5CDCu, 0x1B5CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5CE4u;
label_1b5ce4:
    // 0x1b5ce4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b5ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5ce8:
    // 0x1b5ce8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b5ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5cec:
    // 0x1b5cec: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x1b5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5cf0:
    // 0x1b5cf0: 0x24620600  addiu       $v0, $v1, 0x600
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
label_1b5cf4:
    // 0x1b5cf4: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1b5cf8:
    if (ctx->pc == 0x1B5CF8u) {
        ctx->pc = 0x1B5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CF4u;
        // 0x1b5cf8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CFCu;
        goto label_1b5cfc;
    }
    ctx->pc = 0x1B5CF4u;
    {
        const bool branch_taken_0x1b5cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CF4u;
        // 0x1b5cf8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cf4) {
            ctx->pc = 0x1B5D10u;
            goto label_1b5d10;
        }
    }
    ctx->pc = 0x1B5CFCu;
label_1b5cfc:
    // 0x1b5cfc: 0xe4600600  swc1        $f0, 0x600($v1)
    ctx->pc = 0x1b5cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1536), bits); }
label_1b5d00:
    // 0x1b5d00: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1b5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d04:
    // 0x1b5d04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b5d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b5d08:
    // 0x1b5d08: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1b5d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5d0c:
    // 0x1b5d0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b5d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b5d10:
    // 0x1b5d10: 0x8e020608  lw          $v0, 0x608($s0)
    ctx->pc = 0x1b5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5d14:
    // 0x1b5d14: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1b5d18:
    if (ctx->pc == 0x1B5D18u) {
        ctx->pc = 0x1B5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D14u;
        // 0x1b5d18: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D1Cu;
        goto label_1b5d1c;
    }
    ctx->pc = 0x1B5D14u;
    {
        const bool branch_taken_0x1b5d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D14u;
        // 0x1b5d18: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d14) {
            ctx->pc = 0x1B5DE0u;
            goto label_1b5de0;
        }
    }
    ctx->pc = 0x1B5D1Cu;
label_1b5d1c:
    // 0x1b5d1c: 0xc60300b0  lwc1        $f3, 0xB0($s0)
    ctx->pc = 0x1b5d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b5d20:
    // 0x1b5d20: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x1b5d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5d24:
    // 0x1b5d24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b5d28:
    // 0x1b5d28: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1b5d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5d2c:
    // 0x1b5d2c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b5d30:
    // 0x1b5d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b5d34:
    // 0x1b5d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5d38:
    // 0x1b5d38: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1b5d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1b5d3c:
    // 0x1b5d3c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1b5d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1b5d40:
    // 0x1b5d40: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b5d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1b5d44:
    // 0x1b5d44: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1b5d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1b5d48:
    // 0x1b5d48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b5d48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5d4c:
    // 0x1b5d4c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b5d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5d50:
    // 0x1b5d50: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b5d50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5d54:
    // 0x1b5d54: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1b5d54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5d58:
    // 0x1b5d58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b5d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b5d5c:
    // 0x1b5d5c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b5d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5d60:
    // 0x1b5d60: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b5d60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5d64:
    // 0x1b5d64: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b5d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5d68:
    // 0x1b5d68: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
label_1b5d6c:
    if (ctx->pc == 0x1B5D6Cu) {
        ctx->pc = 0x1B5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D68u;
        // 0x1b5d6c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D70u;
        goto label_1b5d70;
    }
    ctx->pc = 0x1B5D68u;
    {
        const bool branch_taken_0x1b5d68 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D68u;
        // 0x1b5d6c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d68) {
            ctx->pc = 0x1B5D84u;
            goto label_1b5d84;
        }
    }
    ctx->pc = 0x1B5D70u;
label_1b5d70:
    // 0x1b5d70: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1b5d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5d74:
    // 0x1b5d74: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1b5d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5d78:
    // 0x1b5d78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b5d7c:
    // 0x1b5d7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b5d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b5d80:
    // 0x1b5d80: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b5d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5d84:
    // 0x1b5d84: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5d88:
    // 0x1b5d88: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x1b5d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b5d8c:
    // 0x1b5d8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b5d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b5d90:
    // 0x1b5d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5d94:
    // 0x1b5d94: 0x8e060608  lw          $a2, 0x608($s0)
    ctx->pc = 0x1b5d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5d98:
    // 0x1b5d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b5d9c:
    // 0x1b5d9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b5d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5da0:
    // 0x1b5da0: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1b5da4:
    // 0x1b5da4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1b5da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1b5da8:
    // 0x1b5da8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1b5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1b5dac:
    // 0x1b5dac: 0x60f809  jalr        $v1
label_1b5db0:
    if (ctx->pc == 0x1B5DB0u) {
        ctx->pc = 0x1B5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DACu;
        // 0x1b5db0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DB4u;
        goto label_1b5db4;
    }
    ctx->pc = 0x1B5DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5DB4u);
        ctx->pc = 0x1B5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DACu;
        // 0x1b5db0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5DACu, 0x1B5DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5DB4u;
label_1b5db4:
    // 0x1b5db4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b5db4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5db8:
    // 0x1b5db8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b5db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b5dbc:
    // 0x1b5dbc: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x1b5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5dc0:
    // 0x1b5dc0: 0x24620600  addiu       $v0, $v1, 0x600
    ctx->pc = 0x1b5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
label_1b5dc4:
    // 0x1b5dc4: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1b5dc8:
    if (ctx->pc == 0x1B5DC8u) {
        ctx->pc = 0x1B5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC4u;
        // 0x1b5dc8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DCCu;
        goto label_1b5dcc;
    }
    ctx->pc = 0x1B5DC4u;
    {
        const bool branch_taken_0x1b5dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC4u;
        // 0x1b5dc8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dc4) {
            ctx->pc = 0x1B5DE0u;
            goto label_1b5de0;
        }
    }
    ctx->pc = 0x1B5DCCu;
label_1b5dcc:
    // 0x1b5dcc: 0xe4600600  swc1        $f0, 0x600($v1)
    ctx->pc = 0x1b5dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1536), bits); }
label_1b5dd0:
    // 0x1b5dd0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1b5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5dd4:
    // 0x1b5dd4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b5dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b5dd8:
    // 0x1b5dd8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1b5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5ddc:
    // 0x1b5ddc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b5ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b5de0:
    // 0x1b5de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5de4:
    // 0x1b5de4: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x1b5de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
label_1b5de8:
    // 0x1b5de8: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x1b5de8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1b5dec:
    // 0x1b5dec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b5df0:
    // 0x1b5df0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_1b5df4:
    if (ctx->pc == 0x1B5DF4u) {
        ctx->pc = 0x1B5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DF0u;
        // 0x1b5df4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DF8u;
        goto label_1b5df8;
    }
    ctx->pc = 0x1B5DF0u;
    {
        const bool branch_taken_0x1b5df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5df0) {
            ctx->pc = 0x1B5DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5DF0u;
            // 0x1b5df4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E8Cu;
            goto label_1b5e8c;
        }
    }
    ctx->pc = 0x1B5DF8u;
label_1b5df8:
    // 0x1b5df8: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1b5df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1b5dfc:
    // 0x1b5dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b5e00:
    // 0x1b5e00: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b5e04:
    if (ctx->pc == 0x1B5E04u) {
        ctx->pc = 0x1B5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E00u;
        // 0x1b5e04: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E08u;
        goto label_1b5e08;
    }
    ctx->pc = 0x1B5E00u;
    {
        const bool branch_taken_0x1b5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E00u;
        // 0x1b5e04: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e00) {
            ctx->pc = 0x1B5E88u;
            goto label_1b5e88;
        }
    }
    ctx->pc = 0x1B5E08u;
label_1b5e08:
    // 0x1b5e08: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x1b5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5e0c:
    // 0x1b5e0c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1b5e10:
    if (ctx->pc == 0x1B5E10u) {
        ctx->pc = 0x1B5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E0Cu;
        // 0x1b5e10: 0x8e030608  lw          $v1, 0x608($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E14u;
        goto label_1b5e14;
    }
    ctx->pc = 0x1B5E0Cu;
    {
        const bool branch_taken_0x1b5e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e0c) {
            ctx->pc = 0x1B5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E0Cu;
            // 0x1b5e10: 0x8e030608  lw          $v1, 0x608($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E24u;
            goto label_1b5e24;
        }
    }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x8c6205b8  lw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1464)));
label_1b5e18:
    // 0x1b5e18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b5e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1b5e1c:
    // 0x1b5e1c: 0xac6205b8  sw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 2));
label_1b5e20:
    // 0x1b5e20: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5e24:
    // 0x1b5e24: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1b5e28:
    if (ctx->pc == 0x1B5E28u) {
        ctx->pc = 0x1B5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E24u;
        // 0x1b5e28: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E2Cu;
        goto label_1b5e2c;
    }
    ctx->pc = 0x1B5E24u;
    {
        const bool branch_taken_0x1b5e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e24) {
            ctx->pc = 0x1B5E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E24u;
            // 0x1b5e28: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E3Cu;
            goto label_1b5e3c;
        }
    }
    ctx->pc = 0x1B5E2Cu;
label_1b5e2c:
    // 0x1b5e2c: 0x8c6205b8  lw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1464)));
label_1b5e30:
    // 0x1b5e30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b5e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1b5e34:
    // 0x1b5e34: 0xac6205b8  sw          $v0, 0x5B8($v1)
    ctx->pc = 0x1b5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 2));
label_1b5e38:
    // 0x1b5e38: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1b5e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1b5e3c:
    // 0x1b5e3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b5e40:
    // 0x1b5e40: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1b5e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_1b5e44:
    // 0x1b5e44: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x1b5e44u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1b5e48:
    // 0x1b5e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b5e4c:
    // 0x1b5e4c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1b5e50:
    if (ctx->pc == 0x1B5E50u) {
        ctx->pc = 0x1B5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E4Cu;
        // 0x1b5e50: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E54u;
        goto label_1b5e54;
    }
    ctx->pc = 0x1B5E4Cu;
    {
        const bool branch_taken_0x1b5e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e4c) {
            ctx->pc = 0x1B5E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E4Cu;
            // 0x1b5e50: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E8Cu;
            goto label_1b5e8c;
        }
    }
    ctx->pc = 0x1B5E54u;
label_1b5e54:
    // 0x1b5e54: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1b5e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1b5e58:
    // 0x1b5e58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b5e5c:
    if (ctx->pc == 0x1B5E5Cu) {
        ctx->pc = 0x1B5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E58u;
        // 0x1b5e5c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E60u;
        goto label_1b5e60;
    }
    ctx->pc = 0x1B5E58u;
    {
        const bool branch_taken_0x1b5e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E58u;
        // 0x1b5e5c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e58) {
            ctx->pc = 0x1B5E6Cu;
            goto label_1b5e6c;
        }
    }
    ctx->pc = 0x1B5E60u;
label_1b5e60:
    // 0x1b5e60: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_1b5e64:
    // 0x1b5e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b5e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b5e68:
    // 0x1b5e68: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b5e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
label_1b5e6c:
    // 0x1b5e6c: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b5e70:
    // 0x1b5e70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b5e74:
    if (ctx->pc == 0x1B5E74u) {
        ctx->pc = 0x1B5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E70u;
        // 0x1b5e74: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E78u;
        goto label_1b5e78;
    }
    ctx->pc = 0x1B5E70u;
    {
        const bool branch_taken_0x1b5e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E70u;
        // 0x1b5e74: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e70) {
            ctx->pc = 0x1B5E84u;
            goto label_1b5e84;
        }
    }
    ctx->pc = 0x1B5E78u;
label_1b5e78:
    // 0x1b5e78: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_1b5e7c:
    // 0x1b5e7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b5e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b5e80:
    // 0x1b5e80: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
label_1b5e84:
    // 0x1b5e84: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1b5e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1b5e88:
    // 0x1b5e88: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b5e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b5e8c:
    // 0x1b5e8c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b5e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b5e90:
    // 0x1b5e90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b5e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b5e94:
    // 0x1b5e94: 0x3e00008  jr          $ra
label_1b5e98:
    if (ctx->pc == 0x1B5E98u) {
        ctx->pc = 0x1B5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E94u;
        // 0x1b5e98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E9Cu;
        goto label_1b5e9c;
    }
    ctx->pc = 0x1B5E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E94u;
        // 0x1b5e98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5E9Cu;
label_1b5e9c:
    // 0x1b5e9c: 0x0  nop
    ctx->pc = 0x1b5e9cu;
    // NOP
    ctx->pc = 0x1b5ea0u;
}
