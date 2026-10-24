#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: __do_global_dtors
// Address: 0x79ac60 - 0x79acb8
void ps2___do_global_dtors_0x79ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79ac60");
#endif

    switch (ctx->pc) {
        case 0x79ac60u: goto label_79ac60;
        case 0x79ac64u: goto label_79ac64;
        case 0x79ac68u: goto label_79ac68;
        case 0x79ac6cu: goto label_79ac6c;
        case 0x79ac70u: goto label_79ac70;
        case 0x79ac74u: goto label_79ac74;
        case 0x79ac78u: goto label_79ac78;
        case 0x79ac7cu: goto label_79ac7c;
        case 0x79ac80u: goto label_79ac80;
        case 0x79ac84u: goto label_79ac84;
        case 0x79ac88u: goto label_79ac88;
        case 0x79ac8cu: goto label_79ac8c;
        case 0x79ac90u: goto label_79ac90;
        case 0x79ac94u: goto label_79ac94;
        case 0x79ac98u: goto label_79ac98;
        case 0x79ac9cu: goto label_79ac9c;
        case 0x79aca0u: goto label_79aca0;
        case 0x79aca4u: goto label_79aca4;
        case 0x79aca8u: goto label_79aca8;
        case 0x79acacu: goto label_79acac;
        case 0x79acb0u: goto label_79acb0;
        case 0x79acb4u: goto label_79acb4;
        default: break;
    }

    ctx->pc = 0x79ac60u;

label_79ac60:
    // 0x79ac60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79ac64:
    // 0x79ac64: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79ac68:
    // 0x79ac68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79ac6c:
    // 0x79ac6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79ac70:
    // 0x79ac70: 0x8c82ae80  lw          $v0, -0x5180($a0)
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946432)));
label_79ac74:
    // 0x79ac74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ac78:
    // 0x79ac78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79ac7c:
    if (ctx->pc == 0x79AC7Cu) {
        ctx->pc = 0x79AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC78u;
        // 0x79ac7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC80u;
        goto label_79ac80;
    }
    ctx->pc = 0x79AC78u;
    {
        const bool branch_taken_0x79ac78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC78u;
        // 0x79ac7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac78) {
            ctx->pc = 0x79ACA4u;
            goto label_79aca4;
        }
    }
    ctx->pc = 0x79AC80u;
label_79ac80:
    // 0x79ac80: 0x8e02ae80  lw          $v0, -0x5180($s0)
    ctx->pc = 0x79ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946432)));
label_79ac84:
    // 0x79ac84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79ac88:
    // 0x79ac88: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79ac8c:
    // 0x79ac8c: 0x60f809  jalr        $v1
label_79ac90:
    if (ctx->pc == 0x79AC90u) {
        ctx->pc = 0x79AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC8Cu;
        // 0x79ac90: 0xae02ae80  sw          $v0, -0x5180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC94u;
        goto label_79ac94;
    }
    ctx->pc = 0x79AC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79AC94u);
        ctx->pc = 0x79AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC8Cu;
        // 0x79ac90: 0xae02ae80  sw          $v0, -0x5180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC8Cu, 0x79AC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AC94u;
label_79ac94:
    // 0x79ac94: 0x8e02ae80  lw          $v0, -0x5180($s0)
    ctx->pc = 0x79ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946432)));
label_79ac98:
    // 0x79ac98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ac9c:
    // 0x79ac9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79aca0:
    if (ctx->pc == 0x79ACA0u) {
        ctx->pc = 0x79ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC9Cu;
        // 0x79aca0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACA4u;
        goto label_79aca4;
    }
    ctx->pc = 0x79AC9Cu;
    {
        const bool branch_taken_0x79ac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC9Cu;
        // 0x79aca0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac9c) {
            ctx->pc = 0x79AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac88;
        }
    }
    ctx->pc = 0x79ACA4u;
label_79aca4:
    // 0x79aca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79aca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79aca8:
    // 0x79aca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79acac:
    // 0x79acac: 0x3e00008  jr          $ra
label_79acb0:
    if (ctx->pc == 0x79ACB0u) {
        ctx->pc = 0x79ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACACu;
        // 0x79acb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACB4u;
        goto label_79acb4;
    }
    ctx->pc = 0x79ACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACACu;
        // 0x79acb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACB4u;
label_79acb4:
    // 0x79acb4: 0x0  nop
    ctx->pc = 0x79acb4u;
    // NOP
    ctx->pc = 0x79acb8u;
}
} // namespace gh_r204
