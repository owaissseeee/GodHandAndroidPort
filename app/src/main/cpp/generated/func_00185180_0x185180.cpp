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

// Function: func_00185180
// Address: 0x185180 - 0x1851c0
void func_00185180_0x185180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00185180_0x185180");
#endif

    switch (ctx->pc) {
        case 0x1851a4u: goto label_1851a4;
        default: break;
    }

    ctx->pc = 0x185180u;

    // 0x185180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x185184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x185188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18518c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185190: 0x9202065b  lbu         $v0, 0x65B($s0)
    ctx->pc = 0x185190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1627)));
    // 0x185194: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x185194u;
    {
        const bool branch_taken_0x185194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185194) {
            ctx->pc = 0x185198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185194u;
            // 0x185198: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1851B0u;
            goto label_1851b0;
        }
    }
    ctx->pc = 0x18519Cu;
    // 0x18519c: 0xc061470  jal         func_1851C0
    ctx->pc = 0x18519Cu;
    SET_GPR_U32(ctx, 31, 0x1851A4u);
    ctx->pc = 0x1851A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18519Cu;
    // 0x1851a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851C0u, 0x18519Cu, 0x1851A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851A4u;
label_1851a4:
    // 0x1851a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1851a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1851a8: 0xa202065b  sb          $v0, 0x65B($s0)
    ctx->pc = 0x1851a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1627), (uint8_t)GPR_U32(ctx, 2));
    // 0x1851ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1851acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1851b0:
    // 0x1851b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1851b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1851b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1851B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1851B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851B4u;
        // 0x1851b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1851B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1851BCu;
    // 0x1851bc: 0x0  nop
    ctx->pc = 0x1851bcu;
    // NOP
    ctx->pc = 0x1851c0u;
}
