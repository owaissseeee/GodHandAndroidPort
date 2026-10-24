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

// Function: func_003545F8
// Address: 0x3545f8 - 0x354650
void func_003545F8_0x3545f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003545F8_0x3545f8");
#endif

    switch (ctx->pc) {
        case 0x354614u: goto label_354614;
        case 0x354630u: goto label_354630;
        case 0x35463cu: goto label_35463c;
        default: break;
    }

    ctx->pc = 0x3545f8u;

    // 0x3545f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3545f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3545fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3545fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x354600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354604: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x354608: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x354608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35460c: 0xc0d3224  jal         func_34C890
    ctx->pc = 0x35460Cu;
    SET_GPR_U32(ctx, 31, 0x354614u);
    ctx->pc = 0x354610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35460Cu;
    // 0x354610: 0x8e051fc8  lw          $a1, 0x1FC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C890u, 0x35460Cu, 0x354614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354614u;
label_354614:
    // 0x354614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x354614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354618: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x354618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x35461c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x35461cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x354620: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x354620u;
    {
        const bool branch_taken_0x354620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354620u;
        // 0x354624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354620) {
            ctx->pc = 0x354640u;
            goto label_354640;
        }
    }
    ctx->pc = 0x354628u;
    // 0x354628: 0xc0d32be  jal         func_34CAF8
    ctx->pc = 0x354628u;
    SET_GPR_U32(ctx, 31, 0x354630u);
    ctx->pc = 0x34CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAF8u, 0x354628u, 0x354630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354630u;
label_354630:
    // 0x354630: 0xde0409a0  ld          $a0, 0x9A0($s0)
    ctx->pc = 0x354630u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x354634: 0xc0d332c  jal         func_34CCB0
    ctx->pc = 0x354634u;
    SET_GPR_U32(ctx, 31, 0x35463Cu);
    ctx->pc = 0x354638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354634u;
    // 0x354638: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCB0u, 0x354634u, 0x35463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35463Cu;
label_35463c:
    // 0x35463c: 0xfe0209a0  sd          $v0, 0x9A0($s0)
    ctx->pc = 0x35463cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2464), GPR_U64(ctx, 2));
label_354640:
    // 0x354640: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x354640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354644: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354648: 0x3e00008  jr          $ra
    ctx->pc = 0x354648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354648u;
        // 0x35464c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354650u;
}
