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

// Function: func_0012A578
// Address: 0x12a578 - 0x12a610
void func_0012A578_0x12a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012A578_0x12a578");
#endif

    ctx->pc = 0x12a578u;

    // 0x12a578: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12a578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a57c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a57cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a580: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12a580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a584: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a588: 0x8cc400f0  lw          $a0, 0xF0($a2)
    ctx->pc = 0x12a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x12a58c: 0x24c30630  addiu       $v1, $a2, 0x630
    ctx->pc = 0x12a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1584));
    // 0x12a590: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12a590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12a594: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a598: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x12a598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a59c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x12a59cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a5a0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12a5a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a5a4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a5a8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12a5ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12a5acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a5b0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12a5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a5b4: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A5B4u;
    {
        const bool branch_taken_0x12a5b4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x12A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5B4u;
        // 0x12a5b8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5b4) {
            ctx->pc = 0x12A5D0u;
            goto label_12a5d0;
        }
    }
    ctx->pc = 0x12A5BCu;
    // 0x12a5bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x12a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a5c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x12a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a5c4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12a5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12a5c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12a5c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12a5cc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12a5ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12a5d0:
    // 0x12a5d0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a5d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a5d4: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x12a5d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x12a5d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x12a5d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x12a5dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x12a5dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a5e0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a5e4: 0x8cc200f0  lw          $v0, 0xF0($a2)
    ctx->pc = 0x12a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x12a5e8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a5e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a5ec: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x12a5ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a5f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12a5f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12a5f4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a5f8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12a5f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a5fc: 0xf8e40000  sqc2        $vf4, 0x0($a3)
    ctx->pc = 0x12a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a600: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x12a600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a604: 0x3e00008  jr          $ra
    ctx->pc = 0x12A604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A604u;
        // 0x12a608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A60Cu;
    // 0x12a60c: 0x0  nop
    ctx->pc = 0x12a60cu;
    // NOP
    ctx->pc = 0x12a610u;
}
