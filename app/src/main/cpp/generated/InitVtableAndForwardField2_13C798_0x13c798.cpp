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

// Function: InitVtableAndForwardField2_13C798
// Address: 0x13c798 - 0x13c808
void InitVtableAndForwardField2_13C798_0x13c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtableAndForwardField2_13C798_0x13c798");
#endif

    switch (ctx->pc) {
        case 0x13c7bcu: goto label_13c7bc;
        default: break;
    }

    ctx->pc = 0x13c798u;

    // 0x13c798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c79c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13c7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c7a4: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x13c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x13c7a8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x13c7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13c7ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C7ACu;
    {
        const bool branch_taken_0x13c7ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7ACu;
        // 0x13c7b0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7ac) {
            ctx->pc = 0x13C7BCu;
            goto label_13c7bc;
        }
    }
    ctx->pc = 0x13C7B4u;
    // 0x13c7b4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x13C7B4u;
    SET_GPR_U32(ctx, 31, 0x13C7BCu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x13C7B4u, 0x13C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7BCu;
label_13c7bc:
    // 0x13c7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7C0u;
        // 0x13c7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C7C8u;
    // 0x13c7c8: 0xa087007b  sb          $a3, 0x7B($a0)
    ctx->pc = 0x13c7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 7));
    // 0x13c7cc: 0x0  nop
    ctx->pc = 0x13c7ccu;
    // NOP
    // 0x13c7d0: 0x0  nop
    ctx->pc = 0x13c7d0u;
    // NOP
    // 0x13c7d4: 0x0  nop
    ctx->pc = 0x13c7d4u;
    // NOP
    // 0x13c7d8: 0xe48c0060  swc1        $f12, 0x60($a0)
    ctx->pc = 0x13c7d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x13c7dc: 0x0  nop
    ctx->pc = 0x13c7dcu;
    // NOP
    // 0x13c7e0: 0xe48c0068  swc1        $f12, 0x68($a0)
    ctx->pc = 0x13c7e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x13c7e4: 0x0  nop
    ctx->pc = 0x13c7e4u;
    // NOP
    // 0x13c7e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c7ec: 0x0  nop
    ctx->pc = 0x13c7ecu;
    // NOP
    // 0x13c7f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c7f4: 0x0  nop
    ctx->pc = 0x13c7f4u;
    // NOP
    // 0x13c7f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c7fc: 0x0  nop
    ctx->pc = 0x13c7fcu;
    // NOP
    // 0x13c800: 0xe48e0058  swc1        $f14, 0x58($a0)
    ctx->pc = 0x13c800u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x13c804: 0x0  nop
    ctx->pc = 0x13c804u;
    // NOP
    ctx->pc = 0x13c808u;
}
