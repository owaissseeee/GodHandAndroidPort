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

// Function: cScenario_isMessOn
// Address: 0x2c4350 - 0x2c4390
void cScenario_isMessOn_0x2c4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isMessOn_0x2c4350");
#endif

    switch (ctx->pc) {
        case 0x2c4374u: goto label_2c4374;
        default: break;
    }

    ctx->pc = 0x2c4350u;

    // 0x2c4350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4354: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c4354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c4358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c435c: 0x94820112  lhu         $v0, 0x112($a0)
    ctx->pc = 0x2c435cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x2c4360: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4360u;
    {
        const bool branch_taken_0x2c4360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4360u;
        // 0x2c4364: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4360) {
            ctx->pc = 0x2C437Cu;
            goto label_2c437c;
        }
    }
    ctx->pc = 0x2C4368u;
    // 0x2c4368: 0x94850112  lhu         $a1, 0x112($a0)
    ctx->pc = 0x2c4368u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x2c436c: 0xc0abb68  jal         func_2AEDA0
    ctx->pc = 0x2C436Cu;
    SET_GPR_U32(ctx, 31, 0x2C4374u);
    ctx->pc = 0x2C4370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C436Cu;
    // 0x2c4370: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDA0u, 0x2C436Cu, 0x2C4374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4374u;
label_2c4374:
    // 0x2c4374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4374u;
    {
        const bool branch_taken_0x2c4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4374u;
        // 0x2c4378: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4374) {
            ctx->pc = 0x2C4384u;
            goto label_2c4384;
        }
    }
    ctx->pc = 0x2C437Cu;
label_2c437c:
    // 0x2c437c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c437cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4384:
    // 0x2c4384: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4384u;
        // 0x2c4388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C438Cu;
    // 0x2c438c: 0x0  nop
    ctx->pc = 0x2c438cu;
    // NOP
    ctx->pc = 0x2c4390u;
}
