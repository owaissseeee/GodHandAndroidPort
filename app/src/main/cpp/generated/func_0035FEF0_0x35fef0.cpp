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

// Function: func_0035FEF0
// Address: 0x35fef0 - 0x35ff48
void func_0035FEF0_0x35fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FEF0_0x35fef0");
#endif

    switch (ctx->pc) {
        case 0x35ff04u: goto label_35ff04;
        case 0x35ff18u: goto label_35ff18;
        default: break;
    }

    ctx->pc = 0x35fef0u;

    // 0x35fef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35fef8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35fefc: 0xc0d7fd2  jal         func_35FF48
    ctx->pc = 0x35FEFCu;
    SET_GPR_U32(ctx, 31, 0x35FF04u);
    ctx->pc = 0x35FF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FF48u, 0x35FEFCu, 0x35FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF04u;
label_35ff04:
    // 0x35ff04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35ff04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff08: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x35FF08u;
    {
        const bool branch_taken_0x35ff08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF08u;
        // 0x35ff0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff08) {
            ctx->pc = 0x35FF38u;
            goto label_35ff38;
        }
    }
    ctx->pc = 0x35FF10u;
    // 0x35ff10: 0xc0d7fe6  jal         func_35FF98
    ctx->pc = 0x35FF10u;
    SET_GPR_U32(ctx, 31, 0x35FF18u);
    ctx->pc = 0x35FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FF98u, 0x35FF10u, 0x35FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF18u;
label_35ff18:
    // 0x35ff18: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35ff1c: 0x2463e800  addiu       $v1, $v1, -0x1800
    ctx->pc = 0x35ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961152));
    // 0x35ff20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ff24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EE800u));
    // 0x35ff28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ff28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35ff30: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35ff30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EE800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE800u, _value); } while (0);
    // 0x35ff34: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x35ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_35ff38:
    // 0x35ff38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ff38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ff3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35ff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ff40: 0x3e00008  jr          $ra
    ctx->pc = 0x35FF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF40u;
        // 0x35ff44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FF48u;
}
