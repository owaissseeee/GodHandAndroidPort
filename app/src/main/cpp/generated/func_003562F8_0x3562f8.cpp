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

// Function: func_003562F8
// Address: 0x3562f8 - 0x356348
void func_003562F8_0x3562f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003562F8_0x3562f8");
#endif

    switch (ctx->pc) {
        case 0x356310u: goto label_356310;
        default: break;
    }

    ctx->pc = 0x3562f8u;

    // 0x3562f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3562fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3562fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356304: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x356304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x356308: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x356308u;
    SET_GPR_U32(ctx, 31, 0x356310u);
    ctx->pc = 0x35630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356308u;
    // 0x35630c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x356308u, 0x356310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356310u;
label_356310:
    // 0x356310: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x356310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x356314: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x356314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x356318: 0x24620803  addiu       $v0, $v1, 0x803
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2051));
    // 0x35631c: 0x24631002  addiu       $v1, $v1, 0x1002
    ctx->pc = 0x35631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4098));
    // 0x356320: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x356320u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x356324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x356324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356328: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x356328u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x35632c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x35632cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x356330: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x356330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x356334: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x356334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x356338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35633c: 0x80ebf30  j           func_3AFCC0
    ctx->pc = 0x35633Cu;
    ctx->pc = 0x356340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35633Cu;
    // 0x356340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x35633Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356344u;
    // 0x356344: 0x0  nop
    ctx->pc = 0x356344u;
    // NOP
    ctx->pc = 0x356348u;
}
