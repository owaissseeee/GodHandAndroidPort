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
// Function: ASyncCommandCheck__7cMcBooti
// Address: 0x7c0e80 - 0x7c0ec8
void ASyncCommandCheck__7cMcBooti_0x7c0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ASyncCommandCheck__7cMcBooti_0x7c0e80");
#endif

    ctx->pc = 0x7c0e80u;

    // 0x7c0e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0e84: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0E84u;
    {
        const bool branch_taken_0x7c0e84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0E84u;
        // 0x7c0e88: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0e84) {
            ctx->pc = 0x7C0E94u;
            goto label_7c0e94;
        }
    }
    ctx->pc = 0x7C0E8Cu;
    // 0x7c0e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0E8Cu;
        // 0x7c0e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0E94u;
label_7c0e94:
    // 0x7c0e94: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x7c0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x7c0e98: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C0E98u;
    {
        const bool branch_taken_0x7c0e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0E98u;
        // 0x7c0e9c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0e98) {
            ctx->pc = 0x7C0EBCu;
            goto label_7c0ebc;
        }
    }
    ctx->pc = 0x7C0EA0u;
    // 0x7c0ea0: 0x28a2ff39  slti        $v0, $a1, -0xC7
    ctx->pc = 0x7c0ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967097) ? 1 : 0);
    // 0x7c0ea4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C0EA4u;
    {
        const bool branch_taken_0x7c0ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0EA4u;
        // 0x7c0ea8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ea4) {
            ctx->pc = 0x7C0EB8u;
            goto label_7c0eb8;
        }
    }
    ctx->pc = 0x7C0EACu;
    // 0x7c0eac: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x7c0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x7c0eb0: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C0EB0u;
    {
        const bool branch_taken_0x7c0eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c0eb0) {
            ctx->pc = 0x7C0EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0EB0u;
            // 0x7c0eb4: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0EB8u;
            goto label_7c0eb8;
        }
    }
    ctx->pc = 0x7C0EB8u;
label_7c0eb8:
    // 0x7c0eb8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x7c0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_7c0ebc:
    // 0x7c0ebc: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c0ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0EC0u;
        // 0x7c0ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0EC8u;
}
} // namespace gh_mcport
