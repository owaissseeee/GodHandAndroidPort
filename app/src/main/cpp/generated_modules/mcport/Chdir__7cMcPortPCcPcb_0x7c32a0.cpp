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
// Function: Chdir__7cMcPortPCcPcb
// Address: 0x7c32a0 - 0x7c3300
void Chdir__7cMcPortPCcPcb_0x7c32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Chdir__7cMcPortPCcPcb_0x7c32a0");
#endif

    switch (ctx->pc) {
        case 0x7c32d0u: goto label_7c32d0;
        case 0x7c32e8u: goto label_7c32e8;
        default: break;
    }

    ctx->pc = 0x7c32a0u;

    // 0x7c32a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c32a4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x7c32a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c32a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c32a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c32ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x7c32acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c32b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c32b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c32b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x7c32b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c32b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c32bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c32bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c32c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7c32c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c32c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7c32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7c32c8: 0xc1f38ba  jal         func_7CE2E8
    ctx->pc = 0x7C32C8u;
    SET_GPR_U32(ctx, 31, 0x7C32D0u);
    ctx->pc = 0x7C32CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C32C8u;
    // 0x7c32cc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CE2E8u, 0x7C32C8u, 0x7C32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C32D0u;
label_7c32d0:
    // 0x7c32d0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C32D0u;
    {
        const bool branch_taken_0x7c32d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C32D0u;
        // 0x7c32d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c32d0) {
            ctx->pc = 0x7C32ECu;
            goto label_7c32ec;
        }
    }
    ctx->pc = 0x7C32D8u;
    // 0x7c32d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C32D8u;
    {
        const bool branch_taken_0x7c32d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c32d8) {
            ctx->pc = 0x7C32DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C32D8u;
            // 0x7c32dc: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C32F0u;
            goto label_7c32f0;
        }
    }
    ctx->pc = 0x7C32E0u;
    // 0x7c32e0: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C32E0u;
    SET_GPR_U32(ctx, 31, 0x7C32E8u);
    ctx->pc = 0x7C32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C32E0u;
    // 0x7c32e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C32E0u, 0x7C32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C32E8u;
label_7c32e8:
    // 0x7c32e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c32e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c32ec:
    // 0x7c32ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c32ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c32f0:
    // 0x7c32f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c32f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c32f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C32F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C32F4u;
        // 0x7c32f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C32F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C32FCu;
    // 0x7c32fc: 0x0  nop
    ctx->pc = 0x7c32fcu;
    // NOP
    ctx->pc = 0x7c3300u;
}
} // namespace gh_mcport
