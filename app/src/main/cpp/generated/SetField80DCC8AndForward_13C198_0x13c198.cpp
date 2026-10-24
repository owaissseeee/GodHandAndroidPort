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

// Function: SetField80DCC8AndForward_13C198
// Address: 0x13c198 - 0x13c1c8
void SetField80DCC8AndForward_13C198_0x13c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField80DCC8AndForward_13C198_0x13c198");
#endif

    switch (ctx->pc) {
        case 0x13c1bcu: goto label_13c1bc;
        default: break;
    }

    ctx->pc = 0x13c198u;

    // 0x13c198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c19c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13c1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c1a4: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x13c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x13c1a8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x13c1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13c1ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C1ACu;
    {
        const bool branch_taken_0x13c1ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1ACu;
        // 0x13c1b0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1ac) {
            ctx->pc = 0x13C1BCu;
            goto label_13c1bc;
        }
    }
    ctx->pc = 0x13C1B4u;
    // 0x13c1b4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x13C1B4u;
    SET_GPR_U32(ctx, 31, 0x13C1BCu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x13C1B4u, 0x13C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C1BCu;
label_13c1bc:
    // 0x13c1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1C0u;
        // 0x13c1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C1C8u;
}
