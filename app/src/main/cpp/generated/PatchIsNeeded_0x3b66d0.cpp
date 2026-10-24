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

// Function: PatchIsNeeded
// Address: 0x3b66d0 - 0x3b6738
void PatchIsNeeded_0x3b66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PatchIsNeeded_0x3b66d0");
#endif

    switch (ctx->pc) {
        case 0x3b66e4u: goto label_3b66e4;
        case 0x3b6708u: goto label_3b6708;
        case 0x3b6710u: goto label_3b6710;
        case 0x3b6718u: goto label_3b6718;
        default: break;
    }

    ctx->pc = 0x3b66d0u;

    // 0x3b66d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b66d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b66d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b66dc: 0xc0ebf54  jal         func_3AFD50
    ctx->pc = 0x3B66DCu;
    SET_GPR_U32(ctx, 31, 0x3B66E4u);
    ctx->pc = 0x3B66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B66DCu;
    // 0x3b66e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD50u, 0x3B66DCu, 0x3B66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66E4u;
label_3b66e4:
    // 0x3b66e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3b66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b66e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3b66ec: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x3b66ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x3b66f0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x3b66f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3b66f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b66f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b66f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b66f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b66fc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3b66fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3b6700: 0xc0ebf50  jal         func_3AFD40
    ctx->pc = 0x3B6700u;
    SET_GPR_U32(ctx, 31, 0x3B6708u);
    ctx->pc = 0x3B6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6700u;
    // 0x3b6704: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD40u, 0x3B6700u, 0x3B6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6708u;
label_3b6708:
    // 0x3b6708: 0xc0ebf54  jal         func_3AFD50
    ctx->pc = 0x3B6708u;
    SET_GPR_U32(ctx, 31, 0x3B6710u);
    ctx->pc = 0x3B670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6708u;
    // 0x3b670c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD50u, 0x3B6708u, 0x3B6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6710u;
label_3b6710:
    // 0x3b6710: 0xc0ebf50  jal         func_3AFD40
    ctx->pc = 0x3B6710u;
    SET_GPR_U32(ctx, 31, 0x3B6718u);
    ctx->pc = 0x3B6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6710u;
    // 0x3b6714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD40u, 0x3B6710u, 0x3B6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6718u;
label_3b6718:
    // 0x3b6718: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3b6718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b671c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6720: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x3b6720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3b6724: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b6724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6728: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3b6728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3b672c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3b672cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3b6730: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6730u;
        // 0x3b6734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6738u;
}
