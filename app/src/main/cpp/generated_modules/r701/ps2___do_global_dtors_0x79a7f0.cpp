#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: __do_global_dtors
// Address: 0x79a7f0 - 0x79a848
void ps2___do_global_dtors_0x79a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a7f0");
#endif

    switch (ctx->pc) {
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a7f4u: goto label_79a7f4;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a7fcu: goto label_79a7fc;
        case 0x79a800u: goto label_79a800;
        case 0x79a804u: goto label_79a804;
        case 0x79a808u: goto label_79a808;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a810u: goto label_79a810;
        case 0x79a814u: goto label_79a814;
        case 0x79a818u: goto label_79a818;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a820u: goto label_79a820;
        case 0x79a824u: goto label_79a824;
        case 0x79a828u: goto label_79a828;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a830u: goto label_79a830;
        case 0x79a834u: goto label_79a834;
        case 0x79a838u: goto label_79a838;
        case 0x79a83cu: goto label_79a83c;
        case 0x79a840u: goto label_79a840;
        case 0x79a844u: goto label_79a844;
        default: break;
    }

    ctx->pc = 0x79a7f0u;

label_79a7f0:
    // 0x79a7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a7f4:
    // 0x79a7f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a7f8:
    // 0x79a7f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a7fc:
    // 0x79a7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a800:
    // 0x79a800: 0x8c82aa00  lw          $v0, -0x5600($a0)
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945280)));
label_79a804:
    // 0x79a804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a808:
    // 0x79a808: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a80c:
    if (ctx->pc == 0x79A80Cu) {
        ctx->pc = 0x79A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A808u;
        // 0x79a80c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A810u;
        goto label_79a810;
    }
    ctx->pc = 0x79A808u;
    {
        const bool branch_taken_0x79a808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A808u;
        // 0x79a80c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a808) {
            ctx->pc = 0x79A834u;
            goto label_79a834;
        }
    }
    ctx->pc = 0x79A810u;
label_79a810:
    // 0x79a810: 0x8e02aa00  lw          $v0, -0x5600($s0)
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945280)));
label_79a814:
    // 0x79a814: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a818:
    // 0x79a818: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a81c:
    // 0x79a81c: 0x60f809  jalr        $v1
label_79a820:
    if (ctx->pc == 0x79A820u) {
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0xae02aa00  sw          $v0, -0x5600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A824u;
        goto label_79a824;
    }
    ctx->pc = 0x79A81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A824u);
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0xae02aa00  sw          $v0, -0x5600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A81Cu, 0x79A824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A824u;
label_79a824:
    // 0x79a824: 0x8e02aa00  lw          $v0, -0x5600($s0)
    ctx->pc = 0x79a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945280)));
label_79a828:
    // 0x79a828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a82c:
    // 0x79a82c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a830:
    if (ctx->pc == 0x79A830u) {
        ctx->pc = 0x79A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A82Cu;
        // 0x79a830: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A834u;
        goto label_79a834;
    }
    ctx->pc = 0x79A82Cu;
    {
        const bool branch_taken_0x79a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A82Cu;
        // 0x79a830: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a82c) {
            ctx->pc = 0x79A818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a818;
        }
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a838:
    // 0x79a838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a83c:
    // 0x79a83c: 0x3e00008  jr          $ra
label_79a840:
    if (ctx->pc == 0x79A840u) {
        ctx->pc = 0x79A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A83Cu;
        // 0x79a840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A844u;
        goto label_79a844;
    }
    ctx->pc = 0x79A83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A83Cu;
        // 0x79a840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A844u;
label_79a844:
    // 0x79a844: 0x0  nop
    ctx->pc = 0x79a844u;
    // NOP
    ctx->pc = 0x79a848u;
}
} // namespace gh_r701
