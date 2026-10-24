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

// Function: func_002C9AD0
// Address: 0x2c9ad0 - 0x2c9b10
void func_002C9AD0_0x2c9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9AD0_0x2c9ad0");
#endif

    switch (ctx->pc) {
        case 0x2c9af4u: goto label_2c9af4;
        default: break;
    }

    ctx->pc = 0x2c9ad0u;

    // 0x2c9ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9ad8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9adc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9ADCu;
    {
        const bool branch_taken_0x2c9adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9ADCu;
        // 0x2c9ae0: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9adc) {
            ctx->pc = 0x2C9B00u;
            goto label_2c9b00;
        }
    }
    ctx->pc = 0x2C9AE4u;
    // 0x2c9ae4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c9ae8: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x2c9ae8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c9aec: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9AECu;
    SET_GPR_U32(ctx, 31, 0x2C9AF4u);
    ctx->pc = 0x2C9AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AECu;
    // 0x2c9af0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9AECu, 0x2C9AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AF4u;
label_2c9af4:
    // 0x2c9af4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c9af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c9af8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9AF8u;
    {
        const bool branch_taken_0x2c9af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AF8u;
        // 0x2c9afc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9af8) {
            ctx->pc = 0x2C9B04u;
            goto label_2c9b04;
        }
    }
    ctx->pc = 0x2C9B00u;
label_2c9b00:
    // 0x2c9b00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b04:
    // 0x2c9b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B08u;
        // 0x2c9b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9B10u;
}
