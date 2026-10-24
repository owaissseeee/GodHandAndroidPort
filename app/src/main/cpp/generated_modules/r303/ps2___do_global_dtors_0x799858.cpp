#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: __do_global_dtors
// Address: 0x799858 - 0x7998b0
void ps2___do_global_dtors_0x799858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799858");
#endif

    switch (ctx->pc) {
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        default: break;
    }

    ctx->pc = 0x799858u;

label_799858:
    // 0x799858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79985c:
    // 0x79985c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799860:
    // 0x799860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799864:
    // 0x799864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799868:
    // 0x799868: 0x8c829980  lw          $v0, -0x6680($a0)
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941056)));
label_79986c:
    // 0x79986c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799870:
    // 0x799870: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799874:
    if (ctx->pc == 0x799874u) {
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799878u;
        goto label_799878;
    }
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x8e029980  lw          $v0, -0x6680($s0)
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941056)));
label_79987c:
    // 0x79987c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799880:
    // 0x799880: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799884:
    // 0x799884: 0x60f809  jalr        $v1
label_799888:
    if (ctx->pc == 0x799888u) {
        ctx->pc = 0x799888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799884u;
        // 0x799888: 0xae029980  sw          $v0, -0x6680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79988Cu;
        goto label_79988c;
    }
    ctx->pc = 0x799884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79988Cu);
        ctx->pc = 0x799888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799884u;
        // 0x799888: 0xae029980  sw          $v0, -0x6680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x8e029980  lw          $v0, -0x6680($s0)
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941056)));
label_799890:
    // 0x799890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799894:
    // 0x799894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799894) {
            ctx->pc = 0x799880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799880;
        }
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7998a0:
    // 0x7998a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7998a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7998a4:
    // 0x7998a4: 0x3e00008  jr          $ra
label_7998a8:
    if (ctx->pc == 0x7998A8u) {
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998ACu;
        goto label_7998ac;
    }
    ctx->pc = 0x7998A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x0  nop
    ctx->pc = 0x7998acu;
    // NOP
    ctx->pc = 0x7998b0u;
}
} // namespace gh_r303
