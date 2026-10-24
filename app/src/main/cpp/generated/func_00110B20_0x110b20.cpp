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

// Function: func_00110B20
// Address: 0x110b20 - 0x110e98
void func_00110B20_0x110b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00110B20_0x110b20");
#endif

    switch (ctx->pc) {
        case 0x110b20u: goto label_110b20;
        case 0x110b24u: goto label_110b24;
        case 0x110b28u: goto label_110b28;
        case 0x110b2cu: goto label_110b2c;
        case 0x110b30u: goto label_110b30;
        case 0x110b34u: goto label_110b34;
        case 0x110b38u: goto label_110b38;
        case 0x110b3cu: goto label_110b3c;
        case 0x110b40u: goto label_110b40;
        case 0x110b44u: goto label_110b44;
        case 0x110b48u: goto label_110b48;
        case 0x110b4cu: goto label_110b4c;
        case 0x110b50u: goto label_110b50;
        case 0x110b54u: goto label_110b54;
        case 0x110b58u: goto label_110b58;
        case 0x110b5cu: goto label_110b5c;
        case 0x110b60u: goto label_110b60;
        case 0x110b64u: goto label_110b64;
        case 0x110b68u: goto label_110b68;
        case 0x110b6cu: goto label_110b6c;
        case 0x110b70u: goto label_110b70;
        case 0x110b74u: goto label_110b74;
        case 0x110b78u: goto label_110b78;
        case 0x110b7cu: goto label_110b7c;
        case 0x110b80u: goto label_110b80;
        case 0x110b84u: goto label_110b84;
        case 0x110b88u: goto label_110b88;
        case 0x110b8cu: goto label_110b8c;
        case 0x110b90u: goto label_110b90;
        case 0x110b94u: goto label_110b94;
        case 0x110b98u: goto label_110b98;
        case 0x110b9cu: goto label_110b9c;
        case 0x110ba0u: goto label_110ba0;
        case 0x110ba4u: goto label_110ba4;
        case 0x110ba8u: goto label_110ba8;
        case 0x110bacu: goto label_110bac;
        case 0x110bb0u: goto label_110bb0;
        case 0x110bb4u: goto label_110bb4;
        case 0x110bb8u: goto label_110bb8;
        case 0x110bbcu: goto label_110bbc;
        case 0x110bc0u: goto label_110bc0;
        case 0x110bc4u: goto label_110bc4;
        case 0x110bc8u: goto label_110bc8;
        case 0x110bccu: goto label_110bcc;
        case 0x110bd0u: goto label_110bd0;
        case 0x110bd4u: goto label_110bd4;
        case 0x110bd8u: goto label_110bd8;
        case 0x110bdcu: goto label_110bdc;
        case 0x110be0u: goto label_110be0;
        case 0x110be4u: goto label_110be4;
        case 0x110be8u: goto label_110be8;
        case 0x110becu: goto label_110bec;
        case 0x110bf0u: goto label_110bf0;
        case 0x110bf4u: goto label_110bf4;
        case 0x110bf8u: goto label_110bf8;
        case 0x110bfcu: goto label_110bfc;
        case 0x110c00u: goto label_110c00;
        case 0x110c04u: goto label_110c04;
        case 0x110c08u: goto label_110c08;
        case 0x110c0cu: goto label_110c0c;
        case 0x110c10u: goto label_110c10;
        case 0x110c14u: goto label_110c14;
        case 0x110c18u: goto label_110c18;
        case 0x110c1cu: goto label_110c1c;
        case 0x110c20u: goto label_110c20;
        case 0x110c24u: goto label_110c24;
        case 0x110c28u: goto label_110c28;
        case 0x110c2cu: goto label_110c2c;
        case 0x110c30u: goto label_110c30;
        case 0x110c34u: goto label_110c34;
        case 0x110c38u: goto label_110c38;
        case 0x110c3cu: goto label_110c3c;
        case 0x110c40u: goto label_110c40;
        case 0x110c44u: goto label_110c44;
        case 0x110c48u: goto label_110c48;
        case 0x110c4cu: goto label_110c4c;
        case 0x110c50u: goto label_110c50;
        case 0x110c54u: goto label_110c54;
        case 0x110c58u: goto label_110c58;
        case 0x110c5cu: goto label_110c5c;
        case 0x110c60u: goto label_110c60;
        case 0x110c64u: goto label_110c64;
        case 0x110c68u: goto label_110c68;
        case 0x110c6cu: goto label_110c6c;
        case 0x110c70u: goto label_110c70;
        case 0x110c74u: goto label_110c74;
        case 0x110c78u: goto label_110c78;
        case 0x110c7cu: goto label_110c7c;
        case 0x110c80u: goto label_110c80;
        case 0x110c84u: goto label_110c84;
        case 0x110c88u: goto label_110c88;
        case 0x110c8cu: goto label_110c8c;
        case 0x110c90u: goto label_110c90;
        case 0x110c94u: goto label_110c94;
        case 0x110c98u: goto label_110c98;
        case 0x110c9cu: goto label_110c9c;
        case 0x110ca0u: goto label_110ca0;
        case 0x110ca4u: goto label_110ca4;
        case 0x110ca8u: goto label_110ca8;
        case 0x110cacu: goto label_110cac;
        case 0x110cb0u: goto label_110cb0;
        case 0x110cb4u: goto label_110cb4;
        case 0x110cb8u: goto label_110cb8;
        case 0x110cbcu: goto label_110cbc;
        case 0x110cc0u: goto label_110cc0;
        case 0x110cc4u: goto label_110cc4;
        case 0x110cc8u: goto label_110cc8;
        case 0x110cccu: goto label_110ccc;
        case 0x110cd0u: goto label_110cd0;
        case 0x110cd4u: goto label_110cd4;
        case 0x110cd8u: goto label_110cd8;
        case 0x110cdcu: goto label_110cdc;
        case 0x110ce0u: goto label_110ce0;
        case 0x110ce4u: goto label_110ce4;
        case 0x110ce8u: goto label_110ce8;
        case 0x110cecu: goto label_110cec;
        case 0x110cf0u: goto label_110cf0;
        case 0x110cf4u: goto label_110cf4;
        case 0x110cf8u: goto label_110cf8;
        case 0x110cfcu: goto label_110cfc;
        case 0x110d00u: goto label_110d00;
        case 0x110d04u: goto label_110d04;
        case 0x110d08u: goto label_110d08;
        case 0x110d0cu: goto label_110d0c;
        case 0x110d10u: goto label_110d10;
        case 0x110d14u: goto label_110d14;
        case 0x110d18u: goto label_110d18;
        case 0x110d1cu: goto label_110d1c;
        case 0x110d20u: goto label_110d20;
        case 0x110d24u: goto label_110d24;
        case 0x110d28u: goto label_110d28;
        case 0x110d2cu: goto label_110d2c;
        case 0x110d30u: goto label_110d30;
        case 0x110d34u: goto label_110d34;
        case 0x110d38u: goto label_110d38;
        case 0x110d3cu: goto label_110d3c;
        case 0x110d40u: goto label_110d40;
        case 0x110d44u: goto label_110d44;
        case 0x110d48u: goto label_110d48;
        case 0x110d4cu: goto label_110d4c;
        case 0x110d50u: goto label_110d50;
        case 0x110d54u: goto label_110d54;
        case 0x110d58u: goto label_110d58;
        case 0x110d5cu: goto label_110d5c;
        case 0x110d60u: goto label_110d60;
        case 0x110d64u: goto label_110d64;
        case 0x110d68u: goto label_110d68;
        case 0x110d6cu: goto label_110d6c;
        case 0x110d70u: goto label_110d70;
        case 0x110d74u: goto label_110d74;
        case 0x110d78u: goto label_110d78;
        case 0x110d7cu: goto label_110d7c;
        case 0x110d80u: goto label_110d80;
        case 0x110d84u: goto label_110d84;
        case 0x110d88u: goto label_110d88;
        case 0x110d8cu: goto label_110d8c;
        case 0x110d90u: goto label_110d90;
        case 0x110d94u: goto label_110d94;
        case 0x110d98u: goto label_110d98;
        case 0x110d9cu: goto label_110d9c;
        case 0x110da0u: goto label_110da0;
        case 0x110da4u: goto label_110da4;
        case 0x110da8u: goto label_110da8;
        case 0x110dacu: goto label_110dac;
        case 0x110db0u: goto label_110db0;
        case 0x110db4u: goto label_110db4;
        case 0x110db8u: goto label_110db8;
        case 0x110dbcu: goto label_110dbc;
        case 0x110dc0u: goto label_110dc0;
        case 0x110dc4u: goto label_110dc4;
        case 0x110dc8u: goto label_110dc8;
        case 0x110dccu: goto label_110dcc;
        case 0x110dd0u: goto label_110dd0;
        case 0x110dd4u: goto label_110dd4;
        case 0x110dd8u: goto label_110dd8;
        case 0x110ddcu: goto label_110ddc;
        case 0x110de0u: goto label_110de0;
        case 0x110de4u: goto label_110de4;
        case 0x110de8u: goto label_110de8;
        case 0x110decu: goto label_110dec;
        case 0x110df0u: goto label_110df0;
        case 0x110df4u: goto label_110df4;
        case 0x110df8u: goto label_110df8;
        case 0x110dfcu: goto label_110dfc;
        case 0x110e00u: goto label_110e00;
        case 0x110e04u: goto label_110e04;
        case 0x110e08u: goto label_110e08;
        case 0x110e0cu: goto label_110e0c;
        case 0x110e10u: goto label_110e10;
        case 0x110e14u: goto label_110e14;
        case 0x110e18u: goto label_110e18;
        case 0x110e1cu: goto label_110e1c;
        case 0x110e20u: goto label_110e20;
        case 0x110e24u: goto label_110e24;
        case 0x110e28u: goto label_110e28;
        case 0x110e2cu: goto label_110e2c;
        case 0x110e30u: goto label_110e30;
        case 0x110e34u: goto label_110e34;
        case 0x110e38u: goto label_110e38;
        case 0x110e3cu: goto label_110e3c;
        case 0x110e40u: goto label_110e40;
        case 0x110e44u: goto label_110e44;
        case 0x110e48u: goto label_110e48;
        case 0x110e4cu: goto label_110e4c;
        case 0x110e50u: goto label_110e50;
        case 0x110e54u: goto label_110e54;
        case 0x110e58u: goto label_110e58;
        case 0x110e5cu: goto label_110e5c;
        case 0x110e60u: goto label_110e60;
        case 0x110e64u: goto label_110e64;
        case 0x110e68u: goto label_110e68;
        case 0x110e6cu: goto label_110e6c;
        case 0x110e70u: goto label_110e70;
        case 0x110e74u: goto label_110e74;
        case 0x110e78u: goto label_110e78;
        case 0x110e7cu: goto label_110e7c;
        case 0x110e80u: goto label_110e80;
        case 0x110e84u: goto label_110e84;
        case 0x110e88u: goto label_110e88;
        case 0x110e8cu: goto label_110e8c;
        case 0x110e90u: goto label_110e90;
        case 0x110e94u: goto label_110e94;
        default: break;
    }

    ctx->pc = 0x110b20u;

label_110b20:
    // 0x110b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x110b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_110b24:
    // 0x110b24: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x110b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_110b28:
    // 0x110b28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x110b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_110b2c:
    // 0x110b2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x110b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_110b30:
    // 0x110b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_110b34:
    // 0x110b34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x110b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_110b38:
    // 0x110b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_110b3c:
    // 0x110b3c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x110b3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_110b40:
    // 0x110b40: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x110b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
label_110b44:
    // 0x110b44: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x110b44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_110b48:
    // 0x110b48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x110b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_110b4c:
    // 0x110b4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_110b50:
    if (ctx->pc == 0x110B50u) {
        ctx->pc = 0x110B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B4Cu;
        // 0x110b50: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B54u;
        goto label_110b54;
    }
    ctx->pc = 0x110B4Cu;
    {
        const bool branch_taken_0x110b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B4Cu;
        // 0x110b50: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b4c) {
            ctx->pc = 0x110B68u;
            goto label_110b68;
        }
    }
    ctx->pc = 0x110B54u;
label_110b54:
    // 0x110b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110b58:
    // 0x110b58: 0x5082004b  beql        $a0, $v0, . + 4 + (0x4B << 2)
label_110b5c:
    if (ctx->pc == 0x110B5Cu) {
        ctx->pc = 0x110B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B58u;
        // 0x110b5c: 0x8e020640  lw          $v0, 0x640($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B60u;
        goto label_110b60;
    }
    ctx->pc = 0x110B58u;
    {
        const bool branch_taken_0x110b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x110b58) {
            ctx->pc = 0x110B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110B58u;
            // 0x110b5c: 0x8e020640  lw          $v0, 0x640($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110C88u;
            goto label_110c88;
        }
    }
    ctx->pc = 0x110B60u;
label_110b60:
    // 0x110b60: 0x10000064  b           . + 4 + (0x64 << 2)
label_110b64:
    if (ctx->pc == 0x110B64u) {
        ctx->pc = 0x110B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B60u;
        // 0x110b64: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B68u;
        goto label_110b68;
    }
    ctx->pc = 0x110B60u;
    {
        const bool branch_taken_0x110b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B60u;
        // 0x110b64: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b60) {
            ctx->pc = 0x110CF4u;
            goto label_110cf4;
        }
    }
    ctx->pc = 0x110B68u;
label_110b68:
    // 0x110b68: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x110b68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
label_110b6c:
    // 0x110b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110b70:
    // 0x110b70: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x110b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
label_110b74:
    // 0x110b74: 0xc049150  jal         func_124540
label_110b78:
    if (ctx->pc == 0x110B78u) {
        ctx->pc = 0x110B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B74u;
        // 0x110b78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B7Cu;
        goto label_110b7c;
    }
    ctx->pc = 0x110B74u;
    SET_GPR_U32(ctx, 31, 0x110B7Cu);
    ctx->pc = 0x110B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B74u;
    // 0x110b78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x110B74u, 0x110B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B7Cu;
label_110b7c:
    // 0x110b7c: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x110b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_110b80:
    // 0x110b80: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_110b84:
    if (ctx->pc == 0x110B84u) {
        ctx->pc = 0x110B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B80u;
        // 0x110b84: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B88u;
        goto label_110b88;
    }
    ctx->pc = 0x110B80u;
    {
        const bool branch_taken_0x110b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110b80) {
            ctx->pc = 0x110B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110B80u;
            // 0x110b84: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110BA4u;
            goto label_110ba4;
        }
    }
    ctx->pc = 0x110B88u;
label_110b88:
    // 0x110b88: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x110b88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_110b8c:
    // 0x110b8c: 0x240203af  addiu       $v0, $zero, 0x3AF
    ctx->pc = 0x110b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
label_110b90:
    // 0x110b90: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_110b94:
    if (ctx->pc == 0x110B94u) {
        ctx->pc = 0x110B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B90u;
        // 0x110b94: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B98u;
        goto label_110b98;
    }
    ctx->pc = 0x110B90u;
    {
        const bool branch_taken_0x110b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x110b90) {
            ctx->pc = 0x110B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110B90u;
            // 0x110b94: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110BA4u;
            goto label_110ba4;
        }
    }
    ctx->pc = 0x110B98u;
label_110b98:
    // 0x110b98: 0xc049396  jal         func_124E58
label_110b9c:
    if (ctx->pc == 0x110B9Cu) {
        ctx->pc = 0x110B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B98u;
        // 0x110b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110BA0u;
        goto label_110ba0;
    }
    ctx->pc = 0x110B98u;
    SET_GPR_U32(ctx, 31, 0x110BA0u);
    ctx->pc = 0x110B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B98u;
    // 0x110b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x110B98u, 0x110BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BA0u;
label_110ba0:
    // 0x110ba0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x110ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_110ba4:
    // 0x110ba4: 0x8e080698  lw          $t0, 0x698($s0)
    ctx->pc = 0x110ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_110ba8:
    // 0x110ba8: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x110ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
label_110bac:
    // 0x110bac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110bb0:
    // 0x110bb0: 0x8c4403d0  lw          $a0, 0x3D0($v0)
    ctx->pc = 0x110bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
label_110bb4:
    // 0x110bb4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x110bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_110bb8:
    // 0x110bb8: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
label_110bbc:
    if (ctx->pc == 0x110BBCu) {
        ctx->pc = 0x110BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BB8u;
        // 0x110bbc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110BC0u;
        goto label_110bc0;
    }
    ctx->pc = 0x110BB8u;
    {
        const bool branch_taken_0x110bb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BB8u;
        // 0x110bbc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bb8) {
            ctx->pc = 0x110C50u;
            goto label_110c50;
        }
    }
    ctx->pc = 0x110BC0u;
label_110bc0:
    // 0x110bc0: 0x950202fe  lhu         $v0, 0x2FE($t0)
    ctx->pc = 0x110bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 766)));
label_110bc4:
    // 0x110bc4: 0x2444fc93  addiu       $a0, $v0, -0x36D
    ctx->pc = 0x110bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966419));
label_110bc8:
    // 0x110bc8: 0x2c830043  sltiu       $v1, $a0, 0x43
    ctx->pc = 0x110bc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
label_110bcc:
    // 0x110bcc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_110bd0:
    if (ctx->pc == 0x110BD0u) {
        ctx->pc = 0x110BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BCCu;
        // 0x110bd0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110BD4u;
        goto label_110bd4;
    }
    ctx->pc = 0x110BCCu;
    {
        const bool branch_taken_0x110bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BCCu;
        // 0x110bd0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bcc) {
            ctx->pc = 0x110BECu;
            goto label_110bec;
        }
    }
    ctx->pc = 0x110BD4u;
label_110bd4:
    // 0x110bd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x110bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_110bd8:
    // 0x110bd8: 0x2442c0a0  addiu       $v0, $v0, -0x3F60
    ctx->pc = 0x110bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951072));
label_110bdc:
    // 0x110bdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_110be0:
    // 0x110be0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x110be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_110be4:
    // 0x110be4: 0x800008  jr          $a0
label_110be8:
    if (ctx->pc == 0x110BE8u) {
        ctx->pc = 0x110BECu;
        goto label_110bec;
    }
    ctx->pc = 0x110BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110BECu: goto label_110bec;
            case 0x110BF8u: goto label_110bf8;
            case 0x110C04u: goto label_110c04;
            case 0x110C40u: goto label_110c40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110BE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110BECu;
label_110bec:
    // 0x110bec: 0x8ce203cc  lw          $v0, 0x3CC($a3)
    ctx->pc = 0x110becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 972)));
label_110bf0:
    // 0x110bf0: 0x10000015  b           . + 4 + (0x15 << 2)
label_110bf4:
    if (ctx->pc == 0x110BF4u) {
        ctx->pc = 0x110BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BF0u;
        // 0x110bf4: 0x8ce303d0  lw          $v1, 0x3D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 976)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110BF8u;
        goto label_110bf8;
    }
    ctx->pc = 0x110BF0u;
    {
        const bool branch_taken_0x110bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BF0u;
        // 0x110bf4: 0x8ce303d0  lw          $v1, 0x3D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bf0) {
            ctx->pc = 0x110C48u;
            goto label_110c48;
        }
    }
    ctx->pc = 0x110BF8u;
label_110bf8:
    // 0x110bf8: 0x8ce2091c  lw          $v0, 0x91C($a3)
    ctx->pc = 0x110bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2332)));
label_110bfc:
    // 0x110bfc: 0x10000012  b           . + 4 + (0x12 << 2)
label_110c00:
    if (ctx->pc == 0x110C00u) {
        ctx->pc = 0x110C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BFCu;
        // 0x110c00: 0x8ce30920  lw          $v1, 0x920($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110C04u;
        goto label_110c04;
    }
    ctx->pc = 0x110BFCu;
    {
        const bool branch_taken_0x110bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BFCu;
        // 0x110c00: 0x8ce30920  lw          $v1, 0x920($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bfc) {
            ctx->pc = 0x110C48u;
            goto label_110c48;
        }
    }
    ctx->pc = 0x110C04u;
label_110c04:
    // 0x110c04: 0x8ce203cc  lw          $v0, 0x3CC($a3)
    ctx->pc = 0x110c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 972)));
label_110c08:
    // 0x110c08: 0x8ce303d0  lw          $v1, 0x3D0($a3)
    ctx->pc = 0x110c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 976)));
label_110c0c:
    // 0x110c0c: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x110c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_110c10:
    // 0x110c10: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110c14:
    // 0x110c14: 0xc074304  jal         func_1D0C10
label_110c18:
    if (ctx->pc == 0x110C18u) {
        ctx->pc = 0x110C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C14u;
        // 0x110c18: 0x678821  addu        $s1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110C1Cu;
        goto label_110c1c;
    }
    ctx->pc = 0x110C14u;
    SET_GPR_U32(ctx, 31, 0x110C1Cu);
    ctx->pc = 0x110C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C14u;
    // 0x110c18: 0x678821  addu        $s1, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C10u, 0x110C14u, 0x110C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C1Cu;
label_110c1c:
    // 0x110c1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_110c20:
    if (ctx->pc == 0x110C20u) {
        ctx->pc = 0x110C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C1Cu;
        // 0x110c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110C24u;
        goto label_110c24;
    }
    ctx->pc = 0x110C1Cu;
    {
        const bool branch_taken_0x110c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C1Cu;
        // 0x110c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c1c) {
            ctx->pc = 0x110C50u;
            goto label_110c50;
        }
    }
    ctx->pc = 0x110C24u;
label_110c24:
    // 0x110c24: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x110c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_110c28:
    // 0x110c28: 0x8c430934  lw          $v1, 0x934($v0)
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2356)));
label_110c2c:
    // 0x110c2c: 0x8c440938  lw          $a0, 0x938($v0)
    ctx->pc = 0x110c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_110c30:
    // 0x110c30: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x110c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_110c34:
    // 0x110c34: 0xa20502f7  sb          $a1, 0x2F7($s0)
    ctx->pc = 0x110c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 5));
label_110c38:
    // 0x110c38: 0x10000005  b           . + 4 + (0x5 << 2)
label_110c3c:
    if (ctx->pc == 0x110C3Cu) {
        ctx->pc = 0x110C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C38u;
        // 0x110c3c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110C40u;
        goto label_110c40;
    }
    ctx->pc = 0x110C38u;
    {
        const bool branch_taken_0x110c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C38u;
        // 0x110c3c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c38) {
            ctx->pc = 0x110C50u;
            goto label_110c50;
        }
    }
    ctx->pc = 0x110C40u;
label_110c40:
    // 0x110c40: 0x8ce208c0  lw          $v0, 0x8C0($a3)
    ctx->pc = 0x110c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2240)));
label_110c44:
    // 0x110c44: 0x8ce308c4  lw          $v1, 0x8C4($a3)
    ctx->pc = 0x110c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2244)));
label_110c48:
    // 0x110c48: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x110c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_110c4c:
    // 0x110c4c: 0x678821  addu        $s1, $v1, $a3
    ctx->pc = 0x110c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_110c50:
    // 0x110c50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x110c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_110c54:
    // 0x110c54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_110c58:
    // 0x110c58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x110c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110c5c:
    // 0x110c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110c60:
    // 0x110c60: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_110c64:
    // 0x110c64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110c68:
    // 0x110c68: 0xc0aa15e  jal         func_2A8578
label_110c6c:
    if (ctx->pc == 0x110C6Cu) {
        ctx->pc = 0x110C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C68u;
        // 0x110c6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110C70u;
        goto label_110c70;
    }
    ctx->pc = 0x110C68u;
    SET_GPR_U32(ctx, 31, 0x110C70u);
    ctx->pc = 0x110C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C68u;
    // 0x110c6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x110C68u, 0x110C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C70u;
label_110c70:
    // 0x110c70: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x110c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_110c74:
    // 0x110c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110c78:
    // 0x110c78: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x110c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
label_110c7c:
    // 0x110c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_110c80:
    // 0x110c80: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x110c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_110c84:
    // 0x110c84: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x110c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_110c88:
    // 0x110c88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_110c8c:
    if (ctx->pc == 0x110C8Cu) {
        ctx->pc = 0x110C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C88u;
        // 0x110c8c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110C90u;
        goto label_110c90;
    }
    ctx->pc = 0x110C88u;
    {
        const bool branch_taken_0x110c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C88u;
        // 0x110c8c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c88) {
            ctx->pc = 0x110C94u;
            goto label_110c94;
        }
    }
    ctx->pc = 0x110C90u;
label_110c90:
    // 0x110c90: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x110c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_110c94:
    // 0x110c94: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x110c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_110c98:
    // 0x110c98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x110c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_110c9c:
    // 0x110c9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x110c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_110ca0:
    // 0x110ca0: 0xc04939a  jal         func_124E68
label_110ca4:
    if (ctx->pc == 0x110CA4u) {
        ctx->pc = 0x110CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA0u;
        // 0x110ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CA8u;
        goto label_110ca8;
    }
    ctx->pc = 0x110CA0u;
    SET_GPR_U32(ctx, 31, 0x110CA8u);
    ctx->pc = 0x110CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CA0u;
    // 0x110ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x110CA0u, 0x110CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CA8u;
label_110ca8:
    // 0x110ca8: 0xc055f06  jal         func_157C18
label_110cac:
    if (ctx->pc == 0x110CACu) {
        ctx->pc = 0x110CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA8u;
        // 0x110cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CB0u;
        goto label_110cb0;
    }
    ctx->pc = 0x110CA8u;
    SET_GPR_U32(ctx, 31, 0x110CB0u);
    ctx->pc = 0x110CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CA8u;
    // 0x110cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x110CA8u, 0x110CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CB0u;
label_110cb0:
    // 0x110cb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_110cb4:
    if (ctx->pc == 0x110CB4u) {
        ctx->pc = 0x110CB8u;
        goto label_110cb8;
    }
    ctx->pc = 0x110CB0u;
    {
        const bool branch_taken_0x110cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110cb0) {
            ctx->pc = 0x110CD0u;
            goto label_110cd0;
        }
    }
    ctx->pc = 0x110CB8u;
label_110cb8:
    // 0x110cb8: 0xc049396  jal         func_124E58
label_110cbc:
    if (ctx->pc == 0x110CBCu) {
        ctx->pc = 0x110CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CB8u;
        // 0x110cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CC0u;
        goto label_110cc0;
    }
    ctx->pc = 0x110CB8u;
    SET_GPR_U32(ctx, 31, 0x110CC0u);
    ctx->pc = 0x110CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CB8u;
    // 0x110cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x110CB8u, 0x110CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CC0u;
label_110cc0:
    // 0x110cc0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x110cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_110cc4:
    // 0x110cc4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x110cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_110cc8:
    // 0x110cc8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x110cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_110ccc:
    // 0x110ccc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x110cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_110cd0:
    // 0x110cd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_110cd4:
    // 0x110cd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x110cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_110cd8:
    // 0x110cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110cdc:
    // 0x110cdc: 0xc053e7c  jal         func_14F9F0
label_110ce0:
    if (ctx->pc == 0x110CE0u) {
        ctx->pc = 0x110CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CDCu;
        // 0x110ce0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CE4u;
        goto label_110ce4;
    }
    ctx->pc = 0x110CDCu;
    SET_GPR_U32(ctx, 31, 0x110CE4u);
    ctx->pc = 0x110CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CDCu;
    // 0x110ce0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x110CDCu, 0x110CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CE4u;
label_110ce4:
    // 0x110ce4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x110ce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_110ce8:
    // 0x110ce8: 0xc053e4a  jal         func_14F928
label_110cec:
    if (ctx->pc == 0x110CECu) {
        ctx->pc = 0x110CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CE8u;
        // 0x110cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CF0u;
        goto label_110cf0;
    }
    ctx->pc = 0x110CE8u;
    SET_GPR_U32(ctx, 31, 0x110CF0u);
    ctx->pc = 0x110CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CE8u;
    // 0x110cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x110CE8u, 0x110CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CF0u;
label_110cf0:
    // 0x110cf0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x110cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_110cf4:
    // 0x110cf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x110cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_110cf8:
    // 0x110cf8: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
label_110cfc:
    if (ctx->pc == 0x110CFCu) {
        ctx->pc = 0x110CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CF8u;
        // 0x110cfc: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D00u;
        goto label_110d00;
    }
    ctx->pc = 0x110CF8u;
    {
        const bool branch_taken_0x110cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110cf8) {
            ctx->pc = 0x110CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110CF8u;
            // 0x110cfc: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110E4Cu;
            goto label_110e4c;
        }
    }
    ctx->pc = 0x110D00u;
label_110d00:
    // 0x110d00: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x110d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_110d04:
    // 0x110d04: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_110d08:
    if (ctx->pc == 0x110D08u) {
        ctx->pc = 0x110D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D04u;
        // 0x110d08: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D0Cu;
        goto label_110d0c;
    }
    ctx->pc = 0x110D04u;
    {
        const bool branch_taken_0x110d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110d04) {
            ctx->pc = 0x110D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D04u;
            // 0x110d08: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110E4Cu;
            goto label_110e4c;
        }
    }
    ctx->pc = 0x110D0Cu;
label_110d0c:
    // 0x110d0c: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x110d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
label_110d10:
    // 0x110d10: 0xc074304  jal         func_1D0C10
label_110d14:
    if (ctx->pc == 0x110D14u) {
        ctx->pc = 0x110D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D10u;
        // 0x110d14: 0x8e040698  lw          $a0, 0x698($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D18u;
        goto label_110d18;
    }
    ctx->pc = 0x110D10u;
    SET_GPR_U32(ctx, 31, 0x110D18u);
    ctx->pc = 0x110D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D10u;
    // 0x110d14: 0x8e040698  lw          $a0, 0x698($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C10u, 0x110D10u, 0x110D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D18u;
label_110d18:
    // 0x110d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110d1c:
    // 0x110d1c: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
label_110d20:
    if (ctx->pc == 0x110D20u) {
        ctx->pc = 0x110D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D1Cu;
        // 0x110d20: 0x24040390  addiu       $a0, $zero, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D24u;
        goto label_110d24;
    }
    ctx->pc = 0x110D1Cu;
    {
        const bool branch_taken_0x110d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D1Cu;
        // 0x110d20: 0x24040390  addiu       $a0, $zero, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d1c) {
            ctx->pc = 0x110E40u;
            goto label_110e40;
        }
    }
    ctx->pc = 0x110D24u;
label_110d24:
    // 0x110d24: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x110d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_110d28:
    // 0x110d28: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x110d28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_110d2c:
    // 0x110d2c: 0x14640036  bne         $v1, $a0, . + 4 + (0x36 << 2)
label_110d30:
    if (ctx->pc == 0x110D30u) {
        ctx->pc = 0x110D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D2Cu;
        // 0x110d30: 0x2404037c  addiu       $a0, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D34u;
        goto label_110d34;
    }
    ctx->pc = 0x110D2Cu;
    {
        const bool branch_taken_0x110d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x110D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D2Cu;
        // 0x110d30: 0x2404037c  addiu       $a0, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d2c) {
            ctx->pc = 0x110E08u;
            goto label_110e08;
        }
    }
    ctx->pc = 0x110D34u;
label_110d34:
    // 0x110d34: 0xc0c3ea6  jal         func_30FA98
label_110d38:
    if (ctx->pc == 0x110D38u) {
        ctx->pc = 0x110D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D34u;
        // 0x110d38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D3Cu;
        goto label_110d3c;
    }
    ctx->pc = 0x110D34u;
    SET_GPR_U32(ctx, 31, 0x110D3Cu);
    ctx->pc = 0x110D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D34u;
    // 0x110d38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x110D34u, 0x110D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D3Cu;
label_110d3c:
    // 0x110d3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110d40:
    // 0x110d40: 0x52200042  beql        $s1, $zero, . + 4 + (0x42 << 2)
label_110d44:
    if (ctx->pc == 0x110D44u) {
        ctx->pc = 0x110D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D40u;
        // 0x110d44: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D48u;
        goto label_110d48;
    }
    ctx->pc = 0x110D40u;
    {
        const bool branch_taken_0x110d40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x110d40) {
            ctx->pc = 0x110D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D40u;
            // 0x110d44: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110E4Cu;
            goto label_110e4c;
        }
    }
    ctx->pc = 0x110D48u;
label_110d48:
    // 0x110d48: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x110d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_110d4c:
    // 0x110d4c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x110d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_110d50:
    // 0x110d50: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x110d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_110d54:
    // 0x110d54: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_110d58:
    // 0x110d58: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x110d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_110d5c:
    // 0x110d5c: 0x40f809  jalr        $v0
label_110d60:
    if (ctx->pc == 0x110D60u) {
        ctx->pc = 0x110D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D5Cu;
        // 0x110d60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D64u;
        goto label_110d64;
    }
    ctx->pc = 0x110D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x110D64u);
        ctx->pc = 0x110D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D5Cu;
        // 0x110d60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D5Cu, 0x110D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110D64u;
label_110d64:
    // 0x110d64: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x110d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_110d68:
    // 0x110d68: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x110d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_110d6c:
    // 0x110d6c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_110d70:
    if (ctx->pc == 0x110D70u) {
        ctx->pc = 0x110D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D6Cu;
        // 0x110d70: 0x26230490  addiu       $v1, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D74u;
        goto label_110d74;
    }
    ctx->pc = 0x110D6Cu;
    {
        const bool branch_taken_0x110d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x110d6c) {
            ctx->pc = 0x110D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D6Cu;
            // 0x110d70: 0x26230490  addiu       $v1, $s1, 0x490 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110D94u;
            goto label_110d94;
        }
    }
    ctx->pc = 0x110D74u;
label_110d74:
    // 0x110d74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x110d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_110d78:
    // 0x110d78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x110d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_110d7c:
    // 0x110d7c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x110d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_110d80:
    // 0x110d80: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x110d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_110d84:
    // 0x110d84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x110d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_110d88:
    // 0x110d88: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x110d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_110d8c:
    // 0x110d8c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x110d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_110d90:
    // 0x110d90: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x110d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_110d94:
    // 0x110d94: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_110d98:
    if (ctx->pc == 0x110D98u) {
        ctx->pc = 0x110D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D94u;
        // 0x110d98: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110D9Cu;
        goto label_110d9c;
    }
    ctx->pc = 0x110D94u;
    {
        const bool branch_taken_0x110d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x110d94) {
            ctx->pc = 0x110D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110D94u;
            // 0x110d98: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110DB8u;
            goto label_110db8;
        }
    }
    ctx->pc = 0x110D9Cu;
label_110d9c:
    // 0x110d9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x110d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_110da0:
    // 0x110da0: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x110da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_110da4:
    // 0x110da4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x110da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_110da8:
    // 0x110da8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x110da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_110dac:
    // 0x110dac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x110dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_110db0:
    // 0x110db0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x110db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_110db4:
    // 0x110db4: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x110db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_110db8:
    // 0x110db8: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x110db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_110dbc:
    // 0x110dbc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x110dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_110dc0:
    // 0x110dc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x110dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_110dc4:
    // 0x110dc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x110dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_110dc8:
    // 0x110dc8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x110dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_110dcc:
    // 0x110dcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_110dd0:
    // 0x110dd0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x110dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_110dd4:
    // 0x110dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110dd8:
    // 0x110dd8: 0x8e050698  lw          $a1, 0x698($s0)
    ctx->pc = 0x110dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_110ddc:
    // 0x110ddc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x110ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_110de0:
    // 0x110de0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x110de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_110de4:
    // 0x110de4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x110de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_110de8:
    // 0x110de8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x110de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_110dec:
    // 0x110dec: 0xc073c58  jal         func_1CF160
label_110df0:
    if (ctx->pc == 0x110DF0u) {
        ctx->pc = 0x110DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DECu;
        // 0x110df0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110DF4u;
        goto label_110df4;
    }
    ctx->pc = 0x110DECu;
    SET_GPR_U32(ctx, 31, 0x110DF4u);
    ctx->pc = 0x110DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DECu;
    // 0x110df0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x110DECu, 0x110DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DF4u;
label_110df4:
    // 0x110df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x110df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110df8:
    // 0x110df8: 0xc04abfa  jal         func_12AFE8
label_110dfc:
    if (ctx->pc == 0x110DFCu) {
        ctx->pc = 0x110DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DF8u;
        // 0x110dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E00u;
        goto label_110e00;
    }
    ctx->pc = 0x110DF8u;
    SET_GPR_U32(ctx, 31, 0x110E00u);
    ctx->pc = 0x110DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DF8u;
    // 0x110dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AFE8u, 0x110DF8u, 0x110E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E00u;
label_110e00:
    // 0x110e00: 0x10000005  b           . + 4 + (0x5 << 2)
label_110e04:
    if (ctx->pc == 0x110E04u) {
        ctx->pc = 0x110E08u;
        goto label_110e08;
    }
    ctx->pc = 0x110E00u;
    {
        const bool branch_taken_0x110e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110e00) {
            ctx->pc = 0x110E18u;
            goto label_110e18;
        }
    }
    ctx->pc = 0x110E08u;
label_110e08:
    // 0x110e08: 0xc04abfa  jal         func_12AFE8
label_110e0c:
    if (ctx->pc == 0x110E0Cu) {
        ctx->pc = 0x110E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E08u;
        // 0x110e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E10u;
        goto label_110e10;
    }
    ctx->pc = 0x110E08u;
    SET_GPR_U32(ctx, 31, 0x110E10u);
    ctx->pc = 0x110E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E08u;
    // 0x110e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AFE8u, 0x110E08u, 0x110E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E10u;
label_110e10:
    // 0x110e10: 0xc074306  jal         func_1D0C18
label_110e14:
    if (ctx->pc == 0x110E14u) {
        ctx->pc = 0x110E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E10u;
        // 0x110e14: 0x8e040698  lw          $a0, 0x698($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E18u;
        goto label_110e18;
    }
    ctx->pc = 0x110E10u;
    SET_GPR_U32(ctx, 31, 0x110E18u);
    ctx->pc = 0x110E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E10u;
    // 0x110e14: 0x8e040698  lw          $a0, 0x698($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C18u, 0x110E10u, 0x110E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E18u;
label_110e18:
    // 0x110e18: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x110e18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_110e1c:
    // 0x110e1c: 0x8e060698  lw          $a2, 0x698($s0)
    ctx->pc = 0x110e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_110e20:
    // 0x110e20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110e24:
    // 0x110e24: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x110e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_110e28:
    // 0x110e28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110e2c:
    // 0x110e2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x110e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_110e30:
    // 0x110e30: 0xc0c194a  jal         func_306528
label_110e34:
    if (ctx->pc == 0x110E34u) {
        ctx->pc = 0x110E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E30u;
        // 0x110e34: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E38u;
        goto label_110e38;
    }
    ctx->pc = 0x110E30u;
    SET_GPR_U32(ctx, 31, 0x110E38u);
    ctx->pc = 0x110E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E30u;
    // 0x110e34: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x110E30u, 0x110E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E38u;
label_110e38:
    // 0x110e38: 0x10000004  b           . + 4 + (0x4 << 2)
label_110e3c:
    if (ctx->pc == 0x110E3Cu) {
        ctx->pc = 0x110E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E38u;
        // 0x110e3c: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E40u;
        goto label_110e40;
    }
    ctx->pc = 0x110E38u;
    {
        const bool branch_taken_0x110e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E38u;
        // 0x110e3c: 0x920202f7  lbu         $v0, 0x2F7($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e38) {
            ctx->pc = 0x110E4Cu;
            goto label_110e4c;
        }
    }
    ctx->pc = 0x110E40u;
label_110e40:
    // 0x110e40: 0xc04ab26  jal         func_12AC98
label_110e44:
    if (ctx->pc == 0x110E44u) {
        ctx->pc = 0x110E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E40u;
        // 0x110e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E48u;
        goto label_110e48;
    }
    ctx->pc = 0x110E40u;
    SET_GPR_U32(ctx, 31, 0x110E48u);
    ctx->pc = 0x110E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E40u;
    // 0x110e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC98u, 0x110E40u, 0x110E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E48u;
label_110e48:
    // 0x110e48: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x110e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_110e4c:
    // 0x110e4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_110e50:
    if (ctx->pc == 0x110E50u) {
        ctx->pc = 0x110E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E4Cu;
        // 0x110e50: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E54u;
        goto label_110e54;
    }
    ctx->pc = 0x110E4Cu;
    {
        const bool branch_taken_0x110e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E4Cu;
        // 0x110e50: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e4c) {
            ctx->pc = 0x110E60u;
            goto label_110e60;
        }
    }
    ctx->pc = 0x110E54u;
label_110e54:
    // 0x110e54: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x110e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
label_110e58:
    // 0x110e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x110e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_110e5c:
    // 0x110e5c: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x110e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
label_110e60:
    // 0x110e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110e64:
    // 0x110e64: 0xc048e4e  jal         func_123938
label_110e68:
    if (ctx->pc == 0x110E68u) {
        ctx->pc = 0x110E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E64u;
        // 0x110e68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E6Cu;
        goto label_110e6c;
    }
    ctx->pc = 0x110E64u;
    SET_GPR_U32(ctx, 31, 0x110E6Cu);
    ctx->pc = 0x110E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E64u;
    // 0x110e68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x110E64u, 0x110E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E6Cu;
label_110e6c:
    // 0x110e6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_110e70:
    if (ctx->pc == 0x110E70u) {
        ctx->pc = 0x110E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E6Cu;
        // 0x110e70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E74u;
        goto label_110e74;
    }
    ctx->pc = 0x110E6Cu;
    {
        const bool branch_taken_0x110e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110e6c) {
            ctx->pc = 0x110E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110E6Cu;
            // 0x110e70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110E80u;
            goto label_110e80;
        }
    }
    ctx->pc = 0x110E74u;
label_110e74:
    // 0x110e74: 0xc049396  jal         func_124E58
label_110e78:
    if (ctx->pc == 0x110E78u) {
        ctx->pc = 0x110E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E74u;
        // 0x110e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E7Cu;
        goto label_110e7c;
    }
    ctx->pc = 0x110E74u;
    SET_GPR_U32(ctx, 31, 0x110E7Cu);
    ctx->pc = 0x110E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E74u;
    // 0x110e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x110E74u, 0x110E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E7Cu;
label_110e7c:
    // 0x110e7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x110e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_110e80:
    // 0x110e80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x110e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_110e84:
    // 0x110e84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x110e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_110e88:
    // 0x110e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_110e8c:
    // 0x110e8c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x110e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_110e90:
    // 0x110e90: 0x3e00008  jr          $ra
label_110e94:
    if (ctx->pc == 0x110E94u) {
        ctx->pc = 0x110E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E90u;
        // 0x110e94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110E98u;
        goto label_fallthrough_0x110e90;
    }
    ctx->pc = 0x110E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E90u;
        // 0x110e94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x110e90:
    ctx->pc = 0x110E98u;
}
