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

// Function: func_00306030
// Address: 0x306030 - 0x3060b0
void func_00306030_0x306030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306030_0x306030");
#endif

    switch (ctx->pc) {
        case 0x306050u: goto label_306050;
        case 0x306060u: goto label_306060;
        default: break;
    }

    ctx->pc = 0x306030u;

    // 0x306030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306034: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x306038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30603c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306040: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306040u;
    {
        const bool branch_taken_0x306040 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x306044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306040u;
        // 0x306044: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306040) {
            ctx->pc = 0x306058u;
            goto label_306058;
        }
    }
    ctx->pc = 0x306048u;
    // 0x306048: 0xc0c17ec  jal         func_305FB0
    ctx->pc = 0x306048u;
    SET_GPR_U32(ctx, 31, 0x306050u);
    ctx->pc = 0x30604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306048u;
    // 0x30604c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305FB0u, 0x306048u, 0x306050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306050u;
label_306050:
    // 0x306050: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x306050u;
    {
        const bool branch_taken_0x306050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306050u;
        // 0x306054: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306050) {
            ctx->pc = 0x3060A0u;
            goto label_3060a0;
        }
    }
    ctx->pc = 0x306058u;
label_306058:
    // 0x306058: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x306058u;
    SET_GPR_U32(ctx, 31, 0x306060u);
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x306058u, 0x306060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306060u;
label_306060:
    // 0x306060: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x306060u;
    {
        const bool branch_taken_0x306060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306060) {
            ctx->pc = 0x306064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306060u;
            // 0x306064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30609Cu;
            goto label_30609c;
        }
    }
    ctx->pc = 0x306068u;
    // 0x306068: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30606c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30606Cu;
    {
        const bool branch_taken_0x30606c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30606Cu;
        // 0x306070: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30606c) {
            ctx->pc = 0x306084u;
            goto label_306084;
        }
    }
    ctx->pc = 0x306074u;
    // 0x306074: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x306074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x306078: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x306078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30607c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30607Cu;
    {
        const bool branch_taken_0x30607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30607Cu;
        // 0x306080: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30607c) {
            ctx->pc = 0x30608Cu;
            goto label_30608c;
        }
    }
    ctx->pc = 0x306084u;
label_306084:
    // 0x306084: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x306084u;
    {
        const bool branch_taken_0x306084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306084u;
        // 0x306088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306084) {
            ctx->pc = 0x30609Cu;
            goto label_30609c;
        }
    }
    ctx->pc = 0x30608Cu;
label_30608c:
    // 0x30608c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x306090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306094: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x306094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306098: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x306098u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_30609c:
    // 0x30609c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30609cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3060a0:
    // 0x3060a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3060a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3060a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3060A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3060A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060A4u;
        // 0x3060a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3060A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3060ACu;
    // 0x3060ac: 0x0  nop
    ctx->pc = 0x3060acu;
    // NOP
    ctx->pc = 0x3060b0u;
}
