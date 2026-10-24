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
// Function: skipToFrame__9cEventEnvii
// Address: 0x7ae1c0 - 0x7ae228
void skipToFrame__9cEventEnvii_0x7ae1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("skipToFrame__9cEventEnvii_0x7ae1c0");
#endif

    switch (ctx->pc) {
        case 0x7ae1e4u: goto label_7ae1e4;
        default: break;
    }

    ctx->pc = 0x7ae1c0u;

    // 0x7ae1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7ae1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7ae1c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7ae1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7ae1c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7ae1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7ae1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ae1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae1d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7ae1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7ae1d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7ae1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae1dc: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE1DCu;
    SET_GPR_U32(ctx, 31, 0x7AE1E4u);
    ctx->pc = 0x7AE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE1DCu;
    // 0x7ae1e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE1DCu, 0x7AE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE1E4u;
label_7ae1e4:
    // 0x7ae1e4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x7AE1E4u;
    {
        const bool branch_taken_0x7ae1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae1e4) {
            ctx->pc = 0x7AE1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE1E4u;
            // 0x7ae1e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE210u;
            goto label_7ae210;
        }
    }
    ctx->pc = 0x7AE1ECu;
    // 0x7ae1ec: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae1f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x7ae1f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ae1f4: 0x0  nop
    ctx->pc = 0x7ae1f4u;
    // NOP
    // 0x7ae1f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ae1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ae1fc: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x7ae1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x7ae200: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x7ae200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x7ae204: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x7ae208: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x7ae208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x7ae20c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7ae20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7ae210:
    // 0x7ae210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7ae210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ae214: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7ae214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae21c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE21Cu;
        // 0x7ae220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE224u;
    // 0x7ae224: 0x0  nop
    ctx->pc = 0x7ae224u;
    // NOP
    ctx->pc = 0x7ae228u;
}
} // namespace gh_event
