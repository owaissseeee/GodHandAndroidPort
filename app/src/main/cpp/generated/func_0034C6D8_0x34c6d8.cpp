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

// Function: func_0034C6D8
// Address: 0x34c6d8 - 0x34c748
void func_0034C6D8_0x34c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C6D8_0x34c6d8");
#endif

    switch (ctx->pc) {
        case 0x34c718u: goto label_34c718;
        case 0x34c730u: goto label_34c730;
        default: break;
    }

    ctx->pc = 0x34c6d8u;

    // 0x34c6d8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c6dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c6dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34c6e0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c6e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34c6e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c6ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34c6f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c6f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34c6f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c6fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34c6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c700: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x34c700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c708: 0x26101338  addiu       $s0, $s0, 0x1338
    ctx->pc = 0x34c708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4920));
    // 0x34c70c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34c710: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x34C710u;
    SET_GPR_U32(ctx, 31, 0x34C718u);
    ctx->pc = 0x34C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C710u;
    // 0x34c714: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34C710u, 0x34C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C718u;
label_34c718:
    // 0x34c718: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c71c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c720: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34c720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x34c724: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34c728: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x34C728u;
    SET_GPR_U32(ctx, 31, 0x34C730u);
    ctx->pc = 0x34C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C728u;
    // 0x34c72c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34C728u, 0x34C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C730u;
label_34c730:
    // 0x34c730: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34c730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c734: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34c734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c738: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34c738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c73c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c740: 0x3e00008  jr          $ra
    ctx->pc = 0x34C740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C740u;
        // 0x34c744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C748u;
}
