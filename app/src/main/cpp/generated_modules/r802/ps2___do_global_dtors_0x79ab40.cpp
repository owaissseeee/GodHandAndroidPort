#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: __do_global_dtors
// Address: 0x79ab40 - 0x79ab98
void ps2___do_global_dtors_0x79ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79ab40");
#endif

    switch (ctx->pc) {
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        default: break;
    }

    ctx->pc = 0x79ab40u;

label_79ab40:
    // 0x79ab40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79ab44:
    // 0x79ab44: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79ab48:
    // 0x79ab48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79ab4c:
    // 0x79ab4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79ab50:
    // 0x79ab50: 0x8c82ad80  lw          $v0, -0x5280($a0)
    ctx->pc = 0x79ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946176)));
label_79ab54:
    // 0x79ab54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ab58:
    // 0x79ab58: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79ab5c:
    if (ctx->pc == 0x79AB5Cu) {
        ctx->pc = 0x79AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB58u;
        // 0x79ab5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB60u;
        goto label_79ab60;
    }
    ctx->pc = 0x79AB58u;
    {
        const bool branch_taken_0x79ab58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB58u;
        // 0x79ab5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab58) {
            ctx->pc = 0x79AB84u;
            goto label_79ab84;
        }
    }
    ctx->pc = 0x79AB60u;
label_79ab60:
    // 0x79ab60: 0x8e02ad80  lw          $v0, -0x5280($s0)
    ctx->pc = 0x79ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946176)));
label_79ab64:
    // 0x79ab64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79ab68:
    // 0x79ab68: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79ab6c:
    // 0x79ab6c: 0x60f809  jalr        $v1
label_79ab70:
    if (ctx->pc == 0x79AB70u) {
        ctx->pc = 0x79AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB6Cu;
        // 0x79ab70: 0xae02ad80  sw          $v0, -0x5280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB74u;
        goto label_79ab74;
    }
    ctx->pc = 0x79AB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79AB74u);
        ctx->pc = 0x79AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB6Cu;
        // 0x79ab70: 0xae02ad80  sw          $v0, -0x5280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB6Cu, 0x79AB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AB74u;
label_79ab74:
    // 0x79ab74: 0x8e02ad80  lw          $v0, -0x5280($s0)
    ctx->pc = 0x79ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946176)));
label_79ab78:
    // 0x79ab78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ab7c:
    // 0x79ab7c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79ab80:
    if (ctx->pc == 0x79AB80u) {
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB84u;
        goto label_79ab84;
    }
    ctx->pc = 0x79AB7Cu;
    {
        const bool branch_taken_0x79ab7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab7c) {
            ctx->pc = 0x79AB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab68;
        }
    }
    ctx->pc = 0x79AB84u;
label_79ab84:
    // 0x79ab84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79ab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ab88:
    // 0x79ab88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ab88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ab8c:
    // 0x79ab8c: 0x3e00008  jr          $ra
label_79ab90:
    if (ctx->pc == 0x79AB90u) {
        ctx->pc = 0x79AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB8Cu;
        // 0x79ab90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB94u;
        goto label_79ab94;
    }
    ctx->pc = 0x79AB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB8Cu;
        // 0x79ab90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB94u;
label_79ab94:
    // 0x79ab94: 0x0  nop
    ctx->pc = 0x79ab94u;
    // NOP
    ctx->pc = 0x79ab98u;
}
} // namespace gh_r802
