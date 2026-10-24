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

// Function: func_00237AB0
// Address: 0x237ab0 - 0x237e90
void func_00237AB0_0x237ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00237AB0_0x237ab0");
#endif

    switch (ctx->pc) {
        case 0x237ab0u: goto label_237ab0;
        case 0x237ab4u: goto label_237ab4;
        case 0x237ab8u: goto label_237ab8;
        case 0x237abcu: goto label_237abc;
        case 0x237ac0u: goto label_237ac0;
        case 0x237ac4u: goto label_237ac4;
        case 0x237ac8u: goto label_237ac8;
        case 0x237accu: goto label_237acc;
        case 0x237ad0u: goto label_237ad0;
        case 0x237ad4u: goto label_237ad4;
        case 0x237ad8u: goto label_237ad8;
        case 0x237adcu: goto label_237adc;
        case 0x237ae0u: goto label_237ae0;
        case 0x237ae4u: goto label_237ae4;
        case 0x237ae8u: goto label_237ae8;
        case 0x237aecu: goto label_237aec;
        case 0x237af0u: goto label_237af0;
        case 0x237af4u: goto label_237af4;
        case 0x237af8u: goto label_237af8;
        case 0x237afcu: goto label_237afc;
        case 0x237b00u: goto label_237b00;
        case 0x237b04u: goto label_237b04;
        case 0x237b08u: goto label_237b08;
        case 0x237b0cu: goto label_237b0c;
        case 0x237b10u: goto label_237b10;
        case 0x237b14u: goto label_237b14;
        case 0x237b18u: goto label_237b18;
        case 0x237b1cu: goto label_237b1c;
        case 0x237b20u: goto label_237b20;
        case 0x237b24u: goto label_237b24;
        case 0x237b28u: goto label_237b28;
        case 0x237b2cu: goto label_237b2c;
        case 0x237b30u: goto label_237b30;
        case 0x237b34u: goto label_237b34;
        case 0x237b38u: goto label_237b38;
        case 0x237b3cu: goto label_237b3c;
        case 0x237b40u: goto label_237b40;
        case 0x237b44u: goto label_237b44;
        case 0x237b48u: goto label_237b48;
        case 0x237b4cu: goto label_237b4c;
        case 0x237b50u: goto label_237b50;
        case 0x237b54u: goto label_237b54;
        case 0x237b58u: goto label_237b58;
        case 0x237b5cu: goto label_237b5c;
        case 0x237b60u: goto label_237b60;
        case 0x237b64u: goto label_237b64;
        case 0x237b68u: goto label_237b68;
        case 0x237b6cu: goto label_237b6c;
        case 0x237b70u: goto label_237b70;
        case 0x237b74u: goto label_237b74;
        case 0x237b78u: goto label_237b78;
        case 0x237b7cu: goto label_237b7c;
        case 0x237b80u: goto label_237b80;
        case 0x237b84u: goto label_237b84;
        case 0x237b88u: goto label_237b88;
        case 0x237b8cu: goto label_237b8c;
        case 0x237b90u: goto label_237b90;
        case 0x237b94u: goto label_237b94;
        case 0x237b98u: goto label_237b98;
        case 0x237b9cu: goto label_237b9c;
        case 0x237ba0u: goto label_237ba0;
        case 0x237ba4u: goto label_237ba4;
        case 0x237ba8u: goto label_237ba8;
        case 0x237bacu: goto label_237bac;
        case 0x237bb0u: goto label_237bb0;
        case 0x237bb4u: goto label_237bb4;
        case 0x237bb8u: goto label_237bb8;
        case 0x237bbcu: goto label_237bbc;
        case 0x237bc0u: goto label_237bc0;
        case 0x237bc4u: goto label_237bc4;
        case 0x237bc8u: goto label_237bc8;
        case 0x237bccu: goto label_237bcc;
        case 0x237bd0u: goto label_237bd0;
        case 0x237bd4u: goto label_237bd4;
        case 0x237bd8u: goto label_237bd8;
        case 0x237bdcu: goto label_237bdc;
        case 0x237be0u: goto label_237be0;
        case 0x237be4u: goto label_237be4;
        case 0x237be8u: goto label_237be8;
        case 0x237becu: goto label_237bec;
        case 0x237bf0u: goto label_237bf0;
        case 0x237bf4u: goto label_237bf4;
        case 0x237bf8u: goto label_237bf8;
        case 0x237bfcu: goto label_237bfc;
        case 0x237c00u: goto label_237c00;
        case 0x237c04u: goto label_237c04;
        case 0x237c08u: goto label_237c08;
        case 0x237c0cu: goto label_237c0c;
        case 0x237c10u: goto label_237c10;
        case 0x237c14u: goto label_237c14;
        case 0x237c18u: goto label_237c18;
        case 0x237c1cu: goto label_237c1c;
        case 0x237c20u: goto label_237c20;
        case 0x237c24u: goto label_237c24;
        case 0x237c28u: goto label_237c28;
        case 0x237c2cu: goto label_237c2c;
        case 0x237c30u: goto label_237c30;
        case 0x237c34u: goto label_237c34;
        case 0x237c38u: goto label_237c38;
        case 0x237c3cu: goto label_237c3c;
        case 0x237c40u: goto label_237c40;
        case 0x237c44u: goto label_237c44;
        case 0x237c48u: goto label_237c48;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c50u: goto label_237c50;
        case 0x237c54u: goto label_237c54;
        case 0x237c58u: goto label_237c58;
        case 0x237c5cu: goto label_237c5c;
        case 0x237c60u: goto label_237c60;
        case 0x237c64u: goto label_237c64;
        case 0x237c68u: goto label_237c68;
        case 0x237c6cu: goto label_237c6c;
        case 0x237c70u: goto label_237c70;
        case 0x237c74u: goto label_237c74;
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        case 0x237e54u: goto label_237e54;
        case 0x237e58u: goto label_237e58;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e60u: goto label_237e60;
        case 0x237e64u: goto label_237e64;
        case 0x237e68u: goto label_237e68;
        case 0x237e6cu: goto label_237e6c;
        case 0x237e70u: goto label_237e70;
        case 0x237e74u: goto label_237e74;
        case 0x237e78u: goto label_237e78;
        case 0x237e7cu: goto label_237e7c;
        case 0x237e80u: goto label_237e80;
        case 0x237e84u: goto label_237e84;
        case 0x237e88u: goto label_237e88;
        case 0x237e8cu: goto label_237e8c;
        default: break;
    }

    ctx->pc = 0x237ab0u;

label_237ab0:
    // 0x237ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_237ab4:
    // 0x237ab4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_237ab8:
    // 0x237ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237abc:
    // 0x237abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_237ac0:
    // 0x237ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_237ac4:
    // 0x237ac4: 0xc0b6dac  jal         func_2DB6B0
label_237ac8:
    if (ctx->pc == 0x237AC8u) {
        ctx->pc = 0x237AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AC4u;
        // 0x237ac8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x237ACCu;
        goto label_237acc;
    }
    ctx->pc = 0x237AC4u;
    SET_GPR_U32(ctx, 31, 0x237ACCu);
    ctx->pc = 0x237AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AC4u;
    // 0x237ac8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x237AC4u, 0x237ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237ACCu;
label_237acc:
    // 0x237acc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x237accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_237ad0:
    // 0x237ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237ad4:
    // 0x237ad4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x237ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_237ad8:
    // 0x237ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x237ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237adc:
    // 0x237adc: 0xc04d476  jal         func_1351D8
label_237ae0:
    if (ctx->pc == 0x237AE0u) {
        ctx->pc = 0x237AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ADCu;
        // 0x237ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237AE4u;
        goto label_237ae4;
    }
    ctx->pc = 0x237ADCu;
    SET_GPR_U32(ctx, 31, 0x237AE4u);
    ctx->pc = 0x237AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237ADCu;
    // 0x237ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x237ADCu, 0x237AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AE4u;
label_237ae4:
    // 0x237ae4: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x237ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_237ae8:
    // 0x237ae8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x237ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_237aec:
    // 0x237aec: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x237aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_237af0:
    // 0x237af0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x237af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_237af4:
    // 0x237af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237af8:
    // 0x237af8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_237afc:
    // 0x237afc: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x237afcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237b00:
    // 0x237b00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237b04:
    // 0x237b04: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x237b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
label_237b08:
    // 0x237b08: 0x10a40039  beq         $a1, $a0, . + 4 + (0x39 << 2)
label_237b0c:
    if (ctx->pc == 0x237B0Cu) {
        ctx->pc = 0x237B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B08u;
        // 0x237b0c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B10u;
        goto label_237b10;
    }
    ctx->pc = 0x237B08u;
    {
        const bool branch_taken_0x237b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x237B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B08u;
        // 0x237b0c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b08) {
            ctx->pc = 0x237BF0u;
            goto label_237bf0;
        }
    }
    ctx->pc = 0x237B10u;
label_237b10:
    // 0x237b10: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x237b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_237b14:
    // 0x237b14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237b18:
    if (ctx->pc == 0x237B18u) {
        ctx->pc = 0x237B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B14u;
        // 0x237b18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B1Cu;
        goto label_237b1c;
    }
    ctx->pc = 0x237B14u;
    {
        const bool branch_taken_0x237b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b14) {
            ctx->pc = 0x237B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B14u;
            // 0x237b18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B2Cu;
            goto label_237b2c;
        }
    }
    ctx->pc = 0x237B1Cu;
label_237b1c:
    // 0x237b1c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_237b20:
    if (ctx->pc == 0x237B20u) {
        ctx->pc = 0x237B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B1Cu;
        // 0x237b20: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B24u;
        goto label_237b24;
    }
    ctx->pc = 0x237B1Cu;
    {
        const bool branch_taken_0x237b1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b1c) {
            ctx->pc = 0x237B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B1Cu;
            // 0x237b20: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B44u;
            goto label_237b44;
        }
    }
    ctx->pc = 0x237B24u;
label_237b24:
    // 0x237b24: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_237b28:
    if (ctx->pc == 0x237B28u) {
        ctx->pc = 0x237B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B24u;
        // 0x237b28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B2Cu;
        goto label_237b2c;
    }
    ctx->pc = 0x237B24u;
    {
        const bool branch_taken_0x237b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B24u;
        // 0x237b28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b24) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237B2Cu;
label_237b2c:
    // 0x237b2c: 0x10a200b0  beq         $a1, $v0, . + 4 + (0xB0 << 2)
label_237b30:
    if (ctx->pc == 0x237B30u) {
        ctx->pc = 0x237B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B2Cu;
        // 0x237b30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B34u;
        goto label_237b34;
    }
    ctx->pc = 0x237B2Cu;
    {
        const bool branch_taken_0x237b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B2Cu;
        // 0x237b30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b2c) {
            ctx->pc = 0x237DF0u;
            goto label_237df0;
        }
    }
    ctx->pc = 0x237B34u;
label_237b34:
    // 0x237b34: 0x10a200bf  beq         $a1, $v0, . + 4 + (0xBF << 2)
label_237b38:
    if (ctx->pc == 0x237B38u) {
        ctx->pc = 0x237B3Cu;
        goto label_237b3c;
    }
    ctx->pc = 0x237B34u;
    {
        const bool branch_taken_0x237b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x237b34) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237B3Cu;
label_237b3c:
    // 0x237b3c: 0x100000ce  b           . + 4 + (0xCE << 2)
label_237b40:
    if (ctx->pc == 0x237B40u) {
        ctx->pc = 0x237B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B3Cu;
        // 0x237b40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B44u;
        goto label_237b44;
    }
    ctx->pc = 0x237B3Cu;
    {
        const bool branch_taken_0x237b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B3Cu;
        // 0x237b40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b3c) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237B44u;
label_237b44:
    // 0x237b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237b48:
    // 0x237b48: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_237b4c:
    // 0x237b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237b50:
    // 0x237b50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237b54:
    // 0x237b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237b58:
    // 0x237b58: 0x8c452118  lw          $a1, 0x2118($v0)
    ctx->pc = 0x237b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8472)));
label_237b5c:
    // 0x237b5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237b5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237b60:
    // 0x237b60: 0x8c46211c  lw          $a2, 0x211C($v0)
    ctx->pc = 0x237b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8476)));
label_237b64:
    // 0x237b64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_237b68:
    // 0x237b68: 0xc0aa15e  jal         func_2A8578
label_237b6c:
    if (ctx->pc == 0x237B6Cu) {
        ctx->pc = 0x237B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B68u;
        // 0x237b6c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B70u;
        goto label_237b70;
    }
    ctx->pc = 0x237B68u;
    SET_GPR_U32(ctx, 31, 0x237B70u);
    ctx->pc = 0x237B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B68u;
    // 0x237b6c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x237B68u, 0x237B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B70u;
label_237b70:
    // 0x237b70: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x237b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_237b74:
    // 0x237b74: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x237b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
label_237b78:
    // 0x237b78: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237b7c:
    // 0x237b7c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x237b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_237b80:
    // 0x237b80: 0xc07e804  jal         func_1FA010
label_237b84:
    if (ctx->pc == 0x237B84u) {
        ctx->pc = 0x237B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B80u;
        // 0x237b84: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B88u;
        goto label_237b88;
    }
    ctx->pc = 0x237B80u;
    SET_GPR_U32(ctx, 31, 0x237B88u);
    ctx->pc = 0x237B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B80u;
    // 0x237b84: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x237B80u, 0x237B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B88u;
label_237b88:
    // 0x237b88: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x237b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_237b8c:
    // 0x237b8c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x237b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_237b90:
    // 0x237b90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_237b94:
    if (ctx->pc == 0x237B94u) {
        ctx->pc = 0x237B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B90u;
        // 0x237b94: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237B98u;
        goto label_237b98;
    }
    ctx->pc = 0x237B90u;
    {
        const bool branch_taken_0x237b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B90u;
        // 0x237b94: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b90) {
            ctx->pc = 0x237BB0u;
            goto label_237bb0;
        }
    }
    ctx->pc = 0x237B98u;
label_237b98:
    // 0x237b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_237b9c:
    // 0x237b9c: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x237b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
label_237ba0:
    // 0x237ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237ba4:
    // 0x237ba4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x237ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_237ba8:
    // 0x237ba8: 0x800008  jr          $a0
label_237bac:
    if (ctx->pc == 0x237BACu) {
        ctx->pc = 0x237BB0u;
        goto label_237bb0;
    }
    ctx->pc = 0x237BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237BB0u: goto label_237bb0;
            case 0x237BB8u: goto label_237bb8;
            case 0x237BC0u: goto label_237bc0;
            case 0x237BC8u: goto label_237bc8;
            case 0x237BD0u: goto label_237bd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237BA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x237BB0u;
label_237bb0:
    // 0x237bb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_237bb4:
    if (ctx->pc == 0x237BB4u) {
        ctx->pc = 0x237BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB0u;
        // 0x237bb4: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BB8u;
        goto label_237bb8;
    }
    ctx->pc = 0x237BB0u;
    {
        const bool branch_taken_0x237bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB0u;
        // 0x237bb4: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bb0) {
            ctx->pc = 0x237BD4u;
            goto label_237bd4;
        }
    }
    ctx->pc = 0x237BB8u;
label_237bb8:
    // 0x237bb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_237bbc:
    if (ctx->pc == 0x237BBCu) {
        ctx->pc = 0x237BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB8u;
        // 0x237bbc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BC0u;
        goto label_237bc0;
    }
    ctx->pc = 0x237BB8u;
    {
        const bool branch_taken_0x237bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB8u;
        // 0x237bbc: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bb8) {
            ctx->pc = 0x237BD4u;
            goto label_237bd4;
        }
    }
    ctx->pc = 0x237BC0u;
label_237bc0:
    // 0x237bc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_237bc4:
    if (ctx->pc == 0x237BC4u) {
        ctx->pc = 0x237BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BC0u;
        // 0x237bc4: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BC8u;
        goto label_237bc8;
    }
    ctx->pc = 0x237BC0u;
    {
        const bool branch_taken_0x237bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BC0u;
        // 0x237bc4: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bc0) {
            ctx->pc = 0x237BD4u;
            goto label_237bd4;
        }
    }
    ctx->pc = 0x237BC8u;
label_237bc8:
    // 0x237bc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_237bcc:
    if (ctx->pc == 0x237BCCu) {
        ctx->pc = 0x237BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BC8u;
        // 0x237bcc: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BD0u;
        goto label_237bd0;
    }
    ctx->pc = 0x237BC8u;
    {
        const bool branch_taken_0x237bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BC8u;
        // 0x237bcc: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bc8) {
            ctx->pc = 0x237BD4u;
            goto label_237bd4;
        }
    }
    ctx->pc = 0x237BD0u;
label_237bd0:
    // 0x237bd0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x237bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_237bd4:
    // 0x237bd4: 0xc0c73f8  jal         func_31CFE0
label_237bd8:
    if (ctx->pc == 0x237BD8u) {
        ctx->pc = 0x237BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BD4u;
        // 0x237bd8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BDCu;
        goto label_237bdc;
    }
    ctx->pc = 0x237BD4u;
    SET_GPR_U32(ctx, 31, 0x237BDCu);
    ctx->pc = 0x237BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BD4u;
    // 0x237bd8: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x237BD4u, 0x237BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BDCu;
label_237bdc:
    // 0x237bdc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x237bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237be0:
    // 0x237be0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x237be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_237be4:
    // 0x237be4: 0xa602056c  sh          $v0, 0x56C($s0)
    ctx->pc = 0x237be4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1388), (uint16_t)GPR_U32(ctx, 2));
label_237be8:
    // 0x237be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x237be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_237bec:
    // 0x237bec: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x237becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_237bf0:
    // 0x237bf0: 0xc055f06  jal         func_157C18
label_237bf4:
    if (ctx->pc == 0x237BF4u) {
        ctx->pc = 0x237BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF0u;
        // 0x237bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237BF8u;
        goto label_237bf8;
    }
    ctx->pc = 0x237BF0u;
    SET_GPR_U32(ctx, 31, 0x237BF8u);
    ctx->pc = 0x237BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BF0u;
    // 0x237bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x237BF0u, 0x237BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BF8u;
label_237bf8:
    // 0x237bf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_237bfc:
    if (ctx->pc == 0x237BFCu) {
        ctx->pc = 0x237BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF8u;
        // 0x237bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C00u;
        goto label_237c00;
    }
    ctx->pc = 0x237BF8u;
    {
        const bool branch_taken_0x237bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BF8u;
        // 0x237bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf8) {
            ctx->pc = 0x237C10u;
            goto label_237c10;
        }
    }
    ctx->pc = 0x237C00u;
label_237c00:
    // 0x237c00: 0xc09d3fa  jal         func_274FE8
label_237c04:
    if (ctx->pc == 0x237C04u) {
        ctx->pc = 0x237C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C00u;
        // 0x237c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C08u;
        goto label_237c08;
    }
    ctx->pc = 0x237C00u;
    SET_GPR_U32(ctx, 31, 0x237C08u);
    ctx->pc = 0x237C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C00u;
    // 0x237c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x237C00u, 0x237C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C08u;
label_237c08:
    // 0x237c08: 0x1000009b  b           . + 4 + (0x9B << 2)
label_237c0c:
    if (ctx->pc == 0x237C0Cu) {
        ctx->pc = 0x237C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C08u;
        // 0x237c0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C10u;
        goto label_237c10;
    }
    ctx->pc = 0x237C08u;
    {
        const bool branch_taken_0x237c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C08u;
        // 0x237c0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c08) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237C10u;
label_237c10:
    // 0x237c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237c14:
    // 0x237c14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_237c18:
    // 0x237c18: 0xc053e7c  jal         func_14F9F0
label_237c1c:
    if (ctx->pc == 0x237C1Cu) {
        ctx->pc = 0x237C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C18u;
        // 0x237c1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C20u;
        goto label_237c20;
    }
    ctx->pc = 0x237C18u;
    SET_GPR_U32(ctx, 31, 0x237C20u);
    ctx->pc = 0x237C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C18u;
    // 0x237c1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237C18u, 0x237C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C20u;
label_237c20:
    // 0x237c20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x237c20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_237c24:
    // 0x237c24: 0xc053e4a  jal         func_14F928
label_237c28:
    if (ctx->pc == 0x237C28u) {
        ctx->pc = 0x237C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C24u;
        // 0x237c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C2Cu;
        goto label_237c2c;
    }
    ctx->pc = 0x237C24u;
    SET_GPR_U32(ctx, 31, 0x237C2Cu);
    ctx->pc = 0x237C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C24u;
    // 0x237c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237C24u, 0x237C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C2Cu;
label_237c2c:
    // 0x237c2c: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x237c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_237c30:
    // 0x237c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_237c34:
    if (ctx->pc == 0x237C34u) {
        ctx->pc = 0x237C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C30u;
        // 0x237c34: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C38u;
        goto label_237c38;
    }
    ctx->pc = 0x237C30u;
    {
        const bool branch_taken_0x237c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C30u;
        // 0x237c34: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c30) {
            ctx->pc = 0x237C44u;
            goto label_237c44;
        }
    }
    ctx->pc = 0x237C38u;
label_237c38:
    // 0x237c38: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x237c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_237c3c:
    // 0x237c3c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_237c40:
    if (ctx->pc == 0x237C40u) {
        ctx->pc = 0x237C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C3Cu;
        // 0x237c40: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C44u;
        goto label_237c44;
    }
    ctx->pc = 0x237C3Cu;
    {
        const bool branch_taken_0x237c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C3Cu;
        // 0x237c40: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c3c) {
            ctx->pc = 0x237D68u;
            goto label_237d68;
        }
    }
    ctx->pc = 0x237C44u;
label_237c44:
    // 0x237c44: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x237c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_237c48:
    // 0x237c48: 0x58400048  blezl       $v0, . + 4 + (0x48 << 2)
label_237c4c:
    if (ctx->pc == 0x237C4Cu) {
        ctx->pc = 0x237C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C48u;
        // 0x237c4c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C50u;
        goto label_237c50;
    }
    ctx->pc = 0x237C48u;
    {
        const bool branch_taken_0x237c48 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x237c48) {
            ctx->pc = 0x237C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C48u;
            // 0x237c4c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D6Cu;
            goto label_237d6c;
        }
    }
    ctx->pc = 0x237C50u;
label_237c50:
    // 0x237c50: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x237c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_237c54:
    // 0x237c54: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_237c58:
    if (ctx->pc == 0x237C58u) {
        ctx->pc = 0x237C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C54u;
        // 0x237c58: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C5Cu;
        goto label_237c5c;
    }
    ctx->pc = 0x237C54u;
    {
        const bool branch_taken_0x237c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c54) {
            ctx->pc = 0x237C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C54u;
            // 0x237c58: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D6Cu;
            goto label_237d6c;
        }
    }
    ctx->pc = 0x237C5Cu;
label_237c5c:
    // 0x237c5c: 0x8603056c  lh          $v1, 0x56C($s0)
    ctx->pc = 0x237c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1388)));
label_237c60:
    // 0x237c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237c64:
    // 0x237c64: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_237c68:
    if (ctx->pc == 0x237C68u) {
        ctx->pc = 0x237C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C64u;
        // 0x237c68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C6Cu;
        goto label_237c6c;
    }
    ctx->pc = 0x237C64u;
    {
        const bool branch_taken_0x237c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C64u;
        // 0x237c68: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c64) {
            ctx->pc = 0x237CB8u;
            goto label_237cb8;
        }
    }
    ctx->pc = 0x237C6Cu;
label_237c6c:
    // 0x237c6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_237c70:
    if (ctx->pc == 0x237C70u) {
        ctx->pc = 0x237C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C6Cu;
        // 0x237c70: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C74u;
        goto label_237c74;
    }
    ctx->pc = 0x237C6Cu;
    {
        const bool branch_taken_0x237c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c6c) {
            ctx->pc = 0x237C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C6Cu;
            // 0x237c70: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C88u;
            goto label_237c88;
        }
    }
    ctx->pc = 0x237C74u;
label_237c74:
    // 0x237c74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x237c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237c78:
    // 0x237c78: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_237c7c:
    if (ctx->pc == 0x237C7Cu) {
        ctx->pc = 0x237C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C78u;
        // 0x237c7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C80u;
        goto label_237c80;
    }
    ctx->pc = 0x237C78u;
    {
        const bool branch_taken_0x237c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C78u;
        // 0x237c7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c78) {
            ctx->pc = 0x237CECu;
            goto label_237cec;
        }
    }
    ctx->pc = 0x237C80u;
label_237c80:
    // 0x237c80: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_237c84:
    if (ctx->pc == 0x237C84u) {
        ctx->pc = 0x237C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C80u;
        // 0x237c84: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C88u;
        goto label_237c88;
    }
    ctx->pc = 0x237C80u;
    {
        const bool branch_taken_0x237c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C80u;
        // 0x237c84: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c80) {
            ctx->pc = 0x237D30u;
            goto label_237d30;
        }
    }
    ctx->pc = 0x237C88u;
label_237c88:
    // 0x237c88: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x237c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_237c8c:
    // 0x237c8c: 0x304200d0  andi        $v0, $v0, 0xD0
    ctx->pc = 0x237c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)208);
label_237c90:
    // 0x237c90: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_237c94:
    if (ctx->pc == 0x237C94u) {
        ctx->pc = 0x237C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C90u;
        // 0x237c94: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C98u;
        goto label_237c98;
    }
    ctx->pc = 0x237C90u;
    {
        const bool branch_taken_0x237c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c90) {
            ctx->pc = 0x237C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C90u;
            // 0x237c94: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C98u;
            goto label_237c98;
        }
    }
    ctx->pc = 0x237C98u;
label_237c98:
    // 0x237c98: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237c9c:
    // 0x237c9c: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x237c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_237ca0:
    // 0x237ca0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x237ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_237ca4:
    // 0x237ca4: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x237ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_237ca8:
    // 0x237ca8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x237ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237cac:
    // 0x237cac: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237cb0:
    // 0x237cb0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_237cb4:
    if (ctx->pc == 0x237CB4u) {
        ctx->pc = 0x237CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CB0u;
        // 0x237cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CB8u;
        goto label_237cb8;
    }
    ctx->pc = 0x237CB0u;
    {
        const bool branch_taken_0x237cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CB0u;
        // 0x237cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cb0) {
            ctx->pc = 0x237D1Cu;
            goto label_237d1c;
        }
    }
    ctx->pc = 0x237CB8u;
label_237cb8:
    // 0x237cb8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x237cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_237cbc:
    // 0x237cbc: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x237cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_237cc0:
    // 0x237cc0: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x237cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
label_237cc4:
    // 0x237cc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_237cc8:
    if (ctx->pc == 0x237CC8u) {
        ctx->pc = 0x237CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CC4u;
        // 0x237cc8: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CCCu;
        goto label_237ccc;
    }
    ctx->pc = 0x237CC4u;
    {
        const bool branch_taken_0x237cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237cc4) {
            ctx->pc = 0x237CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237CC4u;
            // 0x237cc8: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CCCu;
            goto label_237ccc;
        }
    }
    ctx->pc = 0x237CCCu;
label_237ccc:
    // 0x237ccc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237cd0:
    // 0x237cd0: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x237cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_237cd4:
    // 0x237cd4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x237cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_237cd8:
    // 0x237cd8: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x237cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_237cdc:
    // 0x237cdc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x237cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237ce0:
    // 0x237ce0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237ce4:
    // 0x237ce4: 0x1000000d  b           . + 4 + (0xD << 2)
label_237ce8:
    if (ctx->pc == 0x237CE8u) {
        ctx->pc = 0x237CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CE4u;
        // 0x237ce8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CECu;
        goto label_237cec;
    }
    ctx->pc = 0x237CE4u;
    {
        const bool branch_taken_0x237ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CE4u;
        // 0x237ce8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ce4) {
            ctx->pc = 0x237D1Cu;
            goto label_237d1c;
        }
    }
    ctx->pc = 0x237CECu;
label_237cec:
    // 0x237cec: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x237cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_237cf0:
    // 0x237cf0: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x237cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_237cf4:
    // 0x237cf4: 0x304200b0  andi        $v0, $v0, 0xB0
    ctx->pc = 0x237cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)176);
label_237cf8:
    // 0x237cf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_237cfc:
    if (ctx->pc == 0x237CFCu) {
        ctx->pc = 0x237CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CF8u;
        // 0x237cfc: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D00u;
        goto label_237d00;
    }
    ctx->pc = 0x237CF8u;
    {
        const bool branch_taken_0x237cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237cf8) {
            ctx->pc = 0x237CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237CF8u;
            // 0x237cfc: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D00u;
            goto label_237d00;
        }
    }
    ctx->pc = 0x237D00u;
label_237d00:
    // 0x237d00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237d04:
    // 0x237d04: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x237d04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_237d08:
    // 0x237d08: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x237d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_237d0c:
    // 0x237d0c: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x237d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_237d10:
    // 0x237d10: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x237d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237d14:
    // 0x237d14: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237d18:
    // 0x237d18: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x237d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237d1c:
    // 0x237d1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237d20:
    // 0x237d20: 0xc07de16  jal         func_1F7858
label_237d24:
    if (ctx->pc == 0x237D24u) {
        ctx->pc = 0x237D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D20u;
        // 0x237d24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D28u;
        goto label_237d28;
    }
    ctx->pc = 0x237D20u;
    SET_GPR_U32(ctx, 31, 0x237D28u);
    ctx->pc = 0x237D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D20u;
    // 0x237d24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x237D20u, 0x237D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D28u;
label_237d28:
    // 0x237d28: 0x10000010  b           . + 4 + (0x10 << 2)
label_237d2c:
    if (ctx->pc == 0x237D2Cu) {
        ctx->pc = 0x237D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D28u;
        // 0x237d2c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D30u;
        goto label_237d30;
    }
    ctx->pc = 0x237D28u;
    {
        const bool branch_taken_0x237d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D28u;
        // 0x237d2c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d28) {
            ctx->pc = 0x237D6Cu;
            goto label_237d6c;
        }
    }
    ctx->pc = 0x237D30u;
label_237d30:
    // 0x237d30: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x237d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_237d34:
    // 0x237d34: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x237d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
label_237d38:
    // 0x237d38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_237d3c:
    if (ctx->pc == 0x237D3Cu) {
        ctx->pc = 0x237D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D38u;
        // 0x237d3c: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D40u;
        goto label_237d40;
    }
    ctx->pc = 0x237D38u;
    {
        const bool branch_taken_0x237d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237d38) {
            ctx->pc = 0x237D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D38u;
            // 0x237d3c: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D40u;
            goto label_237d40;
        }
    }
    ctx->pc = 0x237D40u;
label_237d40:
    // 0x237d40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237d44:
    // 0x237d44: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x237d44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_237d48:
    // 0x237d48: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x237d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_237d4c:
    // 0x237d4c: 0x250876c0  addiu       $t0, $t0, 0x76C0
    ctx->pc = 0x237d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30400));
label_237d50:
    // 0x237d50: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x237d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237d54:
    // 0x237d54: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x237d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_237d58:
    // 0x237d58: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x237d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_237d5c:
    // 0x237d5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x237d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237d60:
    // 0x237d60: 0xc07de16  jal         func_1F7858
label_237d64:
    if (ctx->pc == 0x237D64u) {
        ctx->pc = 0x237D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D60u;
        // 0x237d64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D68u;
        goto label_237d68;
    }
    ctx->pc = 0x237D60u;
    SET_GPR_U32(ctx, 31, 0x237D68u);
    ctx->pc = 0x237D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D60u;
    // 0x237d64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x237D60u, 0x237D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D68u;
label_237d68:
    // 0x237d68: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x237d68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_237d6c:
    // 0x237d6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x237d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_237d70:
    // 0x237d70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_237d74:
    if (ctx->pc == 0x237D74u) {
        ctx->pc = 0x237D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D70u;
        // 0x237d74: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D78u;
        goto label_237d78;
    }
    ctx->pc = 0x237D70u;
    {
        const bool branch_taken_0x237d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D70u;
        // 0x237d74: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d70) {
            ctx->pc = 0x237DA8u;
            goto label_237da8;
        }
    }
    ctx->pc = 0x237D78u;
label_237d78:
    // 0x237d78: 0x86030568  lh          $v1, 0x568($s0)
    ctx->pc = 0x237d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_237d7c:
    // 0x237d7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_237d80:
    if (ctx->pc == 0x237D80u) {
        ctx->pc = 0x237D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D7Cu;
        // 0x237d80: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D84u;
        goto label_237d84;
    }
    ctx->pc = 0x237D7Cu;
    {
        const bool branch_taken_0x237d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D7Cu;
        // 0x237d80: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d7c) {
            ctx->pc = 0x237D90u;
            goto label_237d90;
        }
    }
    ctx->pc = 0x237D84u;
label_237d84:
    // 0x237d84: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x237d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_237d88:
    // 0x237d88: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_237d8c:
    if (ctx->pc == 0x237D8Cu) {
        ctx->pc = 0x237D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D88u;
        // 0x237d8c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D90u;
        goto label_237d90;
    }
    ctx->pc = 0x237D88u;
    {
        const bool branch_taken_0x237d88 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x237d88) {
            ctx->pc = 0x237D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D88u;
            // 0x237d8c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DACu;
            goto label_237dac;
        }
    }
    ctx->pc = 0x237D90u;
label_237d90:
    // 0x237d90: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x237d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_237d94:
    // 0x237d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_237d98:
    // 0x237d98: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x237d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_237d9c:
    // 0x237d9c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x237d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237da0:
    // 0x237da0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_237da4:
    // 0x237da4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x237da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_237da8:
    // 0x237da8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x237da8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_237dac:
    // 0x237dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_237db0:
    // 0x237db0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_237db4:
    if (ctx->pc == 0x237DB4u) {
        ctx->pc = 0x237DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DB0u;
        // 0x237db4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DB8u;
        goto label_237db8;
    }
    ctx->pc = 0x237DB0u;
    {
        const bool branch_taken_0x237db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DB0u;
        // 0x237db4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237db0) {
            ctx->pc = 0x237E74u;
            goto label_237e74;
        }
    }
    ctx->pc = 0x237DB8u;
label_237db8:
    // 0x237db8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x237db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_237dbc:
    // 0x237dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237dc0:
    // 0x237dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237dc4:
    // 0x237dc4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x237dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_237dc8:
    // 0x237dc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237dc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237dcc:
    // 0x237dcc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x237dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_237dd0:
    // 0x237dd0: 0x40f809  jalr        $v0
label_237dd4:
    if (ctx->pc == 0x237DD4u) {
        ctx->pc = 0x237DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD0u;
        // 0x237dd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DD8u;
        goto label_237dd8;
    }
    ctx->pc = 0x237DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237DD8u);
        ctx->pc = 0x237DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD0u;
        // 0x237dd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237DD0u, 0x237DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237DD8u;
label_237dd8:
    // 0x237dd8: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x237dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_237ddc:
    // 0x237ddc: 0x5c600026  bgtzl       $v1, . + 4 + (0x26 << 2)
label_237de0:
    if (ctx->pc == 0x237DE0u) {
        ctx->pc = 0x237DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DDCu;
        // 0x237de0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DE4u;
        goto label_237de4;
    }
    ctx->pc = 0x237DDCu;
    {
        const bool branch_taken_0x237ddc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x237ddc) {
            ctx->pc = 0x237DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DDCu;
            // 0x237de0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237DE4u;
label_237de4:
    // 0x237de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237de8:
    // 0x237de8: 0x10000022  b           . + 4 + (0x22 << 2)
label_237dec:
    if (ctx->pc == 0x237DECu) {
        ctx->pc = 0x237DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DE8u;
        // 0x237dec: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DF0u;
        goto label_237df0;
    }
    ctx->pc = 0x237DE8u;
    {
        const bool branch_taken_0x237de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DE8u;
        // 0x237dec: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237de8) {
            ctx->pc = 0x237E74u;
            goto label_237e74;
        }
    }
    ctx->pc = 0x237DF0u;
label_237df0:
    // 0x237df0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x237df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_237df4:
    // 0x237df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237df8:
    // 0x237df8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_237dfc:
    // 0x237dfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237e00:
    // 0x237e00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x237e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237e04:
    // 0x237e04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237e08:
    // 0x237e08: 0x8c452120  lw          $a1, 0x2120($v0)
    ctx->pc = 0x237e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8480)));
label_237e0c:
    // 0x237e0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237e0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237e10:
    // 0x237e10: 0x8c462124  lw          $a2, 0x2124($v0)
    ctx->pc = 0x237e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8484)));
label_237e14:
    // 0x237e14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_237e18:
    // 0x237e18: 0xc0aa15e  jal         func_2A8578
label_237e1c:
    if (ctx->pc == 0x237E1Cu) {
        ctx->pc = 0x237E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E18u;
        // 0x237e1c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E20u;
        goto label_237e20;
    }
    ctx->pc = 0x237E18u;
    SET_GPR_U32(ctx, 31, 0x237E20u);
    ctx->pc = 0x237E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E18u;
    // 0x237e1c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x237E18u, 0x237E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E20u;
label_237e20:
    // 0x237e20: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x237e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_237e24:
    // 0x237e24: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x237e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_237e28:
    // 0x237e28: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x237e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
label_237e2c:
    // 0x237e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_237e30:
    // 0x237e30: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x237e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_237e34:
    // 0x237e34: 0xc055f06  jal         func_157C18
label_237e38:
    if (ctx->pc == 0x237E38u) {
        ctx->pc = 0x237E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E34u;
        // 0x237e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E3Cu;
        goto label_237e3c;
    }
    ctx->pc = 0x237E34u;
    SET_GPR_U32(ctx, 31, 0x237E3Cu);
    ctx->pc = 0x237E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E34u;
    // 0x237e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x237E34u, 0x237E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E3Cu;
label_237e3c:
    // 0x237e3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_237e40:
    if (ctx->pc == 0x237E40u) {
        ctx->pc = 0x237E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E3Cu;
        // 0x237e40: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E44u;
        goto label_237e44;
    }
    ctx->pc = 0x237E3Cu;
    {
        const bool branch_taken_0x237e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E3Cu;
        // 0x237e40: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e3c) {
            ctx->pc = 0x237E54u;
            goto label_237e54;
        }
    }
    ctx->pc = 0x237E44u;
label_237e44:
    // 0x237e44: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x237e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_237e48:
    // 0x237e48: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x237e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_237e4c:
    // 0x237e4c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x237e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_237e50:
    // 0x237e50: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x237e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_237e54:
    // 0x237e54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x237e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237e58:
    // 0x237e58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_237e5c:
    // 0x237e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237e60:
    // 0x237e60: 0xc053e7c  jal         func_14F9F0
label_237e64:
    if (ctx->pc == 0x237E64u) {
        ctx->pc = 0x237E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E60u;
        // 0x237e64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E68u;
        goto label_237e68;
    }
    ctx->pc = 0x237E60u;
    SET_GPR_U32(ctx, 31, 0x237E68u);
    ctx->pc = 0x237E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E60u;
    // 0x237e64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237E60u, 0x237E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E68u;
label_237e68:
    // 0x237e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237e6c:
    // 0x237e6c: 0xc053e4a  jal         func_14F928
label_237e70:
    if (ctx->pc == 0x237E70u) {
        ctx->pc = 0x237E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E6Cu;
        // 0x237e70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E74u;
        goto label_237e74;
    }
    ctx->pc = 0x237E6Cu;
    SET_GPR_U32(ctx, 31, 0x237E74u);
    ctx->pc = 0x237E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E6Cu;
    // 0x237e70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237E6Cu, 0x237E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E74u;
label_237e74:
    // 0x237e74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237e78:
    // 0x237e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237e7c:
    // 0x237e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237e80:
    // 0x237e80: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x237e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_237e84:
    // 0x237e84: 0x3e00008  jr          $ra
label_237e88:
    if (ctx->pc == 0x237E88u) {
        ctx->pc = 0x237E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E84u;
        // 0x237e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E8Cu;
        goto label_237e8c;
    }
    ctx->pc = 0x237E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E84u;
        // 0x237e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237E8Cu;
label_237e8c:
    // 0x237e8c: 0x0  nop
    ctx->pc = 0x237e8cu;
    // NOP
    ctx->pc = 0x237e90u;
}
