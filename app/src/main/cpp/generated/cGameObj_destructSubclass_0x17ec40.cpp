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

// Function: cGameObj_destructSubclass
// Address: 0x17ec40 - 0x17ec98
void cGameObj_destructSubclass_0x17ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_destructSubclass_0x17ec40");
#endif

    switch (ctx->pc) {
        case 0x17ec74u: goto label_17ec74;
        case 0x17ec80u: goto label_17ec80;
        default: break;
    }

    ctx->pc = 0x17ec40u;

    // 0x17ec40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ec44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17ec48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17ec4c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x17ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
    // 0x17ec50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ec50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ec58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ec5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ec5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec60: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x17ec64: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x17ec68: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x17ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x17ec6c: 0xc0c15de  jal         func_305778
    ctx->pc = 0x17EC6Cu;
    SET_GPR_U32(ctx, 31, 0x17EC74u);
    ctx->pc = 0x17EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC6Cu;
    // 0x17ec70: 0x2405027d  addiu       $a1, $zero, 0x27D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x17EC6Cu, 0x17EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC74u;
label_17ec74:
    // 0x17ec74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec78: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x17EC78u;
    SET_GPR_U32(ctx, 31, 0x17EC80u);
    ctx->pc = 0x17EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC78u;
    // 0x17ec7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x17EC78u, 0x17EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC80u;
label_17ec80:
    // 0x17ec80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ec80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ec84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ec84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC8Cu;
        // 0x17ec90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC94u;
    // 0x17ec94: 0x0  nop
    ctx->pc = 0x17ec94u;
    // NOP
    ctx->pc = 0x17ec98u;
}
