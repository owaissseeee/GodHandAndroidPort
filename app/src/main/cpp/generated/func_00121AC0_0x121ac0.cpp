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

// Function: func_00121AC0
// Address: 0x121ac0 - 0x121e88
void func_00121AC0_0x121ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00121AC0_0x121ac0");
#endif

    switch (ctx->pc) {
        case 0x121b04u: goto label_121b04;
        case 0x121b10u: goto label_121b10;
        case 0x121ba4u: goto label_121ba4;
        case 0x121bb8u: goto label_121bb8;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bc8u: goto label_121bc8;
        case 0x121c18u: goto label_121c18;
        case 0x121c20u: goto label_121c20;
        case 0x121c40u: goto label_121c40;
        case 0x121c80u: goto label_121c80;
        case 0x121c8cu: goto label_121c8c;
        case 0x121cbcu: goto label_121cbc;
        case 0x121ce4u: goto label_121ce4;
        case 0x121d20u: goto label_121d20;
        case 0x121d28u: goto label_121d28;
        case 0x121d34u: goto label_121d34;
        case 0x121d68u: goto label_121d68;
        case 0x121d74u: goto label_121d74;
        case 0x121dc8u: goto label_121dc8;
        case 0x121ddcu: goto label_121ddc;
        case 0x121decu: goto label_121dec;
        case 0x121e00u: goto label_121e00;
        case 0x121e08u: goto label_121e08;
        case 0x121e1cu: goto label_121e1c;
        case 0x121e40u: goto label_121e40;
        case 0x121e4cu: goto label_121e4c;
        case 0x121e58u: goto label_121e58;
        case 0x121e6cu: goto label_121e6c;
        default: break;
    }

    ctx->pc = 0x121ac0u;

    // 0x121ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x121ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x121ac4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x121ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x121ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121acc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x121accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x121ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x121adc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121ae0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x121ae4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x121ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x121ae8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x121ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x121aec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x121aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x121af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121af4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x121af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x121af8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x121af8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121afc: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x121AFCu;
    SET_GPR_U32(ctx, 31, 0x121B04u);
    ctx->pc = 0x121B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AFCu;
    // 0x121b00: 0x8e300694  lw          $s0, 0x694($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x121AFCu, 0x121B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B04u;
label_121b04:
    // 0x121b04: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x121b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x121b08: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x121B08u;
    SET_GPR_U32(ctx, 31, 0x121B10u);
    ctx->pc = 0x121B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B08u;
    // 0x121b0c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x121B08u, 0x121B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B10u;
label_121b10:
    // 0x121b10: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x121b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x121b14: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x121b18: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x121b18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x121b1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121b20: 0x1092002f  beq         $a0, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x121B20u;
    {
        const bool branch_taken_0x121b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x121B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B20u;
        // 0x121b24: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b20) {
            ctx->pc = 0x121BE0u;
            goto label_121be0;
        }
    }
    ctx->pc = 0x121B28u;
    // 0x121b28: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x121b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x121b2c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x121B2Cu;
    {
        const bool branch_taken_0x121b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b2c) {
            ctx->pc = 0x121B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B2Cu;
            // 0x121b30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B44u;
            goto label_121b44;
        }
    }
    ctx->pc = 0x121B34u;
    // 0x121b34: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x121B34u;
    {
        const bool branch_taken_0x121b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b34) {
            ctx->pc = 0x121B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B34u;
            // 0x121b38: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B5Cu;
            goto label_121b5c;
        }
    }
    ctx->pc = 0x121B3Cu;
    // 0x121b3c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x121B3Cu;
    {
        const bool branch_taken_0x121b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B3Cu;
        // 0x121b40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b3c) {
            ctx->pc = 0x121E70u;
            goto label_121e70;
        }
    }
    ctx->pc = 0x121B44u;
label_121b44:
    // 0x121b44: 0x1082008d  beq         $a0, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x121B44u;
    {
        const bool branch_taken_0x121b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x121B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B44u;
        // 0x121b48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b44) {
            ctx->pc = 0x121D7Cu;
            goto label_121d7c;
        }
    }
    ctx->pc = 0x121B4Cu;
    // 0x121b4c: 0x108200aa  beq         $a0, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x121B4Cu;
    {
        const bool branch_taken_0x121b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x121B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B4Cu;
        // 0x121b50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b4c) {
            ctx->pc = 0x121DF8u;
            goto label_121df8;
        }
    }
    ctx->pc = 0x121B54u;
    // 0x121b54: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x121B54u;
    {
        const bool branch_taken_0x121b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B54u;
        // 0x121b58: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b54) {
            ctx->pc = 0x121E74u;
            goto label_121e74;
        }
    }
    ctx->pc = 0x121B5Cu;
label_121b5c:
    // 0x121b5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x121b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b60: 0x3c013dfd  lui         $at, 0x3DFD
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15869 << 16));
    // 0x121b64: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x121b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
    // 0x121b68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121b6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b70: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x121b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b78: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x121b7c: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x121b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x121b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121b8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121b90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121b94: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x121b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121b98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121b9c: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x121B9Cu;
    SET_GPR_U32(ctx, 31, 0x121BA4u);
    ctx->pc = 0x121BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B9Cu;
    // 0x121ba0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x121B9Cu, 0x121BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BA4u;
label_121ba4:
    // 0x121ba4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121ba4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121ba8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x121ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x121bac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x121bacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x121bb0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121BB0u;
    SET_GPR_U32(ctx, 31, 0x121BB8u);
    ctx->pc = 0x121BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BB0u;
    // 0x121bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121BB0u, 0x121BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BB8u;
label_121bb8:
    // 0x121bb8: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x121BB8u;
    SET_GPR_U32(ctx, 31, 0x121BC0u);
    ctx->pc = 0x121BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BB8u;
    // 0x121bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x121BB8u, 0x121BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BC0u;
label_121bc0:
    // 0x121bc0: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x121BC0u;
    SET_GPR_U32(ctx, 31, 0x121BC8u);
    ctx->pc = 0x121BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BC0u;
    // 0x121bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x121BC0u, 0x121BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BC8u;
label_121bc8:
    // 0x121bc8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x121bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x121bcc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x121bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121bd0: 0xae3215b0  sw          $s2, 0x15B0($s1)
    ctx->pc = 0x121bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 18));
    // 0x121bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121bd8: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x121bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x121bdc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x121bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_121be0:
    // 0x121be0: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x121be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x121be4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x121BE4u;
    {
        const bool branch_taken_0x121be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE4u;
        // 0x121be8: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121be4) {
            ctx->pc = 0x121C10u;
            goto label_121c10;
        }
    }
    ctx->pc = 0x121BECu;
    // 0x121bec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121BECu;
    {
        const bool branch_taken_0x121bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BECu;
        // 0x121bf0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bec) {
            ctx->pc = 0x121C10u;
            goto label_121c10;
        }
    }
    ctx->pc = 0x121BF4u;
    // 0x121bf4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x121bf8: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x121bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x121bfc: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x121bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x121c00: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x121c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121c04: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x121c04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121c08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x121c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x121c0c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x121c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_121c10:
    // 0x121c10: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121C10u;
    SET_GPR_U32(ctx, 31, 0x121C18u);
    ctx->pc = 0x121C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C10u;
    // 0x121c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121C10u, 0x121C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C18u;
label_121c18:
    // 0x121c18: 0xc055f06  jal         func_157C18
    ctx->pc = 0x121C18u;
    SET_GPR_U32(ctx, 31, 0x121C20u);
    ctx->pc = 0x121C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C18u;
    // 0x121c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x121C18u, 0x121C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C20u;
label_121c20:
    // 0x121c20: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x121C20u;
    {
        const bool branch_taken_0x121c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c20) {
            ctx->pc = 0x121C6Cu;
            goto label_121c6c;
        }
    }
    ctx->pc = 0x121C28u;
    // 0x121c28: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x121c2c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121C2Cu;
    {
        const bool branch_taken_0x121c2c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x121C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C2Cu;
        // 0x121c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c2c) {
            ctx->pc = 0x121C5Cu;
            goto label_121c5c;
        }
    }
    ctx->pc = 0x121C34u;
    // 0x121c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c38: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121C38u;
    SET_GPR_U32(ctx, 31, 0x121C40u);
    ctx->pc = 0x121C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C38u;
    // 0x121c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121C38u, 0x121C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C40u;
label_121c40:
    // 0x121c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121c44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x121c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121c48: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x121c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x121c4c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x121c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x121c50: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x121c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x121C54u;
    {
        const bool branch_taken_0x121c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C54u;
        // 0x121c58: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c54) {
            ctx->pc = 0x121C6Cu;
            goto label_121c6c;
        }
    }
    ctx->pc = 0x121C5Cu;
label_121c5c:
    // 0x121c5c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x121c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x121c60: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x121c64: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x121c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121c68: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x121c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_121c6c:
    // 0x121c6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121c70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x121c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c78: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x121C78u;
    SET_GPR_U32(ctx, 31, 0x121C80u);
    ctx->pc = 0x121C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C78u;
    // 0x121c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121C78u, 0x121C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C80u;
label_121c80:
    // 0x121c80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121c80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121c84: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x121C84u;
    SET_GPR_U32(ctx, 31, 0x121C8Cu);
    ctx->pc = 0x121C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C84u;
    // 0x121c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121C84u, 0x121C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C8Cu;
label_121c8c:
    // 0x121c8c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x121c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x121c90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121c94: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x121C94u;
    {
        const bool branch_taken_0x121c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c94) {
            ctx->pc = 0x121C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121C94u;
            // 0x121c98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121E70u;
            goto label_121e70;
        }
    }
    ctx->pc = 0x121C9Cu;
    // 0x121c9c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x121c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x121ca0: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x121CA0u;
    {
        const bool branch_taken_0x121ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CA0u;
        // 0x121ca4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ca0) {
            ctx->pc = 0x121E6Cu;
            goto label_121e6c;
        }
    }
    ctx->pc = 0x121CA8u;
    // 0x121ca8: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x121ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x121cac: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x121cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x121cb0: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x121cb4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x121CB4u;
    SET_GPR_U32(ctx, 31, 0x121CBCu);
    ctx->pc = 0x121CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CB4u;
    // 0x121cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x121CB4u, 0x121CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CBCu;
label_121cbc:
    // 0x121cbc: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x121CBCu;
    {
        const bool branch_taken_0x121cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x121cbc) {
            ctx->pc = 0x121CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121CBCu;
            // 0x121cc0: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121CE8u;
            goto label_121ce8;
        }
    }
    ctx->pc = 0x121CC4u;
    // 0x121cc4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x121cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x121cc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121ccc: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x121cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121cd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x121cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x121cd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121cd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x121cd8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x121cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x121cdc: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x121CDCu;
    SET_GPR_U32(ctx, 31, 0x121CE4u);
    ctx->pc = 0x121CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CDCu;
    // 0x121ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x121CDCu, 0x121CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CE4u;
label_121ce4:
    // 0x121ce4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x121ce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_121ce8:
    // 0x121ce8: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x121CE8u;
    {
        const bool branch_taken_0x121ce8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x121CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CE8u;
        // 0x121cec: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ce8) {
            ctx->pc = 0x121D44u;
            goto label_121d44;
        }
    }
    ctx->pc = 0x121CF0u;
    // 0x121cf0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x121cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x121cf4: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x121cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x121cf8: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x121cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x121cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d00: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x121d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x121d04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x121d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x121d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x121d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x121d10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x121d14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d18: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x121D18u;
    SET_GPR_U32(ctx, 31, 0x121D20u);
    ctx->pc = 0x121D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D18u;
    // 0x121d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x121D18u, 0x121D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D20u;
label_121d20:
    // 0x121d20: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x121D20u;
    SET_GPR_U32(ctx, 31, 0x121D28u);
    ctx->pc = 0x121D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D20u;
    // 0x121d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x121D20u, 0x121D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D28u;
label_121d28:
    // 0x121d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d2c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x121D2Cu;
    SET_GPR_U32(ctx, 31, 0x121D34u);
    ctx->pc = 0x121D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D2Cu;
    // 0x121d30: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x121D2Cu, 0x121D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D34u;
label_121d34:
    // 0x121d34: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x121d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x121d38: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x121d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121d3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x121D3Cu;
    {
        const bool branch_taken_0x121d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D3Cu;
        // 0x121d40: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d3c) {
            ctx->pc = 0x121D68u;
            goto label_121d68;
        }
    }
    ctx->pc = 0x121D44u;
label_121d44:
    // 0x121d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d48: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x121d4c: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x121d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x121d50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x121d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x121d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x121d58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x121d5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d60: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x121D60u;
    SET_GPR_U32(ctx, 31, 0x121D68u);
    ctx->pc = 0x121D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D60u;
    // 0x121d64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x121D60u, 0x121D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D68u;
label_121d68:
    // 0x121d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d6c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x121D6Cu;
    SET_GPR_U32(ctx, 31, 0x121D74u);
    ctx->pc = 0x121D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D6Cu;
    // 0x121d70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x121D6Cu, 0x121D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D74u;
label_121d74:
    // 0x121d74: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x121D74u;
    {
        const bool branch_taken_0x121d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D74u;
        // 0x121d78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d74) {
            ctx->pc = 0x121E70u;
            goto label_121e70;
        }
    }
    ctx->pc = 0x121D7Cu;
label_121d7c:
    // 0x121d7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x121d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x121d80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x121d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d84: 0x3c01bc83  lui         $at, 0xBC83
    ctx->pc = 0x121d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48259 << 16));
    // 0x121d88: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x121d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x121d8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d94: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x121d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d9c: 0x3c013e54  lui         $at, 0x3E54
    ctx->pc = 0x121d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15956 << 16));
    // 0x121da0: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x121da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x121da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121db4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121db4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121db8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x121db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121dbc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121dc0: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x121DC0u;
    SET_GPR_U32(ctx, 31, 0x121DC8u);
    ctx->pc = 0x121DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DC0u;
    // 0x121dc4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x121DC0u, 0x121DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DC8u;
label_121dc8:
    // 0x121dc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x121dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dd0: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x121dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x121dd4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121DD4u;
    SET_GPR_U32(ctx, 31, 0x121DDCu);
    ctx->pc = 0x121DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DD4u;
    // 0x121dd8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121DD4u, 0x121DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DDCu;
label_121ddc:
    // 0x121ddc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x121ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x121de0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x121de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x121de4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x121DE4u;
    SET_GPR_U32(ctx, 31, 0x121DECu);
    ctx->pc = 0x121DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DE4u;
    // 0x121de8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x121DE4u, 0x121DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DECu;
label_121dec:
    // 0x121dec: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x121decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x121df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121df4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x121df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_121df8:
    // 0x121df8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121DF8u;
    SET_GPR_U32(ctx, 31, 0x121E00u);
    ctx->pc = 0x121DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DF8u;
    // 0x121dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121DF8u, 0x121E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E00u;
label_121e00:
    // 0x121e00: 0xc055f06  jal         func_157C18
    ctx->pc = 0x121E00u;
    SET_GPR_U32(ctx, 31, 0x121E08u);
    ctx->pc = 0x121E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E00u;
    // 0x121e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x121E00u, 0x121E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E08u;
label_121e08:
    // 0x121e08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121E08u;
    {
        const bool branch_taken_0x121e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E08u;
        // 0x121e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e08) {
            ctx->pc = 0x121E2Cu;
            goto label_121e2c;
        }
    }
    ctx->pc = 0x121E10u;
    // 0x121e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e14: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121E14u;
    SET_GPR_U32(ctx, 31, 0x121E1Cu);
    ctx->pc = 0x121E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E14u;
    // 0x121e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121E14u, 0x121E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E1Cu;
label_121e1c:
    // 0x121e1c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x121e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x121e20: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x121e20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x121e24: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x121e24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121e28: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x121e28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_121e2c:
    // 0x121e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121e30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x121e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x121E38u;
    SET_GPR_U32(ctx, 31, 0x121E40u);
    ctx->pc = 0x121E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E38u;
    // 0x121e3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121E38u, 0x121E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E40u;
label_121e40:
    // 0x121e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x121E44u;
    SET_GPR_U32(ctx, 31, 0x121E4Cu);
    ctx->pc = 0x121E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E44u;
    // 0x121e48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121E44u, 0x121E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E4Cu;
label_121e4c:
    // 0x121e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e50: 0xc048e4e  jal         func_123938
    ctx->pc = 0x121E50u;
    SET_GPR_U32(ctx, 31, 0x121E58u);
    ctx->pc = 0x121E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E50u;
    // 0x121e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x121E50u, 0x121E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E58u;
label_121e58:
    // 0x121e58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121E58u;
    {
        const bool branch_taken_0x121e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E58u;
        // 0x121e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e58) {
            ctx->pc = 0x121E6Cu;
            goto label_121e6c;
        }
    }
    ctx->pc = 0x121E60u;
    // 0x121e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e64: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121E64u;
    SET_GPR_U32(ctx, 31, 0x121E6Cu);
    ctx->pc = 0x121E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E64u;
    // 0x121e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121E64u, 0x121E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E6Cu;
label_121e6c:
    // 0x121e6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x121e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121e70:
    // 0x121e70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x121e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121e74:
    // 0x121e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121e7c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x121e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121e80: 0x3e00008  jr          $ra
    ctx->pc = 0x121E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E80u;
        // 0x121e84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121E88u;
}
