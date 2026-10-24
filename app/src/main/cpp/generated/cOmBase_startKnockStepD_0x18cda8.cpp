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

// Function: cOmBase_startKnockStepD
// Address: 0x18cda8 - 0x18ce50
void cOmBase_startKnockStepD_0x18cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_startKnockStepD_0x18cda8");
#endif

    ctx->pc = 0x18cda8u;

    // 0x18cda8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18cda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdac: 0x9ca205b0  lwu         $v0, 0x5B0($a1)
    ctx->pc = 0x18cdacu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x18cdb0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x18cdb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x18cdb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18cdb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18CDB8u;
    {
        const bool branch_taken_0x18cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDB8u;
        // 0x18cdbc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdb8) {
            ctx->pc = 0x18CE30u;
            goto label_18ce30;
        }
    }
    ctx->pc = 0x18CDC0u;
    // 0x18cdc0: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x18cdc4: 0x24a30490  addiu       $v1, $a1, 0x490
    ctx->pc = 0x18cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x18cdc8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x18cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18cdcc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x18cdccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18cdd0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x18cdd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18cdd4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18cdd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18cdd8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18cddc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18cde0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18cde0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cde4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18cde8: 0x24a205c0  addiu       $v0, $a1, 0x5C0
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x18cdec: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CDECu;
    {
        const bool branch_taken_0x18cdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x18CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDECu;
        // 0x18cdf0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cdec) {
            ctx->pc = 0x18CE08u;
            goto label_18ce08;
        }
    }
    ctx->pc = 0x18CDF4u;
    // 0x18cdf4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cdf8: 0xe4a005c0  swc1        $f0, 0x5C0($a1)
    ctx->pc = 0x18cdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1472), bits); }
    // 0x18cdfc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18cdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18ce00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ce04: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18ce04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_18ce08:
    // 0x18ce08: 0x8ca205b0  lw          $v0, 0x5B0($a1)
    ctx->pc = 0x18ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x18ce0c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x18ce10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ce14: 0xa0a002f5  sb          $zero, 0x2F5($a1)
    ctx->pc = 0x18ce14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ce18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18ce1c: 0xa0a302f4  sb          $v1, 0x2F4($a1)
    ctx->pc = 0x18ce1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ce20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18ce24: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x18ce24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ce28: 0xaca205b0  sw          $v0, 0x5B0($a1)
    ctx->pc = 0x18ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1456), GPR_U32(ctx, 2));
    // 0x18ce2c: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x18ce2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_18ce30:
    // 0x18ce30: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE30u;
        // 0x18ce34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE38u;
    // 0x18ce38: 0x0  nop
    ctx->pc = 0x18ce38u;
    // NOP
    // 0x18ce3c: 0x0  nop
    ctx->pc = 0x18ce3cu;
    // NOP
    // 0x18ce40: 0x0  nop
    ctx->pc = 0x18ce40u;
    // NOP
    // 0x18ce44: 0x0  nop
    ctx->pc = 0x18ce44u;
    // NOP
    // 0x18ce48: 0x0  nop
    ctx->pc = 0x18ce48u;
    // NOP
    // 0x18ce4c: 0x0  nop
    ctx->pc = 0x18ce4cu;
    // NOP
    ctx->pc = 0x18ce50u;
}
