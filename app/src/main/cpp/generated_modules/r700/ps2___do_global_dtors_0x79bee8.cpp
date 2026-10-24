#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: __do_global_dtors
// Address: 0x79bee8 - 0x79bf40
void ps2___do_global_dtors_0x79bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79bee8");
#endif

    switch (ctx->pc) {
        case 0x79bee8u: goto label_79bee8;
        case 0x79beecu: goto label_79beec;
        case 0x79bef0u: goto label_79bef0;
        case 0x79bef4u: goto label_79bef4;
        case 0x79bef8u: goto label_79bef8;
        case 0x79befcu: goto label_79befc;
        case 0x79bf00u: goto label_79bf00;
        case 0x79bf04u: goto label_79bf04;
        case 0x79bf08u: goto label_79bf08;
        case 0x79bf0cu: goto label_79bf0c;
        case 0x79bf10u: goto label_79bf10;
        case 0x79bf14u: goto label_79bf14;
        case 0x79bf18u: goto label_79bf18;
        case 0x79bf1cu: goto label_79bf1c;
        case 0x79bf20u: goto label_79bf20;
        case 0x79bf24u: goto label_79bf24;
        case 0x79bf28u: goto label_79bf28;
        case 0x79bf2cu: goto label_79bf2c;
        case 0x79bf30u: goto label_79bf30;
        case 0x79bf34u: goto label_79bf34;
        case 0x79bf38u: goto label_79bf38;
        case 0x79bf3cu: goto label_79bf3c;
        default: break;
    }

    ctx->pc = 0x79bee8u;

label_79bee8:
    // 0x79bee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79bee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79beec:
    // 0x79beec: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79beecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79bef0:
    // 0x79bef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79bef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79bef4:
    // 0x79bef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79bef8:
    // 0x79bef8: 0x8c82c130  lw          $v0, -0x3ED0($a0)
    ctx->pc = 0x79bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951216)));
label_79befc:
    // 0x79befc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bf00:
    // 0x79bf00: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79bf04:
    if (ctx->pc == 0x79BF04u) {
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF08u;
        goto label_79bf08;
    }
    ctx->pc = 0x79BF00u;
    {
        const bool branch_taken_0x79bf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf00) {
            ctx->pc = 0x79BF2Cu;
            goto label_79bf2c;
        }
    }
    ctx->pc = 0x79BF08u;
label_79bf08:
    // 0x79bf08: 0x8e02c130  lw          $v0, -0x3ED0($s0)
    ctx->pc = 0x79bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951216)));
label_79bf0c:
    // 0x79bf0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79bf10:
    // 0x79bf10: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79bf14:
    // 0x79bf14: 0x60f809  jalr        $v1
label_79bf18:
    if (ctx->pc == 0x79BF18u) {
        ctx->pc = 0x79BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF14u;
        // 0x79bf18: 0xae02c130  sw          $v0, -0x3ED0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF1Cu;
        goto label_79bf1c;
    }
    ctx->pc = 0x79BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BF1Cu);
        ctx->pc = 0x79BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF14u;
        // 0x79bf18: 0xae02c130  sw          $v0, -0x3ED0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF14u, 0x79BF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BF1Cu;
label_79bf1c:
    // 0x79bf1c: 0x8e02c130  lw          $v0, -0x3ED0($s0)
    ctx->pc = 0x79bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951216)));
label_79bf20:
    // 0x79bf20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bf24:
    // 0x79bf24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79bf28:
    if (ctx->pc == 0x79BF28u) {
        ctx->pc = 0x79BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF24u;
        // 0x79bf28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF2Cu;
        goto label_79bf2c;
    }
    ctx->pc = 0x79BF24u;
    {
        const bool branch_taken_0x79bf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF24u;
        // 0x79bf28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf24) {
            ctx->pc = 0x79BF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf10;
        }
    }
    ctx->pc = 0x79BF2Cu;
label_79bf2c:
    // 0x79bf2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bf30:
    // 0x79bf30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79bf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bf34:
    // 0x79bf34: 0x3e00008  jr          $ra
label_79bf38:
    if (ctx->pc == 0x79BF38u) {
        ctx->pc = 0x79BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF34u;
        // 0x79bf38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF3Cu;
        goto label_79bf3c;
    }
    ctx->pc = 0x79BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF34u;
        // 0x79bf38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF3Cu;
label_79bf3c:
    // 0x79bf3c: 0x0  nop
    ctx->pc = 0x79bf3cu;
    // NOP
    ctx->pc = 0x79bf40u;
}
} // namespace gh_r700
