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
// Function: Format__7cMcPortb
// Address: 0x7c37c8 - 0x7c3818
void Format__7cMcPortb_0x7c37c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Format__7cMcPortb_0x7c37c8");
#endif

    switch (ctx->pc) {
        case 0x7c37ecu: goto label_7c37ec;
        case 0x7c3804u: goto label_7c3804;
        default: break;
    }

    ctx->pc = 0x7c37c8u;

    // 0x7c37c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c37c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c37cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c37ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c37d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c37d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c37d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7c37d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c37d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c37d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c37dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c37dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c37e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c37e4: 0xc1f390a  jal         func_7CE428
    ctx->pc = 0x7C37E4u;
    SET_GPR_U32(ctx, 31, 0x7C37ECu);
    ctx->pc = 0x7C37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C37E4u;
    // 0x7c37e8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CE428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CE428u, 0x7C37E4u, 0x7C37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C37ECu;
label_7c37ec:
    // 0x7c37ec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C37ECu;
    {
        const bool branch_taken_0x7c37ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C37ECu;
        // 0x7c37f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c37ec) {
            ctx->pc = 0x7C3808u;
            goto label_7c3808;
        }
    }
    ctx->pc = 0x7C37F4u;
    // 0x7c37f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C37F4u;
    {
        const bool branch_taken_0x7c37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c37f4) {
            ctx->pc = 0x7C37F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C37F4u;
            // 0x7c37f8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C380Cu;
            goto label_7c380c;
        }
    }
    ctx->pc = 0x7C37FCu;
    // 0x7c37fc: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C37FCu;
    SET_GPR_U32(ctx, 31, 0x7C3804u);
    ctx->pc = 0x7C3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C37FCu;
    // 0x7c3800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C37FCu, 0x7C3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3804u;
label_7c3804:
    // 0x7c3804: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3808:
    // 0x7c3808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c380c:
    // 0x7c380c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c380cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3810: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3810u;
        // 0x7c3814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3818u;
}
} // namespace gh_mcport
