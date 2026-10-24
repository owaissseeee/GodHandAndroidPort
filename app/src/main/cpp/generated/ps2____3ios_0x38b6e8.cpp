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

// Function: _$_3ios
// Address: 0x38b6e8 - 0x38b748
void ps2____3ios_0x38b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____3ios_0x38b6e8");
#endif

    switch (ctx->pc) {
        case 0x38b71cu: goto label_38b71c;
        case 0x38b730u: goto label_38b730;
        default: break;
    }

    ctx->pc = 0x38b6e8u;

    // 0x38b6e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38b6ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38b6f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38b6f4: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x38b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x38b6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b6fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38b700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b704: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x38b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x38b708: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x38b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x38b70c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B70Cu;
    {
        const bool branch_taken_0x38b70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B70Cu;
        // 0x38b710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b70c) {
            ctx->pc = 0x38B71Cu;
            goto label_38b71c;
        }
    }
    ctx->pc = 0x38B714u;
    // 0x38b714: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x38B714u;
    SET_GPR_U32(ctx, 31, 0x38B71Cu);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x38B714u, 0x38B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B71Cu;
label_38b71c:
    // 0x38b71c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x38b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x38b720: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B720u;
    {
        const bool branch_taken_0x38b720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B720u;
        // 0x38b724: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b720) {
            ctx->pc = 0x38B734u;
            goto label_38b734;
        }
    }
    ctx->pc = 0x38B728u;
    // 0x38b728: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x38B728u;
    SET_GPR_U32(ctx, 31, 0x38B730u);
    ctx->pc = 0x38B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B728u;
    // 0x38b72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x38B728u, 0x38B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B730u;
label_38b730:
    // 0x38b730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b734:
    // 0x38b734: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38b734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b73c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B73Cu;
        // 0x38b740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B744u;
    // 0x38b744: 0x0  nop
    ctx->pc = 0x38b744u;
    // NOP
    ctx->pc = 0x38b748u;
}
