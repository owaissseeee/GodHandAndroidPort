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

// Function: func_0012B5C0
// Address: 0x12b5c0 - 0x12b618
void func_0012B5C0_0x12b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012B5C0_0x12b5c0");
#endif

    switch (ctx->pc) {
        case 0x12b5f0u: goto label_12b5f0;
        case 0x12b604u: goto label_12b604;
        default: break;
    }

    ctx->pc = 0x12b5c0u;

    // 0x12b5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b5c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12b5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5d0: 0x8e0206a4  lw          $v0, 0x6A4($s0)
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
    // 0x12b5d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12B5D4u;
    {
        const bool branch_taken_0x12b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b5d4) {
            ctx->pc = 0x12B5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B5D4u;
            // 0x12b5d8: 0xae0206a0  sw          $v0, 0x6A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B5DCu;
            goto label_12b5dc;
        }
    }
    ctx->pc = 0x12B5DCu;
label_12b5dc:
    // 0x12b5dc: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12b5e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B5E0u;
    {
        const bool branch_taken_0x12b5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b5e0) {
            ctx->pc = 0x12B5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B5E0u;
            // 0x12b5e4: 0x8e0406a0  lw          $a0, 0x6A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B5FCu;
            goto label_12b5fc;
        }
    }
    ctx->pc = 0x12B5E8u;
    // 0x12b5e8: 0xc04acca  jal         func_12B328
    ctx->pc = 0x12B5E8u;
    SET_GPR_U32(ctx, 31, 0x12B5F0u);
    ctx->pc = 0x12B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5E8u;
    // 0x12b5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B328u, 0x12B5E8u, 0x12B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5F0u;
label_12b5f0:
    // 0x12b5f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B5F0u;
    {
        const bool branch_taken_0x12b5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5F0u;
        // 0x12b5f4: 0xae0206a0  sw          $v0, 0x6A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5f0) {
            ctx->pc = 0x12B604u;
            goto label_12b604;
        }
    }
    ctx->pc = 0x12B5F8u;
    // 0x12b5f8: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x12b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12b5fc:
    // 0x12b5fc: 0xc0722ac  jal         func_1C8AB0
    ctx->pc = 0x12B5FCu;
    SET_GPR_U32(ctx, 31, 0x12B604u);
    ctx->pc = 0x12B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5FCu;
    // 0x12b600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8AB0u, 0x12B5FCu, 0x12B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B604u;
label_12b604:
    // 0x12b604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B60Cu;
        // 0x12b610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B614u;
    // 0x12b614: 0x0  nop
    ctx->pc = 0x12b614u;
    // NOP
    ctx->pc = 0x12b618u;
}
