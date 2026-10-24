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

// Function: ForwardCheckedRequest_2BED60
// Address: 0x2bed60 - 0x2bedc8
void ForwardCheckedRequest_2BED60_0x2bed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardCheckedRequest_2BED60_0x2bed60");
#endif

    switch (ctx->pc) {
        case 0x2bed98u: goto label_2bed98;
        case 0x2beda4u: goto label_2beda4;
        default: break;
    }

    ctx->pc = 0x2bed60u;

    // 0x2bed60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bed64: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bed68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bed6c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2bed6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2bed70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bed74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bed74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed78: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x2bed78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x2bed7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bed7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bed84: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x2bed84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2bed88: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BED88u;
    {
        const bool branch_taken_0x2bed88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED88u;
        // 0x2bed8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed88) {
            ctx->pc = 0x2BEDACu;
            goto label_2bedac;
        }
    }
    ctx->pc = 0x2BED90u;
    // 0x2bed90: 0xc0afaf2  jal         func_2BEBC8
    ctx->pc = 0x2BED90u;
    SET_GPR_U32(ctx, 31, 0x2BED98u);
    ctx->pc = 0x2BED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED90u;
    // 0x2bed94: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEBC8u, 0x2BED90u, 0x2BED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED98u;
label_2bed98:
    // 0x2bed98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed9c: 0xc0afb42  jal         func_2BED08
    ctx->pc = 0x2BED9Cu;
    SET_GPR_U32(ctx, 31, 0x2BEDA4u);
    ctx->pc = 0x2BEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED9Cu;
    // 0x2beda0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED08u, 0x2BED9Cu, 0x2BEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDA4u;
label_2beda4:
    // 0x2beda4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BEDA4u;
    {
        const bool branch_taken_0x2beda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDA4u;
        // 0x2beda8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beda4) {
            ctx->pc = 0x2BEDB0u;
            goto label_2bedb0;
        }
    }
    ctx->pc = 0x2BEDACu;
label_2bedac:
    // 0x2bedac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bedacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bedb0:
    // 0x2bedb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bedb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bedb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bedb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bedb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bedb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bedbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bedbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bedc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDC0u;
        // 0x2bedc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDC8u;
}
