#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __do_global_dtors
// Address: 0x7c9670 - 0x7c96c8
void ps2___do_global_dtors_0x7c9670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7c9670");
#endif

    switch (ctx->pc) {
        case 0x7c9670u: goto label_7c9670;
        case 0x7c9674u: goto label_7c9674;
        case 0x7c9678u: goto label_7c9678;
        case 0x7c967cu: goto label_7c967c;
        case 0x7c9680u: goto label_7c9680;
        case 0x7c9684u: goto label_7c9684;
        case 0x7c9688u: goto label_7c9688;
        case 0x7c968cu: goto label_7c968c;
        case 0x7c9690u: goto label_7c9690;
        case 0x7c9694u: goto label_7c9694;
        case 0x7c9698u: goto label_7c9698;
        case 0x7c969cu: goto label_7c969c;
        case 0x7c96a0u: goto label_7c96a0;
        case 0x7c96a4u: goto label_7c96a4;
        case 0x7c96a8u: goto label_7c96a8;
        case 0x7c96acu: goto label_7c96ac;
        case 0x7c96b0u: goto label_7c96b0;
        case 0x7c96b4u: goto label_7c96b4;
        case 0x7c96b8u: goto label_7c96b8;
        case 0x7c96bcu: goto label_7c96bc;
        case 0x7c96c0u: goto label_7c96c0;
        case 0x7c96c4u: goto label_7c96c4;
        default: break;
    }

    ctx->pc = 0x7c9670u;

label_7c9670:
    // 0x7c9670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7c9674:
    // 0x7c9674: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c9674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
label_7c9678:
    // 0x7c9678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c9678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7c967c:
    // 0x7c967c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7c9680:
    // 0x7c9680: 0x8c82f580  lw          $v0, -0xA80($a0)
    ctx->pc = 0x7c9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964608)));
label_7c9684:
    // 0x7c9684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7c9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7c9688:
    // 0x7c9688: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7c968c:
    if (ctx->pc == 0x7C968Cu) {
        ctx->pc = 0x7C968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9688u;
        // 0x7c968c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9690u;
        goto label_7c9690;
    }
    ctx->pc = 0x7C9688u;
    {
        const bool branch_taken_0x7c9688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9688u;
        // 0x7c968c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9688) {
            ctx->pc = 0x7C96B4u;
            goto label_7c96b4;
        }
    }
    ctx->pc = 0x7C9690u;
label_7c9690:
    // 0x7c9690: 0x8e02f580  lw          $v0, -0xA80($s0)
    ctx->pc = 0x7c9690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964608)));
label_7c9694:
    // 0x7c9694: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7c9694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7c9698:
    // 0x7c9698: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7c9698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7c969c:
    // 0x7c969c: 0x60f809  jalr        $v1
label_7c96a0:
    if (ctx->pc == 0x7C96A0u) {
        ctx->pc = 0x7C96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C969Cu;
        // 0x7c96a0: 0xae02f580  sw          $v0, -0xA80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294964608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C96A4u;
        goto label_7c96a4;
    }
    ctx->pc = 0x7C969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7C96A4u);
        ctx->pc = 0x7C96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C969Cu;
        // 0x7c96a0: 0xae02f580  sw          $v0, -0xA80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294964608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C969Cu, 0x7C96A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C96A4u;
label_7c96a4:
    // 0x7c96a4: 0x8e02f580  lw          $v0, -0xA80($s0)
    ctx->pc = 0x7c96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964608)));
label_7c96a8:
    // 0x7c96a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7c96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7c96ac:
    // 0x7c96ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7c96b0:
    if (ctx->pc == 0x7C96B0u) {
        ctx->pc = 0x7C96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96ACu;
        // 0x7c96b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C96B4u;
        goto label_7c96b4;
    }
    ctx->pc = 0x7C96ACu;
    {
        const bool branch_taken_0x7c96ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96ACu;
        // 0x7c96b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c96ac) {
            ctx->pc = 0x7C9698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c9698;
        }
    }
    ctx->pc = 0x7C96B4u;
label_7c96b4:
    // 0x7c96b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c96b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7c96b8:
    // 0x7c96b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c96b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7c96bc:
    // 0x7c96bc: 0x3e00008  jr          $ra
label_7c96c0:
    if (ctx->pc == 0x7C96C0u) {
        ctx->pc = 0x7C96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96BCu;
        // 0x7c96c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C96C4u;
        goto label_7c96c4;
    }
    ctx->pc = 0x7C96BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C96BCu;
        // 0x7c96c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C96BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C96C4u;
label_7c96c4:
    // 0x7c96c4: 0x0  nop
    ctx->pc = 0x7c96c4u;
    // NOP
    ctx->pc = 0x7c96c8u;
}
} // namespace gh_mcport
