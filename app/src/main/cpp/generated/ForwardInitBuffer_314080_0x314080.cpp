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

// Function: ForwardInitBuffer_314080
// Address: 0x314080 - 0x3140f0
void ForwardInitBuffer_314080_0x314080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314080_0x314080");
#endif

    switch (ctx->pc) {
        case 0x3140b4u: goto label_3140b4;
        case 0x3140ccu: goto label_3140cc;
        case 0x3140d4u: goto label_3140d4;
        default: break;
    }

    ctx->pc = 0x314080u;

    // 0x314080: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314084: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314088: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31408c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314090: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314094: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314098: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314098u;
    {
        const bool branch_taken_0x314098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314098u;
        // 0x31409c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314098) {
            ctx->pc = 0x3140DCu;
            goto label_3140dc;
        }
    }
    ctx->pc = 0x3140A0u;
    // 0x3140a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3140a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3140a4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x3140a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x3140a8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3140a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3140ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3140ACu;
    SET_GPR_U32(ctx, 31, 0x3140B4u);
    ctx->pc = 0x3140B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140ACu;
    // 0x3140b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3140ACu, 0x3140B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140B4u;
label_3140b4:
    // 0x3140b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3140b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3140B8u;
    {
        const bool branch_taken_0x3140b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140B8u;
        // 0x3140bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140b8) {
            ctx->pc = 0x3140DCu;
            goto label_3140dc;
        }
    }
    ctx->pc = 0x3140C0u;
    // 0x3140c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3140c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3140C4u;
    SET_GPR_U32(ctx, 31, 0x3140CCu);
    ctx->pc = 0x3140C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140C4u;
    // 0x3140c8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3140C4u, 0x3140CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140CCu;
label_3140cc:
    // 0x3140cc: 0xc063b26  jal         func_18EC98
    ctx->pc = 0x3140CCu;
    SET_GPR_U32(ctx, 31, 0x3140D4u);
    ctx->pc = 0x3140D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140CCu;
    // 0x3140d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC98u, 0x3140CCu, 0x3140D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140D4u;
label_3140d4:
    // 0x3140d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3140D4u;
    {
        const bool branch_taken_0x3140d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140D4u;
        // 0x3140d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140d4) {
            ctx->pc = 0x3140E4u;
            goto label_3140e4;
        }
    }
    ctx->pc = 0x3140DCu;
label_3140dc:
    // 0x3140dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3140dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3140e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3140e4:
    // 0x3140e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3140e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3140e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3140E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3140ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140E8u;
        // 0x3140ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3140E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3140F0u;
}
