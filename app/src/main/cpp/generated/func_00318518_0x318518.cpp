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

// Function: func_00318518
// Address: 0x318518 - 0x318540
void func_00318518_0x318518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318518_0x318518");
#endif

    switch (ctx->pc) {
        case 0x318534u: goto label_318534;
        default: break;
    }

    ctx->pc = 0x318518u;

    // 0x318518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31851c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31851cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x318520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318524: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x318524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318528: 0x24420c38  addiu       $v0, $v0, 0xC38
    ctx->pc = 0x318528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3128));
    // 0x31852c: 0xc053a8a  jal         func_14EA28
    ctx->pc = 0x31852Cu;
    SET_GPR_U32(ctx, 31, 0x318534u);
    ctx->pc = 0x318530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31852Cu;
    // 0x318530: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x31852Cu, 0x318534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318534u;
label_318534:
    // 0x318534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318538: 0x3e00008  jr          $ra
    ctx->pc = 0x318538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318538u;
        // 0x31853c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318540u;
}
