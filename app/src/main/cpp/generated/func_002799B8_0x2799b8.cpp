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

// Function: func_002799B8
// Address: 0x2799b8 - 0x279b20
void func_002799B8_0x2799b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002799B8_0x2799b8");
#endif

    ctx->pc = 0x2799b8u;

    // 0x2799b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2799b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2799bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2799bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2799c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2799c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2799c4: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x2799c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x2799c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2799c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2799cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2799ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2799d0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2799d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2799d4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x2799d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x2799d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2799d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2799dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2799dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2799e0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2799e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2799e4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x2799e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2799e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2799ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2799ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2799f0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2799f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2799f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2799f8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2799f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2799fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2799fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x279a00: 0x8c466a7c  lw          $a2, 0x6A7C($v0)
    ctx->pc = 0x279a00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586A7Cu));
    // 0x279a04: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x279a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x279a08: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x279a08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x279a0c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x279a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x279a10: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x279a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x279a14: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x279a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x279a18: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x279a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x279a1c: 0x90c202b4  lbu         $v0, 0x2B4($a2)
    ctx->pc = 0x279a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x279a20: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x279a20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279a24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x279A24u;
    {
        const bool branch_taken_0x279a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A24u;
        // 0x279a28: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a24) {
            ctx->pc = 0x279A38u;
            goto label_279a38;
        }
    }
    ctx->pc = 0x279A2Cu;
    // 0x279a2c: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x279a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x279a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279A30u;
    {
        const bool branch_taken_0x279a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A30u;
        // 0x279a34: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a30) {
            ctx->pc = 0x279A3Cu;
            goto label_279a3c;
        }
    }
    ctx->pc = 0x279A38u;
label_279a38:
    // 0x279a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279a3c:
    // 0x279a3c: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x279A3Cu;
    {
        const bool branch_taken_0x279a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a3c) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279A44u;
    // 0x279a44: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x279a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x279a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279A48u;
    {
        const bool branch_taken_0x279a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A48u;
        // 0x279a4c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a48) {
            ctx->pc = 0x279A5Cu;
            goto label_279a5c;
        }
    }
    ctx->pc = 0x279A50u;
    // 0x279a50: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x279a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x279a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279A54u;
    {
        const bool branch_taken_0x279a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A54u;
        // 0x279a58: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a54) {
            ctx->pc = 0x279A60u;
            goto label_279a60;
        }
    }
    ctx->pc = 0x279A5Cu;
label_279a5c:
    // 0x279a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x279a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279a60:
    // 0x279a60: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x279A60u;
    {
        const bool branch_taken_0x279a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a60) {
            ctx->pc = 0x279B14u;
            goto label_279b14;
        }
    }
    ctx->pc = 0x279A68u;
    // 0x279a68: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x279a6c: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x279a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x279a70: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x279a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x279a74: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x279a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x279a78: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x279A78u;
    {
        const bool branch_taken_0x279a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x279A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A78u;
        // 0x279a7c: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a78) {
            ctx->pc = 0x279A98u;
            goto label_279a98;
        }
    }
    ctx->pc = 0x279A80u;
    // 0x279a80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x279a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279a84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x279a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x279a88: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x279a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279a8c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x279a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x279a90: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x279a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279a94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x279a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_279a98:
    // 0x279a98: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x279a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x279a9c: 0x10680006  beq         $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279A9Cu;
    {
        const bool branch_taken_0x279a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x279AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A9Cu;
        // 0x279aa0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a9c) {
            ctx->pc = 0x279AB8u;
            goto label_279ab8;
        }
    }
    ctx->pc = 0x279AA4u;
    // 0x279aa4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x279aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x279aa8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x279aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279aac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x279aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x279ab0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x279ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ab4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x279ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_279ab8:
    // 0x279ab8: 0xac861580  sw          $a2, 0x1580($a0)
    ctx->pc = 0x279ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5504), GPR_U32(ctx, 6));
    // 0x279abc: 0x24821590  addiu       $v0, $a0, 0x1590
    ctx->pc = 0x279abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    // 0x279ac0: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x279AC0u;
    {
        const bool branch_taken_0x279ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x279AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AC0u;
        // 0x279ac4: 0xac871584  sw          $a3, 0x1584($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ac0) {
            ctx->pc = 0x279AE0u;
            goto label_279ae0;
        }
    }
    ctx->pc = 0x279AC8u;
    // 0x279ac8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x279ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279acc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x279accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279ad0: 0xe4801590  swc1        $f0, 0x1590($a0)
    ctx->pc = 0x279ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5520), bits); }
    // 0x279ad4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x279ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x279ad8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x279ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279adc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x279adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_279ae0:
    // 0x279ae0: 0x248215a0  addiu       $v0, $a0, 0x15A0
    ctx->pc = 0x279ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    // 0x279ae4: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279AE4u;
    {
        const bool branch_taken_0x279ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x279AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AE4u;
        // 0x279ae8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ae4) {
            ctx->pc = 0x279B00u;
            goto label_279b00;
        }
    }
    ctx->pc = 0x279AECu;
    // 0x279aec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x279aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279af0: 0xe48015a0  swc1        $f0, 0x15A0($a0)
    ctx->pc = 0x279af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5536), bits); }
    // 0x279af4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x279af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x279af8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x279af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279afc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x279afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_279b00:
    // 0x279b00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279b04: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x279b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x279b08: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x279b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x279b0c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x279b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x279b10: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x279b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_279b14:
    // 0x279b14: 0x3e00008  jr          $ra
    ctx->pc = 0x279B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B14u;
        // 0x279b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279B1Cu;
    // 0x279b1c: 0x0  nop
    ctx->pc = 0x279b1cu;
    // NOP
    ctx->pc = 0x279b20u;
}
