#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04e_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04e
{
// Function: __do_global_dtors
// Address: 0x799328 - 0x799380
void ps2___do_global_dtors_0x799328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799328");
#endif

    switch (ctx->pc) {
        case 0x799328u: goto label_799328;
        case 0x79932cu: goto label_79932c;
        case 0x799330u: goto label_799330;
        case 0x799334u: goto label_799334;
        case 0x799338u: goto label_799338;
        case 0x79933cu: goto label_79933c;
        case 0x799340u: goto label_799340;
        case 0x799344u: goto label_799344;
        case 0x799348u: goto label_799348;
        case 0x79934cu: goto label_79934c;
        case 0x799350u: goto label_799350;
        case 0x799354u: goto label_799354;
        case 0x799358u: goto label_799358;
        case 0x79935cu: goto label_79935c;
        case 0x799360u: goto label_799360;
        case 0x799364u: goto label_799364;
        case 0x799368u: goto label_799368;
        case 0x79936cu: goto label_79936c;
        case 0x799370u: goto label_799370;
        case 0x799374u: goto label_799374;
        case 0x799378u: goto label_799378;
        case 0x79937cu: goto label_79937c;
        default: break;
    }

    ctx->pc = 0x799328u;

label_799328:
    // 0x799328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79932c:
    // 0x79932c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799330:
    // 0x799330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799334:
    // 0x799334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799338:
    // 0x799338: 0x8c829480  lw          $v0, -0x6B80($a0)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939776)));
label_79933c:
    // 0x79933c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799340:
    // 0x799340: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799344:
    if (ctx->pc == 0x799344u) {
        ctx->pc = 0x799344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799340u;
        // 0x799344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799348u;
        goto label_799348;
    }
    ctx->pc = 0x799340u;
    {
        const bool branch_taken_0x799340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799340u;
        // 0x799344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799340) {
            ctx->pc = 0x79936Cu;
            goto label_79936c;
        }
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x8e029480  lw          $v0, -0x6B80($s0)
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939776)));
label_79934c:
    // 0x79934c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799350:
    // 0x799350: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799354:
    // 0x799354: 0x60f809  jalr        $v1
label_799358:
    if (ctx->pc == 0x799358u) {
        ctx->pc = 0x799358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799354u;
        // 0x799358: 0xae029480  sw          $v0, -0x6B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79935Cu;
        goto label_79935c;
    }
    ctx->pc = 0x799354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79935Cu);
        ctx->pc = 0x799358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799354u;
        // 0x799358: 0xae029480  sw          $v0, -0x6B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x8e029480  lw          $v0, -0x6B80($s0)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939776)));
label_799360:
    // 0x799360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799364:
    // 0x799364: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799368:
    if (ctx->pc == 0x799368u) {
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79936Cu;
        goto label_79936c;
    }
    ctx->pc = 0x799364u;
    {
        const bool branch_taken_0x799364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799364) {
            ctx->pc = 0x799350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799350;
        }
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799370:
    // 0x799370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799374:
    // 0x799374: 0x3e00008  jr          $ra
label_799378:
    if (ctx->pc == 0x799378u) {
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79937Cu;
        goto label_79937c;
    }
    ctx->pc = 0x799374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x0  nop
    ctx->pc = 0x79937cu;
    // NOP
    ctx->pc = 0x799380u;
}
} // namespace gh_r04e
