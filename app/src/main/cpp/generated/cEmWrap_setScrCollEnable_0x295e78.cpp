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

// Function: cEmWrap_setScrCollEnable
// Address: 0x295e78 - 0x295ee0
void cEmWrap_setScrCollEnable_0x295e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setScrCollEnable_0x295e78");
#endif

    switch (ctx->pc) {
        case 0x295e94u: goto label_295e94;
        default: break;
    }

    ctx->pc = 0x295e78u;

    // 0x295e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295e7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x295e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295e8c: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295E8Cu;
    SET_GPR_U32(ctx, 31, 0x295E94u);
    ctx->pc = 0x295E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E8Cu;
    // 0x295e90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295E8Cu, 0x295E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E94u;
label_295e94:
    // 0x295e94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x295E94u;
    {
        const bool branch_taken_0x295e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E94u;
        // 0x295e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e94) {
            ctx->pc = 0x295EC8u;
            goto label_295ec8;
        }
    }
    ctx->pc = 0x295E9Cu;
    // 0x295e9c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x295E9Cu;
    {
        const bool branch_taken_0x295e9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x295e9c) {
            ctx->pc = 0x295EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295E9Cu;
            // 0x295ea0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295EBCu;
            goto label_295ebc;
        }
    }
    ctx->pc = 0x295EA4u;
    // 0x295ea4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295ea8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x295eac: 0x8c8205a0  lw          $v0, 0x5A0($a0)
    ctx->pc = 0x295eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x295eb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x295eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x295eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295EB4u;
    {
        const bool branch_taken_0x295eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EB4u;
        // 0x295eb8: 0xac8205a0  sw          $v0, 0x5A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295eb4) {
            ctx->pc = 0x295EC8u;
            goto label_295ec8;
        }
    }
    ctx->pc = 0x295EBCu;
label_295ebc:
    // 0x295ebc: 0x8c6205a0  lw          $v0, 0x5A0($v1)
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
    // 0x295ec0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x295ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x295ec4: 0xac6205a0  sw          $v0, 0x5A0($v1)
    ctx->pc = 0x295ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1440), GPR_U32(ctx, 2));
label_295ec8:
    // 0x295ec8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x295ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x295ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295ED4u;
        // 0x295ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295EDCu;
    // 0x295edc: 0x0  nop
    ctx->pc = 0x295edcu;
    // NOP
    ctx->pc = 0x295ee0u;
}
