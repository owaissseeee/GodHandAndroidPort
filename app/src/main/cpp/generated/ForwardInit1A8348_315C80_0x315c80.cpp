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

// Function: ForwardInit1A8348_315C80
// Address: 0x315c80 - 0x315cf0
void ForwardInit1A8348_315C80_0x315c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A8348_315C80_0x315c80");
#endif

    switch (ctx->pc) {
        case 0x315cb4u: goto label_315cb4;
        case 0x315cccu: goto label_315ccc;
        case 0x315cd4u: goto label_315cd4;
        default: break;
    }

    ctx->pc = 0x315c80u;

    // 0x315c80: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315c84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315c88: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315c8c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315c90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315c94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315c98: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315C98u;
    {
        const bool branch_taken_0x315c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C98u;
        // 0x315c9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c98) {
            ctx->pc = 0x315CDCu;
            goto label_315cdc;
        }
    }
    ctx->pc = 0x315CA0u;
    // 0x315ca0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315ca4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x315ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x315ca8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315cac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315CACu;
    SET_GPR_U32(ctx, 31, 0x315CB4u);
    ctx->pc = 0x315CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CACu;
    // 0x315cb0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315CACu, 0x315CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CB4u;
label_315cb4:
    // 0x315cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315cb8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315CB8u;
    {
        const bool branch_taken_0x315cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CB8u;
        // 0x315cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cb8) {
            ctx->pc = 0x315CDCu;
            goto label_315cdc;
        }
    }
    ctx->pc = 0x315CC0u;
    // 0x315cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315cc4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315CC4u;
    SET_GPR_U32(ctx, 31, 0x315CCCu);
    ctx->pc = 0x315CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CC4u;
    // 0x315cc8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315CC4u, 0x315CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CCCu;
label_315ccc:
    // 0x315ccc: 0xc06a0d2  jal         func_1A8348
    ctx->pc = 0x315CCCu;
    SET_GPR_U32(ctx, 31, 0x315CD4u);
    ctx->pc = 0x315CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CCCu;
    // 0x315cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8348u, 0x315CCCu, 0x315CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CD4u;
label_315cd4:
    // 0x315cd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315CD4u;
    {
        const bool branch_taken_0x315cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CD4u;
        // 0x315cd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cd4) {
            ctx->pc = 0x315CE4u;
            goto label_315ce4;
        }
    }
    ctx->pc = 0x315CDCu;
label_315cdc:
    // 0x315cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315ce4:
    // 0x315ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x315CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CE8u;
        // 0x315cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315CF0u;
}
