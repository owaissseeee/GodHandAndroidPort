#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r704_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r704
{
// Function: __do_global_dtors
// Address: 0x7995f0 - 0x799648
void ps2___do_global_dtors_0x7995f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7995f0");
#endif

    switch (ctx->pc) {
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        case 0x799620u: goto label_799620;
        case 0x799624u: goto label_799624;
        case 0x799628u: goto label_799628;
        case 0x79962cu: goto label_79962c;
        case 0x799630u: goto label_799630;
        case 0x799634u: goto label_799634;
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        default: break;
    }

    ctx->pc = 0x7995f0u;

label_7995f0:
    // 0x7995f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7995f4:
    // 0x7995f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7995f8:
    // 0x7995f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7995f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7995fc:
    // 0x7995fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7995fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799600:
    // 0x799600: 0x8c829780  lw          $v0, -0x6880($a0)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940544)));
label_799604:
    // 0x799604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799608:
    // 0x799608: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79960c:
    if (ctx->pc == 0x79960Cu) {
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799610u;
        goto label_799610;
    }
    ctx->pc = 0x799608u;
    {
        const bool branch_taken_0x799608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799608) {
            ctx->pc = 0x799634u;
            goto label_799634;
        }
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x8e029780  lw          $v0, -0x6880($s0)
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940544)));
label_799614:
    // 0x799614: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799618:
    // 0x799618: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79961c:
    // 0x79961c: 0x60f809  jalr        $v1
label_799620:
    if (ctx->pc == 0x799620u) {
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0xae029780  sw          $v0, -0x6880($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799624u;
        goto label_799624;
    }
    ctx->pc = 0x79961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799624u);
        ctx->pc = 0x799620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79961Cu;
        // 0x799620: 0xae029780  sw          $v0, -0x6880($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79961Cu, 0x799624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x8e029780  lw          $v0, -0x6880($s0)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940544)));
label_799628:
    // 0x799628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79962c:
    // 0x79962c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799630:
    if (ctx->pc == 0x799630u) {
        ctx->pc = 0x799630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79962Cu;
        // 0x799630: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799634u;
        goto label_799634;
    }
    ctx->pc = 0x79962Cu;
    {
        const bool branch_taken_0x79962c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79962Cu;
        // 0x799630: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79962c) {
            ctx->pc = 0x799618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799618;
        }
    }
    ctx->pc = 0x799634u;
label_799634:
    // 0x799634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799638:
    // 0x799638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79963c:
    // 0x79963c: 0x3e00008  jr          $ra
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x0  nop
    ctx->pc = 0x799644u;
    // NOP
    ctx->pc = 0x799648u;
}
} // namespace gh_r704
