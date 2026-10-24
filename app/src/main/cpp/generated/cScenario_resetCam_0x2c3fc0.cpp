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

// Function: cScenario_resetCam
// Address: 0x2c3fc0 - 0x2c4040
void cScenario_resetCam_0x2c3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_resetCam_0x2c3fc0");
#endif

    switch (ctx->pc) {
        case 0x2c4004u: goto label_2c4004;
        case 0x2c4010u: goto label_2c4010;
        case 0x2c4018u: goto label_2c4018;
        case 0x2c4028u: goto label_2c4028;
        default: break;
    }

    ctx->pc = 0x2c3fc0u;

    // 0x2c3fc0: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2c3fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x2c3fc4: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x2c3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x2c3fc8: 0x8cc37a78  lw          $v1, 0x7A78($a2)
    ctx->pc = 0x2c3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x2c3fcc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3fd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3fd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c3fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3fdc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2c3fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2c3fe0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c3fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fec: 0x24b03050  addiu       $s0, $a1, 0x3050
    ctx->pc = 0x2c3fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x2c3ff0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3FF0u;
    {
        const bool branch_taken_0x2c3ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FF0u;
        // 0x2c3ff4: 0xacc37a78  sw          $v1, 0x7A78($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 31352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ff0) {
            ctx->pc = 0x2C4004u;
            goto label_2c4004;
        }
    }
    ctx->pc = 0x2C3FF8u;
    // 0x2c3ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ffc: 0xc04ee6e  jal         func_13B9B8
    ctx->pc = 0x2C3FFCu;
    SET_GPR_U32(ctx, 31, 0x2C4004u);
    ctx->pc = 0x2C4000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3FFCu;
    // 0x2c4000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9B8u, 0x2C3FFCu, 0x2C4004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4004u;
label_2c4004:
    // 0x2c4004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4008: 0xc04e350  jal         func_138D40
    ctx->pc = 0x2C4008u;
    SET_GPR_U32(ctx, 31, 0x2C4010u);
    ctx->pc = 0x2C400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4008u;
    // 0x2c400c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x2C4008u, 0x2C4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4010u;
label_2c4010:
    // 0x2c4010: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C4010u;
    SET_GPR_U32(ctx, 31, 0x2C4018u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C4010u, 0x2C4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4018u;
label_2c4018:
    // 0x2c4018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c401c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c401cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4020: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2C4020u;
    SET_GPR_U32(ctx, 31, 0x2C4028u);
    ctx->pc = 0x2C4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4020u;
    // 0x2c4024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2C4020u, 0x2C4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4028u;
label_2c4028:
    // 0x2c4028: 0xa2200111  sb          $zero, 0x111($s1)
    ctx->pc = 0x2c4028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 273), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c402c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c402cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4038: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4038u;
        // 0x2c403c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4040u;
}
