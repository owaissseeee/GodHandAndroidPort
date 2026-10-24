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

// Function: cEmSetParam_updateSetDataAppPattern
// Address: 0x295458 - 0x295498
void cEmSetParam_updateSetDataAppPattern_0x295458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_updateSetDataAppPattern_0x295458");
#endif

    switch (ctx->pc) {
        case 0x295474u: goto label_295474;
        default: break;
    }

    ctx->pc = 0x295458u;

    // 0x295458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29545c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x29545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x295460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295464: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x295464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x295468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29546c: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x29546Cu;
    SET_GPR_U32(ctx, 31, 0x295474u);
    ctx->pc = 0x295470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29546Cu;
    // 0x295470: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x29546Cu, 0x295474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295474u;
label_295474:
    // 0x295474: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x295474u;
    {
        const bool branch_taken_0x295474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295474) {
            ctx->pc = 0x295478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295474u;
            // 0x295478: 0xa0500010  sb          $s0, 0x10($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29547Cu;
            goto label_29547c;
        }
    }
    ctx->pc = 0x29547Cu;
label_29547c:
    // 0x29547c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29547cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295484: 0x3e00008  jr          $ra
    ctx->pc = 0x295484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295484u;
        // 0x295488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29548Cu;
    // 0x29548c: 0x0  nop
    ctx->pc = 0x29548cu;
    // NOP
    // 0x295490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x295490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x295494: 0x0  nop
    ctx->pc = 0x295494u;
    // NOP
    ctx->pc = 0x295498u;
}
