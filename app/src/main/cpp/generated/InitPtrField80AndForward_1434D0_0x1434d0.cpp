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

// Function: InitPtrField80AndForward_1434D0
// Address: 0x1434d0 - 0x143500
void InitPtrField80AndForward_1434D0_0x1434d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPtrField80AndForward_1434D0_0x1434d0");
#endif

    switch (ctx->pc) {
        case 0x1434f4u: goto label_1434f4;
        default: break;
    }

    ctx->pc = 0x1434d0u;

    // 0x1434d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1434d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1434d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1434d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1434d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1434d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1434dc: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x1434dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x1434e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1434e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1434e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1434E4u;
    {
        const bool branch_taken_0x1434e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1434E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434E4u;
        // 0x1434e8: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434e4) {
            ctx->pc = 0x1434F4u;
            goto label_1434f4;
        }
    }
    ctx->pc = 0x1434ECu;
    // 0x1434ec: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x1434ECu;
    SET_GPR_U32(ctx, 31, 0x1434F4u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x1434ECu, 0x1434F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434F4u;
label_1434f4:
    // 0x1434f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1434f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1434f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1434F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1434FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434F8u;
        // 0x1434fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143500u;
}
