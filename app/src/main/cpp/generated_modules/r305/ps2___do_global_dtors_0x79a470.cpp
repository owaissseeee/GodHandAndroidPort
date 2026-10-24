#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: __do_global_dtors
// Address: 0x79a470 - 0x79a4c8
void ps2___do_global_dtors_0x79a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a470");
#endif

    switch (ctx->pc) {
        case 0x79a470u: goto label_79a470;
        case 0x79a474u: goto label_79a474;
        case 0x79a478u: goto label_79a478;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a480u: goto label_79a480;
        case 0x79a484u: goto label_79a484;
        case 0x79a488u: goto label_79a488;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a490u: goto label_79a490;
        case 0x79a494u: goto label_79a494;
        case 0x79a498u: goto label_79a498;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4a0u: goto label_79a4a0;
        case 0x79a4a4u: goto label_79a4a4;
        case 0x79a4a8u: goto label_79a4a8;
        case 0x79a4acu: goto label_79a4ac;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4bcu: goto label_79a4bc;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4c4u: goto label_79a4c4;
        default: break;
    }

    ctx->pc = 0x79a470u;

label_79a470:
    // 0x79a470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a474:
    // 0x79a474: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a478:
    // 0x79a478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a47c:
    // 0x79a47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a480:
    // 0x79a480: 0x8c82a630  lw          $v0, -0x59D0($a0)
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944304)));
label_79a484:
    // 0x79a484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a488:
    // 0x79a488: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a48c:
    if (ctx->pc == 0x79A48Cu) {
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A490u;
        goto label_79a490;
    }
    ctx->pc = 0x79A488u;
    {
        const bool branch_taken_0x79a488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a488) {
            ctx->pc = 0x79A4B4u;
            goto label_79a4b4;
        }
    }
    ctx->pc = 0x79A490u;
label_79a490:
    // 0x79a490: 0x8e02a630  lw          $v0, -0x59D0($s0)
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944304)));
label_79a494:
    // 0x79a494: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a498:
    // 0x79a498: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a49c:
    // 0x79a49c: 0x60f809  jalr        $v1
label_79a4a0:
    if (ctx->pc == 0x79A4A0u) {
        ctx->pc = 0x79A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A49Cu;
        // 0x79a4a0: 0xae02a630  sw          $v0, -0x59D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4A4u;
        goto label_79a4a4;
    }
    ctx->pc = 0x79A49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A4A4u);
        ctx->pc = 0x79A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A49Cu;
        // 0x79a4a0: 0xae02a630  sw          $v0, -0x59D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A49Cu, 0x79A4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A4A4u;
label_79a4a4:
    // 0x79a4a4: 0x8e02a630  lw          $v0, -0x59D0($s0)
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944304)));
label_79a4a8:
    // 0x79a4a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a4ac:
    // 0x79a4ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a4b0:
    if (ctx->pc == 0x79A4B0u) {
        ctx->pc = 0x79A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4ACu;
        // 0x79a4b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B4u;
        goto label_79a4b4;
    }
    ctx->pc = 0x79A4ACu;
    {
        const bool branch_taken_0x79a4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4ACu;
        // 0x79a4b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4ac) {
            ctx->pc = 0x79A498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a498;
        }
    }
    ctx->pc = 0x79A4B4u;
label_79a4b4:
    // 0x79a4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a4b8:
    // 0x79a4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a4bc:
    // 0x79a4bc: 0x3e00008  jr          $ra
label_79a4c0:
    if (ctx->pc == 0x79A4C0u) {
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4C4u;
        goto label_79a4c4;
    }
    ctx->pc = 0x79A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x0  nop
    ctx->pc = 0x79a4c4u;
    // NOP
    ctx->pc = 0x79a4c8u;
}
} // namespace gh_r305
