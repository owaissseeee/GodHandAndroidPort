#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: __do_global_dtors
// Address: 0x799580 - 0x7995d8
void ps2___do_global_dtors_0x799580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799580");
#endif

    switch (ctx->pc) {
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        default: break;
    }

    ctx->pc = 0x799580u;

label_799580:
    // 0x799580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799584:
    // 0x799584: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799588:
    // 0x799588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79958c:
    // 0x79958c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799590:
    // 0x799590: 0x8c829780  lw          $v0, -0x6880($a0)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940544)));
label_799594:
    // 0x799594: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799598:
    // 0x799598: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79959c:
    if (ctx->pc == 0x79959Cu) {
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A0u;
        goto label_7995a0;
    }
    ctx->pc = 0x799598u;
    {
        const bool branch_taken_0x799598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799598) {
            ctx->pc = 0x7995C4u;
            goto label_7995c4;
        }
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0x8e029780  lw          $v0, -0x6880($s0)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940544)));
label_7995a4:
    // 0x7995a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7995a8:
    // 0x7995a8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7995ac:
    // 0x7995ac: 0x60f809  jalr        $v1
label_7995b0:
    if (ctx->pc == 0x7995B0u) {
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0xae029780  sw          $v0, -0x6880($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B4u;
        goto label_7995b4;
    }
    ctx->pc = 0x7995ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7995B4u);
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0xae029780  sw          $v0, -0x6880($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0x8e029780  lw          $v0, -0x6880($s0)
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940544)));
label_7995b8:
    // 0x7995b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7995bc:
    // 0x7995bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7995c0:
    if (ctx->pc == 0x7995C0u) {
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995C4u;
        goto label_7995c4;
    }
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995a8;
        }
    }
    ctx->pc = 0x7995C4u;
label_7995c4:
    // 0x7995c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7995c8:
    // 0x7995c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7995cc:
    // 0x7995cc: 0x3e00008  jr          $ra
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x0  nop
    ctx->pc = 0x7995d4u;
    // NOP
    ctx->pc = 0x7995d8u;
}
} // namespace gh_r508
