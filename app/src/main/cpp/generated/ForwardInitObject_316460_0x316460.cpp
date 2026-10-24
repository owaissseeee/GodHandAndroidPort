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

// Function: ForwardInitObject_316460
// Address: 0x316460 - 0x3164d0
void ForwardInitObject_316460_0x316460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316460_0x316460");
#endif

    switch (ctx->pc) {
        case 0x316494u: goto label_316494;
        case 0x3164acu: goto label_3164ac;
        case 0x3164b4u: goto label_3164b4;
        default: break;
    }

    ctx->pc = 0x316460u;

    // 0x316460: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316464: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316468: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316468u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31646c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31646cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316470: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316478: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316478u;
    {
        const bool branch_taken_0x316478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316478u;
        // 0x31647c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316478) {
            ctx->pc = 0x3164BCu;
            goto label_3164bc;
        }
    }
    ctx->pc = 0x316480u;
    // 0x316480: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316484: 0x24040630  addiu       $a0, $zero, 0x630
    ctx->pc = 0x316484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x316488: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31648c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31648Cu;
    SET_GPR_U32(ctx, 31, 0x316494u);
    ctx->pc = 0x316490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31648Cu;
    // 0x316490: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31648Cu, 0x316494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316494u;
label_316494:
    // 0x316494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316498: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316498u;
    {
        const bool branch_taken_0x316498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316498u;
        // 0x31649c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316498) {
            ctx->pc = 0x3164BCu;
            goto label_3164bc;
        }
    }
    ctx->pc = 0x3164A0u;
    // 0x3164a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3164a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3164A4u;
    SET_GPR_U32(ctx, 31, 0x3164ACu);
    ctx->pc = 0x3164A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164A4u;
    // 0x3164a8: 0x24060630  addiu       $a2, $zero, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3164A4u, 0x3164ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164ACu;
label_3164ac:
    // 0x3164ac: 0xc06d9c4  jal         func_1B6710
    ctx->pc = 0x3164ACu;
    SET_GPR_U32(ctx, 31, 0x3164B4u);
    ctx->pc = 0x3164B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164ACu;
    // 0x3164b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6710u, 0x3164ACu, 0x3164B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3164B4u;
label_3164b4:
    // 0x3164b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3164B4u;
    {
        const bool branch_taken_0x3164b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3164B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164B4u;
        // 0x3164b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164b4) {
            ctx->pc = 0x3164C4u;
            goto label_3164c4;
        }
    }
    ctx->pc = 0x3164BCu;
label_3164bc:
    // 0x3164bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3164bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3164c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3164c4:
    // 0x3164c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3164c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3164c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3164C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3164CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164C8u;
        // 0x3164cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3164C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3164D0u;
}
