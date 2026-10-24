#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __do_global_dtors
// Address: 0x79a490 - 0x79a4e8
void ps2___do_global_dtors_0x79a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a490");
#endif

    switch (ctx->pc) {
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
        case 0x79a4c8u: goto label_79a4c8;
        case 0x79a4ccu: goto label_79a4cc;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4d8u: goto label_79a4d8;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4e4u: goto label_79a4e4;
        default: break;
    }

    ctx->pc = 0x79a490u;

label_79a490:
    // 0x79a490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a494:
    // 0x79a494: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a498:
    // 0x79a498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a49c:
    // 0x79a49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a4a0:
    // 0x79a4a0: 0x8c82c080  lw          $v0, -0x3F80($a0)
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951040)));
label_79a4a4:
    // 0x79a4a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a4a8:
    // 0x79a4a8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a4ac:
    if (ctx->pc == 0x79A4ACu) {
        ctx->pc = 0x79A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A8u;
        // 0x79a4ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B0u;
        goto label_79a4b0;
    }
    ctx->pc = 0x79A4A8u;
    {
        const bool branch_taken_0x79a4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A8u;
        // 0x79a4ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a8) {
            ctx->pc = 0x79A4D4u;
            goto label_79a4d4;
        }
    }
    ctx->pc = 0x79A4B0u;
label_79a4b0:
    // 0x79a4b0: 0x8e02c080  lw          $v0, -0x3F80($s0)
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951040)));
label_79a4b4:
    // 0x79a4b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a4b8:
    // 0x79a4b8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a4bc:
    // 0x79a4bc: 0x60f809  jalr        $v1
label_79a4c0:
    if (ctx->pc == 0x79A4C0u) {
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0xae02c080  sw          $v0, -0x3F80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4C4u;
        goto label_79a4c4;
    }
    ctx->pc = 0x79A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A4C4u);
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0xae02c080  sw          $v0, -0x3F80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x8e02c080  lw          $v0, -0x3F80($s0)
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951040)));
label_79a4c8:
    // 0x79a4c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a4cc:
    // 0x79a4cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a4d0:
    if (ctx->pc == 0x79A4D0u) {
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4D4u;
        goto label_79a4d4;
    }
    ctx->pc = 0x79A4CCu;
    {
        const bool branch_taken_0x79a4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4cc) {
            ctx->pc = 0x79A4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4b8;
        }
    }
    ctx->pc = 0x79A4D4u;
label_79a4d4:
    // 0x79a4d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a4d8:
    // 0x79a4d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a4dc:
    // 0x79a4dc: 0x3e00008  jr          $ra
label_79a4e0:
    if (ctx->pc == 0x79A4E0u) {
        ctx->pc = 0x79A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4DCu;
        // 0x79a4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E4u;
        goto label_79a4e4;
    }
    ctx->pc = 0x79A4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4DCu;
        // 0x79a4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4E4u;
label_79a4e4:
    // 0x79a4e4: 0x0  nop
    ctx->pc = 0x79a4e4u;
    // NOP
    ctx->pc = 0x79a4e8u;
}
} // namespace gh_r505
