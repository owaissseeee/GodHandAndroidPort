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

// Function: func_002D5958
// Address: 0x2d5958 - 0x2d5990
void func_002D5958_0x2d5958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5958_0x2d5958");
#endif

    switch (ctx->pc) {
        case 0x2d5970u: goto label_2d5970;
        default: break;
    }

    ctx->pc = 0x2d5958u;

    // 0x2d5958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d595c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d595cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5964: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d5964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d5968: 0xc0b5664  jal         func_2D5990
    ctx->pc = 0x2D5968u;
    SET_GPR_U32(ctx, 31, 0x2D5970u);
    ctx->pc = 0x2D596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5968u;
    // 0x2d596c: 0xa440001e  sh          $zero, 0x1E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5990u, 0x2D5968u, 0x2D5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5970u;
label_2d5970:
    // 0x2d5970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5974: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5974u;
        // 0x2d5978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D597Cu;
    // 0x2d597c: 0x0  nop
    ctx->pc = 0x2d597cu;
    // NOP
    // 0x2d5980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5984: 0x0  nop
    ctx->pc = 0x2d5984u;
    // NOP
    // 0x2d5988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d598c: 0x0  nop
    ctx->pc = 0x2d598cu;
    // NOP
    ctx->pc = 0x2d5990u;
}
