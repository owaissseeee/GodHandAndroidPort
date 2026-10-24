#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: __do_global_dtors
// Address: 0x79c270 - 0x79c2c8
void ps2___do_global_dtors_0x79c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79c270");
#endif

    switch (ctx->pc) {
        case 0x79c270u: goto label_79c270;
        case 0x79c274u: goto label_79c274;
        case 0x79c278u: goto label_79c278;
        case 0x79c27cu: goto label_79c27c;
        case 0x79c280u: goto label_79c280;
        case 0x79c284u: goto label_79c284;
        case 0x79c288u: goto label_79c288;
        case 0x79c28cu: goto label_79c28c;
        case 0x79c290u: goto label_79c290;
        case 0x79c294u: goto label_79c294;
        case 0x79c298u: goto label_79c298;
        case 0x79c29cu: goto label_79c29c;
        case 0x79c2a0u: goto label_79c2a0;
        case 0x79c2a4u: goto label_79c2a4;
        case 0x79c2a8u: goto label_79c2a8;
        case 0x79c2acu: goto label_79c2ac;
        case 0x79c2b0u: goto label_79c2b0;
        case 0x79c2b4u: goto label_79c2b4;
        case 0x79c2b8u: goto label_79c2b8;
        case 0x79c2bcu: goto label_79c2bc;
        case 0x79c2c0u: goto label_79c2c0;
        case 0x79c2c4u: goto label_79c2c4;
        default: break;
    }

    ctx->pc = 0x79c270u;

label_79c270:
    // 0x79c270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79c274:
    // 0x79c274: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79c274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79c278:
    // 0x79c278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79c27c:
    // 0x79c27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79c280:
    // 0x79c280: 0x8c82c400  lw          $v0, -0x3C00($a0)
    ctx->pc = 0x79c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951936)));
label_79c284:
    // 0x79c284: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c288:
    // 0x79c288: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79c28c:
    if (ctx->pc == 0x79C28Cu) {
        ctx->pc = 0x79C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C288u;
        // 0x79c28c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C290u;
        goto label_79c290;
    }
    ctx->pc = 0x79C288u;
    {
        const bool branch_taken_0x79c288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C288u;
        // 0x79c28c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c288) {
            ctx->pc = 0x79C2B4u;
            goto label_79c2b4;
        }
    }
    ctx->pc = 0x79C290u;
label_79c290:
    // 0x79c290: 0x8e02c400  lw          $v0, -0x3C00($s0)
    ctx->pc = 0x79c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951936)));
label_79c294:
    // 0x79c294: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79c298:
    // 0x79c298: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79c298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79c29c:
    // 0x79c29c: 0x60f809  jalr        $v1
label_79c2a0:
    if (ctx->pc == 0x79C2A0u) {
        ctx->pc = 0x79C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C29Cu;
        // 0x79c2a0: 0xae02c400  sw          $v0, -0x3C00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C2A4u;
        goto label_79c2a4;
    }
    ctx->pc = 0x79C29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79C2A4u);
        ctx->pc = 0x79C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C29Cu;
        // 0x79c2a0: 0xae02c400  sw          $v0, -0x3C00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C29Cu, 0x79C2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C2A4u;
label_79c2a4:
    // 0x79c2a4: 0x8e02c400  lw          $v0, -0x3C00($s0)
    ctx->pc = 0x79c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951936)));
label_79c2a8:
    // 0x79c2a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c2ac:
    // 0x79c2ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79c2b0:
    if (ctx->pc == 0x79C2B0u) {
        ctx->pc = 0x79C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2ACu;
        // 0x79c2b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C2B4u;
        goto label_79c2b4;
    }
    ctx->pc = 0x79C2ACu;
    {
        const bool branch_taken_0x79c2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2ACu;
        // 0x79c2b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2ac) {
            ctx->pc = 0x79C298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c298;
        }
    }
    ctx->pc = 0x79C2B4u;
label_79c2b4:
    // 0x79c2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c2b8:
    // 0x79c2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c2bc:
    // 0x79c2bc: 0x3e00008  jr          $ra
label_79c2c0:
    if (ctx->pc == 0x79C2C0u) {
        ctx->pc = 0x79C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2BCu;
        // 0x79c2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C2C4u;
        goto label_79c2c4;
    }
    ctx->pc = 0x79C2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2BCu;
        // 0x79c2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C2C4u;
label_79c2c4:
    // 0x79c2c4: 0x0  nop
    ctx->pc = 0x79c2c4u;
    // NOP
    ctx->pc = 0x79c2c8u;
}
} // namespace gh_r040
