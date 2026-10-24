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

// Function: func_00272DD8
// Address: 0x272dd8 - 0x273230
void func_00272DD8_0x272dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00272DD8_0x272dd8");
#endif

    switch (ctx->pc) {
        case 0x272facu: goto label_272fac;
        case 0x2730f0u: goto label_2730f0;
        case 0x2730fcu: goto label_2730fc;
        case 0x273110u: goto label_273110;
        case 0x273180u: goto label_273180;
        case 0x2731f8u: goto label_2731f8;
        default: break;
    }

    ctx->pc = 0x272dd8u;

    // 0x272dd8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x272dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x272ddc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x272ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x272de0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x272de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x272de4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x272de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x272de8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x272de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dec: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x272decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x272df0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x272df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x272df4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x272df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x272df8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x272df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x272dfc: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x272dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x272e00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272e04: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x272E04u;
    {
        const bool branch_taken_0x272e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E04u;
        // 0x272e08: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e04) {
            ctx->pc = 0x273214u;
            goto label_273214;
        }
    }
    ctx->pc = 0x272E0Cu;
    // 0x272e0c: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x272e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x272e10: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x272e14: 0x2c83004c  sltiu       $v1, $a0, 0x4C
    ctx->pc = 0x272e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x272e18: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x272E18u;
    {
        const bool branch_taken_0x272e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E18u;
        // 0x272e1c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e18) {
            ctx->pc = 0x273214u;
            goto label_273214;
        }
    }
    ctx->pc = 0x272E20u;
    // 0x272e20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x272e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x272e24: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x272e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x272e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272e2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x272e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x272e30: 0x800008  jr          $a0
    ctx->pc = 0x272E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272E38u: goto label_272e38;
            case 0x272E40u: goto label_272e40;
            case 0x272E48u: goto label_272e48;
            case 0x273210u: goto label_273210;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272E38u;
label_272e38:
    // 0x272e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272E38u;
    {
        const bool branch_taken_0x272e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E38u;
        // 0x272e3c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e38) {
            ctx->pc = 0x272E4Cu;
            goto label_272e4c;
        }
    }
    ctx->pc = 0x272E40u;
label_272e40:
    // 0x272e40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x272E40u;
    {
        const bool branch_taken_0x272e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E40u;
        // 0x272e44: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e40) {
            ctx->pc = 0x272E4Cu;
            goto label_272e4c;
        }
    }
    ctx->pc = 0x272E48u;
label_272e48:
    // 0x272e48: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x272e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_272e4c:
    // 0x272e4c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x272e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x272e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e54: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x272e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x272e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272E58u;
    {
        const bool branch_taken_0x272e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E58u;
        // 0x272e5c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e58) {
            ctx->pc = 0x272E68u;
            goto label_272e68;
        }
    }
    ctx->pc = 0x272E60u;
    // 0x272e60: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x272e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x272e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272e68:
    // 0x272e68: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x272e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x272e6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272E6Cu;
    {
        const bool branch_taken_0x272e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E6Cu;
        // 0x272e70: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e6c) {
            ctx->pc = 0x272E84u;
            goto label_272e84;
        }
    }
    ctx->pc = 0x272E74u;
    // 0x272e74: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x272e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x272e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272e7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x272E7Cu;
    {
        const bool branch_taken_0x272e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E7Cu;
        // 0x272e80: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e7c) {
            ctx->pc = 0x272E88u;
            goto label_272e88;
        }
    }
    ctx->pc = 0x272E84u;
label_272e84:
    // 0x272e84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x272e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272e88:
    // 0x272e88: 0x124000e2  beqz        $s2, . + 4 + (0xE2 << 2)
    ctx->pc = 0x272E88u;
    {
        const bool branch_taken_0x272e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E88u;
        // 0x272e8c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e88) {
            ctx->pc = 0x273214u;
            goto label_273214;
        }
    }
    ctx->pc = 0x272E90u;
    // 0x272e90: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x272e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x272e94: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x272e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x272e98: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x272e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x272e9c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x272e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x272ea0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x272ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272ea4: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x272EA4u;
    {
        const bool branch_taken_0x272ea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x272EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EA4u;
        // 0x272ea8: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ea4) {
            ctx->pc = 0x272EC8u;
            goto label_272ec8;
        }
    }
    ctx->pc = 0x272EACu;
    // 0x272eac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x272eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272eb0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x272eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272eb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x272eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272eb8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x272eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x272ebc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x272ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272ec0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x272ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272ec4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x272ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272ec8:
    // 0x272ec8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x272ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272ecc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x272eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x272ed0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x272ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x272ed4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272ed8: 0xc66205a8  lwc1        $f2, 0x5A8($s3)
    ctx->pc = 0x272ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272edc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x272edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272ee0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x272ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x272ee4: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x272ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x272ee8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x272ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272eec: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x272eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x272ef0: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x272ef0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x272ef4: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x272ef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x272ef8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x272ef8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x272efc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x272efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x272f00: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x272f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x272f04: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x272f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272f08: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x272f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x272f0c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x272f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x272f10: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x272f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x272f14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x272f14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272f18: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x272f18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x272f1c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x272f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x272f20: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x272f20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x272f24: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x272f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x272f28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f2c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x272f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x272f30: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272F30u;
    {
        const bool branch_taken_0x272f30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x272F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F30u;
        // 0x272f34: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f30) {
            ctx->pc = 0x272F50u;
            goto label_272f50;
        }
    }
    ctx->pc = 0x272F38u;
    // 0x272f38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x272f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272f3c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x272f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x272f40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x272f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272f44: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x272f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x272f48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x272f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272f4c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x272f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_272f50:
    // 0x272f50: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x272f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272f54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x272f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272f58: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x272f5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x272f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x272f60: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x272f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f64: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x272f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272f68: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x272f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x272f6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x272f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x272f70: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x272f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272f74: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x272f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f7c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x272f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272f80: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x272f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272f84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x272f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x272f88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x272f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x272f90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272f90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x272f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x272f98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x272f98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f9c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x272f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x272fa0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x272fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x272fa4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x272FA4u;
    SET_GPR_U32(ctx, 31, 0x272FACu);
    ctx->pc = 0x272FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FA4u;
    // 0x272fa8: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x272FA4u, 0x272FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FACu;
label_272fac:
    // 0x272fac: 0x5450003e  bnel        $v0, $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x272FACu;
    {
        const bool branch_taken_0x272fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x272fac) {
            ctx->pc = 0x272FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272FACu;
            // 0x272fb0: 0xc66005a8  lwc1        $f0, 0x5A8($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2730A8u;
            goto label_2730a8;
        }
    }
    ctx->pc = 0x272FB4u;
    // 0x272fb4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x272fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272fb8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x272fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x272fbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x272fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x272fc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272fc4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x272fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x272fc8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x272fc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x272fcc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x272fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272fd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x272fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272fd4: 0x0  nop
    ctx->pc = 0x272fd4u;
    // NOP
    // 0x272fd8: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x272FD8u;
    {
        const bool branch_taken_0x272fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272fd8) {
            ctx->pc = 0x272FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272FD8u;
            // 0x272fdc: 0xc66005a8  lwc1        $f0, 0x5A8($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2730A8u;
            goto label_2730a8;
        }
    }
    ctx->pc = 0x272FE0u;
    // 0x272fe0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x272fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x272fe4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x272fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x272fe8: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x272fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x272fec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x272fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272ff0: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x272ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272ff4: 0x0  nop
    ctx->pc = 0x272ff4u;
    // NOP
    // 0x272ff8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x272FF8u;
    {
        const bool branch_taken_0x272ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272ff8) {
            ctx->pc = 0x272FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272FF8u;
            // 0x272ffc: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273000u;
            goto label_273000;
        }
    }
    ctx->pc = 0x273000u;
label_273000:
    // 0x273000: 0xc660170c  lwc1        $f0, 0x170C($s3)
    ctx->pc = 0x273000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273004: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x273004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x273008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27300c: 0x0  nop
    ctx->pc = 0x27300cu;
    // NOP
    // 0x273010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x273010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273014: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x273014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273018: 0x0  nop
    ctx->pc = 0x273018u;
    // NOP
    // 0x27301c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x27301Cu;
    {
        const bool branch_taken_0x27301c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27301c) {
            ctx->pc = 0x273020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27301Cu;
            // 0x273020: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x273048u;
            goto label_273048;
        }
    }
    ctx->pc = 0x273024u;
    // 0x273024: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x273024u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273028: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x273028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x27302c: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x27302cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x273030: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x273030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x273034: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x273034u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x273038: 0xe6640138  swc1        $f4, 0x138($s3)
    ctx->pc = 0x273038u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 312), bits); }
    // 0x27303c: 0xe6640130  swc1        $f4, 0x130($s3)
    ctx->pc = 0x27303cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 304), bits); }
    // 0x273040: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x273040u;
    {
        const bool branch_taken_0x273040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273040u;
        // 0x273044: 0xe6640134  swc1        $f4, 0x134($s3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273040) {
            ctx->pc = 0x2730A4u;
            goto label_2730a4;
        }
    }
    ctx->pc = 0x273048u;
label_273048:
    // 0x273048: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x273048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x27304c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27304cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x273050: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x273054: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x273054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
    // 0x273058: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x273058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27305c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27305cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273060: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x273060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x273064: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x273064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x273068: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x273068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27306c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273070: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x273070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x273074: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x273078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27307c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x27307cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x273080: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x273084: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x273084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273088: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x273088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27308c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27308cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x273090: 0xe6640138  swc1        $f4, 0x138($s3)
    ctx->pc = 0x273090u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 312), bits); }
    // 0x273094: 0xc6600130  lwc1        $f0, 0x130($s3)
    ctx->pc = 0x273094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273098: 0xe6640134  swc1        $f4, 0x134($s3)
    ctx->pc = 0x273098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 308), bits); }
    // 0x27309c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27309cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2730a0: 0xe6600130  swc1        $f0, 0x130($s3)
    ctx->pc = 0x2730a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 304), bits); }
label_2730a4:
    // 0x2730a4: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x2730a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2730a8:
    // 0x2730a8: 0x26620130  addiu       $v0, $s3, 0x130
    ctx->pc = 0x2730a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x2730ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2730acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2730b0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2730b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2730b4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2730b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2730b8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2730b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2730bc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2730bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2730c0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2730c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2730c4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2730c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2730c8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2730c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2730cc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2730ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2730d0: 0x26510100  addiu       $s1, $s2, 0x100
    ctx->pc = 0x2730d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x2730d4: 0xda440100  lqc2        $vf4, 0x100($s2)
    ctx->pc = 0x2730d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2730d8: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2730d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2730dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2730dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2730e0: 0xfa440100  sqc2        $vf4, 0x100($s2)
    ctx->pc = 0x2730e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2730e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2730e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730e8: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x2730E8u;
    SET_GPR_U32(ctx, 31, 0x2730F0u);
    ctx->pc = 0x2730ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730E8u;
    // 0x2730ec: 0x26500080  addiu       $s0, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x2730E8u, 0x2730F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730F0u;
label_2730f0:
    // 0x2730f0: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x2730f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2730f4: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x2730F4u;
    SET_GPR_U32(ctx, 31, 0x2730FCu);
    ctx->pc = 0x2730F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730F4u;
    // 0x2730f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x2730F4u, 0x2730FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730FCu;
label_2730fc:
    // 0x2730fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2730fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273100: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x273100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273104: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x273104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273108: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x273108u;
    SET_GPR_U32(ctx, 31, 0x273110u);
    ctx->pc = 0x27310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273108u;
    // 0x27310c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x273108u, 0x273110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273110u;
label_273110:
    // 0x273110: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x273110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x273114: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x273114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x273118: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27311c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273120: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x273120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x273124: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x273124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x273128: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x273128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27312c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27312cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273130: 0x0  nop
    ctx->pc = 0x273130u;
    // NOP
    // 0x273134: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x273134u;
    {
        const bool branch_taken_0x273134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273134u;
        // 0x273138: 0x24020244  addiu       $v0, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273134) {
            ctx->pc = 0x273210u;
            goto label_273210;
        }
    }
    ctx->pc = 0x27313Cu;
    // 0x27313c: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x27313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x273140: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273140u;
    {
        const bool branch_taken_0x273140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273140u;
        // 0x273144: 0x24020204  addiu       $v0, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273140) {
            ctx->pc = 0x273168u;
            goto label_273168;
        }
    }
    ctx->pc = 0x273148u;
    // 0x273148: 0x8e631794  lw          $v1, 0x1794($s3)
    ctx->pc = 0x273148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6036)));
    // 0x27314c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27314Cu;
    {
        const bool branch_taken_0x27314c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27314c) {
            ctx->pc = 0x273150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27314Cu;
            // 0x273150: 0x8e630564  lw          $v1, 0x564($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273168u;
            goto label_273168;
        }
    }
    ctx->pc = 0x273154u;
    // 0x273154: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x273154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x273158: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x273158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x27315c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x27315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x273160: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x273160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x273164: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x273164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
label_273168:
    // 0x273168: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x273168u;
    {
        const bool branch_taken_0x273168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273168) {
            ctx->pc = 0x27316Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273168u;
            // 0x27316c: 0x8e630564  lw          $v1, 0x564($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27319Cu;
            goto label_27319c;
        }
    }
    ctx->pc = 0x273170u;
    // 0x273170: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x273170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x273174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273178: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x273178u;
    SET_GPR_U32(ctx, 31, 0x273180u);
    ctx->pc = 0x27317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273178u;
    // 0x27317c: 0x24a5ca58  addiu       $a1, $a1, -0x35A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x273178u, 0x273180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273180u;
label_273180:
    // 0x273180: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273184: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x273184u;
    {
        const bool branch_taken_0x273184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273184) {
            ctx->pc = 0x273188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273184u;
            // 0x273188: 0x8e630564  lw          $v1, 0x564($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27319Cu;
            goto label_27319c;
        }
    }
    ctx->pc = 0x27318Cu;
    // 0x27318c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x27318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x273190: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x273190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x273194: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x273194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x273198: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x273198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_27319c:
    // 0x27319c: 0x24020228  addiu       $v0, $zero, 0x228
    ctx->pc = 0x27319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x2731a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2731A0u;
    {
        const bool branch_taken_0x2731a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2731A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731A0u;
        // 0x2731a4: 0x28620229  slti        $v0, $v1, 0x229 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)553) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731a0) {
            ctx->pc = 0x2731D4u;
            goto label_2731d4;
        }
    }
    ctx->pc = 0x2731A8u;
    // 0x2731a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2731A8u;
    {
        const bool branch_taken_0x2731a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731A8u;
        // 0x2731ac: 0x24020201  addiu       $v0, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731a8) {
            ctx->pc = 0x2731C0u;
            goto label_2731c0;
        }
    }
    ctx->pc = 0x2731B0u;
    // 0x2731b0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2731B0u;
    {
        const bool branch_taken_0x2731b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2731B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731B0u;
        // 0x2731b4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731b0) {
            ctx->pc = 0x2731D4u;
            goto label_2731d4;
        }
    }
    ctx->pc = 0x2731B8u;
    // 0x2731b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2731B8u;
    {
        const bool branch_taken_0x2731b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731B8u;
        // 0x2731bc: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731b8) {
            ctx->pc = 0x273218u;
            goto label_273218;
        }
    }
    ctx->pc = 0x2731C0u;
label_2731c0:
    // 0x2731c0: 0x24020244  addiu       $v0, $zero, 0x244
    ctx->pc = 0x2731c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    // 0x2731c4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2731C4u;
    {
        const bool branch_taken_0x2731c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2731C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731C4u;
        // 0x2731c8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731c4) {
            ctx->pc = 0x2731E4u;
            goto label_2731e4;
        }
    }
    ctx->pc = 0x2731CCu;
    // 0x2731cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2731CCu;
    {
        const bool branch_taken_0x2731cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731CCu;
        // 0x2731d0: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731cc) {
            ctx->pc = 0x273218u;
            goto label_273218;
        }
    }
    ctx->pc = 0x2731D4u;
label_2731d4:
    // 0x2731d4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2731d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2731d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2731d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2731DCu;
    {
        const bool branch_taken_0x2731dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731DCu;
        // 0x2731e0: 0x24a5ca88  addiu       $a1, $a1, -0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731dc) {
            ctx->pc = 0x2731F0u;
            goto label_2731f0;
        }
    }
    ctx->pc = 0x2731E4u;
label_2731e4:
    // 0x2731e4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2731e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2731e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2731e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731ec: 0x24a5caa8  addiu       $a1, $a1, -0x3558
    ctx->pc = 0x2731ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953640));
label_2731f0:
    // 0x2731f0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2731F0u;
    SET_GPR_U32(ctx, 31, 0x2731F8u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2731F0u, 0x2731F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731F8u;
label_2731f8:
    // 0x2731f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2731f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2731FCu;
    {
        const bool branch_taken_0x2731fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731FCu;
        // 0x273200: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731fc) {
            ctx->pc = 0x273214u;
            goto label_273214;
        }
    }
    ctx->pc = 0x273204u;
    // 0x273204: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x273204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x273208: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x273208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x27320c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x27320cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_273210:
    // 0x273210: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x273210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_273214:
    // 0x273214: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x273214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_273218:
    // 0x273218: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x273218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27321c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x27321cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x273220: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x273220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273224: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x273224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x273228: 0x3e00008  jr          $ra
    ctx->pc = 0x273228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273228u;
        // 0x27322c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273230u;
}
