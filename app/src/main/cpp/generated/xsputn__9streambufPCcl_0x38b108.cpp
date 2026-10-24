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

// Function: xsputn__9streambufPCcl
// Address: 0x38b108 - 0x38b138
void xsputn__9streambufPCcl_0x38b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("xsputn__9streambufPCcl_0x38b108");
#endif

    switch (ctx->pc) {
        case 0x38b120u: goto label_38b120;
        default: break;
    }

    ctx->pc = 0x38b108u;

    // 0x38b108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b10c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x38b10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38b110: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38b110u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x38b114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b118: 0xc0e322c  jal         func_38C8B0
    ctx->pc = 0x38B118u;
    SET_GPR_U32(ctx, 31, 0x38B120u);
    ctx->pc = 0x38C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C8B0u, 0x38B118u, 0x38B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B120u;
label_38b120:
    // 0x38b120: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38b124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b128: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x38b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x38b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B12Cu;
        // 0x38b130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B134u;
    // 0x38b134: 0x0  nop
    ctx->pc = 0x38b134u;
    // NOP
    ctx->pc = 0x38b138u;
}
