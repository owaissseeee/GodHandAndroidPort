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

// Function: func_001B3AB8
// Address: 0x1b3ab8 - 0x1b4068
void func_001B3AB8_0x1b3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B3AB8_0x1b3ab8");
#endif

    switch (ctx->pc) {
        case 0x1b3ae4u: goto label_1b3ae4;
        case 0x1b3b28u: goto label_1b3b28;
        case 0x1b3ba8u: goto label_1b3ba8;
        case 0x1b3bb4u: goto label_1b3bb4;
        case 0x1b3bd0u: goto label_1b3bd0;
        case 0x1b3c5cu: goto label_1b3c5c;
        case 0x1b3c80u: goto label_1b3c80;
        case 0x1b3ca0u: goto label_1b3ca0;
        case 0x1b3d20u: goto label_1b3d20;
        case 0x1b3d44u: goto label_1b3d44;
        case 0x1b3dc0u: goto label_1b3dc0;
        case 0x1b3e30u: goto label_1b3e30;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f6cu: goto label_1b3f6c;
        case 0x1b3f7cu: goto label_1b3f7c;
        case 0x1b3f98u: goto label_1b3f98;
        default: break;
    }

    ctx->pc = 0x1b3ab8u;

    // 0x1b3ab8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b3ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1b3abc: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1b3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1b3ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ac4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1b3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1b3ac8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1b3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1b3acc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1b3accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1b3ad0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1b3ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1b3ad4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1b3ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1b3ad8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1b3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1b3adc: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B3ADCu;
    SET_GPR_U32(ctx, 31, 0x1B3AE4u);
    ctx->pc = 0x1B3AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3ADCu;
    // 0x1b3ae0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B3ADCu, 0x1B3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AE4u;
label_1b3ae4:
    // 0x1b3ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3ae8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b3ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b3aec: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b3aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b3af0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3af8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b3afc: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1b3afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1b3b00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3b04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b08: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1b3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1b3b0c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1b3b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b3b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b3b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b3b18: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3b1c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b3b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b3b20: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1B3B20u;
    SET_GPR_U32(ctx, 31, 0x1B3B28u);
    ctx->pc = 0x1B3B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B20u;
    // 0x1b3b24: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1B3B20u, 0x1B3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B28u;
label_1b3b28:
    // 0x1b3b28: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3b2c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3B2Cu;
    {
        const bool branch_taken_0x1b3b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B2Cu;
        // 0x1b3b30: 0xae220650  sw          $v0, 0x650($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b2c) {
            ctx->pc = 0x1B3BB4u;
            goto label_1b3bb4;
        }
    }
    ctx->pc = 0x1B3B34u;
    // 0x1b3b34: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b3b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b3b38: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b3b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1b3b3c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b3b40: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1b3b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b3b44: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b3b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b3b48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3B48u;
    {
        const bool branch_taken_0x1b3b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B48u;
        // 0x1b3b4c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b48) {
            ctx->pc = 0x1B3B5Cu;
            goto label_1b3b5c;
        }
    }
    ctx->pc = 0x1B3B50u;
    // 0x1b3b50: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b3b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3B54u;
    {
        const bool branch_taken_0x1b3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B54u;
        // 0x1b3b58: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b54) {
            ctx->pc = 0x1B3B60u;
            goto label_1b3b60;
        }
    }
    ctx->pc = 0x1B3B5Cu;
label_1b3b5c:
    // 0x1b3b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3b60:
    // 0x1b3b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3b64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3b68: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b3b6c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1b3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1b3b70: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1b3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1b3b74: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1b3b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1b3b78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b3b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b7c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1b3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1b3b80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b3b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b84: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1b3b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b3b88: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1b3b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1b3b8c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b3b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b3b90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b94: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x1b3b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3b98: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1b3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1b3b9c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1b3b9cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b3ba0: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1B3BA0u;
    SET_GPR_U32(ctx, 31, 0x1B3BA8u);
    ctx->pc = 0x1B3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BA0u;
    // 0x1b3ba4: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1B3BA0u, 0x1B3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BA8u;
label_1b3ba8:
    // 0x1b3ba8: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1b3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1b3bac: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B3BACu;
    SET_GPR_U32(ctx, 31, 0x1B3BB4u);
    ctx->pc = 0x1B3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BACu;
    // 0x1b3bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B3BACu, 0x1B3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BB4u;
label_1b3bb4:
    // 0x1b3bb4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1b3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1b3bb8: 0x26644380  addiu       $a0, $s3, 0x4380
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    // 0x1b3bbc: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x1b3bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3bc4: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x1b3bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3bc8: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B3BC8u;
    SET_GPR_U32(ctx, 31, 0x1B3BD0u);
    ctx->pc = 0x1B3BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BC8u;
    // 0x1b3bcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B3BC8u, 0x1B3BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BD0u;
label_1b3bd0:
    // 0x1b3bd0: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3bd4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B3BD4u;
    {
        const bool branch_taken_0x1b3bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BD4u;
        // 0x1b3bd8: 0xae220654  sw          $v0, 0x654($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bd4) {
            ctx->pc = 0x1B3C90u;
            goto label_1b3c90;
        }
    }
    ctx->pc = 0x1B3BDCu;
    // 0x1b3bdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3be4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b3be8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b3be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1b3bec: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b3becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b3bf0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1b3bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b3bf4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b3bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b3bf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3BF8u;
    {
        const bool branch_taken_0x1b3bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BF8u;
        // 0x1b3bfc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bf8) {
            ctx->pc = 0x1B3C0Cu;
            goto label_1b3c0c;
        }
    }
    ctx->pc = 0x1B3C00u;
    // 0x1b3c00: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b3c04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3C04u;
    {
        const bool branch_taken_0x1b3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C04u;
        // 0x1b3c08: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c04) {
            ctx->pc = 0x1B3C18u;
            goto label_1b3c18;
        }
    }
    ctx->pc = 0x1B3C0Cu;
label_1b3c0c:
    // 0x1b3c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3c18:
    // 0x1b3c18: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1b3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3c1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1b3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1b3c20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b3c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c24: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1b3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1b3c28: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1b3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1b3c2c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1b3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1b3c30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b3c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c34: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b3c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b3c38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b3c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c3c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1b3c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1b3c40: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b3c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b3c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3c48: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x1b3c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3c4c: 0x8e240654  lw          $a0, 0x654($s1)
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x1b3c50: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1b3c50u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b3c54: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1B3C54u;
    SET_GPR_U32(ctx, 31, 0x1B3C5Cu);
    ctx->pc = 0x1B3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C54u;
    // 0x1b3c58: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1B3C54u, 0x1B3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C5Cu;
label_1b3c5c:
    // 0x1b3c5c: 0x8e240654  lw          $a0, 0x654($s1)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x1b3c60: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1b3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1b3c64: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1b3c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b3c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c6c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1b3c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b3c70: 0x8e220654  lw          $v0, 0x654($s1)
    ctx->pc = 0x1b3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x1b3c74: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1b3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1b3c78: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B3C78u;
    SET_GPR_U32(ctx, 31, 0x1B3C80u);
    ctx->pc = 0x1B3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C78u;
    // 0x1b3c7c: 0x8e240654  lw          $a0, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B3C78u, 0x1B3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C80u;
label_1b3c80:
    // 0x1b3c80: 0x8e230654  lw          $v1, 0x654($s1)
    ctx->pc = 0x1b3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x1b3c84: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1b3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1b3c88: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1b3c88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3c8c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1b3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_1b3c90:
    // 0x1b3c90: 0x26644380  addiu       $a0, $s3, 0x4380
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    // 0x1b3c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c98: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B3C98u;
    SET_GPR_U32(ctx, 31, 0x1B3CA0u);
    ctx->pc = 0x1B3C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C98u;
    // 0x1b3c9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B3C98u, 0x1B3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CA0u;
label_1b3ca0:
    // 0x1b3ca0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B3CA0u;
    {
        const bool branch_taken_0x1b3ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CA0u;
        // 0x1b3ca4: 0xae220658  sw          $v0, 0x658($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ca0) {
            ctx->pc = 0x1B3D54u;
            goto label_1b3d54;
        }
    }
    ctx->pc = 0x1B3CA8u;
    // 0x1b3ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3cb0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b3cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b3cb4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b3cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1b3cb8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b3cbc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1b3cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b3cc0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b3cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b3cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3CC4u;
    {
        const bool branch_taken_0x1b3cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CC4u;
        // 0x1b3cc8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cc4) {
            ctx->pc = 0x1B3CD8u;
            goto label_1b3cd8;
        }
    }
    ctx->pc = 0x1B3CCCu;
    // 0x1b3ccc: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b3cd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3CD0u;
    {
        const bool branch_taken_0x1b3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CD0u;
        // 0x1b3cd4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cd0) {
            ctx->pc = 0x1B3CDCu;
            goto label_1b3cdc;
        }
    }
    ctx->pc = 0x1B3CD8u;
label_1b3cd8:
    // 0x1b3cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3cdc:
    // 0x1b3cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3ce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b3ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ce8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1b3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1b3cec: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1b3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b3cf0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1b3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1b3cf4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b3cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cf8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1b3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1b3cfc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1b3cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1b3d00: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1b3d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1b3d04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b3d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b3d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d0c: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x1b3d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3d10: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1b3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1b3d14: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1b3d14u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b3d18: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1B3D18u;
    SET_GPR_U32(ctx, 31, 0x1B3D20u);
    ctx->pc = 0x1B3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D18u;
    // 0x1b3d1c: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1B3D18u, 0x1B3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D20u;
label_1b3d20:
    // 0x1b3d20: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1b3d24: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1b3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1b3d28: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1b3d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b3d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d30: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1b3d30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b3d34: 0x8e220658  lw          $v0, 0x658($s1)
    ctx->pc = 0x1b3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1b3d38: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1b3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1b3d3c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D44u);
    ctx->pc = 0x1B3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D3Cu;
    // 0x1b3d40: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B3D3Cu, 0x1B3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D44u;
label_1b3d44:
    // 0x1b3d44: 0x8e230658  lw          $v1, 0x658($s1)
    ctx->pc = 0x1b3d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1b3d48: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1b3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1b3d4c: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x1b3d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3d50: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1b3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_1b3d54:
    // 0x1b3d54: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1b3d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3d58: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b3d5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3d60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3d64: 0x24458718  addiu       $a1, $v0, -0x78E8
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936344));
    // 0x1b3d68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3d6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3d70: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3d74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3d78: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b3d7c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b3d80: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1b3d80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d84: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1b3d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1b3d88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1b3d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b3d8c: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x1b3d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b3d90: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1b3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1b3d94: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1b3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1b3d98: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1b3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1b3d9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B3D9Cu;
    {
        const bool branch_taken_0x1b3d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D9Cu;
        // 0x1b3da0: 0xe642000c  swc1        $f2, 0xC($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d9c) {
            ctx->pc = 0x1B3E14u;
            goto label_1b3e14;
        }
    }
    ctx->pc = 0x1B3DA4u;
    // 0x1b3da4: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1b3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1b3da8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1b3dac: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x1b3dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3db0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b3db4: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1b3db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b3db8: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b3dbc: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x1b3dbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b3dc0:
    // 0x1b3dc0: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x1b3dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b3dc4: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x1b3dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b3dc8: 0x68ad000f  ldl         $t5, 0xF($a1)
    ctx->pc = 0x1b3dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x1b3dcc: 0x6cad0008  ldr         $t5, 0x8($a1)
    ctx->pc = 0x1b3dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x1b3dd0: 0x68ae0017  ldl         $t6, 0x17($a1)
    ctx->pc = 0x1b3dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x1b3dd4: 0x6cae0010  ldr         $t6, 0x10($a1)
    ctx->pc = 0x1b3dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x1b3dd8: 0x68af001f  ldl         $t7, 0x1F($a1)
    ctx->pc = 0x1b3dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x1b3ddc: 0x6caf0018  ldr         $t7, 0x18($a1)
    ctx->pc = 0x1b3ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x1b3de0: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x1b3de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3de4: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x1b3de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3de8: 0xb06d000f  sdl         $t5, 0xF($v1)
    ctx->pc = 0x1b3de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3dec: 0xb46d0008  sdr         $t5, 0x8($v1)
    ctx->pc = 0x1b3decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3df0: 0xb06e0017  sdl         $t6, 0x17($v1)
    ctx->pc = 0x1b3df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3df4: 0xb46e0010  sdr         $t6, 0x10($v1)
    ctx->pc = 0x1b3df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3df8: 0xb06f001f  sdl         $t7, 0x1F($v1)
    ctx->pc = 0x1b3df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3dfc: 0xb46f0018  sdr         $t7, 0x18($v1)
    ctx->pc = 0x1b3dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3e00: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1b3e04: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B3E04u;
    {
        const bool branch_taken_0x1b3e04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E04u;
        // 0x1b3e08: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e04) {
            ctx->pc = 0x1B3DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3dc0;
        }
    }
    ctx->pc = 0x1B3E0Cu;
    // 0x1b3e0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3E0Cu;
    {
        const bool branch_taken_0x1b3e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E0Cu;
        // 0x1b3e10: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e0c) {
            ctx->pc = 0x1B3E60u;
            goto label_1b3e60;
        }
    }
    ctx->pc = 0x1B3E14u;
label_1b3e14:
    // 0x1b3e14: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1b3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1b3e18: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b3e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1b3e1c: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x1b3e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3e20: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1b3e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b3e24: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1b3e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b3e28: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x1b3e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b3e2c: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x1b3e2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b3e30:
    // 0x1b3e30: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x1b3e30u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3e34: 0xdcad0008  ld          $t5, 0x8($a1)
    ctx->pc = 0x1b3e34u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b3e38: 0xdcae0010  ld          $t6, 0x10($a1)
    ctx->pc = 0x1b3e38u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b3e3c: 0xdcaf0018  ld          $t7, 0x18($a1)
    ctx->pc = 0x1b3e3cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b3e40: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1b3e40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x1b3e44: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x1b3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x1b3e48: 0xfc6e0010  sd          $t6, 0x10($v1)
    ctx->pc = 0x1b3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 14));
    // 0x1b3e4c: 0xfc6f0018  sd          $t7, 0x18($v1)
    ctx->pc = 0x1b3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 15));
    // 0x1b3e50: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1b3e54: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3E54u;
    {
        const bool branch_taken_0x1b3e54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E54u;
        // 0x1b3e58: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e54) {
            ctx->pc = 0x1B3E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e30;
        }
    }
    ctx->pc = 0x1B3E5Cu;
    // 0x1b3e5c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1b3e60:
    // 0x1b3e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3E60u;
    {
        const bool branch_taken_0x1b3e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E60u;
        // 0x1b3e64: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e60) {
            ctx->pc = 0x1B3E74u;
            goto label_1b3e74;
        }
    }
    ctx->pc = 0x1B3E68u;
    // 0x1b3e68: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b3e6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3E6Cu;
    {
        const bool branch_taken_0x1b3e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E6Cu;
        // 0x1b3e70: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e6c) {
            ctx->pc = 0x1B3E78u;
            goto label_1b3e78;
        }
    }
    ctx->pc = 0x1B3E74u;
label_1b3e74:
    // 0x1b3e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e78:
    // 0x1b3e78: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1b3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1b3e7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b3e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e80: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1b3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1b3e84: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1b3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1b3e88: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1b3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1b3e8c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b3e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e90: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x1b3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x1b3e94: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x1b3e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b3e98: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b3e9c: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1B3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B3EA4u);
    ctx->pc = 0x1B3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E9Cu;
    // 0x1b3ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1B3E9Cu, 0x1B3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EA4u;
label_1b3ea4:
    // 0x1b3ea4: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b3ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eac: 0x8e270600  lw          $a3, 0x600($s1)
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b3eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eb4: 0x3c013b91  lui         $at, 0x3B91
    ctx->pc = 0x1b3eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15249 << 16));
    // 0x1b3eb8: 0x3421a2b4  ori         $at, $at, 0xA2B4
    ctx->pc = 0x1b3eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41652);
    // 0x1b3ebc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b3ec0: 0x34630108  ori         $v1, $v1, 0x108
    ctx->pc = 0x1b3ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)264);
    // 0x1b3ec4: 0x3c013d2b  lui         $at, 0x3D2B
    ctx->pc = 0x1b3ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15659 << 16));
    // 0x1b3ec8: 0x342192a6  ori         $at, $at, 0x92A6
    ctx->pc = 0x1b3ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37542);
    // 0x1b3ecc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3ed0: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x1b3ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x1b3ed4: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x1b3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
    // 0x1b3ed8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1b3ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1b3edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3ee0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ee4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x1b3ee8: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1b3ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1b3eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3ef0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1b3ef4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3ef8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1b3ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1b3efc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b3f00: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x1b3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x1b3f04: 0xa6200608  sh          $zero, 0x608($s1)
    ctx->pc = 0x1b3f04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3f08: 0xa620060a  sh          $zero, 0x60A($s1)
    ctx->pc = 0x1b3f08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1546), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3f0c: 0xae200610  sw          $zero, 0x610($s1)
    ctx->pc = 0x1b3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 0));
    // 0x1b3f10: 0xae200620  sw          $zero, 0x620($s1)
    ctx->pc = 0x1b3f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 0));
    // 0x1b3f14: 0xae200630  sw          $zero, 0x630($s1)
    ctx->pc = 0x1b3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1584), GPR_U32(ctx, 0));
    // 0x1b3f18: 0xae200638  sw          $zero, 0x638($s1)
    ctx->pc = 0x1b3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1592), GPR_U32(ctx, 0));
    // 0x1b3f1c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1b3f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3f20: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b3f20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3f24: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b3f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3f28: 0xae200648  sw          $zero, 0x648($s1)
    ctx->pc = 0x1b3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 0));
    // 0x1b3f2c: 0xae22064c  sw          $v0, 0x64C($s1)
    ctx->pc = 0x1b3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 2));
    // 0x1b3f30: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1b3f34: 0xe620060c  swc1        $f0, 0x60C($s1)
    ctx->pc = 0x1b3f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1548), bits); }
    // 0x1b3f38: 0xe6250618  swc1        $f5, 0x618($s1)
    ctx->pc = 0x1b3f38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
    // 0x1b3f3c: 0xe621061c  swc1        $f1, 0x61C($s1)
    ctx->pc = 0x1b3f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1564), bits); }
    // 0x1b3f40: 0xe6220628  swc1        $f2, 0x628($s1)
    ctx->pc = 0x1b3f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1576), bits); }
    // 0x1b3f44: 0xe623062c  swc1        $f3, 0x62C($s1)
    ctx->pc = 0x1b3f44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1580), bits); }
    // 0x1b3f48: 0xe6240634  swc1        $f4, 0x634($s1)
    ctx->pc = 0x1b3f48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1588), bits); }
    // 0x1b3f4c: 0xae270600  sw          $a3, 0x600($s1)
    ctx->pc = 0x1b3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 7));
    // 0x1b3f50: 0xe6250614  swc1        $f5, 0x614($s1)
    ctx->pc = 0x1b3f50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    // 0x1b3f54: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B3F54u;
    SET_GPR_U32(ctx, 31, 0x1B3F5Cu);
    ctx->pc = 0x1B3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F54u;
    // 0x1b3f58: 0xe6220624  swc1        $f2, 0x624($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B3F54u, 0x1B3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F5Cu;
label_1b3f5c:
    // 0x1b3f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3f64: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B3F64u;
    SET_GPR_U32(ctx, 31, 0x1B3F6Cu);
    ctx->pc = 0x1B3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F64u;
    // 0x1b3f68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B3F64u, 0x1B3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F6Cu;
label_1b3f6c:
    // 0x1b3f6c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b3f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f74: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B3F74u;
    SET_GPR_U32(ctx, 31, 0x1B3F7Cu);
    ctx->pc = 0x1B3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F74u;
    // 0x1b3f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B3F74u, 0x1B3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F7Cu;
label_1b3f7c:
    // 0x1b3f7c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b3f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b3f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3f84: 0x1045002f  beq         $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B3F84u;
    {
        const bool branch_taken_0x1b3f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F84u;
        // 0x1b3f88: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f84) {
            ctx->pc = 0x1B4044u;
            goto label_1b4044;
        }
    }
    ctx->pc = 0x1B3F8Cu;
    // 0x1b3f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b3f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b3f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3f94: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b3f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1b3f98:
    // 0x1b3f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f9c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b3f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b3fa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3FA0u;
    {
        const bool branch_taken_0x1b3fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FA0u;
        // 0x1b3fa4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fa0) {
            ctx->pc = 0x1B3FB0u;
            goto label_1b3fb0;
        }
    }
    ctx->pc = 0x1B3FA8u;
    // 0x1b3fa8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b3fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b3fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b3facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3fb0:
    // 0x1b3fb0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1b3fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b3fb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3FB4u;
    {
        const bool branch_taken_0x1b3fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FB4u;
        // 0x1b3fb8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fb4) {
            ctx->pc = 0x1B3FCCu;
            goto label_1b3fcc;
        }
    }
    ctx->pc = 0x1B3FBCu;
    // 0x1b3fbc: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1b3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b3fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3fc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3FC4u;
    {
        const bool branch_taken_0x1b3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FC4u;
        // 0x1b3fc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fc4) {
            ctx->pc = 0x1B3FD0u;
            goto label_1b3fd0;
        }
    }
    ctx->pc = 0x1B3FCCu;
label_1b3fcc:
    // 0x1b3fcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3fd0:
    // 0x1b3fd0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1b3fd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fd8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1b3fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b3fdc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b3fe0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1b3fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1b3fe4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b3fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b3fe8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3FE8u;
    {
        const bool branch_taken_0x1b3fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE8u;
        // 0x1b3fec: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fe8) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3FF0u;
    // 0x1b3ff0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b3ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b3ff4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b3ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3ff8:
    // 0x1b3ff8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1b3ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b3ffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3FFCu;
    {
        const bool branch_taken_0x1b3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FFCu;
        // 0x1b4000: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ffc) {
            ctx->pc = 0x1B4014u;
            goto label_1b4014;
        }
    }
    ctx->pc = 0x1B4004u;
    // 0x1b4004: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b4008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b400c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B400Cu;
    {
        const bool branch_taken_0x1b400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B400Cu;
        // 0x1b4010: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b400c) {
            ctx->pc = 0x1B4018u;
            goto label_1b4018;
        }
    }
    ctx->pc = 0x1B4014u;
label_1b4014:
    // 0x1b4014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4018:
    // 0x1b4018: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1b401c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b4020: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b4020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b4024: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1b4024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b4028: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b402c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B402Cu;
    {
        const bool branch_taken_0x1b402c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B402Cu;
        // 0x1b4030: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b402c) {
            ctx->pc = 0x1B4040u;
            goto label_1b4040;
        }
    }
    ctx->pc = 0x1B4034u;
    // 0x1b4034: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b4034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b4038: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1B4038u;
    {
        const bool branch_taken_0x1b4038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b4038) {
            ctx->pc = 0x1B403Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4038u;
            // 0x1b403c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3f98;
        }
    }
    ctx->pc = 0x1B4040u;
label_1b4040:
    // 0x1b4040: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1b4040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1b4044:
    // 0x1b4044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4048: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1b4048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b404c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1b404cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b4050: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1b4050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b4054: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1b4054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b4058: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1b4058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b405c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B405Cu;
        // 0x1b4060: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4064u;
    // 0x1b4064: 0x0  nop
    ctx->pc = 0x1b4064u;
    // NOP
    ctx->pc = 0x1b4068u;
}
