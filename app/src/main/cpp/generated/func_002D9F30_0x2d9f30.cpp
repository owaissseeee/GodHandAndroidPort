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

// Function: func_002D9F30
// Address: 0x2d9f30 - 0x2d9f68
void func_002D9F30_0x2d9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9F30_0x2d9f30");
#endif

    switch (ctx->pc) {
        case 0x2d9f54u: goto label_2d9f54;
        default: break;
    }

    ctx->pc = 0x2d9f30u;

    // 0x2d9f30: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2d9f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9f38: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x2d9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
    // 0x2d9f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9f40: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d9f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d9f44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9F44u;
    {
        const bool branch_taken_0x2d9f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F44u;
        // 0x2d9f48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f44) {
            ctx->pc = 0x2D9F54u;
            goto label_2d9f54;
        }
    }
    ctx->pc = 0x2D9F4Cu;
    // 0x2d9f4c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2D9F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D9F54u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2D9F4Cu, 0x2D9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F54u;
label_2d9f54:
    // 0x2d9f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9f58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F58u;
        // 0x2d9f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9F60u;
    // 0x2d9f60: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x2d9f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d9f64: 0x0  nop
    ctx->pc = 0x2d9f64u;
    // NOP
    ctx->pc = 0x2d9f68u;
}
