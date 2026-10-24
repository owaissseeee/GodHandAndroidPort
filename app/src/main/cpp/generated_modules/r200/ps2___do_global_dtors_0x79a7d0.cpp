#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: __do_global_dtors
// Address: 0x79a7d0 - 0x79a828
void ps2___do_global_dtors_0x79a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a7d0");
#endif

    switch (ctx->pc) {
        case 0x79a7d0u: goto label_79a7d0;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7d8u: goto label_79a7d8;
        case 0x79a7dcu: goto label_79a7dc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7ecu: goto label_79a7ec;
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
        default: break;
    }

    ctx->pc = 0x79a7d0u;

label_79a7d0:
    // 0x79a7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a7d4:
    // 0x79a7d4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a7d8:
    // 0x79a7d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a7dc:
    // 0x79a7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a7e0:
    // 0x79a7e0: 0x8c82a980  lw          $v0, -0x5680($a0)
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945152)));
label_79a7e4:
    // 0x79a7e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a7e8:
    // 0x79a7e8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a7ec:
    if (ctx->pc == 0x79A7ECu) {
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7F0u;
        goto label_79a7f0;
    }
    ctx->pc = 0x79A7E8u;
    {
        const bool branch_taken_0x79a7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7e8) {
            ctx->pc = 0x79A814u;
            goto label_79a814;
        }
    }
    ctx->pc = 0x79A7F0u;
label_79a7f0:
    // 0x79a7f0: 0x8e02a980  lw          $v0, -0x5680($s0)
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945152)));
label_79a7f4:
    // 0x79a7f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a7f8:
    // 0x79a7f8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a7fc:
    // 0x79a7fc: 0x60f809  jalr        $v1
label_79a800:
    if (ctx->pc == 0x79A800u) {
        ctx->pc = 0x79A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7FCu;
        // 0x79a800: 0xae02a980  sw          $v0, -0x5680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A804u;
        goto label_79a804;
    }
    ctx->pc = 0x79A7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A804u);
        ctx->pc = 0x79A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7FCu;
        // 0x79a800: 0xae02a980  sw          $v0, -0x5680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7FCu, 0x79A804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A804u;
label_79a804:
    // 0x79a804: 0x8e02a980  lw          $v0, -0x5680($s0)
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945152)));
label_79a808:
    // 0x79a808: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a80c:
    // 0x79a80c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a810:
    if (ctx->pc == 0x79A810u) {
        ctx->pc = 0x79A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A80Cu;
        // 0x79a810: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A814u;
        goto label_79a814;
    }
    ctx->pc = 0x79A80Cu;
    {
        const bool branch_taken_0x79a80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A80Cu;
        // 0x79a810: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a80c) {
            ctx->pc = 0x79A7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7f8;
        }
    }
    ctx->pc = 0x79A814u;
label_79a814:
    // 0x79a814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a818:
    // 0x79a818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a81c:
    // 0x79a81c: 0x3e00008  jr          $ra
label_79a820:
    if (ctx->pc == 0x79A820u) {
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A824u;
        goto label_79a824;
    }
    ctx->pc = 0x79A81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A824u;
label_79a824:
    // 0x79a824: 0x0  nop
    ctx->pc = 0x79a824u;
    // NOP
    ctx->pc = 0x79a828u;
}
} // namespace gh_r200
