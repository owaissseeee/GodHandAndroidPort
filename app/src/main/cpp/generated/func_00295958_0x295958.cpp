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

// Function: func_00295958
// Address: 0x295958 - 0x295978
void func_00295958_0x295958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00295958_0x295958");
#endif

    switch (ctx->pc) {
        case 0x29596cu: goto label_29596c;
        default: break;
    }

    ctx->pc = 0x295958u;

    // 0x295958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29595c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29595cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295964: 0xc0a564a  jal         func_295928
    ctx->pc = 0x295964u;
    SET_GPR_U32(ctx, 31, 0x29596Cu);
    ctx->pc = 0x295968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295964u;
    // 0x295968: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295928u, 0x295964u, 0x29596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29596Cu;
label_29596c:
    // 0x29596c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295970: 0x3e00008  jr          $ra
    ctx->pc = 0x295970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295970u;
        // 0x295974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295978u;
}
