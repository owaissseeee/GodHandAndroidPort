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

// Function: func_0033AB68
// Address: 0x33ab68 - 0x33abd0
void func_0033AB68_0x33ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033AB68_0x33ab68");
#endif

    switch (ctx->pc) {
        case 0x33ab94u: goto label_33ab94;
        case 0x33aba8u: goto label_33aba8;
        case 0x33abb0u: goto label_33abb0;
        default: break;
    }

    ctx->pc = 0x33ab68u;

    // 0x33ab68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ab6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ab70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ab70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ab78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ab78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ab80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33ab80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33ab88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33ab8c: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33AB8Cu;
    SET_GPR_U32(ctx, 31, 0x33AB94u);
    ctx->pc = 0x33AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AB8Cu;
    // 0x33ab90: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33AB8Cu, 0x33AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB94u;
label_33ab94:
    // 0x33ab94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33ab98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ab9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ab9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aba0: 0xc0ceaf4  jal         func_33ABD0
    ctx->pc = 0x33ABA0u;
    SET_GPR_U32(ctx, 31, 0x33ABA8u);
    ctx->pc = 0x33ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABA0u;
    // 0x33aba4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABD0u, 0x33ABA0u, 0x33ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABA8u;
label_33aba8:
    // 0x33aba8: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x33ABA8u;
    SET_GPR_U32(ctx, 31, 0x33ABB0u);
    ctx->pc = 0x33ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABA8u;
    // 0x33abac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33ABA8u, 0x33ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ABB0u;
label_33abb0:
    // 0x33abb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33abb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33abb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33abb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33abb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33abb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33abbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33abbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33abc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33abc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33abc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33abc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x33ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABC8u;
        // 0x33abcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ABD0u;
}
