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

// Function: sceVpu0Reset
// Address: 0x30abd8 - 0x30ac38
void sceVpu0Reset_0x30abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVpu0Reset_0x30abd8");
#endif

    ctx->pc = 0x30abd8u;

    // 0x30abd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30abdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30abe0: 0x34423830  ori         $v0, $v0, 0x3830
    ctx->pc = 0x30abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14384);
    // 0x30abe4: 0x34843820  ori         $a0, $a0, 0x3820
    ctx->pc = 0x30abe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14368);
    // 0x30abe8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x30abe8u;
    runtime->Store32(rdram, ctx, 0x10003830u, GPR_U32(ctx, 0));
    // 0x30abec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30abecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30abf0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x30abf0u;
    runtime->Store32(rdram, ctx, 0x10003820u, GPR_U32(ctx, 0));
    // 0x30abf4: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x30abf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x30abf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30abfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30abfcu;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 2));
    // 0x30ac00: 0x4848e000  cfc2.ni     $t0, $vi28
    ctx->pc = 0x30ac00u;
    SET_GPR_U32(ctx, 8, ctx->vu0_fbrst);
    // 0x30ac04: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x30ac04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x30ac08: 0x48c8e000  ctc2.ni     $t0, $vi28
    ctx->pc = 0x30ac08u;
    ctx->vu0_fbrst = GPR_U32(ctx, 8) & 0x00000C0Cu;
    // 0x30ac0c: 0x40f  sync.p
    ctx->pc = 0x30ac0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30ac10: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x30ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30ac14: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x30ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x30ac18: 0x24843ca0  addiu       $a0, $a0, 0x3CA0
    ctx->pc = 0x30ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15520));
    // 0x30ac1c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x30ac1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x30ac20: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x30ac20u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3C3CA0u));
    // 0x30ac24: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x30ac24u;
    runtime->Store128(rdram, ctx, 0x10004000u, GPR_VEC(ctx, 2));
    // 0x30ac28: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x30ac28u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3C3CB0u));
    // 0x30ac2c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30ac2cu;
    runtime->Store128(rdram, ctx, 0x10004000u, GPR_VEC(ctx, 3));
    // 0x30ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x30AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AC38u;
}
