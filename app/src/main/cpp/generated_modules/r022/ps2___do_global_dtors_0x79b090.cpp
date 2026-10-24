#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __do_global_dtors
// Address: 0x79b090 - 0x79b0e8
void ps2___do_global_dtors_0x79b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79b090");
#endif

    switch (ctx->pc) {
        case 0x79b090u: goto label_79b090;
        case 0x79b094u: goto label_79b094;
        case 0x79b098u: goto label_79b098;
        case 0x79b09cu: goto label_79b09c;
        case 0x79b0a0u: goto label_79b0a0;
        case 0x79b0a4u: goto label_79b0a4;
        case 0x79b0a8u: goto label_79b0a8;
        case 0x79b0acu: goto label_79b0ac;
        case 0x79b0b0u: goto label_79b0b0;
        case 0x79b0b4u: goto label_79b0b4;
        case 0x79b0b8u: goto label_79b0b8;
        case 0x79b0bcu: goto label_79b0bc;
        case 0x79b0c0u: goto label_79b0c0;
        case 0x79b0c4u: goto label_79b0c4;
        case 0x79b0c8u: goto label_79b0c8;
        case 0x79b0ccu: goto label_79b0cc;
        case 0x79b0d0u: goto label_79b0d0;
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b0d8u: goto label_79b0d8;
        case 0x79b0dcu: goto label_79b0dc;
        case 0x79b0e0u: goto label_79b0e0;
        case 0x79b0e4u: goto label_79b0e4;
        default: break;
    }

    ctx->pc = 0x79b090u;

label_79b090:
    // 0x79b090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79b094:
    // 0x79b094: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79b098:
    // 0x79b098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79b09c:
    // 0x79b09c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79b0a0:
    // 0x79b0a0: 0x8c82cb80  lw          $v0, -0x3480($a0)
    ctx->pc = 0x79b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953856)));
label_79b0a4:
    // 0x79b0a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b0a8:
    // 0x79b0a8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79b0ac:
    if (ctx->pc == 0x79B0ACu) {
        ctx->pc = 0x79B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A8u;
        // 0x79b0ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0B0u;
        goto label_79b0b0;
    }
    ctx->pc = 0x79B0A8u;
    {
        const bool branch_taken_0x79b0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A8u;
        // 0x79b0ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0a8) {
            ctx->pc = 0x79B0D4u;
            goto label_79b0d4;
        }
    }
    ctx->pc = 0x79B0B0u;
label_79b0b0:
    // 0x79b0b0: 0x8e02cb80  lw          $v0, -0x3480($s0)
    ctx->pc = 0x79b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953856)));
label_79b0b4:
    // 0x79b0b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79b0b8:
    // 0x79b0b8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79b0bc:
    // 0x79b0bc: 0x60f809  jalr        $v1
label_79b0c0:
    if (ctx->pc == 0x79B0C0u) {
        ctx->pc = 0x79B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0BCu;
        // 0x79b0c0: 0xae02cb80  sw          $v0, -0x3480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0C4u;
        goto label_79b0c4;
    }
    ctx->pc = 0x79B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79B0C4u);
        ctx->pc = 0x79B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0BCu;
        // 0x79b0c0: 0xae02cb80  sw          $v0, -0x3480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0BCu, 0x79B0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B0C4u;
label_79b0c4:
    // 0x79b0c4: 0x8e02cb80  lw          $v0, -0x3480($s0)
    ctx->pc = 0x79b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953856)));
label_79b0c8:
    // 0x79b0c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b0cc:
    // 0x79b0cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79b0d0:
    if (ctx->pc == 0x79B0D0u) {
        ctx->pc = 0x79B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0CCu;
        // 0x79b0d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0D4u;
        goto label_79b0d4;
    }
    ctx->pc = 0x79B0CCu;
    {
        const bool branch_taken_0x79b0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0CCu;
        // 0x79b0d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0cc) {
            ctx->pc = 0x79B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0b8;
        }
    }
    ctx->pc = 0x79B0D4u;
label_79b0d4:
    // 0x79b0d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b0d8:
    // 0x79b0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b0dc:
    // 0x79b0dc: 0x3e00008  jr          $ra
label_79b0e0:
    if (ctx->pc == 0x79B0E0u) {
        ctx->pc = 0x79B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0DCu;
        // 0x79b0e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0E4u;
        goto label_79b0e4;
    }
    ctx->pc = 0x79B0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0DCu;
        // 0x79b0e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B0E4u;
label_79b0e4:
    // 0x79b0e4: 0x0  nop
    ctx->pc = 0x79b0e4u;
    // NOP
    ctx->pc = 0x79b0e8u;
}
} // namespace gh_r022
