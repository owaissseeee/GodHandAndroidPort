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
// Function: ASyncCommandCheck__7cMcSavei
// Address: 0x7c6de0 - 0x7c6e38
void ASyncCommandCheck__7cMcSavei_0x7c6de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ASyncCommandCheck__7cMcSavei_0x7c6de0");
#endif

    ctx->pc = 0x7c6de0u;

    // 0x7c6de0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6de4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6DE4u;
    {
        const bool branch_taken_0x7c6de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DE4u;
        // 0x7c6de8: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6de4) {
            ctx->pc = 0x7C6DF4u;
            goto label_7c6df4;
        }
    }
    ctx->pc = 0x7C6DECu;
    // 0x7c6dec: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DECu;
        // 0x7c6df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6DF4u;
label_7c6df4:
    // 0x7c6df4: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x7c6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x7c6df8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C6DF8u;
    {
        const bool branch_taken_0x7c6df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DF8u;
        // 0x7c6dfc: 0x28a2ff39  slti        $v0, $a1, -0xC7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6df8) {
            ctx->pc = 0x7C6E14u;
            goto label_7c6e14;
        }
    }
    ctx->pc = 0x7C6E00u;
    // 0x7c6e00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C6E00u;
    {
        const bool branch_taken_0x7c6e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E00u;
        // 0x7c6e04: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6e00) {
            ctx->pc = 0x7C6E14u;
            goto label_7c6e14;
        }
    }
    ctx->pc = 0x7C6E08u;
    // 0x7c6e08: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x7c6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x7c6e0c: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C6E0Cu;
    {
        const bool branch_taken_0x7c6e0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c6e0c) {
            ctx->pc = 0x7C6E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6E0Cu;
            // 0x7c6e10: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6E14u;
            goto label_7c6e14;
        }
    }
    ctx->pc = 0x7C6E14u;
label_7c6e14:
    // 0x7c6e14: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x7c6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7c6e18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c6e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c6e1c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x7c6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x7c6e20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7c6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6e24: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x7c6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
    // 0x7c6e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c6e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6e2c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x7c6e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c6e30: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E30u;
        // 0x7c6e34: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6E38u;
}
} // namespace gh_mcport
