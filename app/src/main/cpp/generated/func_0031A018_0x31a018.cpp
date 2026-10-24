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

// Function: func_0031A018
// Address: 0x31a018 - 0x31a088
void func_0031A018_0x31a018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A018_0x31a018");
#endif

    switch (ctx->pc) {
        case 0x31a034u: goto label_31a034;
        default: break;
    }

    ctx->pc = 0x31a018u;

    // 0x31a018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a01c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31a020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a024: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31a024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a028: 0x24420ce8  addiu       $v0, $v0, 0xCE8
    ctx->pc = 0x31a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3304));
    // 0x31a02c: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x31A02Cu;
    SET_GPR_U32(ctx, 31, 0x31A034u);
    ctx->pc = 0x31A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A02Cu;
    // 0x31a030: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E5D0u, 0x31A02Cu, 0x31A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A034u;
label_31a034:
    // 0x31a034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a038: 0x3e00008  jr          $ra
    ctx->pc = 0x31A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A038u;
        // 0x31a03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A040u;
    // 0x31a040: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x31a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x31a044: 0x0  nop
    ctx->pc = 0x31a044u;
    // NOP
    // 0x31a048: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31a048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31a04c: 0x0  nop
    ctx->pc = 0x31a04cu;
    // NOP
    // 0x31a050: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31a050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31a054: 0x0  nop
    ctx->pc = 0x31a054u;
    // NOP
    // 0x31a058: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31a058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31a05c: 0x0  nop
    ctx->pc = 0x31a05cu;
    // NOP
    // 0x31a060: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31a060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31a064: 0x0  nop
    ctx->pc = 0x31a064u;
    // NOP
    // 0x31a068: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31a068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31a06c: 0x0  nop
    ctx->pc = 0x31a06cu;
    // NOP
    // 0x31a070: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31a070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31a074: 0x0  nop
    ctx->pc = 0x31a074u;
    // NOP
    // 0x31a078: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x31a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a07c: 0x0  nop
    ctx->pc = 0x31a07cu;
    // NOP
    // 0x31a080: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a084: 0x0  nop
    ctx->pc = 0x31a084u;
    // NOP
    ctx->pc = 0x31a088u;
}
