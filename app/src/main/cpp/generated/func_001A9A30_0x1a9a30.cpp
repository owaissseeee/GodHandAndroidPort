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

// Function: func_001A9A30
// Address: 0x1a9a30 - 0x1aa058
void func_001A9A30_0x1a9a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A9A30_0x1a9a30");
#endif

    switch (ctx->pc) {
        case 0x1a9a70u: goto label_1a9a70;
        case 0x1a9b30u: goto label_1a9b30;
        case 0x1a9b90u: goto label_1a9b90;
        case 0x1a9bb0u: goto label_1a9bb0;
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9c30u: goto label_1a9c30;
        case 0x1a9c88u: goto label_1a9c88;
        case 0x1a9cc0u: goto label_1a9cc0;
        case 0x1a9ce4u: goto label_1a9ce4;
        case 0x1a9d44u: goto label_1a9d44;
        case 0x1a9d54u: goto label_1a9d54;
        case 0x1a9dfcu: goto label_1a9dfc;
        case 0x1a9e70u: goto label_1a9e70;
        case 0x1a9ed4u: goto label_1a9ed4;
        case 0x1a9f0cu: goto label_1a9f0c;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9fdcu: goto label_1a9fdc;
        case 0x1aa008u: goto label_1aa008;
        default: break;
    }

    ctx->pc = 0x1a9a30u;

    // 0x1a9a30: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1a9a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1a9a34: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1a9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x1a9a38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a3c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1a9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x1a9a40: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1a9a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x1a9a44: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1a9a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x1a9a48: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1a9a48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1a9a4c: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1a9a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x1a9a50: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1a9a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a54: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1a9a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x1a9a58: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1a9a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x1a9a5c: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x1a9a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x1a9a60: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x1a9a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x1a9a64: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1a9a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1a9a68: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A9A68u;
    SET_GPR_U32(ctx, 31, 0x1A9A70u);
    ctx->pc = 0x1A9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A68u;
    // 0x1a9a6c: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A9A68u, 0x1A9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A70u;
label_1a9a70:
    // 0x1a9a70: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a9a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9a78: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1a9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9a7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9a80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a9a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a9a84: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a9a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9a88: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a9a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1a9a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9a90: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a9a94: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1a9a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a9a98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a9a98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9a9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a9a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a9aa0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1a9aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a9aa4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1a9aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a9aa8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a9aa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9aac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a9aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a9ab0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1a9ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ab4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a9ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9ab8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a9ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a9abc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9ac0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a9ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9ac4: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1a9ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1a9ac8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1a9ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a9ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9ad4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9ad8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a9ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a9adc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a9adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a9ae0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a9ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a9ae4: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x1a9ae4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a9ae8: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x1a9ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
    // 0x1a9aec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9af0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1a9af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9af4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1a9af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1a9af8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9afc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1a9afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a9b00: 0xae2002c4  sw          $zero, 0x2C4($s1)
    ctx->pc = 0x1a9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
    // 0x1a9b04: 0xae2009a0  sw          $zero, 0x9A0($s1)
    ctx->pc = 0x1a9b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2464), GPR_U32(ctx, 0));
    // 0x1a9b08: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a9b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a9b0c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x1a9b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1a9b10: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1a9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1a9b14: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1a9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1a9b18: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1a9b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1a9b1c: 0xae2009a4  sw          $zero, 0x9A4($s1)
    ctx->pc = 0x1a9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2468), GPR_U32(ctx, 0));
    // 0x1a9b20: 0xae2902c0  sw          $t1, 0x2C0($s1)
    ctx->pc = 0x1a9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 9));
    // 0x1a9b24: 0xa62202ac  sh          $v0, 0x2AC($s1)
    ctx->pc = 0x1a9b24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 684), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a9b28: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A9B28u;
    SET_GPR_U32(ctx, 31, 0x1A9B30u);
    ctx->pc = 0x1A9B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B28u;
    // 0x1a9b2c: 0xe503000c  swc1        $f3, 0xC($t0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A9B28u, 0x1A9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B30u;
label_1a9b30:
    // 0x1a9b30: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9B30u;
    {
        const bool branch_taken_0x1a9b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B30u;
        // 0x1a9b34: 0xae220604  sw          $v0, 0x604($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b30) {
            ctx->pc = 0x1A9BB0u;
            goto label_1a9bb0;
        }
    }
    ctx->pc = 0x1A9B38u;
    // 0x1a9b38: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a9b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a9b3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9b40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a9b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a9b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9B44u;
    {
        const bool branch_taken_0x1a9b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B44u;
        // 0x1a9b48: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b44) {
            ctx->pc = 0x1A9B58u;
            goto label_1a9b58;
        }
    }
    ctx->pc = 0x1A9B4Cu;
    // 0x1a9b4c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a9b50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9B50u;
    {
        const bool branch_taken_0x1a9b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B50u;
        // 0x1a9b54: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b50) {
            ctx->pc = 0x1A9B5Cu;
            goto label_1a9b5c;
        }
    }
    ctx->pc = 0x1A9B58u;
label_1a9b58:
    // 0x1a9b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b5c:
    // 0x1a9b5c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1a9b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1a9b60: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1a9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a9b64: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1a9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1a9b68: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1a9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1a9b6c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1a9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1a9b70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a9b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9b7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a9b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b80: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1a9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1a9b84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a9b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b88: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A9B88u;
    SET_GPR_U32(ctx, 31, 0x1A9B90u);
    ctx->pc = 0x1A9B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B88u;
    // 0x1a9b8c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A9B88u, 0x1A9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B90u;
label_1a9b90:
    // 0x1a9b90: 0xae220618  sw          $v0, 0x618($s1)
    ctx->pc = 0x1a9b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1560), GPR_U32(ctx, 2));
    // 0x1a9b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b98: 0x8e230604  lw          $v1, 0x604($s1)
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1a9b9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9ba0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a9ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a9ba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a9ba8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A9BA8u;
    SET_GPR_U32(ctx, 31, 0x1A9BB0u);
    ctx->pc = 0x1A9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BA8u;
    // 0x1a9bac: 0x8e240604  lw          $a0, 0x604($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A9BA8u, 0x1A9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BB0u;
label_1a9bb0:
    // 0x1a9bb0: 0x26444380  addiu       $a0, $s2, 0x4380
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
    // 0x1a9bb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9bb8: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1A9BB8u;
    SET_GPR_U32(ctx, 31, 0x1A9BC0u);
    ctx->pc = 0x1A9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BB8u;
    // 0x1a9bbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1A9BB8u, 0x1A9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BC0u;
label_1a9bc0:
    // 0x1a9bc0: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a9bc4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A9BC4u;
    {
        const bool branch_taken_0x1a9bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BC4u;
        // 0x1a9bc8: 0xae220608  sw          $v0, 0x608($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bc4) {
            ctx->pc = 0x1A9CC0u;
            goto label_1a9cc0;
        }
    }
    ctx->pc = 0x1A9BCCu;
    // 0x1a9bcc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a9bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a9bd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a9bd4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a9bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a9bd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9BD8u;
    {
        const bool branch_taken_0x1a9bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD8u;
        // 0x1a9bdc: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bd8) {
            ctx->pc = 0x1A9BECu;
            goto label_1a9bec;
        }
    }
    ctx->pc = 0x1A9BE0u;
    // 0x1a9be0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a9be4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9BE4u;
    {
        const bool branch_taken_0x1a9be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BE4u;
        // 0x1a9be8: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9be4) {
            ctx->pc = 0x1A9BF0u;
            goto label_1a9bf0;
        }
    }
    ctx->pc = 0x1A9BECu;
label_1a9bec:
    // 0x1a9bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9bf0:
    // 0x1a9bf0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1a9bf4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1a9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a9bf8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1a9bfc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1a9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1a9c00: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a9c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a9c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9c08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a9c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9c14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a9c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c18: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a9c1c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a9c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a9c20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9c24: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1a9c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a9c28: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1A9C28u;
    SET_GPR_U32(ctx, 31, 0x1A9C30u);
    ctx->pc = 0x1A9C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C28u;
    // 0x1a9c2c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1A9C28u, 0x1A9C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C30u;
label_1a9c30:
    // 0x1a9c30: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1a9c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a9c34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9c38: 0xae22061c  sw          $v0, 0x61C($s1)
    ctx->pc = 0x1a9c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 2));
    // 0x1a9c3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1a9c3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a9c40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9C40u;
    {
        const bool branch_taken_0x1a9c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C40u;
        // 0x1a9c44: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c40) {
            ctx->pc = 0x1A9C54u;
            goto label_1a9c54;
        }
    }
    ctx->pc = 0x1A9C48u;
    // 0x1a9c48: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a9c4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9C4Cu;
    {
        const bool branch_taken_0x1a9c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C4Cu;
        // 0x1a9c50: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c4c) {
            ctx->pc = 0x1A9C58u;
            goto label_1a9c58;
        }
    }
    ctx->pc = 0x1A9C54u;
label_1a9c54:
    // 0x1a9c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c58:
    // 0x1a9c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9c60: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1a9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1a9c64: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1a9c68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a9c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c6c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1a9c70: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a9c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c74: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1a9c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1a9c78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a9c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c7c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1a9c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a9c80: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A9C80u;
    SET_GPR_U32(ctx, 31, 0x1A9C88u);
    ctx->pc = 0x1A9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C80u;
    // 0x1a9c84: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A9C80u, 0x1A9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C88u;
label_1a9c88:
    // 0x1a9c88: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a9c8c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1a9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a9c90: 0xae220620  sw          $v0, 0x620($s1)
    ctx->pc = 0x1a9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 2));
    // 0x1a9c94: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a9c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a9c98: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1a9c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a9c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ca0: 0x8e220608  lw          $v0, 0x608($s1)
    ctx->pc = 0x1a9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a9ca4: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1a9ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1a9ca8: 0x8e230608  lw          $v1, 0x608($s1)
    ctx->pc = 0x1a9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1a9cac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9cb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a9cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a9cb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a9cb8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A9CB8u;
    SET_GPR_U32(ctx, 31, 0x1A9CC0u);
    ctx->pc = 0x1A9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CB8u;
    // 0x1a9cbc: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A9CB8u, 0x1A9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CC0u;
label_1a9cc0:
    // 0x1a9cc0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1a9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1a9cc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9cc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9ccc: 0x24502fc0  addiu       $s0, $v0, 0x2FC0
    ctx->pc = 0x1a9cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x1a9cd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a9cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cdc: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x1A9CDCu;
    SET_GPR_U32(ctx, 31, 0x1A9CE4u);
    ctx->pc = 0x1A9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CDCu;
    // 0x1a9ce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x1A9CDCu, 0x1A9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CE4u;
label_1a9ce4:
    // 0x1a9ce4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a9ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a9ce8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a9cec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a9cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a9cf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9CF0u;
    {
        const bool branch_taken_0x1a9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CF0u;
        // 0x1a9cf4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cf0) {
            ctx->pc = 0x1A9D04u;
            goto label_1a9d04;
        }
    }
    ctx->pc = 0x1A9CF8u;
    // 0x1a9cf8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a9cfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9CFCu;
    {
        const bool branch_taken_0x1a9cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CFCu;
        // 0x1a9d00: 0x8c460028  lw          $a2, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cfc) {
            ctx->pc = 0x1A9D08u;
            goto label_1a9d08;
        }
    }
    ctx->pc = 0x1A9D04u;
label_1a9d04:
    // 0x1a9d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9d08:
    // 0x1a9d08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a9d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d14: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1a9d18: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1a9d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1a9d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9d20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a9d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d28: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1a9d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1a9d2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a9d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d30: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1a9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1a9d34: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a9d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a9d38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9d3c: 0xc04d220  jal         func_134880
    ctx->pc = 0x1A9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D44u);
    ctx->pc = 0x1A9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D3Cu;
    // 0x1a9d40: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x1A9D3Cu, 0x1A9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D44u;
label_1a9d44:
    // 0x1a9d44: 0x26642fc0  addiu       $a0, $s3, 0x2FC0
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x1a9d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d4c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D54u);
    ctx->pc = 0x1A9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D4Cu;
    // 0x1a9d50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1A9D4Cu, 0x1A9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D54u;
label_1a9d54:
    // 0x1a9d54: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1a9d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9d5c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1a9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a9d60: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1a9d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1a9d64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a9d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a9d68: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a9d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1a9d6c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a9d70: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1a9d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1a9d74: 0x24467bf0  addiu       $a2, $v0, 0x7BF0
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x1a9d78: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a9d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a9d7c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a9d80: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1a9d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9d88: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a9d8c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1a9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1a9d90: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1a9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1a9d94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a9d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1a9d98: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1a9d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1a9d9c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1a9d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1a9da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9da4: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x1a9da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x1a9da8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1a9da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1a9dac: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1a9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1a9db0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1a9db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1a9db4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a9db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9dbc: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1a9dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a9dc0: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x1a9dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9dc8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1a9dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a9dcc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a9dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a9dd0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1a9dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a9dd4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A9DD4u;
    {
        const bool branch_taken_0x1a9dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DD4u;
        // 0x1a9dd8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dd4) {
            ctx->pc = 0x1A9E50u;
            goto label_1a9e50;
        }
    }
    ctx->pc = 0x1A9DDCu;
    // 0x1a9ddc: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x1a9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1a9de0: 0x26370080  addiu       $s7, $s1, 0x80
    ctx->pc = 0x1a9de0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1a9de4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1a9de8: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a9dec: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x1a9decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a9df0: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x1a9df0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a9df4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1a9df4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1a9df8: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1a9dfc:
    // 0x1a9dfc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1a9dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a9e00: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1a9e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a9e04: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1a9e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a9e08: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1a9e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a9e0c: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x1a9e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a9e10: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x1a9e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a9e14: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x1a9e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a9e18: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x1a9e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a9e1c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x1a9e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e20: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x1a9e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e24: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x1a9e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e28: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x1a9e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e2c: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1a9e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e30: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1a9e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e34: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x1a9e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e38: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x1a9e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a9e3c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1a9e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1a9e40: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A9E40u;
    {
        const bool branch_taken_0x1a9e40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E40u;
        // 0x1a9e44: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e40) {
            ctx->pc = 0x1A9DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9E48u;
    // 0x1a9e48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9E48u;
    {
        const bool branch_taken_0x1a9e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E48u;
        // 0x1a9e4c: 0x2610ae50  addiu       $s0, $s0, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e48) {
            ctx->pc = 0x1A9EA0u;
            goto label_1a9ea0;
        }
    }
    ctx->pc = 0x1A9E50u;
label_1a9e50:
    // 0x1a9e50: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1a9e54: 0x26370080  addiu       $s7, $s1, 0x80
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1a9e58: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x1a9e58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1a9e5c: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x1a9e5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a9e60: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x1a9e60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a9e64: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x1a9e64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a9e68: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1a9e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1a9e6c: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x1a9e6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1a9e70:
    // 0x1a9e70: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1a9e70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a9e74: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x1a9e74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a9e78: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1a9e78u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a9e7c: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x1a9e7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a9e80: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1a9e80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1a9e84: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x1a9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x1a9e88: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1a9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1a9e8c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1a9e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1a9e90: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1a9e94: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A9E94u;
    {
        const bool branch_taken_0x1a9e94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E94u;
        // 0x1a9e98: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e94) {
            ctx->pc = 0x1A9E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9e70;
        }
    }
    ctx->pc = 0x1A9E9Cu;
    // 0x1a9e9c: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x1a9e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
label_1a9ea0:
    // 0x1a9ea0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1a9ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a9ea4: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x1a9ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a9ea8: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1a9ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a9eac: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1a9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1a9eb0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a9eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9eb4: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1a9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x1a9eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ebc: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1a9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    // 0x1a9ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ec4: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x1a9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x1a9ec8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a9ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ecc: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1A9ECCu;
    SET_GPR_U32(ctx, 31, 0x1A9ED4u);
    ctx->pc = 0x1A9ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9ECCu;
    // 0x1a9ed0: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1A9ECCu, 0x1A9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9ED4u;
label_1a9ed4:
    // 0x1a9ed4: 0xae22060c  sw          $v0, 0x60C($s1)
    ctx->pc = 0x1a9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1548), GPR_U32(ctx, 2));
    // 0x1a9ed8: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1a9ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a9edc: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1a9edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a9ee0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a9ee4: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1a9ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a9ee8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1a9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1a9eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ef0: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1a9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x1a9ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ef8: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1a9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    // 0x1a9efc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a9efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f00: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x1a9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x1a9f04: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1A9F04u;
    SET_GPR_U32(ctx, 31, 0x1A9F0Cu);
    ctx->pc = 0x1A9F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F04u;
    // 0x1a9f08: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1A9F04u, 0x1A9F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F0Cu;
label_1a9f0c:
    // 0x1a9f0c: 0xae220610  sw          $v0, 0x610($s1)
    ctx->pc = 0x1a9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 2));
    // 0x1a9f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f14: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a9f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f18: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1a9f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a9f1c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1a9f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a9f20: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x1a9f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a9f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f28: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1a9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1a9f2c: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1a9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x1a9f30: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1a9f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a9f34: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1a9f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    // 0x1a9f38: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x1a9f38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f3c: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1A9F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F44u);
    ctx->pc = 0x1A9F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F3Cu;
    // 0x1a9f40: 0xafb60018  sw          $s6, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1A9F3Cu, 0x1A9F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F44u;
label_1a9f44:
    // 0x1a9f44: 0xae220614  sw          $v0, 0x614($s1)
    ctx->pc = 0x1a9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1556), GPR_U32(ctx, 2));
    // 0x1a9f48: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1a9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a9f4c: 0x8e24060c  lw          $a0, 0x60C($s1)
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1548)));
    // 0x1a9f50: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x1a9f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1a9f54: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1a9f54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1a9f58: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1a9f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a9f5c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a9f60: 0x240904e2  addiu       $t1, $zero, 0x4E2
    ctx->pc = 0x1a9f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x1a9f64: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a9f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a9f68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1a9f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1a9f6c: 0x8e230610  lw          $v1, 0x610($s1)
    ctx->pc = 0x1a9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1a9f70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a9f74: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a9f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a9f78: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1a9f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1a9f7c: 0x8e240614  lw          $a0, 0x614($s1)
    ctx->pc = 0x1a9f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1556)));
    // 0x1a9f80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a9f84: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a9f88: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1a9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1a9f8c: 0xa626054a  sh          $a2, 0x54A($s1)
    ctx->pc = 0x1a9f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a9f90: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x1a9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1a9f94: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x1a9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1a9f98: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a9f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1a9f9c: 0x8e2409ec  lw          $a0, 0x9EC($s1)
    ctx->pc = 0x1a9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2540)));
    // 0x1a9fa0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1a9fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1a9fa4: 0x34421588  ori         $v0, $v0, 0x1588
    ctx->pc = 0x1a9fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5512);
    // 0x1a9fa8: 0xa6260548  sh          $a2, 0x548($s1)
    ctx->pc = 0x1a9fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a9fac: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x1a9facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x1a9fb0: 0x1089000a  beq         $a0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9FB0u;
    {
        const bool branch_taken_0x1a9fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x1A9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FB0u;
        // 0x1a9fb4: 0xae2205b8  sw          $v0, 0x5B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fb0) {
            ctx->pc = 0x1A9FDCu;
            goto label_1a9fdc;
        }
    }
    ctx->pc = 0x1A9FB8u;
    // 0x1a9fb8: 0x8e2509f0  lw          $a1, 0x9F0($s1)
    ctx->pc = 0x1a9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2544)));
    // 0x1a9fbc: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1a9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a9fc0: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9FC0u;
    {
        const bool branch_taken_0x1a9fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FC0u;
        // 0x1a9fc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fc0) {
            ctx->pc = 0x1A9FDCu;
            goto label_1a9fdc;
        }
    }
    ctx->pc = 0x1A9FC8u;
    // 0x1a9fc8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1a9fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1a9fcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a9fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fd0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1a9fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9fd4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1A9FD4u;
    SET_GPR_U32(ctx, 31, 0x1A9FDCu);
    ctx->pc = 0x1A9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FD4u;
    // 0x1a9fd8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1A9FD4u, 0x1A9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FDCu;
label_1a9fdc:
    // 0x1a9fdc: 0x8e2409f4  lw          $a0, 0x9F4($s1)
    ctx->pc = 0x1a9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2548)));
    // 0x1a9fe0: 0x240204e2  addiu       $v0, $zero, 0x4E2
    ctx->pc = 0x1a9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x1a9fe4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9FE4u;
    {
        const bool branch_taken_0x1a9fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FE4u;
        // 0x1a9fe8: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fe4) {
            ctx->pc = 0x1AA008u;
            goto label_1aa008;
        }
    }
    ctx->pc = 0x1A9FECu;
    // 0x1a9fec: 0x8e2509f8  lw          $a1, 0x9F8($s1)
    ctx->pc = 0x1a9fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2552)));
    // 0x1a9ff0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9FF0u;
    {
        const bool branch_taken_0x1a9ff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF0u;
        // 0x1a9ff4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ff0) {
            ctx->pc = 0x1AA008u;
            goto label_1aa008;
        }
    }
    ctx->pc = 0x1A9FF8u;
    // 0x1a9ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a9ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ffc: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x1a9ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1aa000: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1AA000u;
    SET_GPR_U32(ctx, 31, 0x1AA008u);
    ctx->pc = 0x1AA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA000u;
    // 0x1aa004: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1AA000u, 0x1AA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA008u;
label_1aa008:
    // 0x1aa008: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa00c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1aa00cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aa010: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1aa010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aa014: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1aa014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aa018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa01c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1aa01cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aa020: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1aa020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1aa024: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1aa024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1aa028: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1aa028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa02c: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1aa02cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa030: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1aa030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aa034: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1aa034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1aa038: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1aa038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa03c: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x1aa03cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1aa040: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x1aa040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1aa044: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1aa048: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1aa048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA04Cu;
        // 0x1aa050: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA054u;
    // 0x1aa054: 0x0  nop
    ctx->pc = 0x1aa054u;
    // NOP
    ctx->pc = 0x1aa058u;
}
