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

// Function: func_001399A0
// Address: 0x1399a0 - 0x139b68
void func_001399A0_0x1399a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001399A0_0x1399a0");
#endif

    switch (ctx->pc) {
        case 0x139a54u: goto label_139a54;
        case 0x139a98u: goto label_139a98;
        case 0x139af0u: goto label_139af0;
        case 0x139afcu: goto label_139afc;
        case 0x139b0cu: goto label_139b0c;
        case 0x139b20u: goto label_139b20;
        default: break;
    }

    ctx->pc = 0x1399a0u;

    // 0x1399a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1399a4: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1399a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1399a8: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x1399a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1399ac: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1399acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1399b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1399b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1399b4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1399b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1399b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1399b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1399bc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1399bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1399c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1399c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1399c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1399c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1399c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1399c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1399cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1399ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1399d0: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1399D0u;
    {
        const bool branch_taken_0x1399d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1399D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399D0u;
        // 0x1399d4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399d0) {
            ctx->pc = 0x139B40u;
            goto label_139b40;
        }
    }
    ctx->pc = 0x1399D8u;
    // 0x1399d8: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x1399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x1399dc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1399DCu;
    {
        const bool branch_taken_0x1399dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399DCu;
        // 0x1399e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399dc) {
            ctx->pc = 0x139B44u;
            goto label_139b44;
        }
    }
    ctx->pc = 0x1399E4u;
    // 0x1399e4: 0x8e230368  lw          $v1, 0x368($s1)
    ctx->pc = 0x1399e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1399e8: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1399E8u;
    {
        const bool branch_taken_0x1399e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399E8u;
        // 0x1399ec: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399e8) {
            ctx->pc = 0x139B44u;
            goto label_139b44;
        }
    }
    ctx->pc = 0x1399F0u;
    // 0x1399f0: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1399f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1399f4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1399f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1399f8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1399f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1399fc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1399fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139a00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139a04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x139a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x139a08: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x139a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139a0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x139a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139a10: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x139a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139a14: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x139a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x139a18: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x139a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139a1c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x139a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139a20: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x139a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139a24: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x139a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x139a28: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x139a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x139a2c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x139a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x139a30: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x139a30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x139a34: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x139a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x139a38: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x139a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x139a3c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x139a3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139a40: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x139a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x139a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a4c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x139A4Cu;
    SET_GPR_U32(ctx, 31, 0x139A54u);
    ctx->pc = 0x139A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A4Cu;
    // 0x139a50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x139A4Cu, 0x139A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A54u;
label_139a54:
    // 0x139a54: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x139a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139a58: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x139a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139a5c: 0x26330210  addiu       $s3, $s1, 0x210
    ctx->pc = 0x139a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x139a60: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x139a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139a64: 0x12740006  beq         $s3, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x139A64u;
    {
        const bool branch_taken_0x139a64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x139A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A64u;
        // 0x139a68: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a64) {
            ctx->pc = 0x139A80u;
            goto label_139a80;
        }
    }
    ctx->pc = 0x139A6Cu;
    // 0x139a6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x139a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139a70: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x139a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x139a74: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x139a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x139a78: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x139a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139a7c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x139a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_139a80:
    // 0x139a80: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x139a80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139a84: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x139a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x139a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a90: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x139A90u;
    SET_GPR_U32(ctx, 31, 0x139A98u);
    ctx->pc = 0x139A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A90u;
    // 0x139a94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x139A90u, 0x139A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A98u;
label_139a98:
    // 0x139a98: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x139a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139a9c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x139a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139aa0: 0x26320200  addiu       $s2, $s1, 0x200
    ctx->pc = 0x139aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x139aa4: 0x12540006  beq         $s2, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x139AA4u;
    {
        const bool branch_taken_0x139aa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x139AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AA4u;
        // 0x139aa8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139aa4) {
            ctx->pc = 0x139AC0u;
            goto label_139ac0;
        }
    }
    ctx->pc = 0x139AACu;
    // 0x139aac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x139aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139ab0: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x139ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x139ab4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x139ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x139ab8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x139ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139abc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x139abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_139ac0:
    // 0x139ac0: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x139ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x139ac4: 0x26300240  addiu       $s0, $s1, 0x240
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x139ac8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x139ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x139acc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x139accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x139ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139ad4: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x139ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139ad8: 0x8e230368  lw          $v1, 0x368($s1)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x139adc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x139adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x139ae0: 0xe6200250  swc1        $f0, 0x250($s1)
    ctx->pc = 0x139ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    // 0x139ae4: 0xc46c0104  lwc1        $f12, 0x104($v1)
    ctx->pc = 0x139ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139ae8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x139AE8u;
    SET_GPR_U32(ctx, 31, 0x139AF0u);
    ctx->pc = 0x139AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AE8u;
    // 0x139aec: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x139AE8u, 0x139AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AF0u;
label_139af0:
    // 0x139af0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x139af0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x139af4: 0xc07e020  jal         func_1F8080
    ctx->pc = 0x139AF4u;
    SET_GPR_U32(ctx, 31, 0x139AFCu);
    ctx->pc = 0x139AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AF4u;
    // 0x139af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8080u, 0x139AF4u, 0x139AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AFCu;
label_139afc:
    // 0x139afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x139b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b04: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x139B04u;
    SET_GPR_U32(ctx, 31, 0x139B0Cu);
    ctx->pc = 0x139B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B04u;
    // 0x139b08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x139B04u, 0x139B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B0Cu;
label_139b0c:
    // 0x139b0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x139b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x139b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b18: 0xc04e0d6  jal         func_138358
    ctx->pc = 0x139B18u;
    SET_GPR_U32(ctx, 31, 0x139B20u);
    ctx->pc = 0x139B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B18u;
    // 0x139b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138358u, 0x139B18u, 0x139B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B20u;
label_139b20:
    // 0x139b20: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x139b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x139b24: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x139B24u;
    {
        const bool branch_taken_0x139b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x139B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B24u;
        // 0x139b28: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b24) {
            ctx->pc = 0x139B40u;
            goto label_139b40;
        }
    }
    ctx->pc = 0x139B2Cu;
    // 0x139b2c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x139b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139b30: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x139b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x139b34: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x139b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x139b38: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x139b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b3c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_139b40:
    // 0x139b40: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x139b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_139b44:
    // 0x139b44: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x139b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139b48: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x139b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139b4c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x139b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139b50: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x139b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139b54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139b54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139b58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x139b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x139B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B5Cu;
        // 0x139b60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139B64u;
    // 0x139b64: 0x0  nop
    ctx->pc = 0x139b64u;
    // NOP
    ctx->pc = 0x139b68u;
}
