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

// Function: cCollisionManager_checkNearCollision
// Address: 0x2b8e10 - 0x2b8f48
void cCollisionManager_checkNearCollision_0x2b8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionManager_checkNearCollision_0x2b8e10");
#endif

    switch (ctx->pc) {
        case 0x2b8e4cu: goto label_2b8e4c;
        case 0x2b8e78u: goto label_2b8e78;
        case 0x2b8ef8u: goto label_2b8ef8;
        default: break;
    }

    ctx->pc = 0x2b8e10u;

    // 0x2b8e10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b8e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b8e14: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b8e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2b8e18: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b8e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2b8e1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b8e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b8e24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b8e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e28: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b8e28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b8e2c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b8e2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e30: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2b8e34: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b8e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2b8e38: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2b8e3c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b8e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2b8e40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b8e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b8e44: 0xc0ae28c  jal         func_2B8A30
    ctx->pc = 0x2B8E44u;
    SET_GPR_U32(ctx, 31, 0x2B8E4Cu);
    ctx->pc = 0x2B8E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E44u;
    // 0x2b8e48: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A30u, 0x2B8E44u, 0x2B8E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E4Cu;
label_2b8e4c:
    // 0x2b8e4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b8e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e50: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b8e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b8e54: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x2b8e54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b8e58: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B8E58u;
    {
        const bool branch_taken_0x2b8e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E58u;
        // 0x2b8e5c: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e58) {
            ctx->pc = 0x2B8F14u;
            goto label_2b8f14;
        }
    }
    ctx->pc = 0x2B8E60u;
    // 0x2b8e60: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2b8e64: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2b8e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8e68: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b8e68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8e6c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2b8e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8e70: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2b8e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8e74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8e78:
    // 0x2b8e78: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x2b8e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
    // 0x2b8e7c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b8e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2b8e80: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2b8e80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b8e84: 0x54960021  bnel        $a0, $s6, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B8E84u;
    {
        const bool branch_taken_0x2b8e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x2b8e84) {
            ctx->pc = 0x2B8E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E84u;
            // 0x2b8e88: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F0Cu;
            goto label_2b8f0c;
        }
    }
    ctx->pc = 0x2B8E8Cu;
    // 0x2b8e8c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2b8e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b8e90: 0x5054001e  beql        $v0, $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B8E90u;
    {
        const bool branch_taken_0x2b8e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b8e90) {
            ctx->pc = 0x2B8E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E90u;
            // 0x2b8e94: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F0Cu;
            goto label_2b8f0c;
        }
    }
    ctx->pc = 0x2B8E98u;
    // 0x2b8e98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2b8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b8e9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b8ea0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b8ea4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2b8ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b8ea8: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B8EA8u;
    {
        const bool branch_taken_0x2b8ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ea8) {
            ctx->pc = 0x2B8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8EA8u;
            // 0x2b8eac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F0Cu;
            goto label_2b8f0c;
        }
    }
    ctx->pc = 0x2B8EB0u;
    // 0x2b8eb0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b8eb4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2b8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2b8eb8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2b8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b8ebc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2b8ebcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8ec0: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2b8ec0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b8ec4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b8ec4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b8ec8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2b8ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8ecc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b8eccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8ed0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2b8ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b8ed4: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8ED4u;
    {
        const bool branch_taken_0x2b8ed4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ED4u;
        // 0x2b8ed8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ed4) {
            ctx->pc = 0x2B8EF0u;
            goto label_2b8ef0;
        }
    }
    ctx->pc = 0x2B8EDCu;
    // 0x2b8edc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2b8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8ee0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2b8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8ee4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b8ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b8ee8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b8ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b8eec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2b8eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2b8ef0:
    // 0x2b8ef0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2B8EF0u;
    SET_GPR_U32(ctx, 31, 0x2B8EF8u);
    ctx->pc = 0x2B8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8EF0u;
    // 0x2b8ef4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2B8EF0u, 0x2B8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8EF8u;
label_2b8ef8:
    // 0x2b8ef8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b8ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8efc: 0x0  nop
    ctx->pc = 0x2b8efcu;
    // NOP
    // 0x2b8f00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8F00u;
    {
        const bool branch_taken_0x2b8f00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F00u;
        // 0x2b8f04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f00) {
            ctx->pc = 0x2B8F18u;
            goto label_2b8f18;
        }
    }
    ctx->pc = 0x2B8F08u;
    // 0x2b8f08: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2b8f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2b8f0c:
    // 0x2b8f0c: 0x5600ffda  bnel        $s0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2B8F0Cu;
    {
        const bool branch_taken_0x2b8f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f0c) {
            ctx->pc = 0x2B8F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F0Cu;
            // 0x2b8f10: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8e78;
        }
    }
    ctx->pc = 0x2B8F14u;
label_2b8f14:
    // 0x2b8f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f18:
    // 0x2b8f18: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b8f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8f1c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b8f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8f20: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b8f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b8f24: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b8f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b8f28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b8f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8f2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b8f2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8f30: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b8f30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b8f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8f38: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b8f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F3Cu;
        // 0x2b8f40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8F44u;
    // 0x2b8f44: 0x0  nop
    ctx->pc = 0x2b8f44u;
    // NOP
    ctx->pc = 0x2b8f48u;
}
