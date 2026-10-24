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

// Function: func_002BA6B0
// Address: 0x2ba6b0 - 0x2ba6e8
void func_002BA6B0_0x2ba6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA6B0_0x2ba6b0");
#endif

    switch (ctx->pc) {
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        default: break;
    }

    ctx->pc = 0x2ba6b0u;

label_2ba6b0:
    // 0x2ba6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ba6b4:
    // 0x2ba6b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ba6b8:
    // 0x2ba6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba6bc:
    // 0x2ba6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6c0:
    // 0x2ba6c0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2ba6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2ba6c4:
    // 0x2ba6c4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2ba6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2ba6c8:
    // 0x2ba6c8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2ba6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2ba6cc:
    // 0x2ba6cc: 0x60f809  jalr        $v1
label_2ba6d0:
    if (ctx->pc == 0x2BA6D0u) {
        ctx->pc = 0x2BA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6CCu;
        // 0x2ba6d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6D4u;
        goto label_2ba6d4;
    }
    ctx->pc = 0x2BA6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA6D4u);
        ctx->pc = 0x2BA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6CCu;
        // 0x2ba6d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA6CCu, 0x2BA6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA6D4u;
label_2ba6d4:
    // 0x2ba6d4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x2ba6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_2ba6d8:
    // 0x2ba6d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba6dc:
    // 0x2ba6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba6e0:
    // 0x2ba6e0: 0x3e00008  jr          $ra
label_2ba6e4:
    if (ctx->pc == 0x2BA6E4u) {
        ctx->pc = 0x2BA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6E0u;
        // 0x2ba6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6E8u;
        goto label_fallthrough_0x2ba6e0;
    }
    ctx->pc = 0x2BA6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6E0u;
        // 0x2ba6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ba6e0:
    ctx->pc = 0x2BA6E8u;
}
