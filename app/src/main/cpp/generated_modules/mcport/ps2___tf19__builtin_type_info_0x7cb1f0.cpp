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
// Function: __tf19__builtin_type_info
// Address: 0x7cb1f0 - 0x7cb240
void ps2___tf19__builtin_type_info_0x7cb1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf19__builtin_type_info_0x7cb1f0");
#endif

    switch (ctx->pc) {
        case 0x7cb214u: goto label_7cb214;
        case 0x7cb22cu: goto label_7cb22c;
        default: break;
    }

    ctx->pc = 0x7cb1f0u;

    // 0x7cb1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb1f4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb1fc: 0x8c625978  lw          $v0, 0x5978($v1)
    ctx->pc = 0x7cb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5978u));
    // 0x7cb200: 0x24705978  addiu       $s0, $v1, 0x5978
    ctx->pc = 0x7cb200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22904));
    // 0x7cb204: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CB204u;
    {
        const bool branch_taken_0x7cb204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB204u;
        // 0x7cb208: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb204) {
            ctx->pc = 0x7CB22Cu;
            goto label_7cb22c;
        }
    }
    ctx->pc = 0x7CB20Cu;
    // 0x7cb20c: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7CB20Cu;
    SET_GPR_U32(ctx, 31, 0x7CB214u);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7CB20Cu, 0x7CB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB214u;
label_7cb214:
    // 0x7cb214: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cb214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cb218: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cb218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cb21c: 0x24a511f8  addiu       $a1, $a1, 0x11F8
    ctx->pc = 0x7cb21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x7cb220: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7cb220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7cb224: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CB224u;
    SET_GPR_U32(ctx, 31, 0x7CB22Cu);
    ctx->pc = 0x7CB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB224u;
    // 0x7cb228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CB224u, 0x7CB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB22Cu;
label_7cb22c:
    // 0x7cb22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb238: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB238u;
        // 0x7cb23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB240u;
}
} // namespace gh_mcport
