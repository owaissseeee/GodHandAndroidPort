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

// Function: SetSlotDeadBitB_198A58
// Address: 0x198a58 - 0x198ac8
void SetSlotDeadBitB_198A58_0x198a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSlotDeadBitB_198A58_0x198a58");
#endif

    switch (ctx->pc) {
        case 0x198a8cu: goto label_198a8c;
        default: break;
    }

    ctx->pc = 0x198a58u;

    // 0x198a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198a5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x198a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198a64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x198a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198a70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x198a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x198a74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x198a78: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x198a7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198A7Cu;
    {
        const bool branch_taken_0x198a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a7c) {
            ctx->pc = 0x198A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198A7Cu;
            // 0x198a80: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198A90u;
            goto label_198a90;
        }
    }
    ctx->pc = 0x198A84u;
    // 0x198a84: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x198A84u;
    SET_GPR_U32(ctx, 31, 0x198A8Cu);
    ctx->pc = 0x198A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A84u;
    // 0x198a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x198A84u, 0x198A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A8Cu;
label_198a8c:
    // 0x198a8c: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_198a90:
    // 0x198a90: 0x262309d0  addiu       $v1, $s1, 0x9D0
    ctx->pc = 0x198a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2512));
    // 0x198a94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198a98: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x198a9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198aa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x198aa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x198aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198aa8: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x198aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x198aac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198ab0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198abc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x198abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x198ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x198AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AC0u;
        // 0x198ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198AC8u;
}
