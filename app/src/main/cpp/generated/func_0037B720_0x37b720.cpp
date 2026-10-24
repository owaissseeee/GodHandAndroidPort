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

// Function: func_0037B720
// Address: 0x37b720 - 0x37b768
void func_0037B720_0x37b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B720_0x37b720");
#endif

    switch (ctx->pc) {
        case 0x37b750u: goto label_37b750;
        default: break;
    }

    ctx->pc = 0x37b720u;

    // 0x37b720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b724: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b730: 0x82020029  lb          $v0, 0x29($s0)
    ctx->pc = 0x37b730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x37b734: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37B734u;
    {
        const bool branch_taken_0x37b734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b734) {
            ctx->pc = 0x37B738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B734u;
            // 0x37b738: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B758u;
            goto label_37b758;
        }
    }
    ctx->pc = 0x37B73Cu;
    // 0x37b73c: 0x82040027  lb          $a0, 0x27($s0)
    ctx->pc = 0x37b73cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x37b740: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x37b740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x37b744: 0x24a5016c  addiu       $a1, $a1, 0x16C
    ctx->pc = 0x37b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 364));
    // 0x37b748: 0xc0dd276  jal         func_3749D8
    ctx->pc = 0x37B748u;
    SET_GPR_U32(ctx, 31, 0x37B750u);
    ctx->pc = 0x37B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B748u;
    // 0x37b74c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3749D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3749D8u, 0x37B748u, 0x37B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B750u;
label_37b750:
    // 0x37b750: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x37b750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b758:
    // 0x37b758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b75c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B75Cu;
        // 0x37b760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B764u;
    // 0x37b764: 0x0  nop
    ctx->pc = 0x37b764u;
    // NOP
    ctx->pc = 0x37b768u;
}
