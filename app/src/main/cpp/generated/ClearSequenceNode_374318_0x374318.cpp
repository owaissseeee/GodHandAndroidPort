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

// Function: ClearSequenceNode_374318
// Address: 0x374318 - 0x374360
void ClearSequenceNode_374318_0x374318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearSequenceNode_374318_0x374318");
#endif

    switch (ctx->pc) {
        case 0x37433cu: goto label_37433c;
        case 0x37434cu: goto label_37434c;
        default: break;
    }

    ctx->pc = 0x374318u;

    // 0x374318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37431c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x374320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374328: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x374328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37432c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37432Cu;
    {
        const bool branch_taken_0x37432c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37432c) {
            ctx->pc = 0x374330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37432Cu;
            // 0x374330: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374350u;
            goto label_374350;
        }
    }
    ctx->pc = 0x374334u;
    // 0x374334: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x374334u;
    SET_GPR_U32(ctx, 31, 0x37433Cu);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x374334u, 0x37433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37433Cu;
label_37433c:
    // 0x37433c: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x37433cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x374340: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x374340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x374344: 0xc0c724a  jal         func_31C928
    ctx->pc = 0x374344u;
    SET_GPR_U32(ctx, 31, 0x37434Cu);
    ctx->pc = 0x374348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374344u;
    // 0x374348: 0x24a54210  addiu       $a1, $a1, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C928u, 0x374344u, 0x37434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37434Cu;
label_37434c:
    // 0x37434c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37434cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374350:
    // 0x374350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374354: 0x3e00008  jr          $ra
    ctx->pc = 0x374354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374354u;
        // 0x374358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37435Cu;
    // 0x37435c: 0x0  nop
    ctx->pc = 0x37435cu;
    // NOP
    ctx->pc = 0x374360u;
}
