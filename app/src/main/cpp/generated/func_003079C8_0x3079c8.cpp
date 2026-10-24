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

// Function: func_003079C8
// Address: 0x3079c8 - 0x307a40
void func_003079C8_0x3079c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003079C8_0x3079c8");
#endif

    ctx->pc = 0x3079c8u;

    // 0x3079c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3079c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3079cc: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3079CCu;
    {
        const bool branch_taken_0x3079cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3079cc) {
            ctx->pc = 0x307A38u;
            goto label_307a38;
        }
    }
    ctx->pc = 0x3079D4u;
    // 0x3079d4: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3079D4u;
    {
        const bool branch_taken_0x3079d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079D4u;
        // 0x3079d8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079d4) {
            ctx->pc = 0x307A38u;
            goto label_307a38;
        }
    }
    ctx->pc = 0x3079DCu;
    // 0x3079dc: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x3079dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x3079e0: 0xf84005c0  sqc2        $vf0, 0x5C0($v0)
    ctx->pc = 0x3079e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1472), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3079e4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x3079e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x3079e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3079e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3079ec: 0x24637ac0  addiu       $v1, $v1, 0x7AC0
    ctx->pc = 0x3079ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31424));
    // 0x3079f0: 0x24423c40  addiu       $v0, $v0, 0x3C40
    ctx->pc = 0x3079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15424));
    // 0x3079f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3079f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3C3C40u));
    // 0x3079f8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x3079f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x3C3C50u));
    // 0x3079fc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x3079fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x3C3C60u));
    // 0x307a00: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x307a00u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x3C3C70u));
    // 0x307a04: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x307a04u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[4])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x747AC0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x747AC0u, _value); } while (0);
    // 0x307a08: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x307a08u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[5])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x747AD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x747AD0u, _value); } while (0);
    // 0x307a0c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x307a0cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[6])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x747AE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x747AE0u, _value); } while (0);
    // 0x307a10: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x307a10u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[7])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x747AF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x747AF0u, _value); } while (0);
    // 0x307a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x307a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307a18: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x307a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x307a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x307a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x307a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307a24: 0x24627b00  addiu       $v0, $v1, 0x7B00
    ctx->pc = 0x307a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31488));
    // 0x307a28: 0xe4607b00  swc1        $f0, 0x7B00($v1)
    ctx->pc = 0x307a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x747B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747B00u, _value); } while (0); }
    // 0x307a2c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x307a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x747B0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747B0Cu, _value); } while (0); }
    // 0x307a30: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x307a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x747B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747B08u, _value); } while (0); }
    // 0x307a34: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x307a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x747B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747B04u, _value); } while (0); }
label_307a38:
    // 0x307a38: 0x3e00008  jr          $ra
    ctx->pc = 0x307A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307A40u;
}
