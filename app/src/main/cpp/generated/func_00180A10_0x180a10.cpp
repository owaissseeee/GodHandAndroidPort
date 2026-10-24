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

// Function: func_00180A10
// Address: 0x180a10 - 0x180cd8
void func_00180A10_0x180a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00180A10_0x180a10");
#endif

    switch (ctx->pc) {
        case 0x180a34u: goto label_180a34;
        case 0x180aa8u: goto label_180aa8;
        case 0x180ae8u: goto label_180ae8;
        case 0x180b04u: goto label_180b04;
        case 0x180bccu: goto label_180bcc;
        case 0x180c40u: goto label_180c40;
        case 0x180c8cu: goto label_180c8c;
        default: break;
    }

    ctx->pc = 0x180a10u;

    // 0x180a10: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x180a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x180a14: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x180a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x180a18: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x180a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x180a1c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x180a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x180a20: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x180a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x180a24: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x180a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x180a28: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x180a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x180a2c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x180A2Cu;
    SET_GPR_U32(ctx, 31, 0x180A34u);
    ctx->pc = 0x180A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A2Cu;
    // 0x180a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x180A2Cu, 0x180A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A34u;
label_180a34:
    // 0x180a34: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x180a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x180a38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x180a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180a3c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180a40: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x180a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180a48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x180a4c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x180a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x180a50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x180a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a58: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x180a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x180a5c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x180a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x180a60: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x180a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180a68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x180a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180a6c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x180a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x180a70: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x180a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x180a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a78: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x180a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x180a7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180a80: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x180a80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x180a84: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x180a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x180a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180a8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x180a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x180a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x180a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a94: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x180a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x180a98: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x180a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x180a9c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x180a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x180aa0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x180AA0u;
    SET_GPR_U32(ctx, 31, 0x180AA8u);
    ctx->pc = 0x180AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AA0u;
    // 0x180aa4: 0xe463000c  swc1        $f3, 0xC($v1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x180AA0u, 0x180AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AA8u;
label_180aa8:
    // 0x180aa8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x180AA8u;
    {
        const bool branch_taken_0x180aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AA8u;
        // 0x180aac: 0xae02060c  sw          $v0, 0x60C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180aa8) {
            ctx->pc = 0x180B04u;
            goto label_180b04;
        }
    }
    ctx->pc = 0x180AB0u;
    // 0x180ab0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x180ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x180ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180AB4u;
    {
        const bool branch_taken_0x180ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AB4u;
        // 0x180ab8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ab4) {
            ctx->pc = 0x180AC8u;
            goto label_180ac8;
        }
    }
    ctx->pc = 0x180ABCu;
    // 0x180abc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x180ac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180AC0u;
    {
        const bool branch_taken_0x180ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AC0u;
        // 0x180ac4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ac0) {
            ctx->pc = 0x180ACCu;
            goto label_180acc;
        }
    }
    ctx->pc = 0x180AC8u;
label_180ac8:
    // 0x180ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180acc:
    // 0x180acc: 0x8e04060c  lw          $a0, 0x60C($s0)
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x180ad0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x180ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x180ad4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x180ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x180ad8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x180ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x180adc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x180adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180ae0: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x180AE0u;
    SET_GPR_U32(ctx, 31, 0x180AE8u);
    ctx->pc = 0x180AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AE0u;
    // 0x180ae4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x180AE0u, 0x180AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AE8u;
label_180ae8:
    // 0x180ae8: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x180aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180af0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180af4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x180af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x180af8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x180af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x180afc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x180AFCu;
    SET_GPR_U32(ctx, 31, 0x180B04u);
    ctx->pc = 0x180B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AFCu;
    // 0x180b00: 0x8e04060c  lw          $a0, 0x60C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x180AFCu, 0x180B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B04u;
label_180b04:
    // 0x180b04: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x180b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180b08: 0x24020129  addiu       $v0, $zero, 0x129
    ctx->pc = 0x180b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
    // 0x180b0c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x180b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180b10: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x180b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b14: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x180b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x180b18: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x180b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x180b1c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x180b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x180b20: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x180b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x180b24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180b28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x180b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180b2c: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x180b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x180b30: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x180b30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x180b34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x180b38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180b40: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x180b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180b44: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x180b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x180b48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x180b48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x180b4c: 0x4bc52100  vaddx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x180b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x180b50: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x180b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x180b54: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x180b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x180b5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x180b60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180b64: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x180b68: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x180b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x180b6c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x180b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x180b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x180b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180b74: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x180b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x180b78: 0x24492630  addiu       $t1, $v0, 0x2630
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x180b7c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x180b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x180b80: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x180b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b84: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x180b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b88: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x180b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x180b8c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x180b8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b90: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x180b90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x180b94: 0x31220007  andi        $v0, $t1, 0x7
    ctx->pc = 0x180b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x180b98: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x180b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x180b9c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x180b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x180ba0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x180ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x180ba4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x180BA4u;
    {
        const bool branch_taken_0x180ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BA4u;
        // 0x180ba8: 0xe463000c  swc1        $f3, 0xC($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ba4) {
            ctx->pc = 0x180C20u;
            goto label_180c20;
        }
    }
    ctx->pc = 0x180BACu;
    // 0x180bac: 0x252e0060  addiu       $t6, $t1, 0x60
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x180bb0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x180bb4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x180bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x180bb8: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x180bbc: 0x27ac0090  addiu       $t4, $sp, 0x90
    ctx->pc = 0x180bbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x180bc0: 0x27ad00a0  addiu       $t5, $sp, 0xA0
    ctx->pc = 0x180bc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x180bc4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x180bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x180bc8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x180bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_180bcc:
    // 0x180bcc: 0x692f0007  ldl         $t7, 0x7($t1)
    ctx->pc = 0x180bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x180bd0: 0x6d2f0000  ldr         $t7, 0x0($t1)
    ctx->pc = 0x180bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x180bd4: 0x6932000f  ldl         $s2, 0xF($t1)
    ctx->pc = 0x180bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x180bd8: 0x6d320008  ldr         $s2, 0x8($t1)
    ctx->pc = 0x180bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x180bdc: 0x69330017  ldl         $s3, 0x17($t1)
    ctx->pc = 0x180bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x180be0: 0x6d330010  ldr         $s3, 0x10($t1)
    ctx->pc = 0x180be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x180be4: 0x6934001f  ldl         $s4, 0x1F($t1)
    ctx->pc = 0x180be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x180be8: 0x6d340018  ldr         $s4, 0x18($t1)
    ctx->pc = 0x180be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x180bec: 0xb0af0007  sdl         $t7, 0x7($a1)
    ctx->pc = 0x180becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180bf0: 0xb4af0000  sdr         $t7, 0x0($a1)
    ctx->pc = 0x180bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180bf4: 0xb0b2000f  sdl         $s2, 0xF($a1)
    ctx->pc = 0x180bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180bf8: 0xb4b20008  sdr         $s2, 0x8($a1)
    ctx->pc = 0x180bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180bfc: 0xb0b30017  sdl         $s3, 0x17($a1)
    ctx->pc = 0x180bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c00: 0xb4b30010  sdr         $s3, 0x10($a1)
    ctx->pc = 0x180c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c04: 0xb0b4001f  sdl         $s4, 0x1F($a1)
    ctx->pc = 0x180c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c08: 0xb4b40018  sdr         $s4, 0x18($a1)
    ctx->pc = 0x180c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c0c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x180c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x180c10: 0x152effee  bne         $t1, $t6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x180C10u;
    {
        const bool branch_taken_0x180c10 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x180C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C10u;
        // 0x180c14: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c10) {
            ctx->pc = 0x180BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180bcc;
        }
    }
    ctx->pc = 0x180C18u;
    // 0x180c18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x180C18u;
    {
        const bool branch_taken_0x180c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C18u;
        // 0x180c1c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c18) {
            ctx->pc = 0x180C70u;
            goto label_180c70;
        }
    }
    ctx->pc = 0x180C20u;
label_180c20:
    // 0x180c20: 0x252e0060  addiu       $t6, $t1, 0x60
    ctx->pc = 0x180c20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x180c24: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x180c28: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x180c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x180c2c: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x180c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x180c30: 0x27ac0090  addiu       $t4, $sp, 0x90
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x180c34: 0x27ad00a0  addiu       $t5, $sp, 0xA0
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x180c38: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x180c3c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x180c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_180c40:
    // 0x180c40: 0xdd2f0000  ld          $t7, 0x0($t1)
    ctx->pc = 0x180c40u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x180c44: 0xdd320008  ld          $s2, 0x8($t1)
    ctx->pc = 0x180c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x180c48: 0xdd330010  ld          $s3, 0x10($t1)
    ctx->pc = 0x180c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x180c4c: 0xdd340018  ld          $s4, 0x18($t1)
    ctx->pc = 0x180c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x180c50: 0xfcaf0000  sd          $t7, 0x0($a1)
    ctx->pc = 0x180c50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 15));
    // 0x180c54: 0xfcb20008  sd          $s2, 0x8($a1)
    ctx->pc = 0x180c54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 18));
    // 0x180c58: 0xfcb30010  sd          $s3, 0x10($a1)
    ctx->pc = 0x180c58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 19));
    // 0x180c5c: 0xfcb40018  sd          $s4, 0x18($a1)
    ctx->pc = 0x180c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 20));
    // 0x180c60: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x180c64: 0x152efff6  bne         $t1, $t6, . + 4 + (-0xA << 2)
    ctx->pc = 0x180C64u;
    {
        const bool branch_taken_0x180c64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x180C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C64u;
        // 0x180c68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c64) {
            ctx->pc = 0x180C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180c40;
        }
    }
    ctx->pc = 0x180C6Cu;
    // 0x180c6c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x180c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_180c70:
    // 0x180c70: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x180c70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c78: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x180c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x180c7c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x180c80: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x180c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x180c84: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x180C84u;
    SET_GPR_U32(ctx, 31, 0x180C8Cu);
    ctx->pc = 0x180C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C84u;
    // 0x180c88: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x180C84u, 0x180C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C8Cu;
label_180c8c:
    // 0x180c8c: 0x8e0405b8  lw          $a0, 0x5B8($s0)
    ctx->pc = 0x180c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x180c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180c94: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x180c98: 0x34840188  ori         $a0, $a0, 0x188
    ctx->pc = 0x180c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)392);
    // 0x180c9c: 0xa6000600  sh          $zero, 0x600($s0)
    ctx->pc = 0x180c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 0));
    // 0x180ca0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x180ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x180ca4: 0xae0405b8  sw          $a0, 0x5B8($s0)
    ctx->pc = 0x180ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 4));
    // 0x180ca8: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x180ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x180cac: 0xa2000770  sb          $zero, 0x770($s0)
    ctx->pc = 0x180cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1904), (uint8_t)GPR_U32(ctx, 0));
    // 0x180cb0: 0xa2000771  sb          $zero, 0x771($s0)
    ctx->pc = 0x180cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1905), (uint8_t)GPR_U32(ctx, 0));
    // 0x180cb4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x180cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x180cb8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x180cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x180cbc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x180cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x180cc0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x180cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x180cc4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x180cc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x180cc8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x180cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x180ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x180CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CCCu;
        // 0x180cd0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180CD4u;
    // 0x180cd4: 0x0  nop
    ctx->pc = 0x180cd4u;
    // NOP
    ctx->pc = 0x180cd8u;
}
