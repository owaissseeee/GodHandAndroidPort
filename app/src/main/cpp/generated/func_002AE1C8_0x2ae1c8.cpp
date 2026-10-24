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

// Function: func_002AE1C8
// Address: 0x2ae1c8 - 0x2ae218
void func_002AE1C8_0x2ae1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AE1C8_0x2ae1c8");
#endif

    switch (ctx->pc) {
        case 0x2ae1e0u: goto label_2ae1e0;
        default: break;
    }

    ctx->pc = 0x2ae1c8u;

    // 0x2ae1c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ae1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ae1cc: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AE1CCu;
    {
        const bool branch_taken_0x2ae1cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1CCu;
        // 0x2ae1d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1cc) {
            ctx->pc = 0x2AE20Cu;
            goto label_2ae20c;
        }
    }
    ctx->pc = 0x2AE1D4u;
    // 0x2ae1d4: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x2ae1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2ae1d8: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x2ae1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ae1dc: 0x0  nop
    ctx->pc = 0x2ae1dcu;
    // NOP
label_2ae1e0:
    // 0x2ae1e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ae1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae1e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ae1e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae1e8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x2ae1e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ae1ec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ae1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ae1f0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ae1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae1f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ae1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ae1f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ae1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ae1fc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2ae200: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2ae200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ae204: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AE204u;
    {
        const bool branch_taken_0x2ae204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE204u;
        // 0x2ae208: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae204) {
            ctx->pc = 0x2AE1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae1e0;
        }
    }
    ctx->pc = 0x2AE20Cu;
label_2ae20c:
    // 0x2ae20c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE20Cu;
        // 0x2ae210: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE214u;
    // 0x2ae214: 0x0  nop
    ctx->pc = 0x2ae214u;
    // NOP
    ctx->pc = 0x2ae218u;
}
