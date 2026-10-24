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

// Function: func_001574F0
// Address: 0x1574f0 - 0x157540
void func_001574F0_0x1574f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001574F0_0x1574f0");
#endif

    ctx->pc = 0x1574f0u;

    // 0x1574f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1574f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1574f4: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1574F4u;
    {
        const bool branch_taken_0x1574f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1574f4) {
            ctx->pc = 0x157530u;
            goto label_157530;
        }
    }
    ctx->pc = 0x1574FCu;
    // 0x1574fc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1574FCu;
    {
        const bool branch_taken_0x1574fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x157500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574FCu;
        // 0x157500: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574fc) {
            ctx->pc = 0x157530u;
            goto label_157530;
        }
    }
    ctx->pc = 0x157504u;
    // 0x157504: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x157504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x157508: 0x24636d80  addiu       $v1, $v1, 0x6D80
    ctx->pc = 0x157508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28032));
    // 0x15750c: 0x2442d8d0  addiu       $v0, $v0, -0x2730
    ctx->pc = 0x15750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x157510: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8D0u));
    // 0x157514: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x157514u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x3BD8E0u));
    // 0x157518: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x157518u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x3BD8F0u));
    // 0x15751c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x15751cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x3BD900u));
    // 0x157520: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157520u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157524: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157524u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157528: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157528u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15752c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x15752cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_157530:
    // 0x157530: 0x3e00008  jr          $ra
    ctx->pc = 0x157530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157538u;
    // 0x157538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15753c: 0x0  nop
    ctx->pc = 0x15753cu;
    // NOP
    ctx->pc = 0x157540u;
}
