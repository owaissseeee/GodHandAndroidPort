#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sfmpv_CalcDistance
// Address: 0x351108 - 0x351170
void sfmpv_CalcDistance_0x351108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_CalcDistance_0x351108");
#endif

    ctx->pc = 0x351108u;

    // 0x351108: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x351108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35110c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35110cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351110: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x351114: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x351114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x351118: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351118u;
    {
        const bool branch_taken_0x351118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351118u;
        // 0x35111c: 0xc32023  subu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351118) {
            ctx->pc = 0x351134u;
            goto label_351134;
        }
    }
    ctx->pc = 0x351120u;
    // 0x351120: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x351124: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x351124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351128: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x351128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35112c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35112Cu;
    {
        const bool branch_taken_0x35112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35112c) {
            ctx->pc = 0x351164u;
            goto label_351164;
        }
    }
    ctx->pc = 0x351134u;
label_351134:
    // 0x351134: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x351134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x351138: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x351138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x35113c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35113Cu;
    {
        const bool branch_taken_0x35113c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35113Cu;
        // 0x351140: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35113c) {
            ctx->pc = 0x351164u;
            goto label_351164;
        }
    }
    ctx->pc = 0x351144u;
    // 0x351144: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x351144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x351148: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x351148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x35114c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x35114cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x351150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351150u;
    {
        const bool branch_taken_0x351150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351150) {
            ctx->pc = 0x351164u;
            goto label_351164;
        }
    }
    ctx->pc = 0x351158u;
    // 0x351158: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x351158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35115c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x35115cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x351160: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_351164:
    // 0x351164: 0x3e00008  jr          $ra
    ctx->pc = 0x351164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351164u;
        // 0x351168: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35116Cu;
    // 0x35116c: 0x0  nop
    ctx->pc = 0x35116cu;
    // NOP
    ctx->pc = 0x351170u;
}
