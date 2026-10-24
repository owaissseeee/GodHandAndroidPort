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

// Function: func_001A8348
// Address: 0x1a8348 - 0x1a8380
void func_001A8348_0x1a8348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8348_0x1a8348");
#endif

    switch (ctx->pc) {
        case 0x1a835cu: goto label_1a835c;
        default: break;
    }

    ctx->pc = 0x1a8348u;

    // 0x1a8348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a834c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8354: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A8354u;
    SET_GPR_U32(ctx, 31, 0x1A835Cu);
    ctx->pc = 0x1A8358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8354u;
    // 0x1a8358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A8354u, 0x1A835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A835Cu;
label_1a835c:
    // 0x1a835c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a8360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8364: 0x246377b8  addiu       $v1, $v1, 0x77B8
    ctx->pc = 0x1a8364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30648));
    // 0x1a8368: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1a8368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1a836c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1a836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1a8370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a8370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8378: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8378u;
        // 0x1a837c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8380u;
}
