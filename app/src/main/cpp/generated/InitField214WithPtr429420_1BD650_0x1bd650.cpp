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

// Function: InitField214WithPtr429420_1BD650
// Address: 0x1bd650 - 0x1bd698
void InitField214WithPtr429420_1BD650_0x1bd650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitField214WithPtr429420_1BD650_0x1bd650");
#endif

    switch (ctx->pc) {
        case 0x1bd678u: goto label_1bd678;
        case 0x1bd684u: goto label_1bd684;
        default: break;
    }

    ctx->pc = 0x1bd650u;

    // 0x1bd650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bd654: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bd658: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bd658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bd65c: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x1bd660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd66c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bd66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd670: 0xc06f6ee  jal         func_1BDBB8
    ctx->pc = 0x1BD670u;
    SET_GPR_U32(ctx, 31, 0x1BD678u);
    ctx->pc = 0x1BD674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD670u;
    // 0x1bd674: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBB8u, 0x1BD670u, 0x1BD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD678u;
label_1bd678:
    // 0x1bd678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd67c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1BD67Cu;
    SET_GPR_U32(ctx, 31, 0x1BD684u);
    ctx->pc = 0x1BD680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD67Cu;
    // 0x1bd680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1BD67Cu, 0x1BD684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD684u;
label_1bd684:
    // 0x1bd684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bd684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd690: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD690u;
        // 0x1bd694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD698u;
}
