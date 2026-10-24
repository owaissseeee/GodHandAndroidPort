#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: __do_global_dtors
// Address: 0x7997d0 - 0x799828
void ps2___do_global_dtors_0x7997d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7997d0");
#endif

    switch (ctx->pc) {
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        default: break;
    }

    ctx->pc = 0x7997d0u;

label_7997d0:
    // 0x7997d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7997d4:
    // 0x7997d4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7997d8:
    // 0x7997d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7997d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7997dc:
    // 0x7997dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7997dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7997e0:
    // 0x7997e0: 0x8c829a98  lw          $v0, -0x6568($a0)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941336)));
label_7997e4:
    // 0x7997e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7997e8:
    // 0x7997e8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7997ec:
    if (ctx->pc == 0x7997ECu) {
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F0u;
        goto label_7997f0;
    }
    ctx->pc = 0x7997E8u;
    {
        const bool branch_taken_0x7997e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e8) {
            ctx->pc = 0x799814u;
            goto label_799814;
        }
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x8e029a98  lw          $v0, -0x6568($s0)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941336)));
label_7997f4:
    // 0x7997f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7997f8:
    // 0x7997f8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7997fc:
    // 0x7997fc: 0x60f809  jalr        $v1
label_799800:
    if (ctx->pc == 0x799800u) {
        ctx->pc = 0x799800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997FCu;
        // 0x799800: 0xae029a98  sw          $v0, -0x6568($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799804u;
        goto label_799804;
    }
    ctx->pc = 0x7997FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799804u);
        ctx->pc = 0x799800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997FCu;
        // 0x799800: 0xae029a98  sw          $v0, -0x6568($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997FCu, 0x799804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799804u;
label_799804:
    // 0x799804: 0x8e029a98  lw          $v0, -0x6568($s0)
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941336)));
label_799808:
    // 0x799808: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79980c:
    // 0x79980c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799810:
    if (ctx->pc == 0x799810u) {
        ctx->pc = 0x799810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79980Cu;
        // 0x799810: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799814u;
        goto label_799814;
    }
    ctx->pc = 0x79980Cu;
    {
        const bool branch_taken_0x79980c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79980Cu;
        // 0x799810: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79980c) {
            ctx->pc = 0x7997F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997f8;
        }
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799818:
    // 0x799818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79981c:
    // 0x79981c: 0x3e00008  jr          $ra
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x0  nop
    ctx->pc = 0x799824u;
    // NOP
    ctx->pc = 0x799828u;
}
} // namespace gh_r003
