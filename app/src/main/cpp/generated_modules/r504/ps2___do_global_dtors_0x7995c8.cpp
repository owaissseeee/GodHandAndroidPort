#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r504_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r504
{
// Function: __do_global_dtors
// Address: 0x7995c8 - 0x799620
void ps2___do_global_dtors_0x7995c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7995c8");
#endif

    switch (ctx->pc) {
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
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
        default: break;
    }

    ctx->pc = 0x7995c8u;

label_7995c8:
    // 0x7995c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7995cc:
    // 0x7995cc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7995d0:
    // 0x7995d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7995d4:
    // 0x7995d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7995d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7995d8:
    // 0x7995d8: 0x8c829780  lw          $v0, -0x6880($a0)
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940544)));
label_7995dc:
    // 0x7995dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7995e0:
    // 0x7995e0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    {
        const bool branch_taken_0x7995e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e0) {
            ctx->pc = 0x79960Cu;
            goto label_79960c;
        }
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x8e029780  lw          $v0, -0x6880($s0)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940544)));
label_7995ec:
    // 0x7995ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7995f0:
    // 0x7995f0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7995f4:
    // 0x7995f4: 0x60f809  jalr        $v1
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0xae029780  sw          $v0, -0x6880($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995FCu;
        goto label_7995fc;
    }
    ctx->pc = 0x7995F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7995FCu);
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0xae029780  sw          $v0, -0x6880($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294940544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x8e029780  lw          $v0, -0x6880($s0)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940544)));
label_799600:
    // 0x799600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799604:
    // 0x799604: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799608:
    if (ctx->pc == 0x799608u) {
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79960Cu;
        goto label_79960c;
    }
    ctx->pc = 0x799604u;
    {
        const bool branch_taken_0x799604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799604) {
            ctx->pc = 0x7995F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995f0;
        }
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799610:
    // 0x799610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799614:
    // 0x799614: 0x3e00008  jr          $ra
label_799618:
    if (ctx->pc == 0x799618u) {
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79961Cu;
        goto label_79961c;
    }
    ctx->pc = 0x799614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79961Cu;
label_79961c:
    // 0x79961c: 0x0  nop
    ctx->pc = 0x79961cu;
    // NOP
    ctx->pc = 0x799620u;
}
} // namespace gh_r504
