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

// Function: cOmBase_startKnockStepN
// Address: 0x17d2e0 - 0x17d388
void cOmBase_startKnockStepN_0x17d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_startKnockStepN_0x17d2e0");
#endif

    ctx->pc = 0x17d2e0u;

    // 0x17d2e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17d2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2e4: 0x9ca205b0  lwu         $v0, 0x5B0($a1)
    ctx->pc = 0x17d2e4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x17d2e8: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x17d2e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x17d2ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d2f0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17D2F0u;
    {
        const bool branch_taken_0x17d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2F0u;
        // 0x17d2f4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2f0) {
            ctx->pc = 0x17D368u;
            goto label_17d368;
        }
    }
    ctx->pc = 0x17D2F8u;
    // 0x17d2f8: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x17d2fc: 0x24a30490  addiu       $v1, $a1, 0x490
    ctx->pc = 0x17d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x17d300: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x17d300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17d304: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17d304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d308: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17d308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d30c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17d30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17d310: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d314: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x17d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d318: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d31c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d320: 0x24a205c0  addiu       $v0, $a1, 0x5C0
    ctx->pc = 0x17d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x17d324: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D324u;
    {
        const bool branch_taken_0x17d324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x17D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D324u;
        // 0x17d328: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d324) {
            ctx->pc = 0x17D340u;
            goto label_17d340;
        }
    }
    ctx->pc = 0x17D32Cu;
    // 0x17d32c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d330: 0xe4a005c0  swc1        $f0, 0x5C0($a1)
    ctx->pc = 0x17d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1472), bits); }
    // 0x17d334: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17d334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17d338: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d33c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17d33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17d340:
    // 0x17d340: 0x8ca205b0  lw          $v0, 0x5B0($a1)
    ctx->pc = 0x17d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x17d344: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17d348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d34c: 0xa0a002f5  sb          $zero, 0x2F5($a1)
    ctx->pc = 0x17d34cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d350: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17d354: 0xa0a302f4  sb          $v1, 0x2F4($a1)
    ctx->pc = 0x17d354u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d358: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x17d358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17d35c: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x17d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d360: 0xaca205b0  sw          $v0, 0x5B0($a1)
    ctx->pc = 0x17d360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1456), GPR_U32(ctx, 2));
    // 0x17d364: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x17d364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_17d368:
    // 0x17d368: 0x3e00008  jr          $ra
    ctx->pc = 0x17D368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D368u;
        // 0x17d36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D370u;
    // 0x17d370: 0x0  nop
    ctx->pc = 0x17d370u;
    // NOP
    // 0x17d374: 0x0  nop
    ctx->pc = 0x17d374u;
    // NOP
    // 0x17d378: 0x0  nop
    ctx->pc = 0x17d378u;
    // NOP
    // 0x17d37c: 0x0  nop
    ctx->pc = 0x17d37cu;
    // NOP
    // 0x17d380: 0x0  nop
    ctx->pc = 0x17d380u;
    // NOP
    // 0x17d384: 0x0  nop
    ctx->pc = 0x17d384u;
    // NOP
    ctx->pc = 0x17d388u;
}
