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

// Function: viBufEndPut
// Address: 0x355bb8 - 0x355c08
void viBufEndPut_0x355bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufEndPut_0x355bb8");
#endif

    switch (ctx->pc) {
        case 0x355bd8u: goto label_355bd8;
        default: break;
    }

    ctx->pc = 0x355bb8u;

    // 0x355bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355bc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x355bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355bd0: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x355BD0u;
    SET_GPR_U32(ctx, 31, 0x355BD8u);
    ctx->pc = 0x355BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BD0u;
    // 0x355bd4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x355BD0u, 0x355BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BD8u;
label_355bd8:
    // 0x355bd8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x355bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x355bdc: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x355bdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x355be0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x355be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x355be4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x355be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x355be8: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x355be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x355bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x355becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355bf0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x355bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x355bf4: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x355bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x355bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355c00: 0x80ebf30  j           func_3AFCC0
    ctx->pc = 0x355C00u;
    ctx->pc = 0x355C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C00u;
    // 0x355c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x355C00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x355C08u;
}
