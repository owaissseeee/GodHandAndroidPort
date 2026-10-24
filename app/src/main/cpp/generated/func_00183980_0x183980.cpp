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

// Function: func_00183980
// Address: 0x183980 - 0x1841e8
void func_00183980_0x183980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183980_0x183980");
#endif

    switch (ctx->pc) {
        case 0x1839c8u: goto label_1839c8;
        case 0x183a58u: goto label_183a58;
        case 0x183a8cu: goto label_183a8c;
        case 0x183ae8u: goto label_183ae8;
        case 0x183b18u: goto label_183b18;
        case 0x183b78u: goto label_183b78;
        case 0x183ba8u: goto label_183ba8;
        case 0x183c18u: goto label_183c18;
        case 0x183c48u: goto label_183c48;
        case 0x183c98u: goto label_183c98;
        case 0x183cc8u: goto label_183cc8;
        case 0x183d28u: goto label_183d28;
        case 0x183d58u: goto label_183d58;
        case 0x183db4u: goto label_183db4;
        case 0x183de4u: goto label_183de4;
        case 0x183ea0u: goto label_183ea0;
        case 0x183f20u: goto label_183f20;
        case 0x183f78u: goto label_183f78;
        case 0x183fa4u: goto label_183fa4;
        case 0x183fe0u: goto label_183fe0;
        case 0x184010u: goto label_184010;
        case 0x18401cu: goto label_18401c;
        case 0x184028u: goto label_184028;
        case 0x184034u: goto label_184034;
        case 0x184040u: goto label_184040;
        case 0x18404cu: goto label_18404c;
        case 0x184058u: goto label_184058;
        case 0x184064u: goto label_184064;
        case 0x184070u: goto label_184070;
        case 0x18407cu: goto label_18407c;
        case 0x184088u: goto label_184088;
        case 0x1840c0u: goto label_1840c0;
        default: break;
    }

    ctx->pc = 0x183980u;

    // 0x183980: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x183980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x183984: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x183984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x183988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18398c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x18398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x183990: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x183990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x183994: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x183994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x183998: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x183998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x18399c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x18399cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1839a0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1839a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1839a4: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1839a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1839a8: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1839a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x1839ac: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x1839acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x1839b0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1839b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1839b4: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x1839b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1839b8: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1839b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1839bc: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1839bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1839c0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1839C0u;
    SET_GPR_U32(ctx, 31, 0x1839C8u);
    ctx->pc = 0x1839C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839C0u;
    // 0x1839c4: 0xe7b50168  swc1        $f21, 0x168($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1839C0u, 0x1839C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839C8u;
label_1839c8:
    // 0x1839c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1839c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1839cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1839ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1839d0: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1839d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1839d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1839d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1839d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1839d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1839dc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1839dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1839e0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1839e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1839e4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1839e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1839e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1839e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1839ec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1839f0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1839f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1839f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1839f8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1839fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1839fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x183a00: 0x24554380  addiu       $s5, $v0, 0x4380
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x183a04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x183a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x183a08: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183a0c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x183a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x183a10: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x183a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a14: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x183a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x183a18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x183a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a24: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x183a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183a28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183a2c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x183a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183a30: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x183a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183a34: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x183a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183a38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x183a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x183a3c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x183a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x183a40: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x183a40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x183a44: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x183a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x183a48: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x183a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x183a4c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x183a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x183a50: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183A50u;
    SET_GPR_U32(ctx, 31, 0x183A58u);
    ctx->pc = 0x183A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A50u;
    // 0x183a54: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183A50u, 0x183A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A58u;
label_183a58:
    // 0x183a58: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x183a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183a5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183A5Cu;
    {
        const bool branch_taken_0x183a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A5Cu;
        // 0x183a60: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a5c) {
            ctx->pc = 0x183A9Cu;
            goto label_183a9c;
        }
    }
    ctx->pc = 0x183A64u;
    // 0x183a64: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a6c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183a70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a74: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183a78: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x183a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x183a7c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183a80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a84: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183A84u;
    SET_GPR_U32(ctx, 31, 0x183A8Cu);
    ctx->pc = 0x183A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A84u;
    // 0x183a88: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183A84u, 0x183A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A8Cu;
label_183a8c:
    // 0x183a8c: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x183a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x183a90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183a94: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183a98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183a9c:
    // 0x183a9c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x183a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x183aa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183aa4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x183aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183aa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183aac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x183aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x183ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183ab4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183ab8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x183ab8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183abc: 0x26140080  addiu       $s4, $s0, 0x80
    ctx->pc = 0x183abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x183ac0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x183ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x183ac4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x183ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x183ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183acc: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x183accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x183ad0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x183ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x183ad4: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183ad8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x183ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x183adc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x183adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x183ae0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183AE0u;
    SET_GPR_U32(ctx, 31, 0x183AE8u);
    ctx->pc = 0x183AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AE0u;
    // 0x183ae4: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183AE0u, 0x183AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AE8u;
label_183ae8:
    // 0x183ae8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183AE8u;
    {
        const bool branch_taken_0x183ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AE8u;
        // 0x183aec: 0xae020604  sw          $v0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ae8) {
            ctx->pc = 0x183B28u;
            goto label_183b28;
        }
    }
    ctx->pc = 0x183AF0u;
    // 0x183af0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183af8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183afc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x183afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b00: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183b04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b08: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183b08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183b0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b10: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183B10u;
    SET_GPR_U32(ctx, 31, 0x183B18u);
    ctx->pc = 0x183B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B10u;
    // 0x183b14: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183B10u, 0x183B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B18u;
label_183b18:
    // 0x183b18: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x183b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x183b1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183b20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183b24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183b28:
    // 0x183b28: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x183b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183b2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b30: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x183b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b38: 0x3c01bff3  lui         $at, 0xBFF3
    ctx->pc = 0x183b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49139 << 16));
    // 0x183b3c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x183b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x183b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183b48: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x183b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183b4c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x183b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x183b50: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x183b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x183b54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x183b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183b58: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x183b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x183b5c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x183b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x183b60: 0xe6780008  swc1        $f24, 0x8($s3)
    ctx->pc = 0x183b60u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x183b64: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183b64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183b68: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x183b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x183b6c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x183b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x183b70: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183B70u;
    SET_GPR_U32(ctx, 31, 0x183B78u);
    ctx->pc = 0x183B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B70u;
    // 0x183b74: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183B70u, 0x183B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B78u;
label_183b78:
    // 0x183b78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183B78u;
    {
        const bool branch_taken_0x183b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B78u;
        // 0x183b7c: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b78) {
            ctx->pc = 0x183BB8u;
            goto label_183bb8;
        }
    }
    ctx->pc = 0x183B80u;
    // 0x183b80: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b88: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b90: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183b94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b98: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183b9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ba0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183BA0u;
    SET_GPR_U32(ctx, 31, 0x183BA8u);
    ctx->pc = 0x183BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BA0u;
    // 0x183ba4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183BA0u, 0x183BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BA8u;
label_183ba8:
    // 0x183ba8: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x183ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x183bac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183bb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183bb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183bb8:
    // 0x183bb8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x183bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183bbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bc0: 0x3c01bf59  lui         $at, 0xBF59
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48985 << 16));
    // 0x183bc4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x183bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x183bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x183bd4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x183bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x183bd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183bdc: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x183bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x183be0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x183be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x183be4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x183be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x183be8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x183be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x183bec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x183becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x183bf0: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x183bf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183bf4: 0xe6770008  swc1        $f23, 0x8($s3)
    ctx->pc = 0x183bf4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x183bf8: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183bfc: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x183bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x183c00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x183c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183c04: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x183c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x183c08: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x183c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x183c0c: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x183c0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x183c10: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183C10u;
    SET_GPR_U32(ctx, 31, 0x183C18u);
    ctx->pc = 0x183C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C10u;
    // 0x183c14: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183C10u, 0x183C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C18u;
label_183c18:
    // 0x183c18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183C18u;
    {
        const bool branch_taken_0x183c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C18u;
        // 0x183c1c: 0xae02060c  sw          $v0, 0x60C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c18) {
            ctx->pc = 0x183C58u;
            goto label_183c58;
        }
    }
    ctx->pc = 0x183C20u;
    // 0x183c20: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c28: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183c2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x183c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c30: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183c34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c38: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183c3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c40: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183C40u;
    SET_GPR_U32(ctx, 31, 0x183C48u);
    ctx->pc = 0x183C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C40u;
    // 0x183c44: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183C40u, 0x183C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C48u;
label_183c48:
    // 0x183c48: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x183c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x183c4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183c50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183c54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183c58:
    // 0x183c58: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x183c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183c5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c60: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x183c60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c68: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x183c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x183c6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183c70: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x183c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x183c74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x183c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183c78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183c7c: 0xe6770008  swc1        $f23, 0x8($s3)
    ctx->pc = 0x183c7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x183c80: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x183c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x183c84: 0xe6560008  swc1        $f22, 0x8($s2)
    ctx->pc = 0x183c84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x183c88: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183c8c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x183c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x183c90: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183C90u;
    SET_GPR_U32(ctx, 31, 0x183C98u);
    ctx->pc = 0x183C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C90u;
    // 0x183c94: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183C90u, 0x183C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C98u;
label_183c98:
    // 0x183c98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183C98u;
    {
        const bool branch_taken_0x183c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C98u;
        // 0x183c9c: 0xae020610  sw          $v0, 0x610($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c98) {
            ctx->pc = 0x183CD8u;
            goto label_183cd8;
        }
    }
    ctx->pc = 0x183CA0u;
    // 0x183ca0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ca8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183cac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x183cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cb0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183cb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cb8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183cbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cc0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183CC0u;
    SET_GPR_U32(ctx, 31, 0x183CC8u);
    ctx->pc = 0x183CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183CC0u;
    // 0x183cc4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183CC0u, 0x183CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CC8u;
label_183cc8:
    // 0x183cc8: 0x8e030610  lw          $v1, 0x610($s0)
    ctx->pc = 0x183cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x183ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183cd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183cd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183cd8:
    // 0x183cd8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x183cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183cdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ce0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x183ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x183ce4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x183ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x183ce8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x183ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x183cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cf0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x183cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x183cf4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x183cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x183cf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183d00: 0xe6780008  swc1        $f24, 0x8($s3)
    ctx->pc = 0x183d00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x183d04: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x183d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x183d08: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x183d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x183d0c: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x183d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x183d10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x183d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183d14: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183d18: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x183d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x183d1c: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x183d1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x183d20: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183D20u;
    SET_GPR_U32(ctx, 31, 0x183D28u);
    ctx->pc = 0x183D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D20u;
    // 0x183d24: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183D20u, 0x183D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D28u;
label_183d28:
    // 0x183d28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183D28u;
    {
        const bool branch_taken_0x183d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D28u;
        // 0x183d2c: 0xae020614  sw          $v0, 0x614($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d28) {
            ctx->pc = 0x183D68u;
            goto label_183d68;
        }
    }
    ctx->pc = 0x183D30u;
    // 0x183d30: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d38: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183d3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x183d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d40: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183d44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d48: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183d4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d50: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183D50u;
    SET_GPR_U32(ctx, 31, 0x183D58u);
    ctx->pc = 0x183D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D50u;
    // 0x183d54: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183D50u, 0x183D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D58u;
label_183d58:
    // 0x183d58: 0x8e030614  lw          $v1, 0x614($s0)
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x183d5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183d60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183d64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183d68:
    // 0x183d68: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x183d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183d6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x183d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d70: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x183d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x183d74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x183d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d80: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x183d80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x183d84: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x183d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x183d88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183d8c: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x183d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x183d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183d94: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x183d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x183d98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x183d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183d9c: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x183d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x183da0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183da4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x183da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x183da8: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x183da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x183dac: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x183DACu;
    SET_GPR_U32(ctx, 31, 0x183DB4u);
    ctx->pc = 0x183DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DACu;
    // 0x183db0: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x183DACu, 0x183DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DB4u;
label_183db4:
    // 0x183db4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183DB4u;
    {
        const bool branch_taken_0x183db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DB4u;
        // 0x183db8: 0xae020618  sw          $v0, 0x618($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183db4) {
            ctx->pc = 0x183DF4u;
            goto label_183df4;
        }
    }
    ctx->pc = 0x183DBCu;
    // 0x183dbc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dc4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183dc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x183dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dcc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183dd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x183dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dd4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x183dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x183dd8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x183dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ddc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x183DDCu;
    SET_GPR_U32(ctx, 31, 0x183DE4u);
    ctx->pc = 0x183DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DDCu;
    // 0x183de0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x183DDCu, 0x183DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DE4u;
label_183de4:
    // 0x183de4: 0x8e030618  lw          $v1, 0x618($s0)
    ctx->pc = 0x183de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1560)));
    // 0x183de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183dec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x183decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x183df0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_183df4:
    // 0x183df4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x183df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183df8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183dfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183e00: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x183e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183e04: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x183e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183e08: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x183e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x183e0c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x183e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x183e10: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x183e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x183e14: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x183e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x183e18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x183e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x183e1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183e20: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x183e20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183e24: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x183e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x183e28: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x183e28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x183e2c: 0x4bc52100  vaddx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x183e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x183e30: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x183e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x183e34: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183e38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183e3c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x183e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x183e40: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x183e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x183e44: 0x24452d00  addiu       $a1, $v0, 0x2D00
    ctx->pc = 0x183e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11520));
    // 0x183e48: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x183e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x183e4c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x183e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183e50: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x183e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x183e54: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x183e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e58: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x183e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x183e5c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x183e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x183e60: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x183e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x183e64: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x183e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x183e68: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x183e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x183e6c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x183E6Cu;
    {
        const bool branch_taken_0x183e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E6Cu;
        // 0x183e70: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e6c) {
            ctx->pc = 0x183EF4u;
            goto label_183ef4;
        }
    }
    ctx->pc = 0x183E74u;
    // 0x183e74: 0x24a90060  addiu       $t1, $a1, 0x60
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x183e78: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x183e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x183e7c: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x183e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x183e80: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183e84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x183e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183e88: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x183e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183e8c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x183e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183e90: 0x26150e20  addiu       $s5, $s0, 0xE20
    ctx->pc = 0x183e90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3616));
    // 0x183e94: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x183e94u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x183e98: 0x26170654  addiu       $s7, $s0, 0x654
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1620));
    // 0x183e9c: 0x2616065b  addiu       $s6, $s0, 0x65B
    ctx->pc = 0x183e9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1627));
label_183ea0:
    // 0x183ea0: 0x68ac0007  ldl         $t4, 0x7($a1)
    ctx->pc = 0x183ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x183ea4: 0x6cac0000  ldr         $t4, 0x0($a1)
    ctx->pc = 0x183ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x183ea8: 0x68ad000f  ldl         $t5, 0xF($a1)
    ctx->pc = 0x183ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x183eac: 0x6cad0008  ldr         $t5, 0x8($a1)
    ctx->pc = 0x183eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x183eb0: 0x68ae0017  ldl         $t6, 0x17($a1)
    ctx->pc = 0x183eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x183eb4: 0x6cae0010  ldr         $t6, 0x10($a1)
    ctx->pc = 0x183eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x183eb8: 0x68af001f  ldl         $t7, 0x1F($a1)
    ctx->pc = 0x183eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x183ebc: 0x6caf0018  ldr         $t7, 0x18($a1)
    ctx->pc = 0x183ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x183ec0: 0xb06c0007  sdl         $t4, 0x7($v1)
    ctx->pc = 0x183ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ec4: 0xb46c0000  sdr         $t4, 0x0($v1)
    ctx->pc = 0x183ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ec8: 0xb06d000f  sdl         $t5, 0xF($v1)
    ctx->pc = 0x183ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ecc: 0xb46d0008  sdr         $t5, 0x8($v1)
    ctx->pc = 0x183eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ed0: 0xb06e0017  sdl         $t6, 0x17($v1)
    ctx->pc = 0x183ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ed4: 0xb46e0010  sdr         $t6, 0x10($v1)
    ctx->pc = 0x183ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ed8: 0xb06f001f  sdl         $t7, 0x1F($v1)
    ctx->pc = 0x183ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183edc: 0xb46f0018  sdr         $t7, 0x18($v1)
    ctx->pc = 0x183edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183ee0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x183ee4: 0x14a9ffee  bne         $a1, $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x183EE4u;
    {
        const bool branch_taken_0x183ee4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x183EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EE4u;
        // 0x183ee8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ee4) {
            ctx->pc = 0x183EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183ea0;
        }
    }
    ctx->pc = 0x183EECu;
    // 0x183eec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x183EECu;
    {
        const bool branch_taken_0x183eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EECu;
        // 0x183ef0: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183eec) {
            ctx->pc = 0x183F50u;
            goto label_183f50;
        }
    }
    ctx->pc = 0x183EF4u;
label_183ef4:
    // 0x183ef4: 0x24a90060  addiu       $t1, $a1, 0x60
    ctx->pc = 0x183ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x183ef8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x183efc: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x183efcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x183f00: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183f04: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x183f08: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x183f0c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x183f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183f10: 0x26150e20  addiu       $s5, $s0, 0xE20
    ctx->pc = 0x183f10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3616));
    // 0x183f14: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x183f18: 0x26170654  addiu       $s7, $s0, 0x654
    ctx->pc = 0x183f18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1620));
    // 0x183f1c: 0x2616065b  addiu       $s6, $s0, 0x65B
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1627));
label_183f20:
    // 0x183f20: 0xdcac0000  ld          $t4, 0x0($a1)
    ctx->pc = 0x183f20u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183f24: 0xdcad0008  ld          $t5, 0x8($a1)
    ctx->pc = 0x183f24u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x183f28: 0xdcae0010  ld          $t6, 0x10($a1)
    ctx->pc = 0x183f28u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183f2c: 0xdcaf0018  ld          $t7, 0x18($a1)
    ctx->pc = 0x183f2cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x183f30: 0xfc6c0000  sd          $t4, 0x0($v1)
    ctx->pc = 0x183f30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 12));
    // 0x183f34: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x183f34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x183f38: 0xfc6e0010  sd          $t6, 0x10($v1)
    ctx->pc = 0x183f38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 14));
    // 0x183f3c: 0xfc6f0018  sd          $t7, 0x18($v1)
    ctx->pc = 0x183f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 15));
    // 0x183f40: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x183f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x183f44: 0x14a9fff6  bne         $a1, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x183F44u;
    {
        const bool branch_taken_0x183f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x183F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F44u;
        // 0x183f48: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f44) {
            ctx->pc = 0x183F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183f20;
        }
    }
    ctx->pc = 0x183F4Cu;
    // 0x183f4c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x183f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_183f50:
    // 0x183f50: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x183f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x183f54: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x183f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x183f58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x183f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f5c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x183f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x183f60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x183f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x183f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x183f68: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x183f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f70: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x183F70u;
    SET_GPR_U32(ctx, 31, 0x183F78u);
    ctx->pc = 0x183F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F70u;
    // 0x183f74: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x183F70u, 0x183F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F78u;
label_183f78:
    // 0x183f78: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x183f7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x183f80: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x183f84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x183f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x183f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x183f8c: 0x27c63ff8  addiu       $a2, $fp, 0x3FF8
    ctx->pc = 0x183f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 16376));
    // 0x183f90: 0x34421588  ori         $v0, $v0, 0x1588
    ctx->pc = 0x183f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5512);
    // 0x183f94: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x183f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x183f98: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x183f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x183f9c: 0xc053bd4  jal         func_14EF50
    ctx->pc = 0x183F9Cu;
    SET_GPR_U32(ctx, 31, 0x183FA4u);
    ctx->pc = 0x183FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F9Cu;
    // 0x183fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x183F9Cu, 0x183FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FA4u;
label_183fa4:
    // 0x183fa4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x183fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x183fa8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x183fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x183fac: 0x84452f70  lh          $a1, 0x2F70($v0)
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x422F70u));
    // 0x183fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fb4: 0x8e0204a8  lw          $v0, 0x4A8($s0)
    ctx->pc = 0x183fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1192)));
    // 0x183fb8: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x183fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x183fbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x183fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x183fc0: 0xae0204a8  sw          $v0, 0x4A8($s0)
    ctx->pc = 0x183fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1192), GPR_U32(ctx, 2));
    // 0x183fc4: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x183fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x183fc8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x183fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fd0: 0x24462f70  addiu       $a2, $v0, 0x2F70
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12144));
    // 0x183fd4: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x183fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x183fd8: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x183fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x183fdc: 0x0  nop
    ctx->pc = 0x183fdcu;
    // NOP
label_183fe0:
    // 0x183fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183FE0u;
    {
        const bool branch_taken_0x183fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE0u;
        // 0x183fe4: 0x84c40000  lh          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe0) {
            ctx->pc = 0x183FF0u;
            goto label_183ff0;
        }
    }
    ctx->pc = 0x183FE8u;
    // 0x183fe8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x183fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x183fec: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x183fecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_183ff0:
    // 0x183ff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x183ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x183ff4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x183ff8: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x183ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x183ffc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x183FFCu;
    {
        const bool branch_taken_0x183ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FFCu;
        // 0x184000: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ffc) {
            ctx->pc = 0x183FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183fe0;
        }
    }
    ctx->pc = 0x184004u;
    // 0x184004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184008: 0xc061470  jal         func_1851C0
    ctx->pc = 0x184008u;
    SET_GPR_U32(ctx, 31, 0x184010u);
    ctx->pc = 0x18400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184008u;
    // 0x18400c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851C0u, 0x184008u, 0x184010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184010u;
label_184010:
    // 0x184010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184014: 0xc0614ba  jal         func_1852E8
    ctx->pc = 0x184014u;
    SET_GPR_U32(ctx, 31, 0x18401Cu);
    ctx->pc = 0x184018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184014u;
    // 0x184018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1852E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1852E8u, 0x184014u, 0x18401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18401Cu;
label_18401c:
    // 0x18401c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184020: 0xc0615a4  jal         func_185690
    ctx->pc = 0x184020u;
    SET_GPR_U32(ctx, 31, 0x184028u);
    ctx->pc = 0x184024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184020u;
    // 0x184024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185690u, 0x184020u, 0x184028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184028u;
label_184028:
    // 0x184028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18402c: 0xc061688  jal         func_185A20
    ctx->pc = 0x18402Cu;
    SET_GPR_U32(ctx, 31, 0x184034u);
    ctx->pc = 0x184030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18402Cu;
    // 0x184030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185A20u, 0x18402Cu, 0x184034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184034u;
label_184034:
    // 0x184034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184038: 0xc06172e  jal         func_185CB8
    ctx->pc = 0x184038u;
    SET_GPR_U32(ctx, 31, 0x184040u);
    ctx->pc = 0x18403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184038u;
    // 0x18403c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CB8u, 0x184038u, 0x184040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184040u;
label_184040:
    // 0x184040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184044: 0xc06179a  jal         func_185E68
    ctx->pc = 0x184044u;
    SET_GPR_U32(ctx, 31, 0x18404Cu);
    ctx->pc = 0x184048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184044u;
    // 0x184048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185E68u, 0x184044u, 0x18404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18404Cu;
label_18404c:
    // 0x18404c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184050: 0xc06156a  jal         func_1855A8
    ctx->pc = 0x184050u;
    SET_GPR_U32(ctx, 31, 0x184058u);
    ctx->pc = 0x184054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184050u;
    // 0x184054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1855A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1855A8u, 0x184050u, 0x184058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184058u;
label_184058:
    // 0x184058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18405c: 0xc061644  jal         func_185910
    ctx->pc = 0x18405Cu;
    SET_GPR_U32(ctx, 31, 0x184064u);
    ctx->pc = 0x184060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18405Cu;
    // 0x184060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185910u, 0x18405Cu, 0x184064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184064u;
label_184064:
    // 0x184064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184068: 0xc0616f4  jal         func_185BD0
    ctx->pc = 0x184068u;
    SET_GPR_U32(ctx, 31, 0x184070u);
    ctx->pc = 0x18406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184068u;
    // 0x18406c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185BD0u, 0x184068u, 0x184070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184070u;
label_184070:
    // 0x184070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184074: 0xc0617d4  jal         func_185F50
    ctx->pc = 0x184074u;
    SET_GPR_U32(ctx, 31, 0x18407Cu);
    ctx->pc = 0x184078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184074u;
    // 0x184078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185F50u, 0x184074u, 0x18407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18407Cu;
label_18407c:
    // 0x18407c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x18407cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184080: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x184080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184088:
    // 0x184088: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x184088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18408c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x184090: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x184090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x184094: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x184094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x184098: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x184098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x18409c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18409Cu;
    {
        const bool branch_taken_0x18409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1840A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18409Cu;
        // 0x1840a0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18409c) {
            ctx->pc = 0x184088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184088;
        }
    }
    ctx->pc = 0x1840A4u;
    // 0x1840a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1840a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1840a8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1840a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1840ac: 0x246419a0  addiu       $a0, $v1, 0x19A0
    ctx->pc = 0x1840acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6560));
    // 0x1840b0: 0x24050298  addiu       $a1, $zero, 0x298
    ctx->pc = 0x1840b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x1840b4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1840b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1840b8: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x1840B8u;
    SET_GPR_U32(ctx, 31, 0x1840C0u);
    ctx->pc = 0x1840BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840B8u;
    // 0x1840bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x1840B8u, 0x1840C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840C0u;
label_1840c0:
    // 0x1840c0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1840c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1840c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1840c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1840c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1840cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1840CCu;
    {
        const bool branch_taken_0x1840cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840CCu;
        // 0x1840d0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840cc) {
            ctx->pc = 0x1840E0u;
            goto label_1840e0;
        }
    }
    ctx->pc = 0x1840D4u;
    // 0x1840d4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1840d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1840d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1840D8u;
    {
        const bool branch_taken_0x1840d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840D8u;
        // 0x1840dc: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840d8) {
            ctx->pc = 0x1840E4u;
            goto label_1840e4;
        }
    }
    ctx->pc = 0x1840E0u;
label_1840e0:
    // 0x1840e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1840e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1840e4:
    // 0x1840e4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1840E4u;
    {
        const bool branch_taken_0x1840e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840E4u;
        // 0x1840e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840e4) {
            ctx->pc = 0x1841A0u;
            goto label_1841a0;
        }
    }
    ctx->pc = 0x1840ECu;
    // 0x1840ec: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1840ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1840f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1840f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1840f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1840F4u;
    {
        const bool branch_taken_0x1840f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840F4u;
        // 0x1840f8: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840f4) {
            ctx->pc = 0x184108u;
            goto label_184108;
        }
    }
    ctx->pc = 0x1840FCu;
    // 0x1840fc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x184100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x184100u;
    {
        const bool branch_taken_0x184100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184100u;
        // 0x184104: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184100) {
            ctx->pc = 0x18410Cu;
            goto label_18410c;
        }
    }
    ctx->pc = 0x184108u;
label_184108:
    // 0x184108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18410c:
    // 0x18410c: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x18410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x184110: 0x26030df0  addiu       $v1, $s0, 0xDF0
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3568));
    // 0x184114: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x184114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184118: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x184118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18411c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18411cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184120: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x184120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184124: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x184124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x184128: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x184128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18412c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x18412cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x184130: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x184130u;
    {
        const bool branch_taken_0x184130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x184134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184130u;
        // 0x184134: 0xe662000c  swc1        $f2, 0xC($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184130) {
            ctx->pc = 0x184150u;
            goto label_184150;
        }
    }
    ctx->pc = 0x184138u;
    // 0x184138: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x184138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18413c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x18413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184140: 0xe6000df0  swc1        $f0, 0xDF0($s0)
    ctx->pc = 0x184140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3568), bits); }
    // 0x184144: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x184144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x184148: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x184148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18414c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18414cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_184150:
    // 0x184150: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x184150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x184154: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x184154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x184158: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x184158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18415c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18415Cu;
    {
        const bool branch_taken_0x18415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18415Cu;
        // 0x184160: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18415c) {
            ctx->pc = 0x184170u;
            goto label_184170;
        }
    }
    ctx->pc = 0x184164u;
    // 0x184164: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x184168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x184168u;
    {
        const bool branch_taken_0x184168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184168u;
        // 0x18416c: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184168) {
            ctx->pc = 0x184174u;
            goto label_184174;
        }
    }
    ctx->pc = 0x184170u;
label_184170:
    // 0x184170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184174:
    // 0x184174: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x184174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x184178: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x184178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18417c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x18417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184180: 0x26020e00  addiu       $v0, $s0, 0xE00
    ctx->pc = 0x184180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3584));
    // 0x184184: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x184184u;
    {
        const bool branch_taken_0x184184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x184188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184184u;
        // 0x184188: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184184) {
            ctx->pc = 0x1841A0u;
            goto label_1841a0;
        }
    }
    ctx->pc = 0x18418Cu;
    // 0x18418c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x18418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184190: 0xe6000e00  swc1        $f0, 0xE00($s0)
    ctx->pc = 0x184190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3584), bits); }
    // 0x184194: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x184194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x184198: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x184198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18419c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1841a0:
    // 0x1841a0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1841a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1841a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1841a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1841a8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1841a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1841ac: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1841acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1841b0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1841b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1841b4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1841b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1841b8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1841b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1841bc: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1841bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1841c0: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x1841c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1841c4: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x1841c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1841c8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1841c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1841cc: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x1841ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1841d0: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x1841d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1841d4: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1841d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1841d8: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1841d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1841dc: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1841dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1841e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1841E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841E0u;
        // 0x1841e4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1841E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1841E8u;
}
