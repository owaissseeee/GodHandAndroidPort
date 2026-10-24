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

// Function: func_00353348
// Address: 0x353348 - 0x3533a8
void func_00353348_0x353348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353348_0x353348");
#endif

    ctx->pc = 0x353348u;

    // 0x353348: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x353348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x35334c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x35334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353350: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x353350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353358: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x353358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x35335c: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35335Cu;
    {
        const bool branch_taken_0x35335c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x353360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35335Cu;
        // 0x353360: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35335c) {
            ctx->pc = 0x353390u;
            goto label_353390;
        }
    }
    ctx->pc = 0x353364u;
    // 0x353364: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x353364u;
    {
        const bool branch_taken_0x353364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353364u;
        // 0x353368: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353364) {
            ctx->pc = 0x35339Cu;
            goto label_35339c;
        }
    }
    ctx->pc = 0x35336Cu;
    // 0x35336c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353370: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x353370u;
    {
        const bool branch_taken_0x353370 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x353374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353370u;
        // 0x353374: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353370) {
            ctx->pc = 0x35339Cu;
            goto label_35339c;
        }
    }
    ctx->pc = 0x353378u;
    // 0x353378: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x353378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x35337c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35337cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353380: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x353380u;
    {
        const bool branch_taken_0x353380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353380) {
            ctx->pc = 0x353384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353380u;
            // 0x353384: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353398u;
            goto label_353398;
        }
    }
    ctx->pc = 0x353388u;
    // 0x353388: 0x3e00008  jr          $ra
    ctx->pc = 0x353388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353388u;
        // 0x35338c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353390u;
label_353390:
    // 0x353390: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x353390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x353394: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x353394u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_353398:
    // 0x353398: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x353398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35339c:
    // 0x35339c: 0x3e00008  jr          $ra
    ctx->pc = 0x35339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3533A4u;
    // 0x3533a4: 0x0  nop
    ctx->pc = 0x3533a4u;
    // NOP
    ctx->pc = 0x3533a8u;
}
