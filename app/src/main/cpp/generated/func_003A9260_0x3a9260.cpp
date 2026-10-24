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

// Function: func_003A9260
// Address: 0x3a9260 - 0x3a92e0
void func_003A9260_0x3a9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9260_0x3a9260");
#endif

    switch (ctx->pc) {
        case 0x3a9280u: goto label_3a9280;
        case 0x3a9298u: goto label_3a9298;
        case 0x3a92a4u: goto label_3a92a4;
        case 0x3a92b4u: goto label_3a92b4;
        case 0x3a92c0u: goto label_3a92c0;
        default: break;
    }

    ctx->pc = 0x3a9260u;

    // 0x3a9260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a9260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a9264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a9264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a9268: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a9268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3a926c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a926cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9270: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a9270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a9274: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a9274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9278u;
    {
        const bool branch_taken_0x3a9278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9278u;
        // 0x3a927c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9278) {
            ctx->pc = 0x3A9284u;
            goto label_3a9284;
        }
    }
    ctx->pc = 0x3A9280u;
label_3a9280:
    // 0x3a9280: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a9280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a9284:
    // 0x3a9284: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x3a9284u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9288: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A9288u;
    {
        const bool branch_taken_0x3a9288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9288) {
            ctx->pc = 0x3A92ACu;
            goto label_3a92ac;
        }
    }
    ctx->pc = 0x3A9290u;
    // 0x3a9290: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A9290u;
    SET_GPR_U32(ctx, 31, 0x3A9298u);
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A9290u, 0x3A9298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9298u;
label_3a9298:
    // 0x3a9298: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x3a9298u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a929c: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A929Cu;
    SET_GPR_U32(ctx, 31, 0x3A92A4u);
    ctx->pc = 0x3A92A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A929Cu;
    // 0x3a92a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A929Cu, 0x3A92A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92A4u;
label_3a92a4:
    // 0x3a92a4: 0x5202fff6  beql        $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A92A4u;
    {
        const bool branch_taken_0x3a92a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a92a4) {
            ctx->pc = 0x3A92A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A92A4u;
            // 0x3a92a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9280;
        }
    }
    ctx->pc = 0x3A92ACu;
label_3a92ac:
    // 0x3a92ac: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A92ACu;
    SET_GPR_U32(ctx, 31, 0x3A92B4u);
    ctx->pc = 0x3A92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A92ACu;
    // 0x3a92b0: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A92ACu, 0x3A92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92B4u;
label_3a92b4:
    // 0x3a92b4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3a92b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a92b8: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A92B8u;
    SET_GPR_U32(ctx, 31, 0x3A92C0u);
    ctx->pc = 0x3A92BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A92B8u;
    // 0x3a92bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A92B8u, 0x3A92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92C0u;
label_3a92c0:
    // 0x3a92c0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3a92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a92c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a92c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a92c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a92c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a92cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a92ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a92d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a92d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A92D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92D4u;
        // 0x3a92d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A92D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A92DCu;
    // 0x3a92dc: 0x0  nop
    ctx->pc = 0x3a92dcu;
    // NOP
    ctx->pc = 0x3a92e0u;
}
