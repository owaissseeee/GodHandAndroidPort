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

// Function: ForwardInitBuffer_314160
// Address: 0x314160 - 0x3141d0
void ForwardInitBuffer_314160_0x314160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314160_0x314160");
#endif

    switch (ctx->pc) {
        case 0x314194u: goto label_314194;
        case 0x3141acu: goto label_3141ac;
        case 0x3141b4u: goto label_3141b4;
        default: break;
    }

    ctx->pc = 0x314160u;

    // 0x314160: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314164: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314168: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31416c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31416cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314174: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314178: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314178u;
    {
        const bool branch_taken_0x314178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314178u;
        // 0x31417c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314178) {
            ctx->pc = 0x3141BCu;
            goto label_3141bc;
        }
    }
    ctx->pc = 0x314180u;
    // 0x314180: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314184: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x314184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x314188: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31418c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31418Cu;
    SET_GPR_U32(ctx, 31, 0x314194u);
    ctx->pc = 0x314190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31418Cu;
    // 0x314190: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31418Cu, 0x314194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314194u;
label_314194:
    // 0x314194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314198: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314198u;
    {
        const bool branch_taken_0x314198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314198u;
        // 0x31419c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314198) {
            ctx->pc = 0x3141BCu;
            goto label_3141bc;
        }
    }
    ctx->pc = 0x3141A0u;
    // 0x3141a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3141a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3141A4u;
    SET_GPR_U32(ctx, 31, 0x3141ACu);
    ctx->pc = 0x3141A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3141A4u;
    // 0x3141a8: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3141A4u, 0x3141ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3141ACu;
label_3141ac:
    // 0x3141ac: 0xc063c44  jal         func_18F110
    ctx->pc = 0x3141ACu;
    SET_GPR_U32(ctx, 31, 0x3141B4u);
    ctx->pc = 0x3141B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3141ACu;
    // 0x3141b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F110u, 0x3141ACu, 0x3141B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3141B4u;
label_3141b4:
    // 0x3141b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3141B4u;
    {
        const bool branch_taken_0x3141b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3141B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141B4u;
        // 0x3141b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141b4) {
            ctx->pc = 0x3141C4u;
            goto label_3141c4;
        }
    }
    ctx->pc = 0x3141BCu;
label_3141bc:
    // 0x3141bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3141bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3141c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3141c4:
    // 0x3141c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3141c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3141c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3141C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3141CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141C8u;
        // 0x3141cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3141C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3141D0u;
}
