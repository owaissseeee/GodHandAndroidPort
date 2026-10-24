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

// Function: ResetSlotArray_1FE6C8
// Address: 0x1fe6c8 - 0x1fe748
void ResetSlotArray_1FE6C8_0x1fe6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetSlotArray_1FE6C8_0x1fe6c8");
#endif

    switch (ctx->pc) {
        case 0x1fe708u: goto label_1fe708;
        case 0x1fe718u: goto label_1fe718;
        default: break;
    }

    ctx->pc = 0x1fe6c8u;

    // 0x1fe6c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fe6cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe6d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fe6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fe6d4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fe6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1fe6d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fe6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1fe6e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fe6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1fe6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe6e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fe6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1fe6ec: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1fe6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fe6f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fe6f4: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE6F4u;
    {
        const bool branch_taken_0x1fe6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6F4u;
        // 0x1fe6f8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6f4) {
            ctx->pc = 0x1FE720u;
            goto label_1fe720;
        }
    }
    ctx->pc = 0x1FE6FCu;
    // 0x1fe6fc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1fe6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1fe700: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe704: 0x2028818  mult        $s1, $s0, $v0
    ctx->pc = 0x1fe704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_1fe708:
    // 0x1fe708: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fe708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fe70c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fe710: 0xc07fc0a  jal         func_1FF028
    ctx->pc = 0x1FE710u;
    SET_GPR_U32(ctx, 31, 0x1FE718u);
    ctx->pc = 0x1FE714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE710u;
    // 0x1fe714: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF028u, 0x1FE710u, 0x1FE718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE718u;
label_1fe718:
    // 0x1fe718: 0x1613fffb  bne         $s0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE718u;
    {
        const bool branch_taken_0x1fe718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE718u;
        // 0x1fe71c: 0x2631ffa4  addiu       $s1, $s1, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe718) {
            ctx->pc = 0x1FE708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe708;
        }
    }
    ctx->pc = 0x1FE720u;
label_1fe720:
    // 0x1fe720: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x1fe720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x1fe724: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fe724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe728: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fe728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe72c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fe72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe730: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fe730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe734: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fe734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE73Cu;
        // 0x1fe740: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE744u;
    // 0x1fe744: 0x0  nop
    ctx->pc = 0x1fe744u;
    // NOP
    ctx->pc = 0x1fe748u;
}
