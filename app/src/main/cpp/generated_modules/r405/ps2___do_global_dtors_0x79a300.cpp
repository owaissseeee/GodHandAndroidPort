#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: __do_global_dtors
// Address: 0x79a300 - 0x79a358
void ps2___do_global_dtors_0x79a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a300");
#endif

    switch (ctx->pc) {
        case 0x79a300u: goto label_79a300;
        case 0x79a304u: goto label_79a304;
        case 0x79a308u: goto label_79a308;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a310u: goto label_79a310;
        case 0x79a314u: goto label_79a314;
        case 0x79a318u: goto label_79a318;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a320u: goto label_79a320;
        case 0x79a324u: goto label_79a324;
        case 0x79a328u: goto label_79a328;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a330u: goto label_79a330;
        case 0x79a334u: goto label_79a334;
        case 0x79a338u: goto label_79a338;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a340u: goto label_79a340;
        case 0x79a344u: goto label_79a344;
        case 0x79a348u: goto label_79a348;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a350u: goto label_79a350;
        case 0x79a354u: goto label_79a354;
        default: break;
    }

    ctx->pc = 0x79a300u;

label_79a300:
    // 0x79a300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a304:
    // 0x79a304: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a308:
    // 0x79a308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a30c:
    // 0x79a30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a310:
    // 0x79a310: 0x8c82a600  lw          $v0, -0x5A00($a0)
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944256)));
label_79a314:
    // 0x79a314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a318:
    // 0x79a318: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a31c:
    if (ctx->pc == 0x79A31Cu) {
        ctx->pc = 0x79A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A318u;
        // 0x79a31c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A320u;
        goto label_79a320;
    }
    ctx->pc = 0x79A318u;
    {
        const bool branch_taken_0x79a318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A318u;
        // 0x79a31c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a318) {
            ctx->pc = 0x79A344u;
            goto label_79a344;
        }
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0x8e02a600  lw          $v0, -0x5A00($s0)
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944256)));
label_79a324:
    // 0x79a324: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a328:
    // 0x79a328: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a32c:
    // 0x79a32c: 0x60f809  jalr        $v1
label_79a330:
    if (ctx->pc == 0x79A330u) {
        ctx->pc = 0x79A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A32Cu;
        // 0x79a330: 0xae02a600  sw          $v0, -0x5A00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A334u;
        goto label_79a334;
    }
    ctx->pc = 0x79A32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A334u);
        ctx->pc = 0x79A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A32Cu;
        // 0x79a330: 0xae02a600  sw          $v0, -0x5A00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A32Cu, 0x79A334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A334u;
label_79a334:
    // 0x79a334: 0x8e02a600  lw          $v0, -0x5A00($s0)
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944256)));
label_79a338:
    // 0x79a338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a33c:
    // 0x79a33c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a340:
    if (ctx->pc == 0x79A340u) {
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A344u;
        goto label_79a344;
    }
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a328;
        }
    }
    ctx->pc = 0x79A344u;
label_79a344:
    // 0x79a344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a348:
    // 0x79a348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a34c:
    // 0x79a34c: 0x3e00008  jr          $ra
label_79a350:
    if (ctx->pc == 0x79A350u) {
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A354u;
        goto label_79a354;
    }
    ctx->pc = 0x79A34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x0  nop
    ctx->pc = 0x79a354u;
    // NOP
    ctx->pc = 0x79a358u;
}
} // namespace gh_r405
