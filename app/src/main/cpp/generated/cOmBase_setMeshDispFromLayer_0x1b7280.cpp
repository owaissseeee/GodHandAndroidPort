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

// Function: cOmBase_setMeshDispFromLayer
// Address: 0x1b7280 - 0x1b7300
void cOmBase_setMeshDispFromLayer_0x1b7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setMeshDispFromLayer_0x1b7280");
#endif

    switch (ctx->pc) {
        case 0x1b72a0u: goto label_1b72a0;
        case 0x1b72c0u: goto label_1b72c0;
        default: break;
    }

    ctx->pc = 0x1b7280u;

    // 0x1b7280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7288: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b728c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b728cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7294: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b7294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7298: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1B7298u;
    SET_GPR_U32(ctx, 31, 0x1B72A0u);
    ctx->pc = 0x1B729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7298u;
    // 0x1b729c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1B7298u, 0x1B72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72A0u;
label_1b72a0:
    // 0x1b72a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b72a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72a4: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B72A4u;
    {
        const bool branch_taken_0x1b72a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72a4) {
            ctx->pc = 0x1B72A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72A4u;
            // 0x1b72a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B72F0u;
            goto label_1b72f0;
        }
    }
    ctx->pc = 0x1B72ACu;
    // 0x1b72ac: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b72acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b72b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72b4: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x1b72b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x1b72b8: 0x9062040c  lbu         $v0, 0x40C($v1)
    ctx->pc = 0x1b72b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
    // 0x1b72bc: 0x0  nop
    ctx->pc = 0x1b72bcu;
    // NOP
label_1b72c0:
    // 0x1b72c0: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B72C0u;
    {
        const bool branch_taken_0x1b72c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b72c0) {
            ctx->pc = 0x1B72C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72C0u;
            // 0x1b72c4: 0x8c630404  lw          $v1, 0x404($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B72E4u;
            goto label_1b72e4;
        }
    }
    ctx->pc = 0x1B72C8u;
    // 0x1b72c8: 0x16050003  bne         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B72C8u;
    {
        const bool branch_taken_0x1b72c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72C8u;
        // 0x1b72cc: 0x8c620380  lw          $v0, 0x380($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72c8) {
            ctx->pc = 0x1B72D8u;
            goto label_1b72d8;
        }
    }
    ctx->pc = 0x1B72D0u;
    // 0x1b72d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B72D0u;
    {
        const bool branch_taken_0x1b72d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72D0u;
        // 0x1b72d4: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72d0) {
            ctx->pc = 0x1B72DCu;
            goto label_1b72dc;
        }
    }
    ctx->pc = 0x1B72D8u;
label_1b72d8:
    // 0x1b72d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b72d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1b72dc:
    // 0x1b72dc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x1b72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x1b72e0: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x1b72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
label_1b72e4:
    // 0x1b72e4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B72E4u;
    {
        const bool branch_taken_0x1b72e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72e4) {
            ctx->pc = 0x1B72E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72E4u;
            // 0x1b72e8: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B72C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b72c0;
        }
    }
    ctx->pc = 0x1B72ECu;
    // 0x1b72ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b72ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b72f0:
    // 0x1b72f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b72f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b72f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b72f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b72f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72F8u;
        // 0x1b72fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7300u;
}
