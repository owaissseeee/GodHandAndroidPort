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

// Function: func_003581E0
// Address: 0x3581e0 - 0x358228
void func_003581E0_0x3581e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003581E0_0x3581e0");
#endif

    switch (ctx->pc) {
        case 0x3581f4u: goto label_3581f4;
        case 0x358208u: goto label_358208;
        default: break;
    }

    ctx->pc = 0x3581e0u;

    // 0x3581e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3581e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3581e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3581e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3581e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3581e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3581ec: 0xc0d6292  jal         func_358A48
    ctx->pc = 0x3581ECu;
    SET_GPR_U32(ctx, 31, 0x3581F4u);
    ctx->pc = 0x3581F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581ECu;
    // 0x3581f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A48u, 0x3581ECu, 0x3581F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581F4u;
label_3581f4:
    // 0x3581f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3581F4u;
    {
        const bool branch_taken_0x3581f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3581F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581F4u;
        // 0x3581f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581f4) {
            ctx->pc = 0x35820Cu;
            goto label_35820c;
        }
    }
    ctx->pc = 0x3581FCu;
    // 0x3581fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x358200: 0xc0d63fe  jal         func_358FF8
    ctx->pc = 0x358200u;
    SET_GPR_U32(ctx, 31, 0x358208u);
    ctx->pc = 0x358204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358200u;
    // 0x358204: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358FF8u, 0x358200u, 0x358208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358208u;
label_358208:
    // 0x358208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35820c:
    // 0x35820c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35820cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358214: 0x3e00008  jr          $ra
    ctx->pc = 0x358214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358214u;
        // 0x358218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35821Cu;
    // 0x35821c: 0x0  nop
    ctx->pc = 0x35821cu;
    // NOP
    // 0x358220: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x358220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358224: 0x0  nop
    ctx->pc = 0x358224u;
    // NOP
    ctx->pc = 0x358228u;
}
