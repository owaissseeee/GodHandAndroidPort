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

// Function: func_0033CFF8
// Address: 0x33cff8 - 0x33d040
void func_0033CFF8_0x33cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033CFF8_0x33cff8");
#endif

    switch (ctx->pc) {
        case 0x33d018u: goto label_33d018;
        default: break;
    }

    ctx->pc = 0x33cff8u;

    // 0x33cff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33cffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d004: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d008: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x33d008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x33d00c: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x33d00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x33d010: 0xc0cfe6c  jal         func_33F9B0
    ctx->pc = 0x33D010u;
    SET_GPR_U32(ctx, 31, 0x33D018u);
    ctx->pc = 0x33D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D010u;
    // 0x33d014: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F9B0u, 0x33D010u, 0x33D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D018u;
label_33d018:
    // 0x33d018: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33d018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d01c: 0x860700aa  lh          $a3, 0xAA($s0)
    ctx->pc = 0x33d01cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x33d020: 0x860500a6  lh          $a1, 0xA6($s0)
    ctx->pc = 0x33d020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x33d024: 0x860600a8  lh          $a2, 0xA8($s0)
    ctx->pc = 0x33d024u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x33d028: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d030: 0x80cfe80  j           func_33FA00
    ctx->pc = 0x33D030u;
    ctx->pc = 0x33D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D030u;
    // 0x33d034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA00u, 0x33D030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D038u;
    // 0x33d038: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33d038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33d03c: 0x0  nop
    ctx->pc = 0x33d03cu;
    // NOP
    ctx->pc = 0x33d040u;
}
