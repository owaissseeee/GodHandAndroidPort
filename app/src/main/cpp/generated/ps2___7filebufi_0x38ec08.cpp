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

// Function: __7filebufi
// Address: 0x38ec08 - 0x38ec90
void ps2___7filebufi_0x38ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7filebufi_0x38ec08");
#endif

    switch (ctx->pc) {
        case 0x38ec28u: goto label_38ec28;
        case 0x38ec3cu: goto label_38ec3c;
        case 0x38ec48u: goto label_38ec48;
        case 0x38ec50u: goto label_38ec50;
        case 0x38ec58u: goto label_38ec58;
        case 0x38ec6cu: goto label_38ec6c;
        case 0x38ec7cu: goto label_38ec7c;
        default: break;
    }

    ctx->pc = 0x38ec08u;

    // 0x38ec08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38ec0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38ec10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38ec14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38ec14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ec18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38ec20: 0xc0e2cea  jal         func_38B3A8
    ctx->pc = 0x38EC20u;
    SET_GPR_U32(ctx, 31, 0x38EC28u);
    ctx->pc = 0x38EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC20u;
    // 0x38ec24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3A8u, 0x38EC20u, 0x38EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC28u;
label_38ec28:
    // 0x38ec28: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x38ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x38ec2c: 0x2463d220  addiu       $v1, $v1, -0x2DE0
    ctx->pc = 0x38ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955552));
    // 0x38ec30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec34: 0xc0e49c6  jal         func_392718
    ctx->pc = 0x38EC34u;
    SET_GPR_U32(ctx, 31, 0x38EC3Cu);
    ctx->pc = 0x38EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC34u;
    // 0x38ec38: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392718u, 0x38EC34u, 0x38EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC3Cu;
label_38ec3c:
    // 0x38ec3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ec3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec40: 0xc0e4a66  jal         func_392998
    ctx->pc = 0x38EC40u;
    SET_GPR_U32(ctx, 31, 0x38EC48u);
    ctx->pc = 0x38EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC40u;
    // 0x38ec44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392998u, 0x38EC40u, 0x38EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC48u;
label_38ec48:
    // 0x38ec48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38EC48u;
    {
        const bool branch_taken_0x38ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC48u;
        // 0x38ec4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec48) {
            ctx->pc = 0x38EC58u;
            goto label_38ec58;
        }
    }
    ctx->pc = 0x38EC50u;
label_38ec50:
    // 0x38ec50: 0xc0c8386  jal         func_320E18
    ctx->pc = 0x38EC50u;
    SET_GPR_U32(ctx, 31, 0x38EC58u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x38EC50u, 0x38EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC58u;
label_38ec58:
    // 0x38ec58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38EC58u;
    {
        const bool branch_taken_0x38ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC58u;
        // 0x38ec5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec58) {
            ctx->pc = 0x38EC7Cu;
            goto label_38ec7c;
        }
    }
    ctx->pc = 0x38EC60u;
    // 0x38ec60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec64: 0xc0e2cf8  jal         func_38B3E0
    ctx->pc = 0x38EC64u;
    SET_GPR_U32(ctx, 31, 0x38EC6Cu);
    ctx->pc = 0x38EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC64u;
    // 0x38ec68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3E0u, 0x38EC64u, 0x38EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC6Cu;
label_38ec6c:
    // 0x38ec6c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x38EC6Cu;
    {
        const bool branch_taken_0x38ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ec6c) {
            ctx->pc = 0x38EC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ec50;
        }
    }
    ctx->pc = 0x38EC74u;
    // 0x38ec74: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x38EC74u;
    SET_GPR_U32(ctx, 31, 0x38EC7Cu);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x38EC74u, 0x38EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC7Cu;
label_38ec7c:
    // 0x38ec7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38ec7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ec80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ec80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ec84: 0x3e00008  jr          $ra
    ctx->pc = 0x38EC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC84u;
        // 0x38ec88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EC8Cu;
    // 0x38ec8c: 0x0  nop
    ctx->pc = 0x38ec8cu;
    // NOP
    ctx->pc = 0x38ec90u;
}
