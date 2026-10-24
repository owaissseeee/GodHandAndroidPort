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

// Function: func_00333B00
// Address: 0x333b00 - 0x333b40
void func_00333B00_0x333b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333B00_0x333b00");
#endif

    switch (ctx->pc) {
        case 0x333b14u: goto label_333b14;
        default: break;
    }

    ctx->pc = 0x333b00u;

    // 0x333b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333b08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x333b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x333b0c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x333B0Cu;
    SET_GPR_U32(ctx, 31, 0x333B14u);
    ctx->pc = 0x333B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B0Cu;
    // 0x333b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x333B0Cu, 0x333B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B14u;
label_333b14:
    // 0x333b14: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x333b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x333b18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x333B18u;
    {
        const bool branch_taken_0x333b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x333B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B18u;
        // 0x333b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b18) {
            ctx->pc = 0x333B2Cu;
            goto label_333b2c;
        }
    }
    ctx->pc = 0x333B20u;
    // 0x333b20: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x333b20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x333b24: 0x3842002e  xori        $v0, $v0, 0x2E
    ctx->pc = 0x333b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)46);
    // 0x333b28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x333b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_333b2c:
    // 0x333b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333b30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x333b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333b34: 0x3e00008  jr          $ra
    ctx->pc = 0x333B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B34u;
        // 0x333b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333B3Cu;
    // 0x333b3c: 0x0  nop
    ctx->pc = 0x333b3cu;
    // NOP
    ctx->pc = 0x333b40u;
}
