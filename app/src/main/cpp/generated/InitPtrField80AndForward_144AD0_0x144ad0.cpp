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

// Function: InitPtrField80AndForward_144AD0
// Address: 0x144ad0 - 0x144b00
void InitPtrField80AndForward_144AD0_0x144ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPtrField80AndForward_144AD0_0x144ad0");
#endif

    switch (ctx->pc) {
        case 0x144af4u: goto label_144af4;
        default: break;
    }

    ctx->pc = 0x144ad0u;

    // 0x144ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144ad4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x144ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x144ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144adc: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x144ae0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x144ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x144ae4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144AE4u;
    {
        const bool branch_taken_0x144ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AE4u;
        // 0x144ae8: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ae4) {
            ctx->pc = 0x144AF4u;
            goto label_144af4;
        }
    }
    ctx->pc = 0x144AECu;
    // 0x144aec: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x144AECu;
    SET_GPR_U32(ctx, 31, 0x144AF4u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x144AECu, 0x144AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AF4u;
label_144af4:
    // 0x144af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144af8: 0x3e00008  jr          $ra
    ctx->pc = 0x144AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AF8u;
        // 0x144afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144B00u;
}
