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

// Function: func_0034C748
// Address: 0x34c748 - 0x34c7b0
void func_0034C748_0x34c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C748_0x34c748");
#endif

    switch (ctx->pc) {
        case 0x34c788u: goto label_34c788;
        case 0x34c798u: goto label_34c798;
        default: break;
    }

    ctx->pc = 0x34c748u;

    // 0x34c748: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c74c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c750: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c750u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34c758: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c75c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34c760: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c764: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34c768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c76c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x34c76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c770: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x34c770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c774: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c778: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34c778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c77c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34c780: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x34C780u;
    SET_GPR_U32(ctx, 31, 0x34C788u);
    ctx->pc = 0x34C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C780u;
    // 0x34c784: 0x26101338  addiu       $s0, $s0, 0x1338 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34C780u, 0x34C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C788u;
label_34c788:
    // 0x34c788: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x34c788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x34c78c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c790: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x34C790u;
    SET_GPR_U32(ctx, 31, 0x34C798u);
    ctx->pc = 0x34C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C790u;
    // 0x34c794: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34C790u, 0x34C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C798u;
label_34c798:
    // 0x34c798: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34c798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c79c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34c79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c7a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34c7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c7a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C7A8u;
        // 0x34c7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C7B0u;
}
