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

// Function: func_0034E140
// Address: 0x34e140 - 0x34e1b0
void func_0034E140_0x34e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E140_0x34e140");
#endif

    switch (ctx->pc) {
        case 0x34e150u: goto label_34e150;
        case 0x34e158u: goto label_34e158;
        case 0x34e184u: goto label_34e184;
        default: break;
    }

    ctx->pc = 0x34e140u;

    // 0x34e140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e148: 0xc0d386c  jal         func_34E1B0
    ctx->pc = 0x34E148u;
    SET_GPR_U32(ctx, 31, 0x34E150u);
    ctx->pc = 0x34E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E1B0u, 0x34E148u, 0x34E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E150u;
label_34e150:
    // 0x34e150: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E150u;
    {
        const bool branch_taken_0x34e150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E150u;
        // 0x34e154: 0x3c050076  lui         $a1, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e150) {
            ctx->pc = 0x34E178u;
            goto label_34e178;
        }
    }
    ctx->pc = 0x34E158u;
label_34e158:
    // 0x34e158: 0x0  nop
    ctx->pc = 0x34e158u;
    // NOP
    // 0x34e15c: 0x0  nop
    ctx->pc = 0x34e15cu;
    // NOP
    // 0x34e160: 0x0  nop
    ctx->pc = 0x34e160u;
    // NOP
    // 0x34e164: 0x0  nop
    ctx->pc = 0x34e164u;
    // NOP
    // 0x34e168: 0x0  nop
    ctx->pc = 0x34e168u;
    // NOP
    // 0x34e16c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x34E16Cu;
    {
        const bool branch_taken_0x34e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e16c) {
            ctx->pc = 0x34E158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e158;
        }
    }
    ctx->pc = 0x34E174u;
    // 0x34e174: 0x0  nop
    ctx->pc = 0x34e174u;
    // NOP
label_34e178:
    // 0x34e178: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34e178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34e17c: 0xc0da33a  jal         func_368CE8
    ctx->pc = 0x34E17Cu;
    SET_GPR_U32(ctx, 31, 0x34E184u);
    ctx->pc = 0x34E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E17Cu;
    // 0x34e180: 0x24a52058  addiu       $a1, $a1, 0x2058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368CE8u, 0x34E17Cu, 0x34E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E184u;
label_34e184:
    // 0x34e184: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E184u;
    {
        const bool branch_taken_0x34e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E184u;
        // 0x34e188: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e184) {
            ctx->pc = 0x34E1A0u;
            goto label_34e1a0;
        }
    }
    ctx->pc = 0x34E18Cu;
    // 0x34e18c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34e190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e194: 0x34a50d01  ori         $a1, $a1, 0xD01
    ctx->pc = 0x34e194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3329);
    // 0x34e198: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34E198u;
    ctx->pc = 0x34E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E198u;
    // 0x34e19c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34E198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E1A0u;
label_34e1a0:
    // 0x34e1a0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34e1a4: 0xac60e2e8  sw          $zero, -0x1D18($v1)
    ctx->pc = 0x34e1a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE2E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE2E8u, _value); } while (0);
    // 0x34e1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x34E1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E1A8u;
        // 0x34e1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E1B0u;
}
