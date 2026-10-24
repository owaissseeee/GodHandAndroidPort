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

// Function: func_002D8008
// Address: 0x2d8008 - 0x2d8070
void func_002D8008_0x2d8008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D8008_0x2d8008");
#endif

    switch (ctx->pc) {
        case 0x2d8038u: goto label_2d8038;
        case 0x2d8048u: goto label_2d8048;
        default: break;
    }

    ctx->pc = 0x2d8008u;

    // 0x2d8008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d800c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d800cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d8010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d8014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d8018: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2d8018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d801c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d8020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8024: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x2d8024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x2d8028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d8028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d802c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d802cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8030: 0xc0c2934  jal         func_30A4D0
    ctx->pc = 0x2D8030u;
    SET_GPR_U32(ctx, 31, 0x2D8038u);
    ctx->pc = 0x2D8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8030u;
    // 0x2d8034: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4D0u, 0x2D8030u, 0x2D8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8038u;
label_2d8038:
    // 0x2d8038: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d803c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2d803cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d8040: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8044: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2d8044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d8048:
    // 0x2d8048: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d804c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8050: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d8050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d8054: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d8054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d8058: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D8058u;
    {
        const bool branch_taken_0x2d8058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8058u;
        // 0x2d805c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8058) {
            ctx->pc = 0x2D8048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8048;
        }
    }
    ctx->pc = 0x2D8060u;
    // 0x2d8060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d8060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8068: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8068u;
        // 0x2d806c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8070u;
}
