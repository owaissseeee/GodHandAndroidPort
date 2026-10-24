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

// Function: func_0034CDF8
// Address: 0x34cdf8 - 0x34ce80
void func_0034CDF8_0x34cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CDF8_0x34cdf8");
#endif

    switch (ctx->pc) {
        case 0x34ce20u: goto label_34ce20;
        case 0x34ce68u: goto label_34ce68;
        default: break;
    }

    ctx->pc = 0x34cdf8u;

    // 0x34cdf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34cdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34cdfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34ce00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34ce00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34ce08: 0x26500d30  addiu       $s0, $s2, 0xD30
    ctx->pc = 0x34ce08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x34ce0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34ce14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34ce18: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x34CE18u;
    SET_GPR_U32(ctx, 31, 0x34CE20u);
    ctx->pc = 0x34CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE18u;
    // 0x34ce1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34CE18u, 0x34CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE20u;
label_34ce20:
    // 0x34ce20: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x34ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x34ce24: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x34ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x34ce28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce2c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x34ce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x34ce30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34ce34: 0xae060164  sw          $a2, 0x164($s0)
    ctx->pc = 0x34ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 6));
    // 0x34ce38: 0x2467001f  addiu       $a3, $v1, 0x1F
    ctx->pc = 0x34ce38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x34ce3c: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x34ce3cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34ce40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x34ce40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce44: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x34ce44u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x34ce48: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x34ce48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x34ce4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x34ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x34ce50: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x34ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34ce54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ce58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34ce5c: 0xac460e9c  sw          $a2, 0xE9C($v0)
    ctx->pc = 0x34ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3740), GPR_U32(ctx, 6));
    // 0x34ce60: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x34CE60u;
    SET_GPR_U32(ctx, 31, 0x34CE68u);
    ctx->pc = 0x34CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CE60u;
    // 0x34ce64: 0xae030168  sw          $v1, 0x168($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34CE60u, 0x34CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE68u;
label_34ce68:
    // 0x34ce68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34ce68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ce6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34ce6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ce70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34ce70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ce74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34ce74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ce78: 0x3e00008  jr          $ra
    ctx->pc = 0x34CE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CE78u;
        // 0x34ce7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CE80u;
}
