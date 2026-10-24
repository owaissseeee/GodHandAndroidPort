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

// Function: func_0028B148
// Address: 0x28b148 - 0x28b190
void func_0028B148_0x28b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028B148_0x28b148");
#endif

    switch (ctx->pc) {
        case 0x28b170u: goto label_28b170;
        case 0x28b17cu: goto label_28b17c;
        default: break;
    }

    ctx->pc = 0x28b148u;

    // 0x28b148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28b14c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28b150: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28b154: 0x2442a408  addiu       $v0, $v0, -0x5BF8
    ctx->pc = 0x28b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943752));
    // 0x28b158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b164: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28b164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b168: 0xc0a2faa  jal         func_28BEA8
    ctx->pc = 0x28B168u;
    SET_GPR_U32(ctx, 31, 0x28B170u);
    ctx->pc = 0x28B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B168u;
    // 0x28b16c: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BEA8u, 0x28B168u, 0x28B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B170u;
label_28b170:
    // 0x28b170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b174: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x28B174u;
    SET_GPR_U32(ctx, 31, 0x28B17Cu);
    ctx->pc = 0x28B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B174u;
    // 0x28b178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x28B174u, 0x28B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B17Cu;
label_28b17c:
    // 0x28b17c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28b17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b188: 0x3e00008  jr          $ra
    ctx->pc = 0x28B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B188u;
        // 0x28b18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B190u;
}
