#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r805_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r805
{
// Function: __do_global_dtors
// Address: 0x7996b8 - 0x799710
void ps2___do_global_dtors_0x7996b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7996b8");
#endif

    switch (ctx->pc) {
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        default: break;
    }

    ctx->pc = 0x7996b8u;

label_7996b8:
    // 0x7996b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7996bc:
    // 0x7996bc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7996c0:
    // 0x7996c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7996c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7996c4:
    // 0x7996c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7996c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7996c8:
    // 0x7996c8: 0x8c829800  lw          $v0, -0x6800($a0)
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940672)));
label_7996cc:
    // 0x7996cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7996d0:
    // 0x7996d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7996d4:
    if (ctx->pc == 0x7996D4u) {
        ctx->pc = 0x7996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D0u;
        // 0x7996d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D8u;
        goto label_7996d8;
    }
    ctx->pc = 0x7996D0u;
    {
        const bool branch_taken_0x7996d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D0u;
        // 0x7996d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d0) {
            ctx->pc = 0x7996FCu;
            goto label_7996fc;
        }
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0x8e029800  lw          $v0, -0x6800($s0)
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940672)));
label_7996dc:
    // 0x7996dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7996e0:
    // 0x7996e0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7996e4:
    // 0x7996e4: 0x60f809  jalr        $v1
label_7996e8:
    if (ctx->pc == 0x7996E8u) {
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0xae029800  sw          $v0, -0x6800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996ECu;
        goto label_7996ec;
    }
    ctx->pc = 0x7996E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7996ECu);
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0xae029800  sw          $v0, -0x6800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E4u, 0x7996ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7996ECu;
label_7996ec:
    // 0x7996ec: 0x8e029800  lw          $v0, -0x6800($s0)
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940672)));
label_7996f0:
    // 0x7996f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7996f4:
    // 0x7996f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7996f8:
    if (ctx->pc == 0x7996F8u) {
        ctx->pc = 0x7996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F4u;
        // 0x7996f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996FCu;
        goto label_7996fc;
    }
    ctx->pc = 0x7996F4u;
    {
        const bool branch_taken_0x7996f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F4u;
        // 0x7996f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f4) {
            ctx->pc = 0x7996E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996e0;
        }
    }
    ctx->pc = 0x7996FCu;
label_7996fc:
    // 0x7996fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799700:
    // 0x799700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799704:
    // 0x799704: 0x3e00008  jr          $ra
label_799708:
    if (ctx->pc == 0x799708u) {
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79970Cu;
        goto label_79970c;
    }
    ctx->pc = 0x799704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x0  nop
    ctx->pc = 0x79970cu;
    // NOP
    ctx->pc = 0x799710u;
}
} // namespace gh_r805
