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

// Function: func_00328288
// Address: 0x328288 - 0x3282d0
void func_00328288_0x328288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328288_0x328288");
#endif

    switch (ctx->pc) {
        case 0x3282a4u: goto label_3282a4;
        case 0x3282acu: goto label_3282ac;
        case 0x3282b4u: goto label_3282b4;
        default: break;
    }

    ctx->pc = 0x328288u;

    // 0x328288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32828c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32829c: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x32829Cu;
    SET_GPR_U32(ctx, 31, 0x3282A4u);
    ctx->pc = 0x3282A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32829Cu;
    // 0x3282a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x32829Cu, 0x3282A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282A4u;
label_3282a4:
    // 0x3282a4: 0xc0ca064  jal         func_328190
    ctx->pc = 0x3282A4u;
    SET_GPR_U32(ctx, 31, 0x3282ACu);
    ctx->pc = 0x3282A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282A4u;
    // 0x3282a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328190u, 0x3282A4u, 0x3282ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282ACu;
label_3282ac:
    // 0x3282ac: 0xc0ca410  jal         func_329040
    ctx->pc = 0x3282ACu;
    SET_GPR_U32(ctx, 31, 0x3282B4u);
    ctx->pc = 0x3282B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282ACu;
    // 0x3282b0: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x3282ACu, 0x3282B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282B4u;
label_3282b4:
    // 0x3282b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3282b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3282b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3282b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3282bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3282c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3282c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3282c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3282C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282C4u;
        // 0x3282c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3282C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3282CCu;
    // 0x3282cc: 0x0  nop
    ctx->pc = 0x3282ccu;
    // NOP
    ctx->pc = 0x3282d0u;
}
