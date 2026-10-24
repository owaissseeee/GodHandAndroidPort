#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf17__array_type_info
// Address: 0x7cb030 - 0x7cb080
void ps2___tf17__array_type_info_0x7cb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf17__array_type_info_0x7cb030");
#endif

    switch (ctx->pc) {
        case 0x7cb054u: goto label_7cb054;
        case 0x7cb06cu: goto label_7cb06c;
        default: break;
    }

    ctx->pc = 0x7cb030u;

    // 0x7cb030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb034: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb03c: 0x8c625938  lw          $v0, 0x5938($v1)
    ctx->pc = 0x7cb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5938u));
    // 0x7cb040: 0x24705938  addiu       $s0, $v1, 0x5938
    ctx->pc = 0x7cb040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22840));
    // 0x7cb044: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CB044u;
    {
        const bool branch_taken_0x7cb044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB044u;
        // 0x7cb048: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb044) {
            ctx->pc = 0x7CB06Cu;
            goto label_7cb06c;
        }
    }
    ctx->pc = 0x7CB04Cu;
    // 0x7cb04c: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7CB04Cu;
    SET_GPR_U32(ctx, 31, 0x7CB054u);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7CB04Cu, 0x7CB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB054u;
label_7cb054:
    // 0x7cb054: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cb054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cb058: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cb058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cb05c: 0x24a51198  addiu       $a1, $a1, 0x1198
    ctx->pc = 0x7cb05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4504));
    // 0x7cb060: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7cb060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7cb064: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CB064u;
    SET_GPR_U32(ctx, 31, 0x7CB06Cu);
    ctx->pc = 0x7CB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB064u;
    // 0x7cb068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CB064u, 0x7CB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB06Cu;
label_7cb06c:
    // 0x7cb06c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb078: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB078u;
        // 0x7cb07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB080u;
}
} // namespace gh_mcport
