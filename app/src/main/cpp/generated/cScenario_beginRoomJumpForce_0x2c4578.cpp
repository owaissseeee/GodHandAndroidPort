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

// Function: cScenario_beginRoomJumpForce
// Address: 0x2c4578 - 0x2c45a8
void cScenario_beginRoomJumpForce_0x2c4578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_beginRoomJumpForce_0x2c4578");
#endif

    if (__builtin_expect(ctx->pc != 0x2c4578u, 0)) {
        switch (ctx->pc) {
            case 0x2c4598u: goto label_2c4598;
            default: break;
        }
    }


    // 0x2c4578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c457c: 0x3c040058  lui         $a0, 0x58
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2c4580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4584: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c4588: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x2c458c: 0x30e700ff  andi        $a3, $a3, 0xFF
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c4590: 0xc07ffcc  jal         func_1FFF30
    SET_GPR_U32(ctx, 31, 0x2C4598u);
    ctx->pc = 0x2C4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4590u;
    // 0x2c4594: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001FFF30_0x1fff30, 0x1fff30u, 0x2c4598u)) {
        return;
    }
    ctx->pc = 0x2C4598u;
label_2c4598:
    // 0x2c4598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c459c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C459Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C459Cu;
        // 0x2c45a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C459Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2c45a4: 0x0  nop
    // NOP
    ctx->pc = 0x2c45a8u;
}