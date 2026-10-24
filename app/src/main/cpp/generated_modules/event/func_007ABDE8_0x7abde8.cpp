#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007ABDE8
// Address: 0x7abde8 - 0x7abe60
void func_007ABDE8_0x7abde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007ABDE8_0x7abde8");
#endif

    switch (ctx->pc) {
        case 0x7abe18u: goto label_7abe18;
        case 0x7abe34u: goto label_7abe34;
        default: break;
    }

    ctx->pc = 0x7abde8u;

    // 0x7abde8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7abde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7abdec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7abdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x7abdf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7abdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7abdf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7abdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7abdf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7abdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7abdfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7abdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7abe00: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x7abe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x7abe04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7abe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7abe08: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x7abe08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x7abe0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7abe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7abe10: 0x3c130008  lui         $s3, 0x8
    ctx->pc = 0x7abe10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8 << 16));
    // 0x7abe14: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x7abe14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_7abe18:
    // 0x7abe18: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x7abe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x7abe1c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x7abe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x7abe20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ABE20u;
    {
        const bool branch_taken_0x7abe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ABE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABE20u;
        // 0x7abe24: 0x26444700  addiu       $a0, $s2, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abe20) {
            ctx->pc = 0x7ABE34u;
            goto label_7abe34;
        }
    }
    ctx->pc = 0x7ABE28u;
    // 0x7abe28: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x7abe28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7abe2c: 0xc0b6456  jal         func_2D9158
    ctx->pc = 0x7ABE2Cu;
    SET_GPR_U32(ctx, 31, 0x7ABE34u);
    ctx->pc = 0x7ABE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ABE2Cu;
    // 0x7abe30: 0x8e060054  lw          $a2, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9158u, 0x7ABE2Cu, 0x7ABE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ABE34u;
label_7abe34:
    // 0x7abe34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7abe34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x7abe38: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7ABE38u;
    {
        const bool branch_taken_0x7abe38 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x7ABE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABE38u;
        // 0x7abe3c: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7abe38) {
            ctx->pc = 0x7ABE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7abe18;
        }
    }
    ctx->pc = 0x7ABE40u;
    // 0x7abe40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7abe40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7abe44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7abe44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7abe48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7abe48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7abe4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7abe4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7abe50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7abe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7abe54: 0x3e00008  jr          $ra
    ctx->pc = 0x7ABE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ABE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ABE54u;
        // 0x7abe58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ABE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ABE5Cu;
    // 0x7abe5c: 0x0  nop
    ctx->pc = 0x7abe5cu;
    // NOP
    ctx->pc = 0x7abe60u;
}
} // namespace gh_event
