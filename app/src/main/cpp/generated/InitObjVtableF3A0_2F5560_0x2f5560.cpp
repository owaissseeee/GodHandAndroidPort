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

// Function: InitObjVtableF3A0_2F5560
// Address: 0x2f5560 - 0x2f5588
void InitObjVtableF3A0_2F5560_0x2f5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableF3A0_2F5560_0x2f5560");
#endif

    switch (ctx->pc) {
        case 0x2f557cu: goto label_2f557c;
        default: break;
    }

    ctx->pc = 0x2f5560u;

    // 0x2f5560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5564: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f5564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f5568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f556c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f556cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5570: 0x2442f3a0  addiu       $v0, $v0, -0xC60
    ctx->pc = 0x2f5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964128));
    // 0x2f5574: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2F5574u;
    SET_GPR_U32(ctx, 31, 0x2F557Cu);
    ctx->pc = 0x2F5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5574u;
    // 0x2f5578: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2F5574u, 0x2F557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F557Cu;
label_2f557c:
    // 0x2f557c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5580: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5580u;
        // 0x2f5584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5588u;
}
