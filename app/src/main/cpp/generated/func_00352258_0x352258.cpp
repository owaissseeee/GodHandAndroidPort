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

// Function: func_00352258
// Address: 0x352258 - 0x352298
void func_00352258_0x352258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352258_0x352258");
#endif

    switch (ctx->pc) {
        case 0x352288u: goto label_352288;
        default: break;
    }

    ctx->pc = 0x352258u;

    // 0x352258: 0x3c02055d  lui         $v0, 0x55D
    ctx->pc = 0x352258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1373 << 16));
    // 0x35225c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35225cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352260: 0x34424a80  ori         $v0, $v0, 0x4A80
    ctx->pc = 0x352260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19072);
    // 0x352264: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x352264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x352268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35226c: 0x1812  mflo        $v1
    ctx->pc = 0x35226cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x352270: 0x2010  mfhi        $a0
    ctx->pc = 0x352270u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352274: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x352274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x352278: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x352278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x35227c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35227cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x352280: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x352280u;
    SET_GPR_U32(ctx, 31, 0x352288u);
    ctx->pc = 0x352284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352280u;
    // 0x352284: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x352280u, 0x352288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352288u;
label_352288:
    // 0x352288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35228c: 0x3e00008  jr          $ra
    ctx->pc = 0x35228Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35228Cu;
        // 0x352290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35228Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352294u;
    // 0x352294: 0x0  nop
    ctx->pc = 0x352294u;
    // NOP
    ctx->pc = 0x352298u;
}
