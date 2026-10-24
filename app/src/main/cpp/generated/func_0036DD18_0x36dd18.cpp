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

// Function: func_0036DD18
// Address: 0x36dd18 - 0x36dda0
void func_0036DD18_0x36dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DD18_0x36dd18");
#endif

    switch (ctx->pc) {
        case 0x36dd38u: goto label_36dd38;
        default: break;
    }

    ctx->pc = 0x36dd18u;

    // 0x36dd18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36dd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36dd1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36dd24: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x36dd24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36dd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36dd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36dd30: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x36DD30u;
    SET_GPR_U32(ctx, 31, 0x36DD38u);
    ctx->pc = 0x36DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD30u;
    // 0x36dd34: 0x240604d0  addiu       $a2, $zero, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x36DD30u, 0x36DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD38u;
label_36dd38:
    // 0x36dd38: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x36dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36dd3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dd40: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x36dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x36dd44: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x36dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x36dd48: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x36dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x36dd4c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x36dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x36dd50: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x36dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x36dd54: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x36dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x36dd58: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x36dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x36dd5c: 0xae00040c  sw          $zero, 0x40C($s0)
    ctx->pc = 0x36dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 0));
    // 0x36dd60: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x36dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x36dd64: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x36dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x36dd68: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x36dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
    // 0x36dd6c: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x36dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x36dd70: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x36dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x36dd74: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x36dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x36dd78: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x36dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x36dd7c: 0xae00049c  sw          $zero, 0x49C($s0)
    ctx->pc = 0x36dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 0));
    // 0x36dd80: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x36dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
    // 0x36dd84: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x36dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x36dd88: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x36dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x36dd8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36dd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dd90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dd94: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DD94u;
        // 0x36dd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD9Cu;
    // 0x36dd9c: 0x0  nop
    ctx->pc = 0x36dd9cu;
    // NOP
    ctx->pc = 0x36dda0u;
}
