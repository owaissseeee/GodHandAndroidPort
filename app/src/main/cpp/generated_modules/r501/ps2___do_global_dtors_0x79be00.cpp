#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __do_global_dtors
// Address: 0x79be00 - 0x79be58
void ps2___do_global_dtors_0x79be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79be00");
#endif

    switch (ctx->pc) {
        case 0x79be00u: goto label_79be00;
        case 0x79be04u: goto label_79be04;
        case 0x79be08u: goto label_79be08;
        case 0x79be0cu: goto label_79be0c;
        case 0x79be10u: goto label_79be10;
        case 0x79be14u: goto label_79be14;
        case 0x79be18u: goto label_79be18;
        case 0x79be1cu: goto label_79be1c;
        case 0x79be20u: goto label_79be20;
        case 0x79be24u: goto label_79be24;
        case 0x79be28u: goto label_79be28;
        case 0x79be2cu: goto label_79be2c;
        case 0x79be30u: goto label_79be30;
        case 0x79be34u: goto label_79be34;
        case 0x79be38u: goto label_79be38;
        case 0x79be3cu: goto label_79be3c;
        case 0x79be40u: goto label_79be40;
        case 0x79be44u: goto label_79be44;
        case 0x79be48u: goto label_79be48;
        case 0x79be4cu: goto label_79be4c;
        case 0x79be50u: goto label_79be50;
        case 0x79be54u: goto label_79be54;
        default: break;
    }

    ctx->pc = 0x79be00u;

label_79be00:
    // 0x79be00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79be04:
    // 0x79be04: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79be04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79be08:
    // 0x79be08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79be0c:
    // 0x79be0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79be10:
    // 0x79be10: 0x8c8205a0  lw          $v0, 0x5A0($a0)
    ctx->pc = 0x79be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
label_79be14:
    // 0x79be14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79be14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79be18:
    // 0x79be18: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79be1c:
    if (ctx->pc == 0x79BE1Cu) {
        ctx->pc = 0x79BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE18u;
        // 0x79be1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE20u;
        goto label_79be20;
    }
    ctx->pc = 0x79BE18u;
    {
        const bool branch_taken_0x79be18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE18u;
        // 0x79be1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be18) {
            ctx->pc = 0x79BE44u;
            goto label_79be44;
        }
    }
    ctx->pc = 0x79BE20u;
label_79be20:
    // 0x79be20: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x79be20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_79be24:
    // 0x79be24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79be28:
    // 0x79be28: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79be2c:
    // 0x79be2c: 0x60f809  jalr        $v1
label_79be30:
    if (ctx->pc == 0x79BE30u) {
        ctx->pc = 0x79BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE2Cu;
        // 0x79be30: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE34u;
        goto label_79be34;
    }
    ctx->pc = 0x79BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BE34u);
        ctx->pc = 0x79BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE2Cu;
        // 0x79be30: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE2Cu, 0x79BE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BE34u;
label_79be34:
    // 0x79be34: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x79be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_79be38:
    // 0x79be38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79be38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79be3c:
    // 0x79be3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79be40:
    if (ctx->pc == 0x79BE40u) {
        ctx->pc = 0x79BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE3Cu;
        // 0x79be40: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE44u;
        goto label_79be44;
    }
    ctx->pc = 0x79BE3Cu;
    {
        const bool branch_taken_0x79be3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE3Cu;
        // 0x79be40: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be3c) {
            ctx->pc = 0x79BE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be28;
        }
    }
    ctx->pc = 0x79BE44u;
label_79be44:
    // 0x79be44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79be44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79be48:
    // 0x79be48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79be48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79be4c:
    // 0x79be4c: 0x3e00008  jr          $ra
label_79be50:
    if (ctx->pc == 0x79BE50u) {
        ctx->pc = 0x79BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE4Cu;
        // 0x79be50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE54u;
        goto label_79be54;
    }
    ctx->pc = 0x79BE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE4Cu;
        // 0x79be50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BE54u;
label_79be54:
    // 0x79be54: 0x0  nop
    ctx->pc = 0x79be54u;
    // NOP
    ctx->pc = 0x79be58u;
}
} // namespace gh_r501
