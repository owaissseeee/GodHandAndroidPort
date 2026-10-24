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

// Function: func_002BACF0
// Address: 0x2bacf0 - 0x2bad40
void func_002BACF0_0x2bacf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BACF0_0x2bacf0");
#endif

    switch (ctx->pc) {
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad2cu: goto label_2bad2c;
        default: break;
    }

    ctx->pc = 0x2bacf0u;

    // 0x2bacf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bacf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bacf4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2bacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2bacf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bacf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bacfc: 0x8c626378  lw          $v0, 0x6378($v1)
    ctx->pc = 0x2bacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786378u));
    // 0x2bad00: 0x24706378  addiu       $s0, $v1, 0x6378
    ctx->pc = 0x2bad00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25464));
    // 0x2bad04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BAD04u;
    {
        const bool branch_taken_0x2bad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD04u;
        // 0x2bad08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad04) {
            ctx->pc = 0x2BAD2Cu;
            goto label_2bad2c;
        }
    }
    ctx->pc = 0x2BAD0Cu;
    // 0x2bad0c: 0xc07df22  jal         func_1F7C88
    ctx->pc = 0x2BAD0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAD14u);
    ctx->pc = 0x1F7C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C88u, 0x2BAD0Cu, 0x2BAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD14u;
label_2bad14:
    // 0x2bad14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2bad14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2bad18: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2bad18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2bad1c: 0x24a5be80  addiu       $a1, $a1, -0x4180
    ctx->pc = 0x2bad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950528));
    // 0x2bad20: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x2bad24: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BAD24u;
    SET_GPR_U32(ctx, 31, 0x2BAD2Cu);
    ctx->pc = 0x2BAD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD24u;
    // 0x2bad28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BAD24u, 0x2BAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD2Cu;
label_2bad2c:
    // 0x2bad2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bad2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bad34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bad34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bad38: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD40u;
}
