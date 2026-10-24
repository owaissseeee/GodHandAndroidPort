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

// Function: func_00122A50
// Address: 0x122a50 - 0x122c48
void func_00122A50_0x122a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00122A50_0x122a50");
#endif

    switch (ctx->pc) {
        case 0x122a90u: goto label_122a90;
        case 0x122aa0u: goto label_122aa0;
        case 0x122aacu: goto label_122aac;
        case 0x122aecu: goto label_122aec;
        case 0x122af4u: goto label_122af4;
        case 0x122b60u: goto label_122b60;
        case 0x122b74u: goto label_122b74;
        case 0x122b7cu: goto label_122b7c;
        case 0x122ba4u: goto label_122ba4;
        case 0x122bb0u: goto label_122bb0;
        case 0x122bccu: goto label_122bcc;
        case 0x122be0u: goto label_122be0;
        case 0x122be8u: goto label_122be8;
        case 0x122bfcu: goto label_122bfc;
        case 0x122c20u: goto label_122c20;
        case 0x122c2cu: goto label_122c2c;
        default: break;
    }

    ctx->pc = 0x122a50u;

    // 0x122a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122a54: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x122a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x122a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122a5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x122a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x122a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x122a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x122a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122a70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x122a74: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x122a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x122a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x122a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x122a80: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x122a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x122a84: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x122a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x122a88: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x122A88u;
    SET_GPR_U32(ctx, 31, 0x122A90u);
    ctx->pc = 0x122A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A88u;
    // 0x122a8c: 0x8e320694  lw          $s2, 0x694($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x122A88u, 0x122A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A90u;
label_122a90:
    // 0x122a90: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x122a90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x122a94: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x122a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x122a98: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x122A98u;
    SET_GPR_U32(ctx, 31, 0x122AA0u);
    ctx->pc = 0x122A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A98u;
    // 0x122a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x122A98u, 0x122AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AA0u;
label_122aa0:
    // 0x122aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122aa4: 0xc0a480c  jal         func_292030
    ctx->pc = 0x122AA4u;
    SET_GPR_U32(ctx, 31, 0x122AACu);
    ctx->pc = 0x122AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AA4u;
    // 0x122aa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x122AA4u, 0x122AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AACu;
label_122aac:
    // 0x122aac: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x122aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x122ab0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x122ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x122ab4: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x122ab4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122ab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x122ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x122abc: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x122abcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x122ac0: 0x1080005a  beqz        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x122AC0u;
    {
        const bool branch_taken_0x122ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AC0u;
        // 0x122ac4: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ac0) {
            ctx->pc = 0x122C2Cu;
            goto label_122c2c;
        }
    }
    ctx->pc = 0x122AC8u;
    // 0x122ac8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x122ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x122acc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x122accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x122ad0: 0x2442c770  addiu       $v0, $v0, -0x3890
    ctx->pc = 0x122ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
    // 0x122ad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x122ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122ad8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x122ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122adc: 0x800008  jr          $a0
    ctx->pc = 0x122ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AE4u: goto label_122ae4;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BD8u: goto label_122bd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122ADCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122AE4u;
label_122ae4:
    // 0x122ae4: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x122AE4u;
    SET_GPR_U32(ctx, 31, 0x122AECu);
    ctx->pc = 0x122AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AE4u;
    // 0x122ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x122AE4u, 0x122AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AECu;
label_122aec:
    // 0x122aec: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x122AECu;
    SET_GPR_U32(ctx, 31, 0x122AF4u);
    ctx->pc = 0x122AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AECu;
    // 0x122af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x122AECu, 0x122AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AF4u;
label_122af4:
    // 0x122af4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x122AF4u;
    {
        const bool branch_taken_0x122af4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x122af4) {
            ctx->pc = 0x122B2Cu;
            goto label_122b2c;
        }
    }
    ctx->pc = 0x122AFCu;
    // 0x122afc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x122afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x122b00: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x122b04: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122B04u;
    {
        const bool branch_taken_0x122b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x122b04) {
            ctx->pc = 0x122B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122B04u;
            // 0x122b08: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B28u;
            goto label_122b28;
        }
    }
    ctx->pc = 0x122B0Cu;
    // 0x122b0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x122b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122b10: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x122b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x122b14: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x122b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122b18: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x122b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x122b1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x122b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122b20: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x122b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x122b24: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x122b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122b28:
    // 0x122b28: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x122b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_122b2c:
    // 0x122b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x122b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x122B34u;
    {
        const bool branch_taken_0x122b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B34u;
        // 0x122b38: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b34) {
            ctx->pc = 0x122B58u;
            goto label_122b58;
        }
    }
    ctx->pc = 0x122B3Cu;
label_122b3c:
    // 0x122b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x122b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122B44u;
    {
        const bool branch_taken_0x122b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B44u;
        // 0x122b48: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b44) {
            ctx->pc = 0x122B58u;
            goto label_122b58;
        }
    }
    ctx->pc = 0x122B4Cu;
label_122b4c:
    // 0x122b4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x122b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b54: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_122b58:
    // 0x122b58: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x122B58u;
    SET_GPR_U32(ctx, 31, 0x122B60u);
    ctx->pc = 0x122B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B58u;
    // 0x122b5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x122B58u, 0x122B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B60u;
label_122b60:
    // 0x122b60: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122b68: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122b68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_122b6c:
    // 0x122b6c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x122B6Cu;
    SET_GPR_U32(ctx, 31, 0x122B74u);
    ctx->pc = 0x122B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B6Cu;
    // 0x122b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x122B6Cu, 0x122B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B74u;
label_122b74:
    // 0x122b74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x122B74u;
    SET_GPR_U32(ctx, 31, 0x122B7Cu);
    ctx->pc = 0x122B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B74u;
    // 0x122b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x122B74u, 0x122B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B7Cu;
label_122b7c:
    // 0x122b7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122B7Cu;
    {
        const bool branch_taken_0x122b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b7c) {
            ctx->pc = 0x122B90u;
            goto label_122b90;
        }
    }
    ctx->pc = 0x122B84u;
    // 0x122b84: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122b8c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_122b90:
    // 0x122b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122b94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b9c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x122B9Cu;
    SET_GPR_U32(ctx, 31, 0x122BA4u);
    ctx->pc = 0x122BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B9Cu;
    // 0x122ba0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x122B9Cu, 0x122BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BA4u;
label_122ba4:
    // 0x122ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ba8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x122BA8u;
    SET_GPR_U32(ctx, 31, 0x122BB0u);
    ctx->pc = 0x122BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BA8u;
    // 0x122bac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x122BA8u, 0x122BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BB0u;
label_122bb0:
    // 0x122bb0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x122BB0u;
    {
        const bool branch_taken_0x122bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BB0u;
        // 0x122bb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bb0) {
            ctx->pc = 0x122C30u;
            goto label_122c30;
        }
    }
    ctx->pc = 0x122BB8u;
label_122bb8:
    // 0x122bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x122bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bc0: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x122bc4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x122BC4u;
    SET_GPR_U32(ctx, 31, 0x122BCCu);
    ctx->pc = 0x122BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BC4u;
    // 0x122bc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x122BC4u, 0x122BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BCCu;
label_122bcc:
    // 0x122bcc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122bd4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_122bd8:
    // 0x122bd8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x122BD8u;
    SET_GPR_U32(ctx, 31, 0x122BE0u);
    ctx->pc = 0x122BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BD8u;
    // 0x122bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x122BD8u, 0x122BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BE0u;
label_122be0:
    // 0x122be0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x122BE0u;
    SET_GPR_U32(ctx, 31, 0x122BE8u);
    ctx->pc = 0x122BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BE0u;
    // 0x122be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x122BE0u, 0x122BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BE8u;
label_122be8:
    // 0x122be8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122BE8u;
    {
        const bool branch_taken_0x122be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BE8u;
        // 0x122bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122be8) {
            ctx->pc = 0x122C0Cu;
            goto label_122c0c;
        }
    }
    ctx->pc = 0x122BF0u;
    // 0x122bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bf4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x122BF4u;
    SET_GPR_U32(ctx, 31, 0x122BFCu);
    ctx->pc = 0x122BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BF4u;
    // 0x122bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x122BF4u, 0x122BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BFCu;
label_122bfc:
    // 0x122bfc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x122bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x122c00: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x122c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x122c04: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x122c04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x122c08: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x122c08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_122c0c:
    // 0x122c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122c10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c18: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x122C18u;
    SET_GPR_U32(ctx, 31, 0x122C20u);
    ctx->pc = 0x122C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C18u;
    // 0x122c1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x122C18u, 0x122C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C20u;
label_122c20:
    // 0x122c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c24: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x122C24u;
    SET_GPR_U32(ctx, 31, 0x122C2Cu);
    ctx->pc = 0x122C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C24u;
    // 0x122c28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x122C24u, 0x122C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C2Cu;
label_122c2c:
    // 0x122c2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x122c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122c30:
    // 0x122c30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x122c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122c34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x122c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c3c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x122c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122c40: 0x3e00008  jr          $ra
    ctx->pc = 0x122C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C40u;
        // 0x122c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122C48u;
}
