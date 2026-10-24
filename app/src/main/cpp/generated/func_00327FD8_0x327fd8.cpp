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

// Function: func_00327FD8
// Address: 0x327fd8 - 0x328018
void func_00327FD8_0x327fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327FD8_0x327fd8");
#endif

    switch (ctx->pc) {
        case 0x327fecu: goto label_327fec;
        case 0x327ff4u: goto label_327ff4;
        default: break;
    }

    ctx->pc = 0x327fd8u;

    // 0x327fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327fe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x327fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x327fe4: 0xc0ca0b4  jal         func_3282D0
    ctx->pc = 0x327FE4u;
    SET_GPR_U32(ctx, 31, 0x327FECu);
    ctx->pc = 0x327FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FE4u;
    // 0x327fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x327FE4u, 0x327FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FECu;
label_327fec:
    // 0x327fec: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x327FECu;
    SET_GPR_U32(ctx, 31, 0x327FF4u);
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x327FECu, 0x327FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FF4u;
label_327ff4:
    // 0x327ff4: 0x82030049  lb          $v1, 0x49($s0)
    ctx->pc = 0x327ff4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x327ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327ffc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x327FFCu;
    {
        const bool branch_taken_0x327ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327ffc) {
            ctx->pc = 0x328000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327FFCu;
            // 0x328000: 0xa2030046  sb          $v1, 0x46($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328004u;
            goto label_328004;
        }
    }
    ctx->pc = 0x328004u;
label_328004:
    // 0x328004: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x328004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x328008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32800c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32800cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328010: 0x80ca410  j           func_329040
    ctx->pc = 0x328010u;
    ctx->pc = 0x328014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328010u;
    // 0x328014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328010u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328018u;
}
