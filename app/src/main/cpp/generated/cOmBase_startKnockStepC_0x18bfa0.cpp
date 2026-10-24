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

// Function: cOmBase_startKnockStepC
// Address: 0x18bfa0 - 0x18c048
void cOmBase_startKnockStepC_0x18bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_startKnockStepC_0x18bfa0");
#endif

    ctx->pc = 0x18bfa0u;

    // 0x18bfa0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18bfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfa4: 0x9ca205b0  lwu         $v0, 0x5B0($a1)
    ctx->pc = 0x18bfa4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x18bfa8: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x18bfa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x18bfac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18bfb0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18BFB0u;
    {
        const bool branch_taken_0x18bfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFB0u;
        // 0x18bfb4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfb0) {
            ctx->pc = 0x18C028u;
            goto label_18c028;
        }
    }
    ctx->pc = 0x18BFB8u;
    // 0x18bfb8: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x18bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x18bfbc: 0x24a30490  addiu       $v1, $a1, 0x490
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x18bfc0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x18bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18bfc4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x18bfc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18bfc8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x18bfc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bfcc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18bfccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18bfd0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18bfd4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18bfd8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18bfd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bfdc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18bfe0: 0x24a205c0  addiu       $v0, $a1, 0x5C0
    ctx->pc = 0x18bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x18bfe4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BFE4u;
    {
        const bool branch_taken_0x18bfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x18BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFE4u;
        // 0x18bfe8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfe4) {
            ctx->pc = 0x18C000u;
            goto label_18c000;
        }
    }
    ctx->pc = 0x18BFECu;
    // 0x18bfec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18bfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bff0: 0xe4a005c0  swc1        $f0, 0x5C0($a1)
    ctx->pc = 0x18bff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1472), bits); }
    // 0x18bff4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18bff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18bff8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bffc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18bffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_18c000:
    // 0x18c000: 0x8ca205b0  lw          $v0, 0x5B0($a1)
    ctx->pc = 0x18c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x18c004: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x18c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x18c008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c00c: 0xa0a002f5  sb          $zero, 0x2F5($a1)
    ctx->pc = 0x18c00cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c010: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18c010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18c014: 0xa0a302f4  sb          $v1, 0x2F4($a1)
    ctx->pc = 0x18c014u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x18c018: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18c01c: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x18c01cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c020: 0xaca205b0  sw          $v0, 0x5B0($a1)
    ctx->pc = 0x18c020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1456), GPR_U32(ctx, 2));
    // 0x18c024: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x18c024u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_18c028:
    // 0x18c028: 0x3e00008  jr          $ra
    ctx->pc = 0x18C028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C028u;
        // 0x18c02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C030u;
    // 0x18c030: 0x0  nop
    ctx->pc = 0x18c030u;
    // NOP
    // 0x18c034: 0x0  nop
    ctx->pc = 0x18c034u;
    // NOP
    // 0x18c038: 0x0  nop
    ctx->pc = 0x18c038u;
    // NOP
    // 0x18c03c: 0x0  nop
    ctx->pc = 0x18c03cu;
    // NOP
    // 0x18c040: 0x0  nop
    ctx->pc = 0x18c040u;
    // NOP
    // 0x18c044: 0x0  nop
    ctx->pc = 0x18c044u;
    // NOP
    ctx->pc = 0x18c048u;
}
