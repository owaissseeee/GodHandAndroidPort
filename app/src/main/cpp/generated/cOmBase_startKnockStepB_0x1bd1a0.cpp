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

// Function: cOmBase_startKnockStepB
// Address: 0x1bd1a0 - 0x1bd228
void cOmBase_startKnockStepB_0x1bd1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_startKnockStepB_0x1bd1a0");
#endif

    ctx->pc = 0x1bd1a0u;

    // 0x1bd1a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bd1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1a4: 0x9ca205b0  lwu         $v0, 0x5B0($a1)
    ctx->pc = 0x1bd1a4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x1bd1a8: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1bd1ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd1b0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD1B0u;
    {
        const bool branch_taken_0x1bd1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1B0u;
        // 0x1bd1b4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1b0) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD1B8u;
    // 0x1bd1b8: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x1bd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1bd1bc: 0x24a30490  addiu       $v1, $a1, 0x490
    ctx->pc = 0x1bd1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x1bd1c0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1bd1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd1c4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1bd1c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd1c8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1bd1c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd1cc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1bd1ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bd1d0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bd1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bd1d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1bd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bd1d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bd1d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1dc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bd1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bd1e0: 0x24a205c0  addiu       $v0, $a1, 0x5C0
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x1bd1e4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD1E4u;
    {
        const bool branch_taken_0x1bd1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1BD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1E4u;
        // 0x1bd1e8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1e4) {
            ctx->pc = 0x1BD200u;
            goto label_1bd200;
        }
    }
    ctx->pc = 0x1BD1ECu;
    // 0x1bd1ec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1bd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd1f0: 0xe4a005c0  swc1        $f0, 0x5C0($a1)
    ctx->pc = 0x1bd1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1472), bits); }
    // 0x1bd1f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1bd1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1bd1f8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1bd1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd1fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1bd1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1bd200:
    // 0x1bd200: 0x8ca305b0  lw          $v1, 0x5B0($a1)
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x1bd204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bd204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd208: 0xa0a202f4  sb          $v0, 0x2F4($a1)
    ctx->pc = 0x1bd208u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd20c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1bd20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1bd210: 0xa0a002f5  sb          $zero, 0x2F5($a1)
    ctx->pc = 0x1bd210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd214: 0xaca305b0  sw          $v1, 0x5B0($a1)
    ctx->pc = 0x1bd214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1456), GPR_U32(ctx, 3));
    // 0x1bd218: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x1bd218u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd21c: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x1bd21cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bd220:
    // 0x1bd220: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD220u;
        // 0x1bd224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD228u;
}
