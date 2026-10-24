#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: __do_global_dtors
// Address: 0x79c698 - 0x79c6f0
void ps2___do_global_dtors_0x79c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79c698");
#endif

    switch (ctx->pc) {
        case 0x79c698u: goto label_79c698;
        case 0x79c69cu: goto label_79c69c;
        case 0x79c6a0u: goto label_79c6a0;
        case 0x79c6a4u: goto label_79c6a4;
        case 0x79c6a8u: goto label_79c6a8;
        case 0x79c6acu: goto label_79c6ac;
        case 0x79c6b0u: goto label_79c6b0;
        case 0x79c6b4u: goto label_79c6b4;
        case 0x79c6b8u: goto label_79c6b8;
        case 0x79c6bcu: goto label_79c6bc;
        case 0x79c6c0u: goto label_79c6c0;
        case 0x79c6c4u: goto label_79c6c4;
        case 0x79c6c8u: goto label_79c6c8;
        case 0x79c6ccu: goto label_79c6cc;
        case 0x79c6d0u: goto label_79c6d0;
        case 0x79c6d4u: goto label_79c6d4;
        case 0x79c6d8u: goto label_79c6d8;
        case 0x79c6dcu: goto label_79c6dc;
        case 0x79c6e0u: goto label_79c6e0;
        case 0x79c6e4u: goto label_79c6e4;
        case 0x79c6e8u: goto label_79c6e8;
        case 0x79c6ecu: goto label_79c6ec;
        default: break;
    }

    ctx->pc = 0x79c698u;

label_79c698:
    // 0x79c698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79c69c:
    // 0x79c69c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79c6a0:
    // 0x79c6a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79c6a4:
    // 0x79c6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79c6a8:
    // 0x79c6a8: 0x8c82c800  lw          $v0, -0x3800($a0)
    ctx->pc = 0x79c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952960)));
label_79c6ac:
    // 0x79c6ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c6b0:
    // 0x79c6b0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79c6b4:
    if (ctx->pc == 0x79C6B4u) {
        ctx->pc = 0x79C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6B0u;
        // 0x79c6b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C6B8u;
        goto label_79c6b8;
    }
    ctx->pc = 0x79C6B0u;
    {
        const bool branch_taken_0x79c6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6B0u;
        // 0x79c6b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6b0) {
            ctx->pc = 0x79C6DCu;
            goto label_79c6dc;
        }
    }
    ctx->pc = 0x79C6B8u;
label_79c6b8:
    // 0x79c6b8: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79c6bc:
    // 0x79c6bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79c6c0:
    // 0x79c6c0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79c6c4:
    // 0x79c6c4: 0x60f809  jalr        $v1
label_79c6c8:
    if (ctx->pc == 0x79C6C8u) {
        ctx->pc = 0x79C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6C4u;
        // 0x79c6c8: 0xae02c800  sw          $v0, -0x3800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C6CCu;
        goto label_79c6cc;
    }
    ctx->pc = 0x79C6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79C6CCu);
        ctx->pc = 0x79C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6C4u;
        // 0x79c6c8: 0xae02c800  sw          $v0, -0x3800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C6C4u, 0x79C6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C6CCu;
label_79c6cc:
    // 0x79c6cc: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79c6d0:
    // 0x79c6d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c6d4:
    // 0x79c6d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79c6d8:
    if (ctx->pc == 0x79C6D8u) {
        ctx->pc = 0x79C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6D4u;
        // 0x79c6d8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C6DCu;
        goto label_79c6dc;
    }
    ctx->pc = 0x79C6D4u;
    {
        const bool branch_taken_0x79c6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6D4u;
        // 0x79c6d8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6d4) {
            ctx->pc = 0x79C6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c6c0;
        }
    }
    ctx->pc = 0x79C6DCu;
label_79c6dc:
    // 0x79c6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c6e0:
    // 0x79c6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c6e4:
    // 0x79c6e4: 0x3e00008  jr          $ra
label_79c6e8:
    if (ctx->pc == 0x79C6E8u) {
        ctx->pc = 0x79C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6E4u;
        // 0x79c6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C6ECu;
        goto label_79c6ec;
    }
    ctx->pc = 0x79C6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6E4u;
        // 0x79c6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C6ECu;
label_79c6ec:
    // 0x79c6ec: 0x0  nop
    ctx->pc = 0x79c6ecu;
    // NOP
    ctx->pc = 0x79c6f0u;
}
} // namespace gh_r000
