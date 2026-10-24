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

// Function: sfvom_IsTerm
// Address: 0x35d360 - 0x35d3a8
void sfvom_IsTerm_0x35d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfvom_IsTerm_0x35d360");
#endif

    switch (ctx->pc) {
        case 0x35d378u: goto label_35d378;
        case 0x35d390u: goto label_35d390;
        default: break;
    }

    ctx->pc = 0x35d360u;

    // 0x35d360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d364: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35d364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35d368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d36c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35d370: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35D370u;
    SET_GPR_U32(ctx, 31, 0x35D378u);
    ctx->pc = 0x35D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D370u;
    // 0x35d374: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35D370u, 0x35D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D378u;
label_35d378:
    // 0x35d378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D378u;
    {
        const bool branch_taken_0x35d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D378u;
        // 0x35d37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d378) {
            ctx->pc = 0x35D388u;
            goto label_35d388;
        }
    }
    ctx->pc = 0x35D380u;
    // 0x35d380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35D380u;
    {
        const bool branch_taken_0x35d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D380u;
        // 0x35d384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d380) {
            ctx->pc = 0x35D394u;
            goto label_35d394;
        }
    }
    ctx->pc = 0x35D388u;
label_35d388:
    // 0x35d388: 0xc0d6e6c  jal         func_35B9B0
    ctx->pc = 0x35D388u;
    SET_GPR_U32(ctx, 31, 0x35D390u);
    ctx->pc = 0x35B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B9B0u, 0x35D388u, 0x35D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D390u;
label_35d390:
    // 0x35d390: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x35d390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_35d394:
    // 0x35d394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d398: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35d398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d39c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D39Cu;
        // 0x35d3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D3A4u;
    // 0x35d3a4: 0x0  nop
    ctx->pc = 0x35d3a4u;
    // NOP
    ctx->pc = 0x35d3a8u;
}
