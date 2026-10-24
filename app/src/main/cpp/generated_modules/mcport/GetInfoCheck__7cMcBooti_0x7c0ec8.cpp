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
// Function: GetInfoCheck__7cMcBooti
// Address: 0x7c0ec8 - 0x7c0f20
void GetInfoCheck__7cMcBooti_0x7c0ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoCheck__7cMcBooti_0x7c0ec8");
#endif

    ctx->pc = 0x7c0ec8u;

    // 0x7c0ec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0ecc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0ECCu;
    {
        const bool branch_taken_0x7c0ecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0ECCu;
        // 0x7c0ed0: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ecc) {
            ctx->pc = 0x7C0EDCu;
            goto label_7c0edc;
        }
    }
    ctx->pc = 0x7C0ED4u;
    // 0x7c0ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0ED4u;
        // 0x7c0ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0EDCu;
label_7c0edc:
    // 0x7c0edc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x7c0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x7c0ee0: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7C0EE0u;
    {
        const bool branch_taken_0x7c0ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0EE0u;
        // 0x7c0ee4: 0x28a2fffb  slti        $v0, $a1, -0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ee0) {
            ctx->pc = 0x7C0F0Cu;
            goto label_7c0f0c;
        }
    }
    ctx->pc = 0x7C0EE8u;
    // 0x7c0ee8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C0EE8u;
    {
        const bool branch_taken_0x7c0ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0EE8u;
        // 0x7c0eec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ee8) {
            ctx->pc = 0x7C0F10u;
            goto label_7c0f10;
        }
    }
    ctx->pc = 0x7C0EF0u;
    // 0x7c0ef0: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C0EF0u;
    {
        const bool branch_taken_0x7c0ef0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0EF0u;
        // 0x7c0ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ef0) {
            ctx->pc = 0x7C0F14u;
            goto label_7c0f14;
        }
    }
    ctx->pc = 0x7C0EF8u;
    // 0x7c0ef8: 0x28a2fffe  slti        $v0, $a1, -0x2
    ctx->pc = 0x7c0ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x7c0efc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0EFCu;
    {
        const bool branch_taken_0x7c0efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0EFCu;
        // 0x7c0f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0efc) {
            ctx->pc = 0x7C0F14u;
            goto label_7c0f14;
        }
    }
    ctx->pc = 0x7C0F04u;
    // 0x7c0f04: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F04u;
        // 0x7c0f08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F0Cu;
label_7c0f0c:
    // 0x7c0f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c0f10:
    // 0x7c0f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c0f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c0f14:
    // 0x7c0f14: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F14u;
        // 0x7c0f18: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F1Cu;
    // 0x7c0f1c: 0x0  nop
    ctx->pc = 0x7c0f1cu;
    // NOP
    ctx->pc = 0x7c0f20u;
}
} // namespace gh_mcport
