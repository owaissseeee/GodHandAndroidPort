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
// Function: ReadFileCheck__7cMcBooti
// Address: 0x7c0fe8 - 0x7c1048
void ReadFileCheck__7cMcBooti_0x7c0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileCheck__7cMcBooti_0x7c0fe8");
#endif

    ctx->pc = 0x7c0fe8u;

    // 0x7c0fe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0fec: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0FECu;
    {
        const bool branch_taken_0x7c0fec = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FECu;
        // 0x7c0ff0: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0fec) {
            ctx->pc = 0x7C0FFCu;
            goto label_7c0ffc;
        }
    }
    ctx->pc = 0x7C0FF4u;
    // 0x7c0ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0FF4u;
        // 0x7c0ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0FFCu;
label_7c0ffc:
    // 0x7c0ffc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c1000: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C1000u;
    {
        const bool branch_taken_0x7c1000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1000u;
        // 0x7c1004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1000) {
            ctx->pc = 0x7C1038u;
            goto label_7c1038;
        }
    }
    ctx->pc = 0x7C1008u;
    // 0x7c1008: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c1008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c100c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C100Cu;
    {
        const bool branch_taken_0x7c100c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C100Cu;
        // 0x7c1010: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c100c) {
            ctx->pc = 0x7C1024u;
            goto label_7c1024;
        }
    }
    ctx->pc = 0x7C1014u;
    // 0x7c1014: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C1014u;
    {
        const bool branch_taken_0x7c1014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c1014) {
            ctx->pc = 0x7C1018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1014u;
            // 0x7c1018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1038u;
            goto label_7c1038;
        }
    }
    ctx->pc = 0x7C101Cu;
    // 0x7c101c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C101Cu;
    {
        const bool branch_taken_0x7c101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C101Cu;
        // 0x7c1020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c101c) {
            ctx->pc = 0x7C1038u;
            goto label_7c1038;
        }
    }
    ctx->pc = 0x7C1024u;
label_7c1024:
    // 0x7c1024: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x7c1024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x7c1028: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C1028u;
    {
        const bool branch_taken_0x7c1028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c1028) {
            ctx->pc = 0x7C102Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1028u;
            // 0x7c102c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1038u;
            goto label_7c1038;
        }
    }
    ctx->pc = 0x7C1030u;
    // 0x7c1030: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c1034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c1034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c1038:
    // 0x7c1038: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c1038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c103c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C103Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C103Cu;
        // 0x7c1040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C103Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1044u;
    // 0x7c1044: 0x0  nop
    ctx->pc = 0x7c1044u;
    // NOP
    ctx->pc = 0x7c1048u;
}
} // namespace gh_mcport
