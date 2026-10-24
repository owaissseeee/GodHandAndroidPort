#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Initialize__6cMcSys
// Address: 0x7c7268 - 0x7c7300
void Initialize__6cMcSys_0x7c7268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__6cMcSys_0x7c7268");
#endif

    switch (ctx->pc) {
        case 0x7c72acu: goto label_7c72ac;
        default: break;
    }

    ctx->pc = 0x7c7268u;

    // 0x7c7268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c7268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c726c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c7270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c7274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c7278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c7278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c727c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7280: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x7c7280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c7284: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x7c7284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x7c7288: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x7c7288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x7c728c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x7c728cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x7c7290: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x7c7290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x7c7294: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x7c7294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x7c7298: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x7c7298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x7c729c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x7c729cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x7c72a0: 0x92220569  lbu         $v0, 0x569($s1)
    ctx->pc = 0x7c72a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x747A09u));
    // 0x7c72a4: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C72A4u;
    SET_GPR_U32(ctx, 31, 0x7C72ACu);
    ctx->pc = 0x7C72A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C72A4u;
    // 0x7c72a8: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C72A4u, 0x7C72ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C72ACu;
label_7c72ac:
    // 0x7c72ac: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x7c72acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x7c72b0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x7c72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c72b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x7c72b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x7c72b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C72B8u;
    {
        const bool branch_taken_0x7c72b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C72B8u;
        // 0x7c72bc: 0xae220584  sw          $v0, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c72b8) {
            ctx->pc = 0x7C72D8u;
            goto label_7c72d8;
        }
    }
    ctx->pc = 0x7C72C0u;
    // 0x7c72c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c72c4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x7c72c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x7c72c8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x7c72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x7c72cc: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x7c72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c72d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c72d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c72d4: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x7c72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_7c72d8:
    // 0x7c72d8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c72dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7c72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x7c72e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c72e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c72e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7c72e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7c72e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c72e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c72ec: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x7c72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x7c72f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c72f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c72f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C72F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C72F4u;
        // 0x7c72f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C72F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C72FCu;
    // 0x7c72fc: 0x0  nop
    ctx->pc = 0x7c72fcu;
    // NOP
    ctx->pc = 0x7c7300u;
}
} // namespace gh_mcport
