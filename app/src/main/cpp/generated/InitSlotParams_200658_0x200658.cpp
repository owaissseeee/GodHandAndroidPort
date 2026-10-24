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

// Function: InitSlotParams_200658
// Address: 0x200658 - 0x2006b0
void InitSlotParams_200658_0x200658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSlotParams_200658_0x200658");
#endif

    switch (ctx->pc) {
        case 0x20067cu: goto label_20067c;
        case 0x200694u: goto label_200694;
        default: break;
    }

    ctx->pc = 0x200658u;

    // 0x200658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200660: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x200660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200664: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x200668: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x200668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x20066c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200670: 0x26107a78  addiu       $s0, $s0, 0x7A78
    ctx->pc = 0x200670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31352));
    // 0x200674: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x200674u;
    SET_GPR_U32(ctx, 31, 0x20067Cu);
    ctx->pc = 0x200678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200674u;
    // 0x200678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x200674u, 0x20067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20067Cu;
label_20067c:
    // 0x20067c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200680: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x200684: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x200684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x200688: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x200688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20068c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20068Cu;
    SET_GPR_U32(ctx, 31, 0x200694u);
    ctx->pc = 0x200690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20068Cu;
    // 0x200690: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20068Cu, 0x200694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200694u;
label_200694:
    // 0x200694: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x200698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20069c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20069cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2006a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2006a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2006a4: 0xe440054c  swc1        $f0, 0x54C($v0)
    ctx->pc = 0x2006a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x2006a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2006A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A8u;
        // 0x2006ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2006B0u;
}
