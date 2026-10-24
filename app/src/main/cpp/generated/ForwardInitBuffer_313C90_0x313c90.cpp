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

// Function: ForwardInitBuffer_313C90
// Address: 0x313c90 - 0x313d00
void ForwardInitBuffer_313C90_0x313c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313C90_0x313c90");
#endif

    switch (ctx->pc) {
        case 0x313cc4u: goto label_313cc4;
        case 0x313cdcu: goto label_313cdc;
        case 0x313ce4u: goto label_313ce4;
        default: break;
    }

    ctx->pc = 0x313c90u;

    // 0x313c90: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313c94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313c98: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313c98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313c9c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313ca4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313ca8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313CA8u;
    {
        const bool branch_taken_0x313ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CA8u;
        // 0x313cac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ca8) {
            ctx->pc = 0x313CECu;
            goto label_313cec;
        }
    }
    ctx->pc = 0x313CB0u;
    // 0x313cb0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313cb4: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x313cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x313cb8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313cbc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313CBCu;
    SET_GPR_U32(ctx, 31, 0x313CC4u);
    ctx->pc = 0x313CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313CBCu;
    // 0x313cc0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313CBCu, 0x313CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313CC4u;
label_313cc4:
    // 0x313cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cc8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313CC8u;
    {
        const bool branch_taken_0x313cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CC8u;
        // 0x313ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cc8) {
            ctx->pc = 0x313CECu;
            goto label_313cec;
        }
    }
    ctx->pc = 0x313CD0u;
    // 0x313cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cd4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313CD4u;
    SET_GPR_U32(ctx, 31, 0x313CDCu);
    ctx->pc = 0x313CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313CD4u;
    // 0x313cd8: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313CD4u, 0x313CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313CDCu;
label_313cdc:
    // 0x313cdc: 0xc06229a  jal         func_188A68
    ctx->pc = 0x313CDCu;
    SET_GPR_U32(ctx, 31, 0x313CE4u);
    ctx->pc = 0x313CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313CDCu;
    // 0x313ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188A68u, 0x313CDCu, 0x313CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313CE4u;
label_313ce4:
    // 0x313ce4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313CE4u;
    {
        const bool branch_taken_0x313ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CE4u;
        // 0x313ce8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ce4) {
            ctx->pc = 0x313CF4u;
            goto label_313cf4;
        }
    }
    ctx->pc = 0x313CECu;
label_313cec:
    // 0x313cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313cf4:
    // 0x313cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x313CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CF8u;
        // 0x313cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313D00u;
}
