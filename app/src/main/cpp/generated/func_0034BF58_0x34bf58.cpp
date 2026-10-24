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

// Function: func_0034BF58
// Address: 0x34bf58 - 0x34bfa8
void func_0034BF58_0x34bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BF58_0x34bf58");
#endif

    switch (ctx->pc) {
        case 0x34bf90u: goto label_34bf90;
        default: break;
    }

    ctx->pc = 0x34bf58u;

    // 0x34bf58: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x34bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34bf5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34bf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34bf60: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x34bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34bf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34bf68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bf6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x34bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34bf70: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34bf74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34bf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bf78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bf7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34bf80: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x34bf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bf88: 0xc0d2fea  jal         func_34BFA8
    ctx->pc = 0x34BF88u;
    SET_GPR_U32(ctx, 31, 0x34BF90u);
    ctx->pc = 0x34BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF88u;
    // 0x34bf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA8u, 0x34BF88u, 0x34BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF90u;
label_34bf90:
    // 0x34bf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bf94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34bf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bf98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bf9c: 0x80d2ff2  j           func_34BFC8
    ctx->pc = 0x34BF9Cu;
    ctx->pc = 0x34BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF9Cu;
    // 0x34bfa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFC8u, 0x34BF9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34BFA4u;
    // 0x34bfa4: 0x0  nop
    ctx->pc = 0x34bfa4u;
    // NOP
    ctx->pc = 0x34bfa8u;
}
