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

// Function: func_0013F150
// Address: 0x13f150 - 0x13f1c0
void func_0013F150_0x13f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013F150_0x13f150");
#endif

    switch (ctx->pc) {
        case 0x13f170u: goto label_13f170;
        case 0x13f180u: goto label_13f180;
        case 0x13f188u: goto label_13f188;
        default: break;
    }

    ctx->pc = 0x13f150u;

    // 0x13f150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13f154: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13f158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f15c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13f160: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13f164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f168: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13F168u;
    SET_GPR_U32(ctx, 31, 0x13F170u);
    ctx->pc = 0x13F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F168u;
    // 0x13f16c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13F168u, 0x13F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F170u;
label_13f170:
    // 0x13f170: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x13f170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x13f174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f178: 0xa222001c  sb          $v0, 0x1C($s1)
    ctx->pc = 0x13f178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x13f17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f180:
    // 0x13f180: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13F180u;
    SET_GPR_U32(ctx, 31, 0x13F188u);
    ctx->pc = 0x13F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F180u;
    // 0x13f184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13F180u, 0x13F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F188u;
label_13f188:
    // 0x13f188: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13f18c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13f190: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13f194: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13f194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13f198: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f19c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x13f19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x13f1a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13F1A0u;
    {
        const bool branch_taken_0x13f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1A0u;
        // 0x13f1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1a0) {
            ctx->pc = 0x13F180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f180;
        }
    }
    ctx->pc = 0x13F1A8u;
    // 0x13f1a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13f1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f1ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13f1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f1b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13f1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1B8u;
        // 0x13f1bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F1C0u;
}
