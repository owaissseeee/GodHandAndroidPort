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

// Function: func_002A3930
// Address: 0x2a3930 - 0x2a39a8
void func_002A3930_0x2a3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A3930_0x2a3930");
#endif

    ctx->pc = 0x2a3930u;

    // 0x2a3930: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x2a3930u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3934: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x2a3934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a3938: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x2a3938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a393c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x2a393cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a3940: 0x4be03b0b  vmaddw.xyzw $vf12, $vf7, $vf0w
    ctx->pc = 0x2a3940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2a3944: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2a3944u;
    { uint32_t fs_bits[4]; std::memcpy(fs_bits, &ctx->vu0_vf[12], sizeof(fs_bits)); float ft_w = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); uint32_t w_bits; std::memcpy(&w_bits, &ft_w, sizeof(w_bits)); const int32_t limit = (w_bits & 0x7F800000u) != 0u ? (int32_t)(w_bits & 0x7FFFFFFFu) : 0x007FFFFF; uint32_t flags = 0u; for (uint32_t c = 0; c < 3u; ++c) { if ((int32_t)fs_bits[c] > limit) flags |= 1u << (c * 2u); if ((int32_t)(fs_bits[c] ^ 0x80000000u) > limit) flags |= 2u << (c * 2u); } ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | flags) & 0xFFFFFF; }
    // 0x2a3948: 0x4a0002ff  vnop
    ctx->pc = 0x2a3948u;
    // NOP operation, no action needed for VU0
    // 0x2a394c: 0x4a0002ff  vnop
    ctx->pc = 0x2a394cu;
    // NOP operation, no action needed for VU0
    // 0x2a3950: 0x4a0002ff  vnop
    ctx->pc = 0x2a3950u;
    // NOP operation, no action needed for VU0
    // 0x2a3954: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x2a3954u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2a3958: 0x4a0002ff  vnop
    ctx->pc = 0x2a3958u;
    // NOP operation, no action needed for VU0
    // 0x2a395c: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x2a395cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x2a3960: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3968u;
    // 0x2a3968: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2a3968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a396c: 0x0  nop
    ctx->pc = 0x2a396cu;
    // NOP
    // 0x2a3970: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a3974: 0x0  nop
    ctx->pc = 0x2a3974u;
    // NOP
    // 0x2a3978: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2a3978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2a397c: 0x0  nop
    ctx->pc = 0x2a397cu;
    // NOP
    // 0x2a3980: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2a3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a3984: 0x0  nop
    ctx->pc = 0x2a3984u;
    // NOP
    // 0x2a3988: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x2a3988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a398c: 0x0  nop
    ctx->pc = 0x2a398cu;
    // NOP
    // 0x2a3990: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x2a3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a3994: 0x0  nop
    ctx->pc = 0x2a3994u;
    // NOP
    // 0x2a3998: 0xac801adc  sw          $zero, 0x1ADC($a0)
    ctx->pc = 0x2a3998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6876), GPR_U32(ctx, 0));
    // 0x2a399c: 0x0  nop
    ctx->pc = 0x2a399cu;
    // NOP
    // 0x2a39a0: 0x0  nop
    ctx->pc = 0x2a39a0u;
    // NOP
    // 0x2a39a4: 0x0  nop
    ctx->pc = 0x2a39a4u;
    // NOP
    ctx->pc = 0x2a39a8u;
}
