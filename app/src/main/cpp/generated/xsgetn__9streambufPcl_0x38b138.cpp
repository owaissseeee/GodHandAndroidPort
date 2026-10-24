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

// Function: xsgetn__9streambufPcl
// Address: 0x38b138 - 0x38b168
void xsgetn__9streambufPcl_0x38b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("xsgetn__9streambufPcl_0x38b138");
#endif

    switch (ctx->pc) {
        case 0x38b150u: goto label_38b150;
        default: break;
    }

    ctx->pc = 0x38b138u;

    // 0x38b138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b13c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x38b13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38b140: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38b140u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x38b144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b148: 0xc0e3284  jal         func_38CA10
    ctx->pc = 0x38B148u;
    SET_GPR_U32(ctx, 31, 0x38B150u);
    ctx->pc = 0x38CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CA10u, 0x38B148u, 0x38B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B150u;
label_38b150:
    // 0x38b150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38b154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b158: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x38b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x38b15c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B15Cu;
        // 0x38b160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B164u;
    // 0x38b164: 0x0  nop
    ctx->pc = 0x38b164u;
    // NOP
    ctx->pc = 0x38b168u;
}
