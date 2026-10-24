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

// Function: func_001FDE00
// Address: 0x1fde00 - 0x1fdea8
void func_001FDE00_0x1fde00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FDE00_0x1fde00");
#endif

    switch (ctx->pc) {
        case 0x1fde28u: goto label_1fde28;
        case 0x1fde34u: goto label_1fde34;
        case 0x1fde50u: goto label_1fde50;
        case 0x1fde5cu: goto label_1fde5c;
        case 0x1fde74u: goto label_1fde74;
        case 0x1fde80u: goto label_1fde80;
        default: break;
    }

    ctx->pc = 0x1fde00u;

    // 0x1fde00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fde00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fde04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fde04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fde08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fde08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fde0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fde0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fde10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fde14: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1fde14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fde18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fde1c: 0x2411009f  addiu       $s1, $zero, 0x9F
    ctx->pc = 0x1fde1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x1fde20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fde20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fde24: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1fde24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fde28:
    // 0x1fde28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fde28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde2c: 0xc07f388  jal         func_1FCE20
    ctx->pc = 0x1FDE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE34u);
    ctx->pc = 0x1FDE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE2Cu;
    // 0x1fde30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCE20u, 0x1FDE2Cu, 0x1FDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE34u;
label_1fde34:
    // 0x1fde34: 0x0  nop
    ctx->pc = 0x1fde34u;
    // NOP
    // 0x1fde38: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDE38u;
    {
        const bool branch_taken_0x1fde38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE38u;
        // 0x1fde3c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde38) {
            ctx->pc = 0x1FDE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fde28;
        }
    }
    ctx->pc = 0x1FDE40u;
    // 0x1fde40: 0x26503c00  addiu       $s0, $s2, 0x3C00
    ctx->pc = 0x1fde40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
    // 0x1fde44: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x1fde44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fde48: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fde4c: 0x0  nop
    ctx->pc = 0x1fde4cu;
    // NOP
label_1fde50:
    // 0x1fde50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fde50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde54: 0xc07f4ee  jal         func_1FD3B8
    ctx->pc = 0x1FDE54u;
    SET_GPR_U32(ctx, 31, 0x1FDE5Cu);
    ctx->pc = 0x1FDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE54u;
    // 0x1fde58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3B8u, 0x1FDE54u, 0x1FDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE5Cu;
label_1fde5c:
    // 0x1fde5c: 0x0  nop
    ctx->pc = 0x1fde5cu;
    // NOP
    // 0x1fde60: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDE60u;
    {
        const bool branch_taken_0x1fde60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE60u;
        // 0x1fde64: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde60) {
            ctx->pc = 0x1FDE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fde50;
        }
    }
    ctx->pc = 0x1FDE68u;
    // 0x1fde68: 0x3404ac00  ori         $a0, $zero, 0xAC00
    ctx->pc = 0x1fde68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44032);
    // 0x1fde6c: 0xc07f388  jal         func_1FCE20
    ctx->pc = 0x1FDE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE74u);
    ctx->pc = 0x1FDE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE6Cu;
    // 0x1fde70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCE20u, 0x1FDE6Cu, 0x1FDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE74u;
label_1fde74:
    // 0x1fde74: 0x3404ac60  ori         $a0, $zero, 0xAC60
    ctx->pc = 0x1fde74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44128);
    // 0x1fde78: 0xc07f4ee  jal         func_1FD3B8
    ctx->pc = 0x1FDE78u;
    SET_GPR_U32(ctx, 31, 0x1FDE80u);
    ctx->pc = 0x1FDE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE78u;
    // 0x1fde7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3B8u, 0x1FDE78u, 0x1FDE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE80u;
label_1fde80:
    // 0x1fde80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fde80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fde84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fde88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fde88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fde8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fde8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fde90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fde90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fde94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fde94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fde98: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE98u;
        // 0x1fde9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDEA0u;
    // 0x1fdea0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fdea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fdea4: 0x0  nop
    ctx->pc = 0x1fdea4u;
    // NOP
    ctx->pc = 0x1fdea8u;
}
