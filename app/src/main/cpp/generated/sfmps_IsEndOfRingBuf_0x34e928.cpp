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

// Function: sfmps_IsEndOfRingBuf
// Address: 0x34e928 - 0x34e988
void sfmps_IsEndOfRingBuf_0x34e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_IsEndOfRingBuf_0x34e928");
#endif

    switch (ctx->pc) {
        case 0x34e93cu: goto label_34e93c;
        default: break;
    }

    ctx->pc = 0x34e928u;

    // 0x34e928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34e930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34e934: 0xc0d3a62  jal         func_34E988
    ctx->pc = 0x34E934u;
    SET_GPR_U32(ctx, 31, 0x34E93Cu);
    ctx->pc = 0x34E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E934u;
    // 0x34e938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E988u, 0x34E934u, 0x34E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E93Cu;
label_34e93c:
    // 0x34e93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34e944: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34E944u;
    {
        const bool branch_taken_0x34e944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e944) {
            ctx->pc = 0x34E948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E944u;
            // 0x34e948: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E968u;
            goto label_34e968;
        }
    }
    ctx->pc = 0x34E94Cu;
    // 0x34e94c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x34e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34e950: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E950u;
    {
        const bool branch_taken_0x34e950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E950u;
        // 0x34e954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e950) {
            ctx->pc = 0x34E978u;
            goto label_34e978;
        }
    }
    ctx->pc = 0x34E958u;
    // 0x34e958: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x34e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34e95c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E95Cu;
    {
        const bool branch_taken_0x34e95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E95Cu;
        // 0x34e960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e95c) {
            ctx->pc = 0x34E978u;
            goto label_34e978;
        }
    }
    ctx->pc = 0x34E964u;
    // 0x34e964: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34e964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_34e968:
    // 0x34e968: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x34e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34e96c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e970: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x34e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x34e974: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34e974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34e978:
    // 0x34e978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e97c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e980: 0x3e00008  jr          $ra
    ctx->pc = 0x34E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E980u;
        // 0x34e984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E988u;
}
