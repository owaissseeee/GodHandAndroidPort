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

// Function: func_0019B458
// Address: 0x19b458 - 0x19b4d0
void func_0019B458_0x19b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019B458_0x19b458");
#endif

    switch (ctx->pc) {
        case 0x19b470u: goto label_19b470;
        default: break;
    }

    ctx->pc = 0x19b458u;

    // 0x19b458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b45c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19b460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b468: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x19B468u;
    SET_GPR_U32(ctx, 31, 0x19B470u);
    ctx->pc = 0x19B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B468u;
    // 0x19b46c: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x19B468u, 0x19B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B470u;
label_19b470:
    // 0x19b470: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19b470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b478: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B478u;
    {
        const bool branch_taken_0x19b478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b478) {
            ctx->pc = 0x19B47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B478u;
            // 0x19b47c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B4C0u;
            goto label_19b4c0;
        }
    }
    ctx->pc = 0x19B480u;
    // 0x19b480: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x19b480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x19b484: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19B484u;
    {
        const bool branch_taken_0x19b484 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x19b484) {
            ctx->pc = 0x19B488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B484u;
            // 0x19b488: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B4B0u;
            goto label_19b4b0;
        }
    }
    ctx->pc = 0x19B48Cu;
    // 0x19b48c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x19b490: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b494: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x19b494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b498: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19b498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19b49c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19b49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4a0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x19b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x19b4a4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19b4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B4A8u;
    {
        const bool branch_taken_0x19b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4A8u;
        // 0x19b4ac: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4a8) {
            ctx->pc = 0x19B4BCu;
            goto label_19b4bc;
        }
    }
    ctx->pc = 0x19B4B0u;
label_19b4b0:
    // 0x19b4b0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4b4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19b4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4b8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19b4bc:
    // 0x19b4bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19b4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19b4c0:
    // 0x19b4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4C4u;
        // 0x19b4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4CCu;
    // 0x19b4cc: 0x0  nop
    ctx->pc = 0x19b4ccu;
    // NOP
    ctx->pc = 0x19b4d0u;
}
