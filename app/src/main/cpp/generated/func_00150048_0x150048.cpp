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

// Function: func_00150048
// Address: 0x150048 - 0x150078
void func_00150048_0x150048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150048_0x150048");
#endif

    switch (ctx->pc) {
        case 0x15006cu: goto label_15006c;
        default: break;
    }

    ctx->pc = 0x150048u;

    // 0x150048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15004c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x15004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x150050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150054: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x150054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x150058: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x150058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x15005c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15005Cu;
    {
        const bool branch_taken_0x15005c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x150060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15005Cu;
        // 0x150060: 0xac820214  sw          $v0, 0x214($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15005c) {
            ctx->pc = 0x15006Cu;
            goto label_15006c;
        }
    }
    ctx->pc = 0x150064u;
    // 0x150064: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x150064u;
    SET_GPR_U32(ctx, 31, 0x15006Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x150064u, 0x15006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15006Cu;
label_15006c:
    // 0x15006c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150070: 0x3e00008  jr          $ra
    ctx->pc = 0x150070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150070u;
        // 0x150074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150078u;
}
