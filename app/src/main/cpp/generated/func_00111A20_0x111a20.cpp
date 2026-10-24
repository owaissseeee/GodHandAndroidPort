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

// Function: func_00111A20
// Address: 0x111a20 - 0x111dd8
void func_00111A20_0x111a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00111A20_0x111a20");
#endif

    switch (ctx->pc) {
        case 0x111a20u: goto label_111a20;
        case 0x111a24u: goto label_111a24;
        case 0x111a28u: goto label_111a28;
        case 0x111a2cu: goto label_111a2c;
        case 0x111a30u: goto label_111a30;
        case 0x111a34u: goto label_111a34;
        case 0x111a38u: goto label_111a38;
        case 0x111a3cu: goto label_111a3c;
        case 0x111a40u: goto label_111a40;
        case 0x111a44u: goto label_111a44;
        case 0x111a48u: goto label_111a48;
        case 0x111a4cu: goto label_111a4c;
        case 0x111a50u: goto label_111a50;
        case 0x111a54u: goto label_111a54;
        case 0x111a58u: goto label_111a58;
        case 0x111a5cu: goto label_111a5c;
        case 0x111a60u: goto label_111a60;
        case 0x111a64u: goto label_111a64;
        case 0x111a68u: goto label_111a68;
        case 0x111a6cu: goto label_111a6c;
        case 0x111a70u: goto label_111a70;
        case 0x111a74u: goto label_111a74;
        case 0x111a78u: goto label_111a78;
        case 0x111a7cu: goto label_111a7c;
        case 0x111a80u: goto label_111a80;
        case 0x111a84u: goto label_111a84;
        case 0x111a88u: goto label_111a88;
        case 0x111a8cu: goto label_111a8c;
        case 0x111a90u: goto label_111a90;
        case 0x111a94u: goto label_111a94;
        case 0x111a98u: goto label_111a98;
        case 0x111a9cu: goto label_111a9c;
        case 0x111aa0u: goto label_111aa0;
        case 0x111aa4u: goto label_111aa4;
        case 0x111aa8u: goto label_111aa8;
        case 0x111aacu: goto label_111aac;
        case 0x111ab0u: goto label_111ab0;
        case 0x111ab4u: goto label_111ab4;
        case 0x111ab8u: goto label_111ab8;
        case 0x111abcu: goto label_111abc;
        case 0x111ac0u: goto label_111ac0;
        case 0x111ac4u: goto label_111ac4;
        case 0x111ac8u: goto label_111ac8;
        case 0x111accu: goto label_111acc;
        case 0x111ad0u: goto label_111ad0;
        case 0x111ad4u: goto label_111ad4;
        case 0x111ad8u: goto label_111ad8;
        case 0x111adcu: goto label_111adc;
        case 0x111ae0u: goto label_111ae0;
        case 0x111ae4u: goto label_111ae4;
        case 0x111ae8u: goto label_111ae8;
        case 0x111aecu: goto label_111aec;
        case 0x111af0u: goto label_111af0;
        case 0x111af4u: goto label_111af4;
        case 0x111af8u: goto label_111af8;
        case 0x111afcu: goto label_111afc;
        case 0x111b00u: goto label_111b00;
        case 0x111b04u: goto label_111b04;
        case 0x111b08u: goto label_111b08;
        case 0x111b0cu: goto label_111b0c;
        case 0x111b10u: goto label_111b10;
        case 0x111b14u: goto label_111b14;
        case 0x111b18u: goto label_111b18;
        case 0x111b1cu: goto label_111b1c;
        case 0x111b20u: goto label_111b20;
        case 0x111b24u: goto label_111b24;
        case 0x111b28u: goto label_111b28;
        case 0x111b2cu: goto label_111b2c;
        case 0x111b30u: goto label_111b30;
        case 0x111b34u: goto label_111b34;
        case 0x111b38u: goto label_111b38;
        case 0x111b3cu: goto label_111b3c;
        case 0x111b40u: goto label_111b40;
        case 0x111b44u: goto label_111b44;
        case 0x111b48u: goto label_111b48;
        case 0x111b4cu: goto label_111b4c;
        case 0x111b50u: goto label_111b50;
        case 0x111b54u: goto label_111b54;
        case 0x111b58u: goto label_111b58;
        case 0x111b5cu: goto label_111b5c;
        case 0x111b60u: goto label_111b60;
        case 0x111b64u: goto label_111b64;
        case 0x111b68u: goto label_111b68;
        case 0x111b6cu: goto label_111b6c;
        case 0x111b70u: goto label_111b70;
        case 0x111b74u: goto label_111b74;
        case 0x111b78u: goto label_111b78;
        case 0x111b7cu: goto label_111b7c;
        case 0x111b80u: goto label_111b80;
        case 0x111b84u: goto label_111b84;
        case 0x111b88u: goto label_111b88;
        case 0x111b8cu: goto label_111b8c;
        case 0x111b90u: goto label_111b90;
        case 0x111b94u: goto label_111b94;
        case 0x111b98u: goto label_111b98;
        case 0x111b9cu: goto label_111b9c;
        case 0x111ba0u: goto label_111ba0;
        case 0x111ba4u: goto label_111ba4;
        case 0x111ba8u: goto label_111ba8;
        case 0x111bacu: goto label_111bac;
        case 0x111bb0u: goto label_111bb0;
        case 0x111bb4u: goto label_111bb4;
        case 0x111bb8u: goto label_111bb8;
        case 0x111bbcu: goto label_111bbc;
        case 0x111bc0u: goto label_111bc0;
        case 0x111bc4u: goto label_111bc4;
        case 0x111bc8u: goto label_111bc8;
        case 0x111bccu: goto label_111bcc;
        case 0x111bd0u: goto label_111bd0;
        case 0x111bd4u: goto label_111bd4;
        case 0x111bd8u: goto label_111bd8;
        case 0x111bdcu: goto label_111bdc;
        case 0x111be0u: goto label_111be0;
        case 0x111be4u: goto label_111be4;
        case 0x111be8u: goto label_111be8;
        case 0x111becu: goto label_111bec;
        case 0x111bf0u: goto label_111bf0;
        case 0x111bf4u: goto label_111bf4;
        case 0x111bf8u: goto label_111bf8;
        case 0x111bfcu: goto label_111bfc;
        case 0x111c00u: goto label_111c00;
        case 0x111c04u: goto label_111c04;
        case 0x111c08u: goto label_111c08;
        case 0x111c0cu: goto label_111c0c;
        case 0x111c10u: goto label_111c10;
        case 0x111c14u: goto label_111c14;
        case 0x111c18u: goto label_111c18;
        case 0x111c1cu: goto label_111c1c;
        case 0x111c20u: goto label_111c20;
        case 0x111c24u: goto label_111c24;
        case 0x111c28u: goto label_111c28;
        case 0x111c2cu: goto label_111c2c;
        case 0x111c30u: goto label_111c30;
        case 0x111c34u: goto label_111c34;
        case 0x111c38u: goto label_111c38;
        case 0x111c3cu: goto label_111c3c;
        case 0x111c40u: goto label_111c40;
        case 0x111c44u: goto label_111c44;
        case 0x111c48u: goto label_111c48;
        case 0x111c4cu: goto label_111c4c;
        case 0x111c50u: goto label_111c50;
        case 0x111c54u: goto label_111c54;
        case 0x111c58u: goto label_111c58;
        case 0x111c5cu: goto label_111c5c;
        case 0x111c60u: goto label_111c60;
        case 0x111c64u: goto label_111c64;
        case 0x111c68u: goto label_111c68;
        case 0x111c6cu: goto label_111c6c;
        case 0x111c70u: goto label_111c70;
        case 0x111c74u: goto label_111c74;
        case 0x111c78u: goto label_111c78;
        case 0x111c7cu: goto label_111c7c;
        case 0x111c80u: goto label_111c80;
        case 0x111c84u: goto label_111c84;
        case 0x111c88u: goto label_111c88;
        case 0x111c8cu: goto label_111c8c;
        case 0x111c90u: goto label_111c90;
        case 0x111c94u: goto label_111c94;
        case 0x111c98u: goto label_111c98;
        case 0x111c9cu: goto label_111c9c;
        case 0x111ca0u: goto label_111ca0;
        case 0x111ca4u: goto label_111ca4;
        case 0x111ca8u: goto label_111ca8;
        case 0x111cacu: goto label_111cac;
        case 0x111cb0u: goto label_111cb0;
        case 0x111cb4u: goto label_111cb4;
        case 0x111cb8u: goto label_111cb8;
        case 0x111cbcu: goto label_111cbc;
        case 0x111cc0u: goto label_111cc0;
        case 0x111cc4u: goto label_111cc4;
        case 0x111cc8u: goto label_111cc8;
        case 0x111cccu: goto label_111ccc;
        case 0x111cd0u: goto label_111cd0;
        case 0x111cd4u: goto label_111cd4;
        case 0x111cd8u: goto label_111cd8;
        case 0x111cdcu: goto label_111cdc;
        case 0x111ce0u: goto label_111ce0;
        case 0x111ce4u: goto label_111ce4;
        case 0x111ce8u: goto label_111ce8;
        case 0x111cecu: goto label_111cec;
        case 0x111cf0u: goto label_111cf0;
        case 0x111cf4u: goto label_111cf4;
        case 0x111cf8u: goto label_111cf8;
        case 0x111cfcu: goto label_111cfc;
        case 0x111d00u: goto label_111d00;
        case 0x111d04u: goto label_111d04;
        case 0x111d08u: goto label_111d08;
        case 0x111d0cu: goto label_111d0c;
        case 0x111d10u: goto label_111d10;
        case 0x111d14u: goto label_111d14;
        case 0x111d18u: goto label_111d18;
        case 0x111d1cu: goto label_111d1c;
        case 0x111d20u: goto label_111d20;
        case 0x111d24u: goto label_111d24;
        case 0x111d28u: goto label_111d28;
        case 0x111d2cu: goto label_111d2c;
        case 0x111d30u: goto label_111d30;
        case 0x111d34u: goto label_111d34;
        case 0x111d38u: goto label_111d38;
        case 0x111d3cu: goto label_111d3c;
        case 0x111d40u: goto label_111d40;
        case 0x111d44u: goto label_111d44;
        case 0x111d48u: goto label_111d48;
        case 0x111d4cu: goto label_111d4c;
        case 0x111d50u: goto label_111d50;
        case 0x111d54u: goto label_111d54;
        case 0x111d58u: goto label_111d58;
        case 0x111d5cu: goto label_111d5c;
        case 0x111d60u: goto label_111d60;
        case 0x111d64u: goto label_111d64;
        case 0x111d68u: goto label_111d68;
        case 0x111d6cu: goto label_111d6c;
        case 0x111d70u: goto label_111d70;
        case 0x111d74u: goto label_111d74;
        case 0x111d78u: goto label_111d78;
        case 0x111d7cu: goto label_111d7c;
        case 0x111d80u: goto label_111d80;
        case 0x111d84u: goto label_111d84;
        case 0x111d88u: goto label_111d88;
        case 0x111d8cu: goto label_111d8c;
        case 0x111d90u: goto label_111d90;
        case 0x111d94u: goto label_111d94;
        case 0x111d98u: goto label_111d98;
        case 0x111d9cu: goto label_111d9c;
        case 0x111da0u: goto label_111da0;
        case 0x111da4u: goto label_111da4;
        case 0x111da8u: goto label_111da8;
        case 0x111dacu: goto label_111dac;
        case 0x111db0u: goto label_111db0;
        case 0x111db4u: goto label_111db4;
        case 0x111db8u: goto label_111db8;
        case 0x111dbcu: goto label_111dbc;
        case 0x111dc0u: goto label_111dc0;
        case 0x111dc4u: goto label_111dc4;
        case 0x111dc8u: goto label_111dc8;
        case 0x111dccu: goto label_111dcc;
        case 0x111dd0u: goto label_111dd0;
        case 0x111dd4u: goto label_111dd4;
        default: break;
    }

    ctx->pc = 0x111a20u;

label_111a20:
    // 0x111a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_111a24:
    // 0x111a24: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_111a28:
    // 0x111a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_111a2c:
    // 0x111a2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x111a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_111a30:
    // 0x111a30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_111a34:
    // 0x111a34: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x111a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_111a38:
    // 0x111a38: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x111a38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_111a3c:
    // 0x111a3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x111a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_111a40:
    // 0x111a40: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x111a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111a44:
    // 0x111a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_111a48:
    // 0x111a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_111a4c:
    // 0x111a4c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x111a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_111a50:
    // 0x111a50: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x111a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
label_111a54:
    // 0x111a54: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x111a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_111a58:
    // 0x111a58: 0xc0a480c  jal         func_292030
label_111a5c:
    if (ctx->pc == 0x111A5Cu) {
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A60u;
        goto label_111a60;
    }
    ctx->pc = 0x111A58u;
    SET_GPR_U32(ctx, 31, 0x111A60u);
    ctx->pc = 0x111A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A58u;
    // 0x111a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x111A58u, 0x111A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A60u;
label_111a60:
    // 0x111a60: 0xc0a4c3c  jal         func_2930F0
label_111a64:
    if (ctx->pc == 0x111A64u) {
        ctx->pc = 0x111A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A60u;
        // 0x111a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A68u;
        goto label_111a68;
    }
    ctx->pc = 0x111A60u;
    SET_GPR_U32(ctx, 31, 0x111A68u);
    ctx->pc = 0x111A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A60u;
    // 0x111a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x111A60u, 0x111A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A68u;
label_111a68:
    // 0x111a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111a6c:
    // 0x111a6c: 0xc0a4bbc  jal         func_292EF0
label_111a70:
    if (ctx->pc == 0x111A70u) {
        ctx->pc = 0x111A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A6Cu;
        // 0x111a70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A74u;
        goto label_111a74;
    }
    ctx->pc = 0x111A6Cu;
    SET_GPR_U32(ctx, 31, 0x111A74u);
    ctx->pc = 0x111A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A6Cu;
    // 0x111a70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x111A6Cu, 0x111A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A74u;
label_111a74:
    // 0x111a74: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x111a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_111a78:
    // 0x111a78: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x111a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_111a7c:
    // 0x111a7c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x111a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_111a80:
    // 0x111a80: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_111a84:
    if (ctx->pc == 0x111A84u) {
        ctx->pc = 0x111A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A80u;
        // 0x111a84: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A88u;
        goto label_111a88;
    }
    ctx->pc = 0x111A80u;
    {
        const bool branch_taken_0x111a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A80u;
        // 0x111a84: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a80) {
            ctx->pc = 0x111AB8u;
            goto label_111ab8;
        }
    }
    ctx->pc = 0x111A88u;
label_111a88:
    // 0x111a88: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x111a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
label_111a8c:
    // 0x111a8c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_111a90:
    if (ctx->pc == 0x111A90u) {
        ctx->pc = 0x111A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A8Cu;
        // 0x111a90: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A94u;
        goto label_111a94;
    }
    ctx->pc = 0x111A8Cu;
    {
        const bool branch_taken_0x111a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111a8c) {
            ctx->pc = 0x111A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A8Cu;
            // 0x111a90: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111ABCu;
            goto label_111abc;
        }
    }
    ctx->pc = 0x111A94u;
label_111a94:
    // 0x111a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111a98:
    // 0x111a98: 0xc042cba  jal         func_10B2E8
label_111a9c:
    if (ctx->pc == 0x111A9Cu) {
        ctx->pc = 0x111A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A98u;
        // 0x111a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AA0u;
        goto label_111aa0;
    }
    ctx->pc = 0x111A98u;
    SET_GPR_U32(ctx, 31, 0x111AA0u);
    ctx->pc = 0x111A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A98u;
    // 0x111a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x111A98u, 0x111AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AA0u;
label_111aa0:
    // 0x111aa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_111aa4:
    if (ctx->pc == 0x111AA4u) {
        ctx->pc = 0x111AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AA0u;
        // 0x111aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AA8u;
        goto label_111aa8;
    }
    ctx->pc = 0x111AA0u;
    {
        const bool branch_taken_0x111aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AA0u;
        // 0x111aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111aa0) {
            ctx->pc = 0x111AB8u;
            goto label_111ab8;
        }
    }
    ctx->pc = 0x111AA8u;
label_111aa8:
    // 0x111aa8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x111aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_111aac:
    // 0x111aac: 0xa2220649  sb          $v0, 0x649($s1)
    ctx->pc = 0x111aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
label_111ab0:
    // 0x111ab0: 0xc07eb00  jal         func_1FAC00
label_111ab4:
    if (ctx->pc == 0x111AB4u) {
        ctx->pc = 0x111AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AB0u;
        // 0x111ab4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AB8u;
        goto label_111ab8;
    }
    ctx->pc = 0x111AB0u;
    SET_GPR_U32(ctx, 31, 0x111AB8u);
    ctx->pc = 0x111AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AB0u;
    // 0x111ab4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x111AB0u, 0x111AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AB8u;
label_111ab8:
    // 0x111ab8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x111ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_111abc:
    // 0x111abc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_111ac0:
    if (ctx->pc == 0x111AC0u) {
        ctx->pc = 0x111AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ABCu;
        // 0x111ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AC4u;
        goto label_111ac4;
    }
    ctx->pc = 0x111ABCu;
    {
        const bool branch_taken_0x111abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ABCu;
        // 0x111ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111abc) {
            ctx->pc = 0x111AD4u;
            goto label_111ad4;
        }
    }
    ctx->pc = 0x111AC4u;
label_111ac4:
    // 0x111ac4: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
label_111ac8:
    if (ctx->pc == 0x111AC8u) {
        ctx->pc = 0x111ACCu;
        goto label_111acc;
    }
    ctx->pc = 0x111AC4u;
    {
        const bool branch_taken_0x111ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111ac4) {
            ctx->pc = 0x111C14u;
            goto label_111c14;
        }
    }
    ctx->pc = 0x111ACCu;
label_111acc:
    // 0x111acc: 0x1000008b  b           . + 4 + (0x8B << 2)
label_111ad0:
    if (ctx->pc == 0x111AD0u) {
        ctx->pc = 0x111AD4u;
        goto label_111ad4;
    }
    ctx->pc = 0x111ACCu;
    {
        const bool branch_taken_0x111acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111acc) {
            ctx->pc = 0x111CFCu;
            goto label_111cfc;
        }
    }
    ctx->pc = 0x111AD4u;
label_111ad4:
    // 0x111ad4: 0xc049396  jal         func_124E58
label_111ad8:
    if (ctx->pc == 0x111AD8u) {
        ctx->pc = 0x111AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD4u;
        // 0x111ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111ADCu;
        goto label_111adc;
    }
    ctx->pc = 0x111AD4u;
    SET_GPR_U32(ctx, 31, 0x111ADCu);
    ctx->pc = 0x111AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AD4u;
    // 0x111ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x111AD4u, 0x111ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111ADCu;
label_111adc:
    // 0x111adc: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x111adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_111ae0:
    // 0x111ae0: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x111ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_111ae4:
    // 0x111ae4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_111ae8:
    if (ctx->pc == 0x111AE8u) {
        ctx->pc = 0x111AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AE4u;
        // 0x111ae8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AECu;
        goto label_111aec;
    }
    ctx->pc = 0x111AE4u;
    {
        const bool branch_taken_0x111ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AE4u;
        // 0x111ae8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ae4) {
            ctx->pc = 0x111B80u;
            goto label_111b80;
        }
    }
    ctx->pc = 0x111AECu;
label_111aec:
    // 0x111aec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x111aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_111af0:
    // 0x111af0: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x111af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
label_111af4:
    // 0x111af4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_111af8:
    if (ctx->pc == 0x111AF8u) {
        ctx->pc = 0x111AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AF4u;
        // 0x111af8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111AFCu;
        goto label_111afc;
    }
    ctx->pc = 0x111AF4u;
    {
        const bool branch_taken_0x111af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AF4u;
        // 0x111af8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111af4) {
            ctx->pc = 0x111B38u;
            goto label_111b38;
        }
    }
    ctx->pc = 0x111AFCu;
label_111afc:
    // 0x111afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b00:
    // 0x111b00: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x111b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_111b04:
    // 0x111b04: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111b08:
    // 0x111b08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b0c:
    // 0x111b0c: 0xc042902  jal         func_10A408
label_111b10:
    if (ctx->pc == 0x111B10u) {
        ctx->pc = 0x111B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B0Cu;
        // 0x111b10: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B14u;
        goto label_111b14;
    }
    ctx->pc = 0x111B0Cu;
    SET_GPR_U32(ctx, 31, 0x111B14u);
    ctx->pc = 0x111B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B0Cu;
    // 0x111b10: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x111B0Cu, 0x111B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B14u;
label_111b14:
    // 0x111b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b18:
    // 0x111b18: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x111b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_111b1c:
    // 0x111b1c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_111b20:
    // 0x111b20: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x111b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111b24:
    // 0x111b24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b28:
    // 0x111b28: 0xc042908  jal         func_10A420
label_111b2c:
    if (ctx->pc == 0x111B2Cu) {
        ctx->pc = 0x111B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B28u;
        // 0x111b2c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B30u;
        goto label_111b30;
    }
    ctx->pc = 0x111B28u;
    SET_GPR_U32(ctx, 31, 0x111B30u);
    ctx->pc = 0x111B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B28u;
    // 0x111b2c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x111B28u, 0x111B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B30u;
label_111b30:
    // 0x111b30: 0x10000010  b           . + 4 + (0x10 << 2)
label_111b34:
    if (ctx->pc == 0x111B34u) {
        ctx->pc = 0x111B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B30u;
        // 0x111b34: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B38u;
        goto label_111b38;
    }
    ctx->pc = 0x111B30u;
    {
        const bool branch_taken_0x111b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B30u;
        // 0x111b34: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b30) {
            ctx->pc = 0x111B74u;
            goto label_111b74;
        }
    }
    ctx->pc = 0x111B38u;
label_111b38:
    // 0x111b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b3c:
    // 0x111b3c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x111b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_111b40:
    // 0x111b40: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x111b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_111b44:
    // 0x111b44: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x111b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111b48:
    // 0x111b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b4c:
    // 0x111b4c: 0xc042902  jal         func_10A408
label_111b50:
    if (ctx->pc == 0x111B50u) {
        ctx->pc = 0x111B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B4Cu;
        // 0x111b50: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B54u;
        goto label_111b54;
    }
    ctx->pc = 0x111B4Cu;
    SET_GPR_U32(ctx, 31, 0x111B54u);
    ctx->pc = 0x111B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B4Cu;
    // 0x111b50: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x111B4Cu, 0x111B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B54u;
label_111b54:
    // 0x111b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b58:
    // 0x111b58: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x111b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_111b5c:
    // 0x111b5c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x111b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_111b60:
    // 0x111b60: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x111b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111b64:
    // 0x111b64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b68:
    // 0x111b68: 0xc042908  jal         func_10A420
label_111b6c:
    if (ctx->pc == 0x111B6Cu) {
        ctx->pc = 0x111B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B68u;
        // 0x111b6c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B70u;
        goto label_111b70;
    }
    ctx->pc = 0x111B68u;
    SET_GPR_U32(ctx, 31, 0x111B70u);
    ctx->pc = 0x111B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B68u;
    // 0x111b6c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x111B68u, 0x111B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B70u;
label_111b70:
    // 0x111b70: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_111b74:
    // 0x111b74: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x111b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_111b78:
    // 0x111b78: 0x10000012  b           . + 4 + (0x12 << 2)
label_111b7c:
    if (ctx->pc == 0x111B7Cu) {
        ctx->pc = 0x111B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B78u;
        // 0x111b7c: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B80u;
        goto label_111b80;
    }
    ctx->pc = 0x111B78u;
    {
        const bool branch_taken_0x111b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B78u;
        // 0x111b7c: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b78) {
            ctx->pc = 0x111BC4u;
            goto label_111bc4;
        }
    }
    ctx->pc = 0x111B80u;
label_111b80:
    // 0x111b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b84:
    // 0x111b84: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x111b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_111b88:
    // 0x111b88: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x111b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_111b8c:
    // 0x111b8c: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x111b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111b90:
    // 0x111b90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b94:
    // 0x111b94: 0xc042902  jal         func_10A408
label_111b98:
    if (ctx->pc == 0x111B98u) {
        ctx->pc = 0x111B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B94u;
        // 0x111b98: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B9Cu;
        goto label_111b9c;
    }
    ctx->pc = 0x111B94u;
    SET_GPR_U32(ctx, 31, 0x111B9Cu);
    ctx->pc = 0x111B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B94u;
    // 0x111b98: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x111B94u, 0x111B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B9Cu;
label_111b9c:
    // 0x111b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111ba0:
    // 0x111ba0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_111ba4:
    // 0x111ba4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_111ba8:
    // 0x111ba8: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x111ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111bac:
    // 0x111bac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bb0:
    // 0x111bb0: 0xc042908  jal         func_10A420
label_111bb4:
    if (ctx->pc == 0x111BB4u) {
        ctx->pc = 0x111BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB0u;
        // 0x111bb4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BB8u;
        goto label_111bb8;
    }
    ctx->pc = 0x111BB0u;
    SET_GPR_U32(ctx, 31, 0x111BB8u);
    ctx->pc = 0x111BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BB0u;
    // 0x111bb4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x111BB0u, 0x111BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BB8u;
label_111bb8:
    // 0x111bb8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x111bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_111bbc:
    // 0x111bbc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x111bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_111bc0:
    // 0x111bc0: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x111bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_111bc4:
    // 0x111bc4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x111bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111bc8:
    // 0x111bc8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x111bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_111bcc:
    // 0x111bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111bd0:
    // 0x111bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x111bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_111bd4:
    // 0x111bd4: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x111bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
label_111bd8:
    // 0x111bd8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x111bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_111bdc:
    // 0x111bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111be0:
    // 0x111be0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x111be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111be4:
    // 0x111be4: 0xc0aa15e  jal         func_2A8578
label_111be8:
    if (ctx->pc == 0x111BE8u) {
        ctx->pc = 0x111BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BE4u;
        // 0x111be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BECu;
        goto label_111bec;
    }
    ctx->pc = 0x111BE4u;
    SET_GPR_U32(ctx, 31, 0x111BECu);
    ctx->pc = 0x111BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BE4u;
    // 0x111be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x111BE4u, 0x111BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BECu;
label_111bec:
    // 0x111bec: 0xc04a55e  jal         func_129578
label_111bf0:
    if (ctx->pc == 0x111BF0u) {
        ctx->pc = 0x111BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BECu;
        // 0x111bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BF4u;
        goto label_111bf4;
    }
    ctx->pc = 0x111BECu;
    SET_GPR_U32(ctx, 31, 0x111BF4u);
    ctx->pc = 0x111BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BECu;
    // 0x111bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x111BECu, 0x111BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BF4u;
label_111bf4:
    // 0x111bf4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x111bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_111bf8:
    // 0x111bf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_111bfc:
    // 0x111bfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_111c00:
    // 0x111c00: 0xc0a4bce  jal         func_292F38
label_111c04:
    if (ctx->pc == 0x111C04u) {
        ctx->pc = 0x111C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C00u;
        // 0x111c04: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C08u;
        goto label_111c08;
    }
    ctx->pc = 0x111C00u;
    SET_GPR_U32(ctx, 31, 0x111C08u);
    ctx->pc = 0x111C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C00u;
    // 0x111c04: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111C00u, 0x111C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C08u;
label_111c08:
    // 0x111c08: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x111c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_111c0c:
    // 0x111c0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_111c10:
    // 0x111c10: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x111c10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_111c14:
    // 0x111c14: 0xc0493b0  jal         func_124EC0
label_111c18:
    if (ctx->pc == 0x111C18u) {
        ctx->pc = 0x111C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C14u;
        // 0x111c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C1Cu;
        goto label_111c1c;
    }
    ctx->pc = 0x111C14u;
    SET_GPR_U32(ctx, 31, 0x111C1Cu);
    ctx->pc = 0x111C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C14u;
    // 0x111c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x111C14u, 0x111C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C1Cu;
label_111c1c:
    // 0x111c1c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111c20:
    // 0x111c20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x111c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_111c24:
    // 0x111c24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_111c28:
    if (ctx->pc == 0x111C28u) {
        ctx->pc = 0x111C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C24u;
        // 0x111c28: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C2Cu;
        goto label_111c2c;
    }
    ctx->pc = 0x111C24u;
    {
        const bool branch_taken_0x111c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C24u;
        // 0x111c28: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c24) {
            ctx->pc = 0x111C3Cu;
            goto label_111c3c;
        }
    }
    ctx->pc = 0x111C2Cu;
label_111c2c:
    // 0x111c2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111c30:
    // 0x111c30: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x111c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_111c34:
    // 0x111c34: 0xc04d476  jal         func_1351D8
label_111c38:
    if (ctx->pc == 0x111C38u) {
        ctx->pc = 0x111C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C34u;
        // 0x111c38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C3Cu;
        goto label_111c3c;
    }
    ctx->pc = 0x111C34u;
    SET_GPR_U32(ctx, 31, 0x111C3Cu);
    ctx->pc = 0x111C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C34u;
    // 0x111c38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x111C34u, 0x111C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C3Cu;
label_111c3c:
    // 0x111c3c: 0xc055f06  jal         func_157C18
label_111c40:
    if (ctx->pc == 0x111C40u) {
        ctx->pc = 0x111C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C3Cu;
        // 0x111c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C44u;
        goto label_111c44;
    }
    ctx->pc = 0x111C3Cu;
    SET_GPR_U32(ctx, 31, 0x111C44u);
    ctx->pc = 0x111C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C3Cu;
    // 0x111c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x111C3Cu, 0x111C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C44u;
label_111c44:
    // 0x111c44: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_111c48:
    if (ctx->pc == 0x111C48u) {
        ctx->pc = 0x111C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C44u;
        // 0x111c48: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C4Cu;
        goto label_111c4c;
    }
    ctx->pc = 0x111C44u;
    {
        const bool branch_taken_0x111c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c44) {
            ctx->pc = 0x111C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C44u;
            // 0x111c48: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C78u;
            goto label_111c78;
        }
    }
    ctx->pc = 0x111C4Cu;
label_111c4c:
    // 0x111c4c: 0xc04a58c  jal         func_129630
label_111c50:
    if (ctx->pc == 0x111C50u) {
        ctx->pc = 0x111C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C4Cu;
        // 0x111c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C54u;
        goto label_111c54;
    }
    ctx->pc = 0x111C4Cu;
    SET_GPR_U32(ctx, 31, 0x111C54u);
    ctx->pc = 0x111C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C4Cu;
    // 0x111c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x111C4Cu, 0x111C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C54u;
label_111c54:
    // 0x111c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111c58:
    // 0x111c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111c5c:
    // 0x111c5c: 0xc0493d8  jal         func_124F60
label_111c60:
    if (ctx->pc == 0x111C60u) {
        ctx->pc = 0x111C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C5Cu;
        // 0x111c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C64u;
        goto label_111c64;
    }
    ctx->pc = 0x111C5Cu;
    SET_GPR_U32(ctx, 31, 0x111C64u);
    ctx->pc = 0x111C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C5Cu;
    // 0x111c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x111C5Cu, 0x111C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C64u;
label_111c64:
    // 0x111c64: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x111c64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_111c68:
    // 0x111c68: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x111c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_111c6c:
    // 0x111c6c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x111c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_111c70:
    // 0x111c70: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x111c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_111c74:
    // 0x111c74: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111c78:
    // 0x111c78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x111c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_111c7c:
    // 0x111c7c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_111c80:
    if (ctx->pc == 0x111C80u) {
        ctx->pc = 0x111C84u;
        goto label_111c84;
    }
    ctx->pc = 0x111C7Cu;
    {
        const bool branch_taken_0x111c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c7c) {
            ctx->pc = 0x111CDCu;
            goto label_111cdc;
        }
    }
    ctx->pc = 0x111C84u;
label_111c84:
    // 0x111c84: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x111c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_111c88:
    // 0x111c88: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_111c8c:
    if (ctx->pc == 0x111C8Cu) {
        ctx->pc = 0x111C90u;
        goto label_111c90;
    }
    ctx->pc = 0x111C88u;
    {
        const bool branch_taken_0x111c88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c88) {
            ctx->pc = 0x111CDCu;
            goto label_111cdc;
        }
    }
    ctx->pc = 0x111C90u;
label_111c90:
    // 0x111c90: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x111c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_111c94:
    // 0x111c94: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x111c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_111c98:
    // 0x111c98: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x111c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_111c9c:
    // 0x111c9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x111c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_111ca0:
    // 0x111ca0: 0x40f809  jalr        $v0
label_111ca4:
    if (ctx->pc == 0x111CA4u) {
        ctx->pc = 0x111CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CA0u;
        // 0x111ca4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111CA8u;
        goto label_111ca8;
    }
    ctx->pc = 0x111CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111CA8u);
        ctx->pc = 0x111CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CA0u;
        // 0x111ca4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CA0u, 0x111CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111CA8u;
label_111ca8:
    // 0x111ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111cac:
    // 0x111cac: 0xc07dfac  jal         func_1F7EB0
label_111cb0:
    if (ctx->pc == 0x111CB0u) {
        ctx->pc = 0x111CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CACu;
        // 0x111cb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111CB4u;
        goto label_111cb4;
    }
    ctx->pc = 0x111CACu;
    SET_GPR_U32(ctx, 31, 0x111CB4u);
    ctx->pc = 0x111CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CACu;
    // 0x111cb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x111CACu, 0x111CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CB4u;
label_111cb4:
    // 0x111cb4: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x111cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_111cb8:
    // 0x111cb8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x111cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_111cbc:
    // 0x111cbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_111cc0:
    // 0x111cc0: 0x0  nop
    ctx->pc = 0x111cc0u;
    // NOP
label_111cc4:
    // 0x111cc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x111cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_111cc8:
    // 0x111cc8: 0x0  nop
    ctx->pc = 0x111cc8u;
    // NOP
label_111ccc:
    // 0x111ccc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_111cd0:
    if (ctx->pc == 0x111CD0u) {
        ctx->pc = 0x111CD4u;
        goto label_111cd4;
    }
    ctx->pc = 0x111CCCu;
    {
        const bool branch_taken_0x111ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x111ccc) {
            ctx->pc = 0x111CDCu;
            goto label_111cdc;
        }
    }
    ctx->pc = 0x111CD4u;
label_111cd4:
    // 0x111cd4: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x111cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_111cd8:
    // 0x111cd8: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x111cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_111cdc:
    // 0x111cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_111ce0:
    // 0x111ce0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x111ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_111ce4:
    // 0x111ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111ce8:
    // 0x111ce8: 0xc053e7c  jal         func_14F9F0
label_111cec:
    if (ctx->pc == 0x111CECu) {
        ctx->pc = 0x111CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CE8u;
        // 0x111cec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111CF0u;
        goto label_111cf0;
    }
    ctx->pc = 0x111CE8u;
    SET_GPR_U32(ctx, 31, 0x111CF0u);
    ctx->pc = 0x111CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CE8u;
    // 0x111cec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x111CE8u, 0x111CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CF0u;
label_111cf0:
    // 0x111cf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x111cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_111cf4:
    // 0x111cf4: 0xc053e4a  jal         func_14F928
label_111cf8:
    if (ctx->pc == 0x111CF8u) {
        ctx->pc = 0x111CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CF4u;
        // 0x111cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111CFCu;
        goto label_111cfc;
    }
    ctx->pc = 0x111CF4u;
    SET_GPR_U32(ctx, 31, 0x111CFCu);
    ctx->pc = 0x111CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CF4u;
    // 0x111cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x111CF4u, 0x111CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CFCu;
label_111cfc:
    // 0x111cfc: 0xc04290e  jal         func_10A438
label_111d00:
    if (ctx->pc == 0x111D00u) {
        ctx->pc = 0x111D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CFCu;
        // 0x111d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D04u;
        goto label_111d04;
    }
    ctx->pc = 0x111CFCu;
    SET_GPR_U32(ctx, 31, 0x111D04u);
    ctx->pc = 0x111D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CFCu;
    // 0x111d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x111CFCu, 0x111D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D04u;
label_111d04:
    // 0x111d04: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111d08:
    // 0x111d08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x111d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_111d0c:
    // 0x111d0c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_111d10:
    if (ctx->pc == 0x111D10u) {
        ctx->pc = 0x111D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D0Cu;
        // 0x111d10: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D14u;
        goto label_111d14;
    }
    ctx->pc = 0x111D0Cu;
    {
        const bool branch_taken_0x111d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111d0c) {
            ctx->pc = 0x111D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111D0Cu;
            // 0x111d10: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111D2Cu;
            goto label_111d2c;
        }
    }
    ctx->pc = 0x111D14u;
label_111d14:
    // 0x111d14: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_111d18:
    // 0x111d18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_111d1c:
    // 0x111d1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_111d20:
    // 0x111d20: 0xc0a4bce  jal         func_292F38
label_111d24:
    if (ctx->pc == 0x111D24u) {
        ctx->pc = 0x111D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D20u;
        // 0x111d24: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D28u;
        goto label_111d28;
    }
    ctx->pc = 0x111D20u;
    SET_GPR_U32(ctx, 31, 0x111D28u);
    ctx->pc = 0x111D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D20u;
    // 0x111d24: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111D20u, 0x111D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D28u;
label_111d28:
    // 0x111d28: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111d2c:
    // 0x111d2c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x111d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_111d30:
    // 0x111d30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_111d34:
    if (ctx->pc == 0x111D34u) {
        ctx->pc = 0x111D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D30u;
        // 0x111d34: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D38u;
        goto label_111d38;
    }
    ctx->pc = 0x111D30u;
    {
        const bool branch_taken_0x111d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D30u;
        // 0x111d34: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d30) {
            ctx->pc = 0x111D6Cu;
            goto label_111d6c;
        }
    }
    ctx->pc = 0x111D38u;
label_111d38:
    // 0x111d38: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x111d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
label_111d3c:
    // 0x111d3c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_111d40:
    // 0x111d40: 0xc0b2ee8  jal         func_2CBBA0
label_111d44:
    if (ctx->pc == 0x111D44u) {
        ctx->pc = 0x111D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D40u;
        // 0x111d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D48u;
        goto label_111d48;
    }
    ctx->pc = 0x111D40u;
    SET_GPR_U32(ctx, 31, 0x111D48u);
    ctx->pc = 0x111D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D40u;
    // 0x111d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x111D40u, 0x111D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D48u;
label_111d48:
    // 0x111d48: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x111d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
label_111d4c:
    // 0x111d4c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x111d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
label_111d50:
    // 0x111d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_111d54:
    // 0x111d54: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x111d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_111d58:
    // 0x111d58: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x111d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_111d5c:
    // 0x111d5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x111d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_111d60:
    // 0x111d60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x111d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_111d64:
    // 0x111d64: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x111d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_111d68:
    // 0x111d68: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x111d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_111d6c:
    // 0x111d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111d70:
    // 0x111d70: 0xc048e4e  jal         func_123938
label_111d74:
    if (ctx->pc == 0x111D74u) {
        ctx->pc = 0x111D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D70u;
        // 0x111d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D78u;
        goto label_111d78;
    }
    ctx->pc = 0x111D70u;
    SET_GPR_U32(ctx, 31, 0x111D78u);
    ctx->pc = 0x111D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D70u;
    // 0x111d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x111D70u, 0x111D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D78u;
label_111d78:
    // 0x111d78: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_111d7c:
    if (ctx->pc == 0x111D7Cu) {
        ctx->pc = 0x111D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D78u;
        // 0x111d7c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D80u;
        goto label_111d80;
    }
    ctx->pc = 0x111D78u;
    {
        const bool branch_taken_0x111d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111d78) {
            ctx->pc = 0x111D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111D78u;
            // 0x111d7c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111DA0u;
            goto label_111da0;
        }
    }
    ctx->pc = 0x111D80u;
label_111d80:
    // 0x111d80: 0xc04a58c  jal         func_129630
label_111d84:
    if (ctx->pc == 0x111D84u) {
        ctx->pc = 0x111D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D80u;
        // 0x111d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D88u;
        goto label_111d88;
    }
    ctx->pc = 0x111D80u;
    SET_GPR_U32(ctx, 31, 0x111D88u);
    ctx->pc = 0x111D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D80u;
    // 0x111d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x111D80u, 0x111D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D88u;
label_111d88:
    // 0x111d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111d8c:
    // 0x111d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111d90:
    // 0x111d90: 0xc0493d8  jal         func_124F60
label_111d94:
    if (ctx->pc == 0x111D94u) {
        ctx->pc = 0x111D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D90u;
        // 0x111d94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D98u;
        goto label_111d98;
    }
    ctx->pc = 0x111D90u;
    SET_GPR_U32(ctx, 31, 0x111D98u);
    ctx->pc = 0x111D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D90u;
    // 0x111d94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x111D90u, 0x111D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D98u;
label_111d98:
    // 0x111d98: 0x10000008  b           . + 4 + (0x8 << 2)
label_111d9c:
    if (ctx->pc == 0x111D9Cu) {
        ctx->pc = 0x111D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D98u;
        // 0x111d9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DA0u;
        goto label_111da0;
    }
    ctx->pc = 0x111D98u;
    {
        const bool branch_taken_0x111d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D98u;
        // 0x111d9c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d98) {
            ctx->pc = 0x111DBCu;
            goto label_111dbc;
        }
    }
    ctx->pc = 0x111DA0u;
label_111da0:
    // 0x111da0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_111da4:
    // 0x111da4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_111da8:
    // 0x111da8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_111dac:
    // 0x111dac: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x111dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_111db0:
    // 0x111db0: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x111db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
label_111db4:
    // 0x111db4: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x111db4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
label_111db8:
    // 0x111db8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x111db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111dbc:
    // 0x111dbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x111dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111dc0:
    // 0x111dc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x111dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111dc4:
    // 0x111dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111dc8:
    // 0x111dc8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x111dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_111dcc:
    // 0x111dcc: 0x3e00008  jr          $ra
label_111dd0:
    if (ctx->pc == 0x111DD0u) {
        ctx->pc = 0x111DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DCCu;
        // 0x111dd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DD4u;
        goto label_111dd4;
    }
    ctx->pc = 0x111DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DCCu;
        // 0x111dd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111DD4u;
label_111dd4:
    // 0x111dd4: 0x0  nop
    ctx->pc = 0x111dd4u;
    // NOP
    ctx->pc = 0x111dd8u;
}
