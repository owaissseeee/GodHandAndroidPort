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

// Function: cActionButtonEnt_reset
// Address: 0x1f7228 - 0x1f72c0
void cActionButtonEnt_reset_0x1f7228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cActionButtonEnt_reset_0x1f7228");
#endif

    switch (ctx->pc) {
        case 0x1f7248u: goto label_1f7248;
        default: break;
    }

    ctx->pc = 0x1f7228u;

    // 0x1f7228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f722c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7238: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1f7238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1f723c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f723cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7240: 0xc07de08  jal         func_1F7820
    ctx->pc = 0x1F7240u;
    SET_GPR_U32(ctx, 31, 0x1F7248u);
    ctx->pc = 0x1F7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7240u;
    // 0x1f7244: 0x24848288  addiu       $a0, $a0, -0x7D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7820u, 0x1F7240u, 0x1F7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7248u;
label_1f7248:
    // 0x1f7248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f7248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f724c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7250: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1f7250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1f7254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7258: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f7258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f725c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1f7260: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1f7260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f7264: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f7264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f7268: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1f7268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1f726c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1f726cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1f7270: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1f7270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1f7274: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1f7274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1f7278: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f7278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1f727c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1f727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1f7280: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1f7280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1f7284: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1f7284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1f7288: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1f7288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1f728c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f728cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1f7290: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1f7290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7294: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x1f7294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7298: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x1f7298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f729c: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x1f729cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f72a0: 0xa2000036  sb          $zero, 0x36($s0)
    ctx->pc = 0x1f72a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f72a4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1f72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1f72a8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1f72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1f72ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f72acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f72b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f72b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f72b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F72B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72B4u;
        // 0x1f72b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F72B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F72BCu;
    // 0x1f72bc: 0x0  nop
    ctx->pc = 0x1f72bcu;
    // NOP
    ctx->pc = 0x1f72c0u;
}
