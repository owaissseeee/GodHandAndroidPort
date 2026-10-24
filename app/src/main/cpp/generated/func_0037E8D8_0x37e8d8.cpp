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

// Function: func_0037E8D8
// Address: 0x37e8d8 - 0x37e908
void func_0037E8D8_0x37e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E8D8_0x37e8d8");
#endif

    switch (ctx->pc) {
        case 0x37e8f4u: goto label_37e8f4;
        default: break;
    }

    ctx->pc = 0x37e8d8u;

    // 0x37e8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37e8dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37e8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37e8e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x37e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x37e8e8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x37e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x37e8ec: 0xc0e17a6  jal         func_385E98
    ctx->pc = 0x37E8ECu;
    SET_GPR_U32(ctx, 31, 0x37E8F4u);
    ctx->pc = 0x37E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E8ECu;
    // 0x37e8f0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385E98u, 0x37E8ECu, 0x37E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E8F4u;
label_37e8f4:
    // 0x37e8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e8f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x37e8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37e8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x37E8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8FCu;
        // 0x37e900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E904u;
    // 0x37e904: 0x0  nop
    ctx->pc = 0x37e904u;
    // NOP
    ctx->pc = 0x37e908u;
}
