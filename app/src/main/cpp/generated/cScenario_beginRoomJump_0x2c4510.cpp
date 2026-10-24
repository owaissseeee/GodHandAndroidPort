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

// Function: cScenario_beginRoomJump
// Address: 0x2c4510 - 0x2c4548
void cScenario_beginRoomJump_0x2c4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_beginRoomJump_0x2c4510");
#endif

    switch (ctx->pc) {
        case 0x2c4530u: goto label_2c4530;
        default: break;
    }

    ctx->pc = 0x2c4510u;

    // 0x2c4510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4514: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2c4514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2c4518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c451c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2c451cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c4520: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x2c4520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x2c4524: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2c4524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c4528: 0xc07ff98  jal         func_1FFE60
    ctx->pc = 0x2C4528u;
    SET_GPR_U32(ctx, 31, 0x2C4530u);
    ctx->pc = 0x2C452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4528u;
    // 0x2c452c: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE60u, 0x2C4528u, 0x2C4530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4530u;
label_2c4530:
    // 0x2c4530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4534: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4534u;
        // 0x2c4538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C453Cu;
    // 0x2c453c: 0x0  nop
    ctx->pc = 0x2c453cu;
    // NOP
    // 0x2c4540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4544: 0x0  nop
    ctx->pc = 0x2c4544u;
    // NOP
    ctx->pc = 0x2c4548u;
}
