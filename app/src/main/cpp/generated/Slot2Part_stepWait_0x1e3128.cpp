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

// Function: Slot2Part_stepWait
// Address: 0x1e3128 - 0x1e31b0
void Slot2Part_stepWait_0x1e3128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2Part_stepWait_0x1e3128");
#endif

    switch (ctx->pc) {
        case 0x1e3188u: goto label_1e3188;
        default: break;
    }

    ctx->pc = 0x1e3128u;

    // 0x1e3128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e312c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3138: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e3138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e313c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E313Cu;
    {
        const bool branch_taken_0x1e313c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E313Cu;
        // 0x1e3140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e313c) {
            ctx->pc = 0x1E3154u;
            goto label_1e3154;
        }
    }
    ctx->pc = 0x1E3144u;
    // 0x1e3144: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3144u;
    {
        const bool branch_taken_0x1e3144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3144) {
            ctx->pc = 0x1E3148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3144u;
            // 0x1e3148: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3198u;
            goto label_1e3198;
        }
    }
    ctx->pc = 0x1E314Cu;
    // 0x1e314c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E314Cu;
    {
        const bool branch_taken_0x1e314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E314Cu;
        // 0x1e3150: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e314c) {
            ctx->pc = 0x1E31A4u;
            goto label_1e31a4;
        }
    }
    ctx->pc = 0x1E3154u;
label_1e3154:
    // 0x1e3154: 0x960204c2  lhu         $v0, 0x4C2($s0)
    ctx->pc = 0x1e3154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1218)));
    // 0x1e3158: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3158u;
    {
        const bool branch_taken_0x1e3158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3158u;
        // 0x1e315c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3158) {
            ctx->pc = 0x1E3188u;
            goto label_1e3188;
        }
    }
    ctx->pc = 0x1E3160u;
    // 0x1e3160: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1e3160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3164: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3164u;
    {
        const bool branch_taken_0x1e3164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3164u;
        // 0x1e3168: 0xa60204c2  sh          $v0, 0x4C2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1218), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3164) {
            ctx->pc = 0x1E3188u;
            goto label_1e3188;
        }
    }
    ctx->pc = 0x1E316Cu;
    // 0x1e316c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e3170: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1e3170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1e3174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e317c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e3180: 0xc079148  jal         func_1E4520
    ctx->pc = 0x1E3180u;
    SET_GPR_U32(ctx, 31, 0x1E3188u);
    ctx->pc = 0x1E3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3180u;
    // 0x1e3184: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4520u, 0x1E3180u, 0x1E3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3188u;
label_1e3188:
    // 0x1e3188: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e3188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e318c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3190u;
    {
        const bool branch_taken_0x1e3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3190u;
        // 0x1e3194: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3190) {
            ctx->pc = 0x1E31A0u;
            goto label_1e31a0;
        }
    }
    ctx->pc = 0x1E3198u;
label_1e3198:
    // 0x1e3198: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e3198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e319c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e319cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e31a0:
    // 0x1e31a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e31a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e31a4:
    // 0x1e31a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e31a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e31a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E31A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31A8u;
        // 0x1e31ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E31B0u;
}
