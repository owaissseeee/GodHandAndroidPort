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

// Function: cMessage_deleteMessNo
// Address: 0x2aec40 - 0x2aec88
void cMessage_deleteMessNo_0x2aec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_deleteMessNo_0x2aec40");
#endif

    switch (ctx->pc) {
        case 0x2aec58u: goto label_2aec58;
        case 0x2aec68u: goto label_2aec68;
        default: break;
    }

    ctx->pc = 0x2aec40u;

    // 0x2aec40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aec44: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2aec44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2aec48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aec4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aec50: 0xc0abb50  jal         func_2AED40
    ctx->pc = 0x2AEC50u;
    SET_GPR_U32(ctx, 31, 0x2AEC58u);
    ctx->pc = 0x2AEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC50u;
    // 0x2aec54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED40u, 0x2AEC50u, 0x2AEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC58u;
label_2aec58:
    // 0x2aec58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEC58u;
    {
        const bool branch_taken_0x2aec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC58u;
        // 0x2aec5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec58) {
            ctx->pc = 0x2AEC70u;
            goto label_2aec70;
        }
    }
    ctx->pc = 0x2AEC60u;
    // 0x2aec60: 0xc0abbc4  jal         func_2AEF10
    ctx->pc = 0x2AEC60u;
    SET_GPR_U32(ctx, 31, 0x2AEC68u);
    ctx->pc = 0x2AEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC60u;
    // 0x2aec64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF10u, 0x2AEC60u, 0x2AEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC68u;
label_2aec68:
    // 0x2aec68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEC68u;
    {
        const bool branch_taken_0x2aec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC68u;
        // 0x2aec6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec68) {
            ctx->pc = 0x2AEC74u;
            goto label_2aec74;
        }
    }
    ctx->pc = 0x2AEC70u;
label_2aec70:
    // 0x2aec70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aec70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aec74:
    // 0x2aec74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aec74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aec78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aec7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC7Cu;
        // 0x2aec80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEC84u;
    // 0x2aec84: 0x0  nop
    ctx->pc = 0x2aec84u;
    // NOP
    ctx->pc = 0x2aec88u;
}
