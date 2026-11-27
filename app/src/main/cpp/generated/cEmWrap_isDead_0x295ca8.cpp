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

// Function: cEmWrap_isDead
// Address: 0x295ca8 - 0x295ce8
void cEmWrap_isDead_0x295ca8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_isDead_0x295ca8");
#endif

    if (__builtin_expect(ctx->pc != 0x295ca8u, 0)) {
        switch (ctx->pc) {
            case 0x295cbcu: goto label_295cbc;
            case 0x295cccu: goto label_295ccc;
            default: break;
        }
    }


    // 0x295ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295cac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295cb4: 0xc0a565e  jal         func_295978
    SET_GPR_U32(ctx, 31, 0x295CBCu);
    ctx->pc = 0x295CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CB4u;
    // 0x295cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &FindResolveActor_295978_0x295978, 0x295978u, 0x295cbcu)) {
        return;
    }
label_295cbc:
    // 0x295cbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295CBCu;
    {
        const bool branch_taken_0x295cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CBCu;
        // 0x295cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cbc) {
            ctx->pc = 0x295CD4u;
            goto label_295cd4;
        }
    }
    // 0x295cc4: 0xc0a3ece  jal         func_28FB38
    SET_GPR_U32(ctx, 31, 0x295CCCu);
    ctx->pc = 0x295CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CC4u;
    // 0x295cc8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmBase_checkDeadFlag_0x28fb38, 0x28fb38u, 0x295cccu)) {
        return;
    }
label_295ccc:
    // 0x295ccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295CCCu;
    {
        const bool branch_taken_0x295ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CCCu;
        // 0x295cd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ccc) {
            ctx->pc = 0x295CD8u;
            goto label_295cd8;
        }
    }
label_295cd4:
    // 0x295cd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295cd8:
    // 0x295cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x295CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CDCu;
        // 0x295ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x295ce4: 0x0  nop
    // NOP
    ctx->pc = 0x295ce8u;
}