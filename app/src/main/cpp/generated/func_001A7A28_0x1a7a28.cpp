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

// Function: func_001A7A28
// Address: 0x1a7a28 - 0x1a7ea0
void func_001A7A28_0x1a7a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A7A28_0x1a7a28");
#endif

    switch (ctx->pc) {
        case 0x1a7b00u: goto label_1a7b00;
        case 0x1a7b78u: goto label_1a7b78;
        case 0x1a7d1cu: goto label_1a7d1c;
        case 0x1a7d34u: goto label_1a7d34;
        case 0x1a7d4cu: goto label_1a7d4c;
        case 0x1a7d64u: goto label_1a7d64;
        case 0x1a7df4u: goto label_1a7df4;
        case 0x1a7e0cu: goto label_1a7e0c;
        case 0x1a7e24u: goto label_1a7e24;
        case 0x1a7e3cu: goto label_1a7e3c;
        default: break;
    }

    ctx->pc = 0x1a7a28u;

    // 0x1a7a28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a7a2c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a7a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a7a30: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a7a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a7a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a38: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a7a3c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1a7a40: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a7a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1a7a44: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a7a48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a7a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a7a4c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1a7a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a7a50: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1a7a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1a7a54: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1a7a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a7a58: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1A7A58u;
    {
        const bool branch_taken_0x1a7a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A58u;
        // 0x1a7a5c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a58) {
            ctx->pc = 0x1A7C20u;
            goto label_1a7c20;
        }
    }
    ctx->pc = 0x1A7A60u;
    // 0x1a7a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a64: 0x244275b0  addiu       $v0, $v0, 0x75B0
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30128));
    // 0x1a7a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7a6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7a70: 0x800008  jr          $a0
    ctx->pc = 0x1A7A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7A78u: goto label_1a7a78;
            case 0x1A7B30u: goto label_1a7b30;
            case 0x1A7B70u: goto label_1a7b70;
            case 0x1A7B98u: goto label_1a7b98;
            case 0x1A7BD0u: goto label_1a7bd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A7A78u;
label_1a7a78:
    // 0x1a7a78: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1a7a7c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1a7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a7a80: 0xc6220620  lwc1        $f2, 0x620($s1)
    ctx->pc = 0x1a7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7a88: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x1a7a8c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1a7a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7a90: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1a7a90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7a94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a7a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a7a98: 0xe6210624  swc1        $f1, 0x624($s1)
    ctx->pc = 0x1a7a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
    // 0x1a7a9c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1A7A9Cu;
    {
        const bool branch_taken_0x1a7a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A9Cu;
        // 0x1a7aa0: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a9c) {
            ctx->pc = 0x1A7B24u;
            goto label_1a7b24;
        }
    }
    ctx->pc = 0x1A7AA4u;
    // 0x1a7aa4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7aa8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a7aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7aac: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a7aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7ab0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1a7ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a7ab4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1a7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7abc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1a7ac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7ac4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1a7ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a7ac8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1a7acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ad0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a7ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a7ad4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a7ad8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a7ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a7adc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1a7adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7ae0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1a7ae4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a7ae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ae8: 0xe620061c  swc1        $f0, 0x61C($s1)
    ctx->pc = 0x1a7ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1564), bits); }
    // 0x1a7aec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a7aecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7af0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a7af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a7af4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a7af4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7af8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1A7AF8u;
    SET_GPR_U32(ctx, 31, 0x1A7B00u);
    ctx->pc = 0x1A7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AF8u;
    // 0x1a7afc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1A7AF8u, 0x1A7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B00u;
label_1a7b00:
    // 0x1a7b00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7B00u;
    {
        const bool branch_taken_0x1a7b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B00u;
        // 0x1a7b04: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b00) {
            ctx->pc = 0x1A7B0Cu;
            goto label_1a7b0c;
        }
    }
    ctx->pc = 0x1A7B08u;
    // 0x1a7b08: 0xe620061c  swc1        $f0, 0x61C($s1)
    ctx->pc = 0x1a7b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1564), bits); }
label_1a7b0c:
    // 0x1a7b0c: 0xc620061c  lwc1        $f0, 0x61C($s1)
    ctx->pc = 0x1a7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7b10: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a7b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a7b14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7b18: 0x0  nop
    ctx->pc = 0x1a7b18u;
    // NOP
    // 0x1a7b1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7b20: 0xe6200620  swc1        $f0, 0x620($s1)
    ctx->pc = 0x1a7b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1568), bits); }
label_1a7b24:
    // 0x1a7b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7b28: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a7b28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7b2c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1a7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1a7b30:
    // 0x1a7b30: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1a7b34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a7b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a7b38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7b3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7b40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a7b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a7b44: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a7b48: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1a7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1a7b4c: 0xc6210620  lwc1        $f1, 0x620($s1)
    ctx->pc = 0x1a7b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7b50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a7b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7b54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a7b54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7b58: 0x0  nop
    ctx->pc = 0x1a7b58u;
    // NOP
    // 0x1a7b5c: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7B5Cu;
    {
        const bool branch_taken_0x1a7b5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B5Cu;
        // 0x1a7b60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b5c) {
            ctx->pc = 0x1A7C20u;
            goto label_1a7c20;
        }
    }
    ctx->pc = 0x1A7B64u;
    // 0x1a7b64: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a7b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7b68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7B68u;
    {
        const bool branch_taken_0x1a7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B68u;
        // 0x1a7b6c: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b68) {
            ctx->pc = 0x1A7C20u;
            goto label_1a7c20;
        }
    }
    ctx->pc = 0x1A7B70u;
label_1a7b70:
    // 0x1a7b70: 0xc069fd6  jal         func_1A7F58
    ctx->pc = 0x1A7B70u;
    SET_GPR_U32(ctx, 31, 0x1A7B78u);
    ctx->pc = 0x1A7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B70u;
    // 0x1a7b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F58u, 0x1A7B70u, 0x1A7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B78u;
label_1a7b78:
    // 0x1a7b78: 0x92230613  lbu         $v1, 0x613($s1)
    ctx->pc = 0x1a7b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1555)));
    // 0x1a7b7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7b80: 0x96240628  lhu         $a0, 0x628($s1)
    ctx->pc = 0x1a7b80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
    // 0x1a7b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a7b88: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1a7b88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7b8c: 0xa6240616  sh          $a0, 0x616($s1)
    ctx->pc = 0x1a7b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1558), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a7b90: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A7B90u;
    {
        const bool branch_taken_0x1a7b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B90u;
        // 0x1a7b94: 0xa2230613  sb          $v1, 0x613($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1555), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b90) {
            ctx->pc = 0x1A7C1Cu;
            goto label_1a7c1c;
        }
    }
    ctx->pc = 0x1A7B98u;
label_1a7b98:
    // 0x1a7b98: 0x86220616  lh          $v0, 0x616($s1)
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1558)));
    // 0x1a7b9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7B9Cu;
    {
        const bool branch_taken_0x1a7b9c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B9Cu;
        // 0x1a7ba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b9c) {
            ctx->pc = 0x1A7BB0u;
            goto label_1a7bb0;
        }
    }
    ctx->pc = 0x1A7BA4u;
    // 0x1a7ba4: 0x92230614  lbu         $v1, 0x614($s1)
    ctx->pc = 0x1a7ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1556)));
    // 0x1a7ba8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7BA8u;
    {
        const bool branch_taken_0x1a7ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7ba8) {
            ctx->pc = 0x1A7BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7BA8u;
            // 0x1a7bac: 0x96220616  lhu         $v0, 0x616($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1558)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7BC4u;
            goto label_1a7bc4;
        }
    }
    ctx->pc = 0x1A7BB0u;
label_1a7bb0:
    // 0x1a7bb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7bb4: 0xa2200614  sb          $zero, 0x614($s1)
    ctx->pc = 0x1a7bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1556), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7bb8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1a7bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7bbc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a7bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7bc0: 0x96220616  lhu         $v0, 0x616($s1)
    ctx->pc = 0x1a7bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1558)));
label_1a7bc4:
    // 0x1a7bc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7bc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A7BC8u;
    {
        const bool branch_taken_0x1a7bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BC8u;
        // 0x1a7bcc: 0xa6220616  sh          $v0, 0x616($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1558), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bc8) {
            ctx->pc = 0x1A7C20u;
            goto label_1a7c20;
        }
    }
    ctx->pc = 0x1A7BD0u;
label_1a7bd0:
    // 0x1a7bd0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1a7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1a7bd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a7bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a7bd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a7bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a7bdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7be0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7be4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a7be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a7be8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a7bec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1a7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1a7bf0: 0xc6210624  lwc1        $f1, 0x624($s1)
    ctx->pc = 0x1a7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7bf4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a7bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7bf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a7bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7bfc: 0x0  nop
    ctx->pc = 0x1a7bfcu;
    // NOP
    // 0x1a7c00: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7C00u;
    {
        const bool branch_taken_0x1a7c00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7c00) {
            ctx->pc = 0x1A7C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7C00u;
            // 0x1a7c04: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C24u;
            goto label_1a7c24;
        }
    }
    ctx->pc = 0x1A7C08u;
    // 0x1a7c08: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x1a7c0c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1a7c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7c10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7c14: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1a7c14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7c18: 0xae2205a0  sw          $v0, 0x5A0($s1)
    ctx->pc = 0x1a7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
label_1a7c1c:
    // 0x1a7c1c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1a7c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a7c20:
    // 0x1a7c20: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a7c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a7c24:
    // 0x1a7c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7c28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a7c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a7c2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7C2Cu;
    {
        const bool branch_taken_0x1a7c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C2Cu;
        // 0x1a7c30: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c2c) {
            ctx->pc = 0x1A7C40u;
            goto label_1a7c40;
        }
    }
    ctx->pc = 0x1A7C34u;
    // 0x1a7c34: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a7c38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7C38u;
    {
        const bool branch_taken_0x1a7c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C38u;
        // 0x1a7c3c: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c38) {
            ctx->pc = 0x1A7C44u;
            goto label_1a7c44;
        }
    }
    ctx->pc = 0x1A7C40u;
label_1a7c40:
    // 0x1a7c40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c44:
    // 0x1a7c44: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a7c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a7c48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7c4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a7c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a7c50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7C50u;
    {
        const bool branch_taken_0x1a7c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C50u;
        // 0x1a7c54: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c50) {
            ctx->pc = 0x1A7C64u;
            goto label_1a7c64;
        }
    }
    ctx->pc = 0x1A7C58u;
    // 0x1a7c58: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a7c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7C5Cu;
    {
        const bool branch_taken_0x1a7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C5Cu;
        // 0x1a7c60: 0x8c550008  lw          $s5, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c5c) {
            ctx->pc = 0x1A7C68u;
            goto label_1a7c68;
        }
    }
    ctx->pc = 0x1A7C64u;
label_1a7c64:
    // 0x1a7c64: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a7c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c68:
    // 0x1a7c68: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a7c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a7c6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7c70: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a7c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a7c74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7C74u;
    {
        const bool branch_taken_0x1a7c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C74u;
        // 0x1a7c78: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c74) {
            ctx->pc = 0x1A7C88u;
            goto label_1a7c88;
        }
    }
    ctx->pc = 0x1A7C7Cu;
    // 0x1a7c7c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a7c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7C80u;
    {
        const bool branch_taken_0x1a7c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C80u;
        // 0x1a7c84: 0x8c54000c  lw          $s4, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c80) {
            ctx->pc = 0x1A7C8Cu;
            goto label_1a7c8c;
        }
    }
    ctx->pc = 0x1A7C88u;
label_1a7c88:
    // 0x1a7c88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a7c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c8c:
    // 0x1a7c8c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a7c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a7c90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7c94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a7c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a7c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7C98u;
    {
        const bool branch_taken_0x1a7c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C98u;
        // 0x1a7c9c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c98) {
            ctx->pc = 0x1A7CACu;
            goto label_1a7cac;
        }
    }
    ctx->pc = 0x1A7CA0u;
    // 0x1a7ca0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a7ca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7CA4u;
    {
        const bool branch_taken_0x1a7ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CA4u;
        // 0x1a7ca8: 0x8c530010  lw          $s3, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ca4) {
            ctx->pc = 0x1A7CB0u;
            goto label_1a7cb0;
        }
    }
    ctx->pc = 0x1A7CACu;
label_1a7cac:
    // 0x1a7cac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a7cacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cb0:
    // 0x1a7cb0: 0x12400072  beqz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x1A7CB0u;
    {
        const bool branch_taken_0x1a7cb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CB0u;
        // 0x1a7cb4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cb0) {
            ctx->pc = 0x1A7E7Cu;
            goto label_1a7e7c;
        }
    }
    ctx->pc = 0x1A7CB8u;
    // 0x1a7cb8: 0x52a00071  beql        $s5, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1A7CB8u;
    {
        const bool branch_taken_0x1a7cb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cb8) {
            ctx->pc = 0x1A7CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7CB8u;
            // 0x1a7cbc: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7E80u;
            goto label_1a7e80;
        }
    }
    ctx->pc = 0x1A7CC0u;
    // 0x1a7cc0: 0x5280006f  beql        $s4, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x1A7CC0u;
    {
        const bool branch_taken_0x1a7cc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cc0) {
            ctx->pc = 0x1A7CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7CC0u;
            // 0x1a7cc4: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7E80u;
            goto label_1a7e80;
        }
    }
    ctx->pc = 0x1A7CC8u;
    // 0x1a7cc8: 0x1260006c  beqz        $s3, . + 4 + (0x6C << 2)
    ctx->pc = 0x1A7CC8u;
    {
        const bool branch_taken_0x1a7cc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CC8u;
        // 0x1a7ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cc8) {
            ctx->pc = 0x1A7E7Cu;
            goto label_1a7e7c;
        }
    }
    ctx->pc = 0x1A7CD0u;
    // 0x1a7cd0: 0x92230613  lbu         $v1, 0x613($s1)
    ctx->pc = 0x1a7cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1555)));
    // 0x1a7cd4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7CD4u;
    {
        const bool branch_taken_0x1a7cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CD4u;
        // 0x1a7cd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cd4) {
            ctx->pc = 0x1A7D00u;
            goto label_1a7d00;
        }
    }
    ctx->pc = 0x1A7CDCu;
    // 0x1a7cdc: 0x54400068  bnel        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x1A7CDCu;
    {
        const bool branch_taken_0x1a7cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cdc) {
            ctx->pc = 0x1A7CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7CDCu;
            // 0x1a7ce0: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7E80u;
            goto label_1a7e80;
        }
    }
    ctx->pc = 0x1A7CE4u;
    // 0x1a7ce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7ce8: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A7CE8u;
    {
        const bool branch_taken_0x1a7ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CE8u;
        // 0x1a7cec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ce8) {
            ctx->pc = 0x1A7DB8u;
            goto label_1a7db8;
        }
    }
    ctx->pc = 0x1A7CF0u;
    // 0x1a7cf0: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A7CF0u;
    {
        const bool branch_taken_0x1a7cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7cf0) {
            ctx->pc = 0x1A7CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7CF0u;
            // 0x1a7cf4: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7DDCu;
            goto label_1a7ddc;
        }
    }
    ctx->pc = 0x1A7CF8u;
    // 0x1a7cf8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1A7CF8u;
    {
        const bool branch_taken_0x1a7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CF8u;
        // 0x1a7cfc: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cf8) {
            ctx->pc = 0x1A7E80u;
            goto label_1a7e80;
        }
    }
    ctx->pc = 0x1A7D00u;
label_1a7d00:
    // 0x1a7d00: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1a7d04: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1a7d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1a7d08: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1a7d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1a7d0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a7d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a7d10: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1a7d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1a7d14: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7D14u;
    SET_GPR_U32(ctx, 31, 0x1A7D1Cu);
    ctx->pc = 0x1A7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D14u;
    // 0x1a7d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7D14u, 0x1A7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D1Cu;
label_1a7d1c:
    // 0x1a7d1c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7d20: 0xc6410100  lwc1        $f1, 0x100($s2)
    ctx->pc = 0x1a7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7d28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7d2c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D34u);
    ctx->pc = 0x1A7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D2Cu;
    // 0x1a7d30: 0xe6410100  swc1        $f1, 0x100($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7D2Cu, 0x1A7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D34u;
label_1a7d34:
    // 0x1a7d34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7d38: 0xc6a10108  lwc1        $f1, 0x108($s5)
    ctx->pc = 0x1a7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7d44: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7D44u;
    SET_GPR_U32(ctx, 31, 0x1A7D4Cu);
    ctx->pc = 0x1A7D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D44u;
    // 0x1a7d48: 0xe6a10108  swc1        $f1, 0x108($s5) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7D44u, 0x1A7D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D4Cu;
label_1a7d4c:
    // 0x1a7d4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7d50: 0xc6810100  lwc1        $f1, 0x100($s4)
    ctx->pc = 0x1a7d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a7d58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a7d5c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D64u);
    ctx->pc = 0x1A7D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D5Cu;
    // 0x1a7d60: 0xe6810100  swc1        $f1, 0x100($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7D5Cu, 0x1A7D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D64u;
label_1a7d64:
    // 0x1a7d64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7d68: 0xc6610108  lwc1        $f1, 0x108($s3)
    ctx->pc = 0x1a7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7d6c: 0x3c01403d  lui         $at, 0x403D
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16445 << 16));
    // 0x1a7d70: 0x3421e44e  ori         $at, $at, 0xE44E
    ctx->pc = 0x1a7d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58446);
    // 0x1a7d74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a7d78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a7d78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a7d7c: 0xe6610108  swc1        $f1, 0x108($s3)
    ctx->pc = 0x1a7d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 264), bits); }
    // 0x1a7d80: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x1a7d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7d84: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1a7d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7d88: 0x0  nop
    ctx->pc = 0x1a7d88u;
    // NOP
    // 0x1a7d8c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x1A7D8Cu;
    {
        const bool branch_taken_0x1a7d8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D8Cu;
        // 0x1a7d90: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d8c) {
            ctx->pc = 0x1A7E78u;
            goto label_1a7e78;
        }
    }
    ctx->pc = 0x1A7D94u;
    // 0x1a7d94: 0xe6420100  swc1        $f2, 0x100($s2)
    ctx->pc = 0x1a7d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x1a7d98: 0x3c01c03d  lui         $at, 0xC03D
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49213 << 16));
    // 0x1a7d9c: 0x3421e44e  ori         $at, $at, 0xE44E
    ctx->pc = 0x1a7d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58446);
    // 0x1a7da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7da4: 0xe6a20108  swc1        $f2, 0x108($s5)
    ctx->pc = 0x1a7da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 264), bits); }
    // 0x1a7da8: 0xe6800100  swc1        $f0, 0x100($s4)
    ctx->pc = 0x1a7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    // 0x1a7dac: 0xe6600108  swc1        $f0, 0x108($s3)
    ctx->pc = 0x1a7dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 264), bits); }
    // 0x1a7db0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7DB0u;
    {
        const bool branch_taken_0x1a7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DB0u;
        // 0x1a7db4: 0xa6230618  sh          $v1, 0x618($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1560), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7db0) {
            ctx->pc = 0x1A7DCCu;
            goto label_1a7dcc;
        }
    }
    ctx->pc = 0x1A7DB8u;
label_1a7db8:
    // 0x1a7db8: 0x96220618  lhu         $v0, 0x618($s1)
    ctx->pc = 0x1a7db8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1560)));
    // 0x1a7dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7dc0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7dc4: 0x1c60002c  bgtz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A7DC4u;
    {
        const bool branch_taken_0x1a7dc4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DC4u;
        // 0x1a7dc8: 0xa6220618  sh          $v0, 0x618($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1560), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dc4) {
            ctx->pc = 0x1A7E78u;
            goto label_1a7e78;
        }
    }
    ctx->pc = 0x1A7DCCu;
label_1a7dcc:
    // 0x1a7dcc: 0x92220613  lbu         $v0, 0x613($s1)
    ctx->pc = 0x1a7dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1555)));
    // 0x1a7dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7dd4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A7DD4u;
    {
        const bool branch_taken_0x1a7dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DD4u;
        // 0x1a7dd8: 0xa2220613  sb          $v0, 0x613($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1555), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dd4) {
            ctx->pc = 0x1A7E78u;
            goto label_1a7e78;
        }
    }
    ctx->pc = 0x1A7DDCu;
label_1a7ddc:
    // 0x1a7ddc: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1a7ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1a7de0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1a7de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1a7de4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a7de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a7de8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1a7de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1a7dec: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7DECu;
    SET_GPR_U32(ctx, 31, 0x1A7DF4u);
    ctx->pc = 0x1A7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DECu;
    // 0x1a7df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7DECu, 0x1A7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DF4u;
label_1a7df4:
    // 0x1a7df4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7df8: 0xc6410100  lwc1        $f1, 0x100($s2)
    ctx->pc = 0x1a7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a7e00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a7e04: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7E04u;
    SET_GPR_U32(ctx, 31, 0x1A7E0Cu);
    ctx->pc = 0x1A7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E04u;
    // 0x1a7e08: 0xe6410100  swc1        $f1, 0x100($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7E04u, 0x1A7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E0Cu;
label_1a7e0c:
    // 0x1a7e0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7e10: 0xc6a10108  lwc1        $f1, 0x108($s5)
    ctx->pc = 0x1a7e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a7e18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a7e1c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E24u);
    ctx->pc = 0x1A7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E1Cu;
    // 0x1a7e20: 0xe6a10108  swc1        $f1, 0x108($s5) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7E1Cu, 0x1A7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E24u;
label_1a7e24:
    // 0x1a7e24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7e28: 0xc6810100  lwc1        $f1, 0x100($s4)
    ctx->pc = 0x1a7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7e34: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1A7E34u;
    SET_GPR_U32(ctx, 31, 0x1A7E3Cu);
    ctx->pc = 0x1A7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E34u;
    // 0x1a7e38: 0xe6810100  swc1        $f1, 0x100($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A7E34u, 0x1A7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E3Cu;
label_1a7e3c:
    // 0x1a7e3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a7e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a7e40: 0xc6610108  lwc1        $f1, 0x108($s3)
    ctx->pc = 0x1a7e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7e44: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a7e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a7e48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a7e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a7e4c: 0xe6610108  swc1        $f1, 0x108($s3)
    ctx->pc = 0x1a7e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 264), bits); }
    // 0x1a7e50: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x1a7e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7e54: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1a7e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7e58: 0x0  nop
    ctx->pc = 0x1a7e58u;
    // NOP
    // 0x1a7e5c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7E5Cu;
    {
        const bool branch_taken_0x1a7e5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E5Cu;
        // 0x1a7e60: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e5c) {
            ctx->pc = 0x1A7E7Cu;
            goto label_1a7e7c;
        }
    }
    ctx->pc = 0x1A7E64u;
    // 0x1a7e64: 0xe6420100  swc1        $f2, 0x100($s2)
    ctx->pc = 0x1a7e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x1a7e68: 0xe6a20108  swc1        $f2, 0x108($s5)
    ctx->pc = 0x1a7e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 264), bits); }
    // 0x1a7e6c: 0xe6820100  swc1        $f2, 0x100($s4)
    ctx->pc = 0x1a7e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    // 0x1a7e70: 0xe6620108  swc1        $f2, 0x108($s3)
    ctx->pc = 0x1a7e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 264), bits); }
    // 0x1a7e74: 0xa2200613  sb          $zero, 0x613($s1)
    ctx->pc = 0x1a7e74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1555), (uint8_t)GPR_U32(ctx, 0));
label_1a7e78:
    // 0x1a7e78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a7e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a7e7c:
    // 0x1a7e7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a7e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a7e80:
    // 0x1a7e80: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a7e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7e84: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a7e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a7e88: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a7e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7e8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a7e8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7e90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a7e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7e94: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1a7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7e98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E98u;
        // 0x1a7e9c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7EA0u;
}
