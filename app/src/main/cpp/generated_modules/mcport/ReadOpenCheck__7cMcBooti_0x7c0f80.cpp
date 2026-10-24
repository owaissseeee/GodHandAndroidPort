#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: ReadOpenCheck__7cMcBooti
// Address: 0x7c0f80 - 0x7c0fe8
void ReadOpenCheck__7cMcBooti_0x7c0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadOpenCheck__7cMcBooti_0x7c0f80");
#endif

    ctx->pc = 0x7c0f80u;

    // 0x7c0f80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c0f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0f84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0f88: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0F88u;
    {
        const bool branch_taken_0x7c0f88 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F88u;
        // 0x7c0f8c: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0f88) {
            ctx->pc = 0x7C0F98u;
            goto label_7c0f98;
        }
    }
    ctx->pc = 0x7C0F90u;
    // 0x7c0f90: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F90u;
        // 0x7c0f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F98u;
label_7c0f98:
    // 0x7c0f98: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x7c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x7c0f9c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x7c0f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c0fa0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C0FA0u;
    {
        const bool branch_taken_0x7c0fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FA0u;
        // 0x7c0fa4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0fa0) {
            ctx->pc = 0x7C0FD8u;
            goto label_7c0fd8;
        }
    }
    ctx->pc = 0x7C0FA8u;
    // 0x7c0fa8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c0fac: 0x244209c0  addiu       $v0, $v0, 0x9C0
    ctx->pc = 0x7c0facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2496));
    // 0x7c0fb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c0fb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c0fb8: 0x800008  jr          $a0
    ctx->pc = 0x7C0FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C0FC0u: goto label_7c0fc0;
            case 0x7C0FC8u: goto label_7c0fc8;
            case 0x7C0FD0u: goto label_7c0fd0;
            case 0x7C0FD8u: goto label_7c0fd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0FB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C0FC0u;
label_7c0fc0:
    // 0x7c0fc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C0FC0u;
    {
        const bool branch_taken_0x7c0fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FC0u;
        // 0x7c0fc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0fc0) {
            ctx->pc = 0x7C0FDCu;
            goto label_7c0fdc;
        }
    }
    ctx->pc = 0x7C0FC8u;
label_7c0fc8:
    // 0x7c0fc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C0FC8u;
    {
        const bool branch_taken_0x7c0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FC8u;
        // 0x7c0fcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0fc8) {
            ctx->pc = 0x7C0FDCu;
            goto label_7c0fdc;
        }
    }
    ctx->pc = 0x7C0FD0u;
label_7c0fd0:
    // 0x7c0fd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C0FD0u;
    {
        const bool branch_taken_0x7c0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FD0u;
        // 0x7c0fd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0fd0) {
            ctx->pc = 0x7C0FDCu;
            goto label_7c0fdc;
        }
    }
    ctx->pc = 0x7C0FD8u;
label_7c0fd8:
    // 0x7c0fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c0fdc:
    // 0x7c0fdc: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x7c0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x7c0fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FE0u;
        // 0x7c0fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0FE8u;
}
} // namespace gh_mcport
