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

// Function: ForwardInitBuffer_314470
// Address: 0x314470 - 0x3144e0
void ForwardInitBuffer_314470_0x314470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314470_0x314470");
#endif

    switch (ctx->pc) {
        case 0x3144a4u: goto label_3144a4;
        case 0x3144bcu: goto label_3144bc;
        case 0x3144c4u: goto label_3144c4;
        default: break;
    }

    ctx->pc = 0x314470u;

    // 0x314470: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314474: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314478: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31447c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31447cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314484: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314488: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314488u;
    {
        const bool branch_taken_0x314488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314488u;
        // 0x31448c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314488) {
            ctx->pc = 0x3144CCu;
            goto label_3144cc;
        }
    }
    ctx->pc = 0x314490u;
    // 0x314490: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314494: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x314494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x314498: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31449c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31449Cu;
    SET_GPR_U32(ctx, 31, 0x3144A4u);
    ctx->pc = 0x3144A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31449Cu;
    // 0x3144a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31449Cu, 0x3144A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144A4u;
label_3144a4:
    // 0x3144a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3144a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3144A8u;
    {
        const bool branch_taken_0x3144a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144A8u;
        // 0x3144ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144a8) {
            ctx->pc = 0x3144CCu;
            goto label_3144cc;
        }
    }
    ctx->pc = 0x3144B0u;
    // 0x3144b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3144b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3144B4u;
    SET_GPR_U32(ctx, 31, 0x3144BCu);
    ctx->pc = 0x3144B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144B4u;
    // 0x3144b8: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3144B4u, 0x3144BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144BCu;
label_3144bc:
    // 0x3144bc: 0xc064b0e  jal         func_192C38
    ctx->pc = 0x3144BCu;
    SET_GPR_U32(ctx, 31, 0x3144C4u);
    ctx->pc = 0x3144C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144BCu;
    // 0x3144c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C38u, 0x3144BCu, 0x3144C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144C4u;
label_3144c4:
    // 0x3144c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3144C4u;
    {
        const bool branch_taken_0x3144c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144C4u;
        // 0x3144c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144c4) {
            ctx->pc = 0x3144D4u;
            goto label_3144d4;
        }
    }
    ctx->pc = 0x3144CCu;
label_3144cc:
    // 0x3144cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3144ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3144d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3144d4:
    // 0x3144d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3144d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3144d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3144D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3144DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144D8u;
        // 0x3144dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3144D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3144E0u;
}
