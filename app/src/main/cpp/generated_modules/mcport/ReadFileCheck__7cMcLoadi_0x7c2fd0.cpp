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
// Function: ReadFileCheck__7cMcLoadi
// Address: 0x7c2fd0 - 0x7c3040
void ReadFileCheck__7cMcLoadi_0x7c2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileCheck__7cMcLoadi_0x7c2fd0");
#endif

    ctx->pc = 0x7c2fd0u;

    // 0x7c2fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2fd4: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2FD4u;
    {
        const bool branch_taken_0x7c2fd4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FD4u;
        // 0x7c2fd8: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2fd4) {
            ctx->pc = 0x7C2FE4u;
            goto label_7c2fe4;
        }
    }
    ctx->pc = 0x7C2FDCu;
    // 0x7c2fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FDCu;
        // 0x7c2fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2FE4u;
label_7c2fe4:
    // 0x7c2fe4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c2fe8: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7C2FE8u;
    {
        const bool branch_taken_0x7c2fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FE8u;
        // 0x7c2fec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2fe8) {
            ctx->pc = 0x7C3034u;
            goto label_7c3034;
        }
    }
    ctx->pc = 0x7C2FF0u;
    // 0x7c2ff0: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c2ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c2ff4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2FF4u;
    {
        const bool branch_taken_0x7c2ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FF4u;
        // 0x7c2ff8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2ff4) {
            ctx->pc = 0x7C300Cu;
            goto label_7c300c;
        }
    }
    ctx->pc = 0x7C2FFCu;
    // 0x7c2ffc: 0x50a2000d  beql        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C2FFCu;
    {
        const bool branch_taken_0x7c2ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c2ffc) {
            ctx->pc = 0x7C3000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C2FFCu;
            // 0x7c3000: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3034u;
            goto label_7c3034;
        }
    }
    ctx->pc = 0x7C3004u;
    // 0x7c3004: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C3004u;
    {
        const bool branch_taken_0x7c3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3004u;
        // 0x7c3008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3004) {
            ctx->pc = 0x7C3034u;
            goto label_7c3034;
        }
    }
    ctx->pc = 0x7C300Cu;
label_7c300c:
    // 0x7c300c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x7c300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x7c3010: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C3010u;
    {
        const bool branch_taken_0x7c3010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3010u;
        // 0x7c3014: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3010) {
            ctx->pc = 0x7C3034u;
            goto label_7c3034;
        }
    }
    ctx->pc = 0x7C3018u;
    // 0x7c3018: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c3018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c301c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C301Cu;
    {
        const bool branch_taken_0x7c301c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C301Cu;
        // 0x7c3020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c301c) {
            ctx->pc = 0x7C3034u;
            goto label_7c3034;
        }
    }
    ctx->pc = 0x7C3024u;
    // 0x7c3024: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x7c3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c3028: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c3028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c302c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C302Cu;
        // 0x7c3030: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3034u;
label_7c3034:
    // 0x7c3034: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c3034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c3038: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3038u;
        // 0x7c303c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3040u;
}
} // namespace gh_mcport
