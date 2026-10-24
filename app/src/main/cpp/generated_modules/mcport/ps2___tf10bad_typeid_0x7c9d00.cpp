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
// Function: __tf10bad_typeid
// Address: 0x7c9d00 - 0x7c9d50
void ps2___tf10bad_typeid_0x7c9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf10bad_typeid_0x7c9d00");
#endif

    switch (ctx->pc) {
        case 0x7c9d24u: goto label_7c9d24;
        case 0x7c9d3cu: goto label_7c9d3c;
        default: break;
    }

    ctx->pc = 0x7c9d00u;

    // 0x7c9d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9d04: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9d08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9d0c: 0x8c625908  lw          $v0, 0x5908($v1)
    ctx->pc = 0x7c9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5908u));
    // 0x7c9d10: 0x24705908  addiu       $s0, $v1, 0x5908
    ctx->pc = 0x7c9d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22792));
    // 0x7c9d14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C9D14u;
    {
        const bool branch_taken_0x7c9d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9D14u;
        // 0x7c9d18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9d14) {
            ctx->pc = 0x7C9D3Cu;
            goto label_7c9d3c;
        }
    }
    ctx->pc = 0x7C9D1Cu;
    // 0x7c9d1c: 0xc1f2960  jal         func_7CA580
    ctx->pc = 0x7C9D1Cu;
    SET_GPR_U32(ctx, 31, 0x7C9D24u);
    ctx->pc = 0x7CA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA580u, 0x7C9D1Cu, 0x7C9D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9D24u;
label_7c9d24:
    // 0x7c9d24: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c9d28: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c9d28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c9d2c: 0x24a51010  addiu       $a1, $a1, 0x1010
    ctx->pc = 0x7c9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    // 0x7c9d30: 0x24c61490  addiu       $a2, $a2, 0x1490
    ctx->pc = 0x7c9d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5264));
    // 0x7c9d34: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7C9D34u;
    SET_GPR_U32(ctx, 31, 0x7C9D3Cu);
    ctx->pc = 0x7C9D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9D34u;
    // 0x7c9d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7C9D34u, 0x7C9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9D3Cu;
label_7c9d3c:
    // 0x7c9d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c9d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9d48: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9D48u;
        // 0x7c9d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9D50u;
}
} // namespace gh_mcport
