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

// Function: func_00348968
// Address: 0x348968 - 0x3489b0
void func_00348968_0x348968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348968_0x348968");
#endif

    switch (ctx->pc) {
        case 0x348980u: goto label_348980;
        default: break;
    }

    ctx->pc = 0x348968u;

    // 0x348968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34896c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348974: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x348978: 0xc0d224e  jal         func_348938
    ctx->pc = 0x348978u;
    SET_GPR_U32(ctx, 31, 0x348980u);
    ctx->pc = 0x34897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348978u;
    // 0x34897c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x348978u, 0x348980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348980u;
label_348980:
    // 0x348980: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348980u;
    {
        const bool branch_taken_0x348980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348980u;
        // 0x348984: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348980) {
            ctx->pc = 0x34899Cu;
            goto label_34899c;
        }
    }
    ctx->pc = 0x348988u;
    // 0x348988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x348988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34898c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34898Cu;
    {
        const bool branch_taken_0x34898c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x348990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34898Cu;
        // 0x348990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34898c) {
            ctx->pc = 0x34899Cu;
            goto label_34899c;
        }
    }
    ctx->pc = 0x348994u;
    // 0x348994: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x348994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x348998: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x348998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34899c:
    // 0x34899c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34899cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3489a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3489a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3489a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3489A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3489A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489A4u;
        // 0x3489a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3489A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3489ACu;
    // 0x3489ac: 0x0  nop
    ctx->pc = 0x3489acu;
    // NOP
    ctx->pc = 0x3489b0u;
}
