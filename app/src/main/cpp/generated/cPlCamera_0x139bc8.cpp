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

// Function: cPlCamera
// Address: 0x139bc8 - 0x139c58
void cPlCamera_0x139bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlCamera_0x139bc8");
#endif

    switch (ctx->pc) {
        case 0x139bdcu: goto label_139bdc;
        default: break;
    }

    ctx->pc = 0x139bc8u;

    // 0x139bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139bd4: 0xc04e02a  jal         func_1380A8
    ctx->pc = 0x139BD4u;
    SET_GPR_U32(ctx, 31, 0x139BDCu);
    ctx->pc = 0x139BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BD4u;
    // 0x139bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1380A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1380A8u, 0x139BD4u, 0x139BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BDCu;
label_139bdc:
    // 0x139bdc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x139be0: 0x2463d8f8  addiu       $v1, $v1, -0x2708
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957304));
    // 0x139be4: 0xae03035c  sw          $v1, 0x35C($s0)
    ctx->pc = 0x139be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 3));
    // 0x139be8: 0xfa000370  sqc2        $vf0, 0x370($s0)
    ctx->pc = 0x139be8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 880), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139bec: 0xfa000380  sqc2        $vf0, 0x380($s0)
    ctx->pc = 0x139becu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 896), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139bf0: 0xfa000390  sqc2        $vf0, 0x390($s0)
    ctx->pc = 0x139bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 912), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139bf4: 0xfa0003b0  sqc2        $vf0, 0x3B0($s0)
    ctx->pc = 0x139bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 944), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139bf8: 0xfa0003c0  sqc2        $vf0, 0x3C0($s0)
    ctx->pc = 0x139bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 960), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139bfc: 0xfa0003d0  sqc2        $vf0, 0x3D0($s0)
    ctx->pc = 0x139bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 976), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c00: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x139c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x139c04: 0x2442dbb0  addiu       $v0, $v0, -0x2450
    ctx->pc = 0x139c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958000));
    // 0x139c08: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x139c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x139c0c: 0xfa000400  sqc2        $vf0, 0x400($s0)
    ctx->pc = 0x139c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1024), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c10: 0xfa000410  sqc2        $vf0, 0x410($s0)
    ctx->pc = 0x139c10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1040), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c14: 0xfa000440  sqc2        $vf0, 0x440($s0)
    ctx->pc = 0x139c14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1088), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c18: 0xfa000450  sqc2        $vf0, 0x450($s0)
    ctx->pc = 0x139c18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1104), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c1c: 0xfa000480  sqc2        $vf0, 0x480($s0)
    ctx->pc = 0x139c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1152), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c20: 0xfa000490  sqc2        $vf0, 0x490($s0)
    ctx->pc = 0x139c20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1168), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c24: 0xfa0004c0  sqc2        $vf0, 0x4C0($s0)
    ctx->pc = 0x139c24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1216), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c28: 0xfa0004d0  sqc2        $vf0, 0x4D0($s0)
    ctx->pc = 0x139c28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1232), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c2c: 0xfa000500  sqc2        $vf0, 0x500($s0)
    ctx->pc = 0x139c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1280), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x139c30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x139c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c34: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x139c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x139c38: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x139c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x139c3c: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x139c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x139c40: 0xae000510  sw          $zero, 0x510($s0)
    ctx->pc = 0x139c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 0));
    // 0x139c44: 0xae000514  sw          $zero, 0x514($s0)
    ctx->pc = 0x139c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 0));
    // 0x139c48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c50: 0x3e00008  jr          $ra
    ctx->pc = 0x139C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C50u;
        // 0x139c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C58u;
}
