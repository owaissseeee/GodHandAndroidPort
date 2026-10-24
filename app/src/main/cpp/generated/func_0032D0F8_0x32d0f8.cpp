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

// Function: func_0032D0F8
// Address: 0x32d0f8 - 0x32d170
void func_0032D0F8_0x32d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D0F8_0x32d0f8");
#endif

    ctx->pc = 0x32d0f8u;

    // 0x32d0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d0fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32d0fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d104: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32D104u;
    {
        const bool branch_taken_0x32d104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D104u;
        // 0x32d108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d104) {
            ctx->pc = 0x32D158u;
            goto label_32d158;
        }
    }
    ctx->pc = 0x32D10Cu;
    // 0x32d10c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32d110: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32D110u;
    {
        const bool branch_taken_0x32d110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D110u;
        // 0x32d114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d110) {
            ctx->pc = 0x32D148u;
            goto label_32d148;
        }
    }
    ctx->pc = 0x32D118u;
    // 0x32d118: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x32d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x32d11c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D11Cu;
    {
        const bool branch_taken_0x32d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D11Cu;
        // 0x32d120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d11c) {
            ctx->pc = 0x32D158u;
            goto label_32d158;
        }
    }
    ctx->pc = 0x32D124u;
    // 0x32d124: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x32d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32d128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D128u;
    {
        const bool branch_taken_0x32d128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D128u;
        // 0x32d12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d128) {
            ctx->pc = 0x32D140u;
            goto label_32d140;
        }
    }
    ctx->pc = 0x32D130u;
    // 0x32d130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d134: 0x80ca3cc  j           func_328F30
    ctx->pc = 0x32D134u;
    ctx->pc = 0x32D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D134u;
    // 0x32d138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F30u, 0x32D134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D13Cu;
    // 0x32d13c: 0x0  nop
    ctx->pc = 0x32d13cu;
    // NOP
label_32d140:
    // 0x32d140: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D140u;
    {
        const bool branch_taken_0x32d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D140u;
        // 0x32d144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d140) {
            ctx->pc = 0x32D158u;
            goto label_32d158;
        }
    }
    ctx->pc = 0x32D148u;
label_32d148:
    // 0x32d148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d14c: 0x80ca3cc  j           func_328F30
    ctx->pc = 0x32D14Cu;
    ctx->pc = 0x32D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D14Cu;
    // 0x32d150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F30u, 0x32D14Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D154u;
    // 0x32d154: 0x0  nop
    ctx->pc = 0x32d154u;
    // NOP
label_32d158:
    // 0x32d158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d15c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D15Cu;
        // 0x32d160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D164u;
    // 0x32d164: 0x0  nop
    ctx->pc = 0x32d164u;
    // NOP
    // 0x32d168: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x32d168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x32d16c: 0x0  nop
    ctx->pc = 0x32d16cu;
    // NOP
    ctx->pc = 0x32d170u;
}
