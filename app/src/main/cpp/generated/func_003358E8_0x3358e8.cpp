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

// Function: func_003358E8
// Address: 0x3358e8 - 0x335950
void func_003358E8_0x3358e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003358E8_0x3358e8");
#endif

    switch (ctx->pc) {
        case 0x33592cu: goto label_33592c;
        default: break;
    }

    ctx->pc = 0x3358e8u;

    // 0x3358e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3358e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3358ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3358ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3358f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3358f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3358f4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3358F4u;
    {
        const bool branch_taken_0x3358f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3358F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358F4u;
        // 0x3358f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3358f4) {
            ctx->pc = 0x335918u;
            goto label_335918;
        }
    }
    ctx->pc = 0x3358FCu;
    // 0x3358fc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3358fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335908: 0x24844ca8  addiu       $a0, $a0, 0x4CA8
    ctx->pc = 0x335908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19624));
    // 0x33590c: 0x80cd750  j           func_335D40
    ctx->pc = 0x33590Cu;
    ctx->pc = 0x335910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33590Cu;
    // 0x335910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x33590Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335914u;
    // 0x335914: 0x0  nop
    ctx->pc = 0x335914u;
    // NOP
label_335918:
    // 0x335918: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x335918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x33591c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33591Cu;
    {
        const bool branch_taken_0x33591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33591c) {
            ctx->pc = 0x335920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33591Cu;
            // 0x335920: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335930u;
            goto label_335930;
        }
    }
    ctx->pc = 0x335924u;
    // 0x335924: 0xc0cd654  jal         func_335950
    ctx->pc = 0x335924u;
    SET_GPR_U32(ctx, 31, 0x33592Cu);
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x335924u, 0x33592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33592Cu;
label_33592c:
    // 0x33592c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x33592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_335930:
    // 0x335930: 0x58400002  blezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335930u;
    {
        const bool branch_taken_0x335930 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x335930) {
            ctx->pc = 0x335934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335930u;
            // 0x335934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33593Cu;
            goto label_33593c;
        }
    }
    ctx->pc = 0x335938u;
    // 0x335938: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33593c:
    // 0x33593c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x33593cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x335940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335948: 0x3e00008  jr          $ra
    ctx->pc = 0x335948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335948u;
        // 0x33594c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335950u;
}
