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

// Function: cEmSetParam_resetRoom
// Address: 0x295600 - 0x295660
void cEmSetParam_resetRoom_0x295600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_resetRoom_0x295600");
#endif

    switch (ctx->pc) {
        case 0x295648u: goto label_295648;
        default: break;
    }

    ctx->pc = 0x295600u;

    // 0x295600: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x295600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x295604: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295608: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x295608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x29560c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x29560cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x295610: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295618: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x295618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x29561c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29561Cu;
    {
        const bool branch_taken_0x29561c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29561Cu;
        // 0x295620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29561c) {
            ctx->pc = 0x295650u;
            goto label_295650;
        }
    }
    ctx->pc = 0x295624u;
    // 0x295624: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x295624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x295628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29562c: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x29562cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x295630: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x295630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x295634: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x295634u;
    {
        const bool branch_taken_0x295634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x295638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295634u;
        // 0x295638: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295634) {
            ctx->pc = 0x295650u;
            goto label_295650;
        }
    }
    ctx->pc = 0x29563Cu;
    // 0x29563c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295640: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x295640u;
    SET_GPR_U32(ctx, 31, 0x295648u);
    ctx->pc = 0x295644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295640u;
    // 0x295644: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x295640u, 0x295648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295648u;
label_295648:
    // 0x295648: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x295648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29564c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x29564cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_295650:
    // 0x295650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295658: 0x3e00008  jr          $ra
    ctx->pc = 0x295658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295658u;
        // 0x29565c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295660u;
}
