#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: initPlay__9cEventEnv
// Address: 0x7ad9b0 - 0x7ada20
void initPlay__9cEventEnv_0x7ad9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__9cEventEnv_0x7ad9b0");
#endif

    switch (ctx->pc) {
        case 0x7ad9c4u: goto label_7ad9c4;
        case 0x7ada0cu: goto label_7ada0c;
        default: break;
    }

    ctx->pc = 0x7ad9b0u;

    // 0x7ad9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ad9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ad9b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ad9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ad9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad9bc: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AD9BCu;
    SET_GPR_U32(ctx, 31, 0x7AD9C4u);
    ctx->pc = 0x7AD9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD9BCu;
    // 0x7ad9c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AD9BCu, 0x7AD9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD9C4u;
label_7ad9c4:
    // 0x7ad9c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AD9C4u;
    {
        const bool branch_taken_0x7ad9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD9C4u;
        // 0x7ad9c8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad9c4) {
            ctx->pc = 0x7AD9E0u;
            goto label_7ad9e0;
        }
    }
    ctx->pc = 0x7AD9CCu;
    // 0x7ad9cc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x7ad9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x7ad9d0: 0x8c447a78  lw          $a0, 0x7A78($v0)
    ctx->pc = 0x7ad9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
    // 0x7ad9d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7ad9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7ad9d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x7ad9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7ad9dc: 0xac447a78  sw          $a0, 0x7A78($v0)
    ctx->pc = 0x7ad9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31352), GPR_U32(ctx, 4));
label_7ad9e0:
    // 0x7ad9e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x7ad9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x7ad9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ad9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad9e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7ad9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ad9ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x7ad9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ad9f0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x7ad9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x7ad9f4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x7ad9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x7ad9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ad9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad9fc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x7ad9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x7ada00: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x7ada00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x7ada04: 0xc1eb8fe  jal         func_7AE3F8
    ctx->pc = 0x7ADA04u;
    SET_GPR_U32(ctx, 31, 0x7ADA0Cu);
    ctx->pc = 0x7ADA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADA04u;
    // 0x7ada08: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE3F8u, 0x7ADA04u, 0x7ADA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADA0Cu;
label_7ada0c:
    // 0x7ada0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ada0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ada10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ada10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ada14: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADA14u;
        // 0x7ada18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADA1Cu;
    // 0x7ada1c: 0x0  nop
    ctx->pc = 0x7ada1cu;
    // NOP
    ctx->pc = 0x7ada20u;
}
} // namespace gh_event
