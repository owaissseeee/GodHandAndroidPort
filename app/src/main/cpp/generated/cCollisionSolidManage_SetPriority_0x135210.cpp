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

// Function: cCollisionSolidManage_SetPriority
// Address: 0x135210 - 0x135250
void cCollisionSolidManage_SetPriority_0x135210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_SetPriority_0x135210");
#endif

    switch (ctx->pc) {
        case 0x135224u: goto label_135224;
        case 0x135234u: goto label_135234;
        default: break;
    }

    ctx->pc = 0x135210u;

    // 0x135210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x135214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x135218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13521c: 0xc04d1b2  jal         func_1346C8
    ctx->pc = 0x13521Cu;
    SET_GPR_U32(ctx, 31, 0x135224u);
    ctx->pc = 0x135220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13521Cu;
    // 0x135220: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346C8u, 0x13521Cu, 0x135224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135224u;
label_135224:
    // 0x135224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135224u;
    {
        const bool branch_taken_0x135224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135224u;
        // 0x135228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135224) {
            ctx->pc = 0x135234u;
            goto label_135234;
        }
    }
    ctx->pc = 0x13522Cu;
    // 0x13522c: 0xc04d192  jal         func_134648
    ctx->pc = 0x13522Cu;
    SET_GPR_U32(ctx, 31, 0x135234u);
    ctx->pc = 0x135230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13522Cu;
    // 0x135230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134648u, 0x13522Cu, 0x135234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135234u;
label_135234:
    // 0x135234: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x135234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13523c: 0x3e00008  jr          $ra
    ctx->pc = 0x13523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13523Cu;
        // 0x135240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13523Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135244u;
    // 0x135244: 0x0  nop
    ctx->pc = 0x135244u;
    // NOP
    // 0x135248: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x135248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x13524c: 0x0  nop
    ctx->pc = 0x13524cu;
    // NOP
    ctx->pc = 0x135250u;
}
