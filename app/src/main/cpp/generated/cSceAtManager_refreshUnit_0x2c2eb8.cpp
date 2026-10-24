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

// Function: cSceAtManager_refreshUnit
// Address: 0x2c2eb8 - 0x2c2ef8
void cSceAtManager_refreshUnit_0x2c2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_refreshUnit_0x2c2eb8");
#endif

    switch (ctx->pc) {
        case 0x2c2eecu: goto label_2c2eec;
        default: break;
    }

    ctx->pc = 0x2c2eb8u;

    // 0x2c2eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2ebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c2ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2ec8: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x2c2ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2c2ecc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2ECCu;
    {
        const bool branch_taken_0x2c2ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2ECCu;
        // 0x2c2ed0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ecc) {
            ctx->pc = 0x2C2EF0u;
            goto label_2c2ef0;
        }
    }
    ctx->pc = 0x2C2ED4u;
    // 0x2c2ed4: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2c2ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c2ed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c2edc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2EDCu;
    {
        const bool branch_taken_0x2c2edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2edc) {
            ctx->pc = 0x2C2EF0u;
            goto label_2c2ef0;
        }
    }
    ctx->pc = 0x2C2EE4u;
    // 0x2c2ee4: 0xc0b0388  jal         func_2C0E20
    ctx->pc = 0x2C2EE4u;
    SET_GPR_U32(ctx, 31, 0x2C2EECu);
    ctx->pc = 0x2C0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E20u, 0x2C2EE4u, 0x2C2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2EECu;
label_2c2eec:
    // 0x2c2eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2ef0:
    // 0x2c2ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EF0u;
        // 0x2c2ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2EF8u;
}
