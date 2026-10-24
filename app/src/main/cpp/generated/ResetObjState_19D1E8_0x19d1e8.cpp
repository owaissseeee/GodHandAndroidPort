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

// Function: ResetObjState_19D1E8
// Address: 0x19d1e8 - 0x19d248
void ResetObjState_19D1E8_0x19d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjState_19D1E8_0x19d1e8");
#endif

    switch (ctx->pc) {
        case 0x19d21cu: goto label_19d21c;
        case 0x19d230u: goto label_19d230;
        case 0x19d238u: goto label_19d238;
        default: break;
    }

    ctx->pc = 0x19d1e8u;

    // 0x19d1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d1ec: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x19d1f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d1f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1fc: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x19d200: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x19d204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19d204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19d208: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19d20c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D20Cu;
    {
        const bool branch_taken_0x19d20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D20Cu;
        // 0x19d210: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d20c) {
            ctx->pc = 0x19D21Cu;
            goto label_19d21c;
        }
    }
    ctx->pc = 0x19D214u;
    // 0x19d214: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19D214u;
    SET_GPR_U32(ctx, 31, 0x19D21Cu);
    ctx->pc = 0x19D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D214u;
    // 0x19d218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19D214u, 0x19D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D21Cu;
label_19d21c:
    // 0x19d21c: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x19d21cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x19d220: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x19d220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x19d224: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x19d224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x19d228: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x19D228u;
    SET_GPR_U32(ctx, 31, 0x19D230u);
    ctx->pc = 0x19D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D228u;
    // 0x19d22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x19D228u, 0x19D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D230u;
label_19d230:
    // 0x19d230: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x19D230u;
    SET_GPR_U32(ctx, 31, 0x19D238u);
    ctx->pc = 0x19D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D230u;
    // 0x19d234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x19D230u, 0x19D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D238u;
label_19d238:
    // 0x19d238: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d240: 0x3e00008  jr          $ra
    ctx->pc = 0x19D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D240u;
        // 0x19d244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D248u;
}
