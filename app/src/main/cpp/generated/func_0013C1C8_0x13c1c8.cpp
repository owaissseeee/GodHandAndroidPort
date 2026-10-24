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

// Function: func_0013C1C8
// Address: 0x13c1c8 - 0x13c220
void func_0013C1C8_0x13c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C1C8_0x13c1c8");
#endif

    switch (ctx->pc) {
        case 0x13c1ecu: goto label_13c1ec;
        case 0x13c204u: goto label_13c204;
        default: break;
    }

    ctx->pc = 0x13c1c8u;

    // 0x13c1c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c1cc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13c1d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13c1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13c1d4: 0x8c6255a8  lw          $v0, 0x55A8($v1)
    ctx->pc = 0x13c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7855A8u));
    // 0x13c1d8: 0x247055a8  addiu       $s0, $v1, 0x55A8
    ctx->pc = 0x13c1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21928));
    // 0x13c1dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C1DCu;
    {
        const bool branch_taken_0x13c1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1DCu;
        // 0x13c1e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1dc) {
            ctx->pc = 0x13C204u;
            goto label_13c204;
        }
    }
    ctx->pc = 0x13C1E4u;
    // 0x13c1e4: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13C1E4u;
    SET_GPR_U32(ctx, 31, 0x13C1ECu);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13C1E4u, 0x13C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C1ECu;
label_13c1ec:
    // 0x13c1ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13c1f0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13c1f4: 0x24a5dc58  addiu       $a1, $a1, -0x23A8
    ctx->pc = 0x13c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958168));
    // 0x13c1f8: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13c1fc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13C1FCu;
    SET_GPR_U32(ctx, 31, 0x13C204u);
    ctx->pc = 0x13C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C1FCu;
    // 0x13c200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13C1FCu, 0x13C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C204u;
label_13c204:
    // 0x13c204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c20c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13c20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c210: 0x3e00008  jr          $ra
    ctx->pc = 0x13C210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C210u;
        // 0x13c214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C218u;
    // 0x13c218: 0xe48c00a0  swc1        $f12, 0xA0($a0)
    ctx->pc = 0x13c218u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x13c21c: 0x0  nop
    ctx->pc = 0x13c21cu;
    // NOP
    ctx->pc = 0x13c220u;
}
