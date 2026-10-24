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

// Function: cSceAtManager_delUnitData
// Address: 0x2c2fd8 - 0x2c3000
void cSceAtManager_delUnitData_0x2c2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_delUnitData_0x2c2fd8");
#endif

    switch (ctx->pc) {
        case 0x2c2ff0u: goto label_2c2ff0;
        default: break;
    }

    ctx->pc = 0x2c2fd8u;

    // 0x2c2fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2fdc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2FDCu;
    {
        const bool branch_taken_0x2c2fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FDCu;
        // 0x2c2fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fdc) {
            ctx->pc = 0x2C2FF0u;
            goto label_2c2ff0;
        }
    }
    ctx->pc = 0x2C2FE4u;
    // 0x2c2fe4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c2fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fe8: 0xc0b0c16  jal         func_2C3058
    ctx->pc = 0x2C2FE8u;
    SET_GPR_U32(ctx, 31, 0x2C2FF0u);
    ctx->pc = 0x2C2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2FE8u;
    // 0x2c2fec: 0x2485005c  addiu       $a1, $a0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3058u, 0x2C2FE8u, 0x2C2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FF0u;
label_2c2ff0:
    // 0x2c2ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FF4u;
        // 0x2c2ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2FFCu;
    // 0x2c2ffc: 0x0  nop
    ctx->pc = 0x2c2ffcu;
    // NOP
    ctx->pc = 0x2c3000u;
}
