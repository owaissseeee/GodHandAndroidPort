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

// Function: func_0013F118
// Address: 0x13f118 - 0x13f150
void func_0013F118_0x13f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013F118_0x13f118");
#endif

    switch (ctx->pc) {
        case 0x13f134u: goto label_13f134;
        default: break;
    }

    ctx->pc = 0x13f118u;

    // 0x13f118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f124: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x13f124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x13f128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f12c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13F12Cu;
    SET_GPR_U32(ctx, 31, 0x13F134u);
    ctx->pc = 0x13F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F12Cu;
    // 0x13f130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13F12Cu, 0x13F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F134u;
label_13f134:
    // 0x13f134: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13f134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f13c: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x13f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x13f140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f144: 0x3e00008  jr          $ra
    ctx->pc = 0x13F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F144u;
        // 0x13f148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F14Cu;
    // 0x13f14c: 0x0  nop
    ctx->pc = 0x13f14cu;
    // NOP
    ctx->pc = 0x13f150u;
}
