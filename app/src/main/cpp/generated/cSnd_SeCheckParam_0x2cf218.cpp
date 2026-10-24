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

// Function: cSnd_SeCheckParam
// Address: 0x2cf218 - 0x2cf258
void cSnd_SeCheckParam_0x2cf218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeCheckParam_0x2cf218");
#endif

    switch (ctx->pc) {
        case 0x2cf238u: goto label_2cf238;
        default: break;
    }

    ctx->pc = 0x2cf218u;

    // 0x2cf218: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x2cf218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cf21c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf21cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf220: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x2cf220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cf224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf228: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2cf228u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2cf22c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2cf22cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cf230: 0xc0dd32e  jal         func_374CB8
    ctx->pc = 0x2CF230u;
    SET_GPR_U32(ctx, 31, 0x2CF238u);
    ctx->pc = 0x2CF234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF230u;
    // 0x2cf234: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374CB8u, 0x2CF230u, 0x2CF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF238u;
label_2cf238:
    // 0x2cf238: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2cf238u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2cf23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf240: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cf240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf244: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2cf244u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2cf248: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF248u;
        // 0x2cf24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF250u;
    // 0x2cf250: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf254: 0x0  nop
    ctx->pc = 0x2cf254u;
    // NOP
    ctx->pc = 0x2cf258u;
}
