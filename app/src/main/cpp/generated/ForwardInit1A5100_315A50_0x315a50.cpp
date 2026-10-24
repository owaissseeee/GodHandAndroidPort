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

// Function: ForwardInit1A5100_315A50
// Address: 0x315a50 - 0x315ac0
void ForwardInit1A5100_315A50_0x315a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A5100_315A50_0x315a50");
#endif

    switch (ctx->pc) {
        case 0x315a84u: goto label_315a84;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa4u: goto label_315aa4;
        default: break;
    }

    ctx->pc = 0x315a50u;

    // 0x315a50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315a54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315a58: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315a58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315a5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315a60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315a64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315a68: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315A68u;
    {
        const bool branch_taken_0x315a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a68) {
            ctx->pc = 0x315AACu;
            goto label_315aac;
        }
    }
    ctx->pc = 0x315A70u;
    // 0x315a70: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315a74: 0x240408d0  addiu       $a0, $zero, 0x8D0
    ctx->pc = 0x315a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x315a78: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315a7c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315A7Cu;
    SET_GPR_U32(ctx, 31, 0x315A84u);
    ctx->pc = 0x315A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A7Cu;
    // 0x315a80: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315A7Cu, 0x315A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A84u;
label_315a84:
    // 0x315a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a88: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315A88u;
    {
        const bool branch_taken_0x315a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A88u;
        // 0x315a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a88) {
            ctx->pc = 0x315AACu;
            goto label_315aac;
        }
    }
    ctx->pc = 0x315A90u;
    // 0x315a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a94: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315A94u;
    SET_GPR_U32(ctx, 31, 0x315A9Cu);
    ctx->pc = 0x315A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A94u;
    // 0x315a98: 0x240608d0  addiu       $a2, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315A94u, 0x315A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A9Cu;
label_315a9c:
    // 0x315a9c: 0xc069440  jal         func_1A5100
    ctx->pc = 0x315A9Cu;
    SET_GPR_U32(ctx, 31, 0x315AA4u);
    ctx->pc = 0x315AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A9Cu;
    // 0x315aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5100u, 0x315A9Cu, 0x315AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AA4u;
label_315aa4:
    // 0x315aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315AA4u;
    {
        const bool branch_taken_0x315aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AA4u;
        // 0x315aa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315aa4) {
            ctx->pc = 0x315AB4u;
            goto label_315ab4;
        }
    }
    ctx->pc = 0x315AACu;
label_315aac:
    // 0x315aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ab0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315ab4:
    // 0x315ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x315AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB8u;
        // 0x315abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315AC0u;
}
