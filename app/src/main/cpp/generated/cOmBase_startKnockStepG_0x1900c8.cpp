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

// Function: cOmBase_startKnockStepG
// Address: 0x1900c8 - 0x190178
void cOmBase_startKnockStepG_0x1900c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_startKnockStepG_0x1900c8");
#endif

    ctx->pc = 0x1900c8u;

    // 0x1900c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1900c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900cc: 0x9ca205b0  lwu         $v0, 0x5B0($a1)
    ctx->pc = 0x1900ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x1900d0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1900d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1900d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1900d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1900d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1900D8u;
    {
        const bool branch_taken_0x1900d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1900DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900D8u;
        // 0x1900dc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900d8) {
            ctx->pc = 0x190150u;
            goto label_190150;
        }
    }
    ctx->pc = 0x1900E0u;
    // 0x1900e0: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x1900e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1900e4: 0x24a30490  addiu       $v1, $a1, 0x490
    ctx->pc = 0x1900e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x1900e8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1900e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1900ec: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1900ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1900f0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1900f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1900f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1900f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1900f8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1900f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1900fc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1900fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x190100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190104: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x190104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190108: 0x24a205c0  addiu       $v0, $a1, 0x5C0
    ctx->pc = 0x190108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x19010c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x19010Cu;
    {
        const bool branch_taken_0x19010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x190110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19010Cu;
        // 0x190110: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19010c) {
            ctx->pc = 0x190128u;
            goto label_190128;
        }
    }
    ctx->pc = 0x190114u;
    // 0x190114: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x190114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190118: 0xe4a005c0  swc1        $f0, 0x5C0($a1)
    ctx->pc = 0x190118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1472), bits); }
    // 0x19011c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x19011cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x190120: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x190120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190124: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x190124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_190128:
    // 0x190128: 0x8ca205b0  lw          $v0, 0x5B0($a1)
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x19012c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x19012cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x190130: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x190130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190134: 0xa0a002f5  sb          $zero, 0x2F5($a1)
    ctx->pc = 0x190134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x190138: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x190138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19013c: 0xa0a302f4  sb          $v1, 0x2F4($a1)
    ctx->pc = 0x19013cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x190140: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x190140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x190144: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x190144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x190148: 0xaca205b0  sw          $v0, 0x5B0($a1)
    ctx->pc = 0x190148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1456), GPR_U32(ctx, 2));
    // 0x19014c: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x19014cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_190150:
    // 0x190150: 0x3e00008  jr          $ra
    ctx->pc = 0x190150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190150u;
        // 0x190154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190158u;
    // 0x190158: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19015c: 0x0  nop
    ctx->pc = 0x19015cu;
    // NOP
    // 0x190160: 0x0  nop
    ctx->pc = 0x190160u;
    // NOP
    // 0x190164: 0x0  nop
    ctx->pc = 0x190164u;
    // NOP
    // 0x190168: 0x0  nop
    ctx->pc = 0x190168u;
    // NOP
    // 0x19016c: 0x0  nop
    ctx->pc = 0x19016cu;
    // NOP
    // 0x190170: 0x0  nop
    ctx->pc = 0x190170u;
    // NOP
    // 0x190174: 0x0  nop
    ctx->pc = 0x190174u;
    // NOP
    ctx->pc = 0x190178u;
}
