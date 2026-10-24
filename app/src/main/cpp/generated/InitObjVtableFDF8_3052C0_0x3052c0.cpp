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

// Function: InitObjVtableFDF8_3052C0
// Address: 0x3052c0 - 0x3052e8
void InitObjVtableFDF8_3052C0_0x3052c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableFDF8_3052C0_0x3052c0");
#endif

    switch (ctx->pc) {
        case 0x3052dcu: goto label_3052dc;
        default: break;
    }

    ctx->pc = 0x3052c0u;

    // 0x3052c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3052c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3052c4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3052c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3052c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3052c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3052cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3052ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052d0: 0x2442fdf8  addiu       $v0, $v0, -0x208
    ctx->pc = 0x3052d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x3052d4: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x3052D4u;
    SET_GPR_U32(ctx, 31, 0x3052DCu);
    ctx->pc = 0x3052D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3052D4u;
    // 0x3052d8: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x3052D4u, 0x3052DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052DCu;
label_3052dc:
    // 0x3052dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3052dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3052e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3052E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052E0u;
        // 0x3052e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3052E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3052E8u;
}
