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

// Function: func_00179358
// Address: 0x179358 - 0x1793d0
void func_00179358_0x179358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179358_0x179358");
#endif

    switch (ctx->pc) {
        case 0x179370u: goto label_179370;
        default: break;
    }

    ctx->pc = 0x179358u;

    // 0x179358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17935c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x179360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179368: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x179368u;
    SET_GPR_U32(ctx, 31, 0x179370u);
    ctx->pc = 0x17936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179368u;
    // 0x17936c: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x179368u, 0x179370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179370u;
label_179370:
    // 0x179370: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x179370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179378: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x179378u;
    {
        const bool branch_taken_0x179378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179378) {
            ctx->pc = 0x17937Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179378u;
            // 0x17937c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1793C0u;
            goto label_1793c0;
        }
    }
    ctx->pc = 0x179380u;
    // 0x179380: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x179380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x179384: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x179384u;
    {
        const bool branch_taken_0x179384 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x179384) {
            ctx->pc = 0x179388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179384u;
            // 0x179388: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1793B0u;
            goto label_1793b0;
        }
    }
    ctx->pc = 0x17938Cu;
    // 0x17938c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x17938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x179390: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179394: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x179394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x179398: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x179398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17939c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17939cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1793a0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1793a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x1793a4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1793a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1793a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1793A8u;
    {
        const bool branch_taken_0x1793a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793A8u;
        // 0x1793ac: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793a8) {
            ctx->pc = 0x1793BCu;
            goto label_1793bc;
        }
    }
    ctx->pc = 0x1793B0u;
label_1793b0:
    // 0x1793b0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1793b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1793b4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1793b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1793b8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1793b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1793bc:
    // 0x1793bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1793bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1793c0:
    // 0x1793c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1793c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1793c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1793C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793C4u;
        // 0x1793c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1793C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793CCu;
    // 0x1793cc: 0x0  nop
    ctx->pc = 0x1793ccu;
    // NOP
    ctx->pc = 0x1793d0u;
}
