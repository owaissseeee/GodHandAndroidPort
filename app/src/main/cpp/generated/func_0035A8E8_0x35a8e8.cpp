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

// Function: func_0035A8E8
// Address: 0x35a8e8 - 0x35a968
void func_0035A8E8_0x35a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A8E8_0x35a8e8");
#endif

    switch (ctx->pc) {
        case 0x35a904u: goto label_35a904;
        case 0x35a918u: goto label_35a918;
        case 0x35a938u: goto label_35a938;
        default: break;
    }

    ctx->pc = 0x35a8e8u;

    // 0x35a8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a8ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35a8f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35a8f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35a8f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35a8fc: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35A8FCu;
    SET_GPR_U32(ctx, 31, 0x35A904u);
    ctx->pc = 0x35A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A8FCu;
    // 0x35a900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35A8FCu, 0x35A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A904u;
label_35a904:
    // 0x35a904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a908: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35A908u;
    {
        const bool branch_taken_0x35a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A908u;
        // 0x35a90c: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a908) {
            ctx->pc = 0x35A954u;
            goto label_35a954;
        }
    }
    ctx->pc = 0x35A910u;
    // 0x35a910: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35A910u;
    SET_GPR_U32(ctx, 31, 0x35A918u);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35A910u, 0x35A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A918u;
label_35a918:
    // 0x35a918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a91c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35a91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a920: 0x24850d30  addiu       $a1, $a0, 0xD30
    ctx->pc = 0x35a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x35a924: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x35a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a928: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x35A928u;
    {
        const bool branch_taken_0x35a928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A928u;
        // 0x35a92c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a928) {
            ctx->pc = 0x35A954u;
            goto label_35a954;
        }
    }
    ctx->pc = 0x35A930u;
    // 0x35a930: 0xc0d6a04  jal         func_35A810
    ctx->pc = 0x35A930u;
    SET_GPR_U32(ctx, 31, 0x35A938u);
    ctx->pc = 0x35A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A810u, 0x35A930u, 0x35A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A938u;
label_35a938:
    // 0x35a938: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35a938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35a93c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a940: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35A940u;
    {
        const bool branch_taken_0x35a940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a940) {
            ctx->pc = 0x35A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A940u;
            // 0x35a944: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A948u;
            goto label_35a948;
        }
    }
    ctx->pc = 0x35A948u;
label_35a948:
    // 0x35a948: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x35a948u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35a94c: 0x1012  mflo        $v0
    ctx->pc = 0x35a94cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35a950: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x35a950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_35a954:
    // 0x35a954: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35a954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a958: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35a958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a95c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35a95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a960: 0x3e00008  jr          $ra
    ctx->pc = 0x35A960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A960u;
        // 0x35a964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A968u;
}
