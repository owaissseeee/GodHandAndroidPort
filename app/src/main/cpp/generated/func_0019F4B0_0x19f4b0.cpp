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

// Function: func_0019F4B0
// Address: 0x19f4b0 - 0x19f528
void func_0019F4B0_0x19f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019F4B0_0x19f4b0");
#endif

    switch (ctx->pc) {
        case 0x19f4c8u: goto label_19f4c8;
        default: break;
    }

    ctx->pc = 0x19f4b0u;

    // 0x19f4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f4b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f4bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4c0: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x19F4C0u;
    SET_GPR_U32(ctx, 31, 0x19F4C8u);
    ctx->pc = 0x19F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C0u;
    // 0x19f4c4: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x19F4C0u, 0x19F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4C8u;
label_19f4c8:
    // 0x19f4c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f4d0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F4D0u;
    {
        const bool branch_taken_0x19f4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f4d0) {
            ctx->pc = 0x19F4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4D0u;
            // 0x19f4d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F518u;
            goto label_19f518;
        }
    }
    ctx->pc = 0x19F4D8u;
    // 0x19f4d8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x19f4dc: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19F4DCu;
    {
        const bool branch_taken_0x19f4dc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x19f4dc) {
            ctx->pc = 0x19F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4DCu;
            // 0x19f4e0: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F508u;
            goto label_19f508;
        }
    }
    ctx->pc = 0x19F4E4u;
    // 0x19f4e4: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x19f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x19f4e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f4ec: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x19f4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x19f4f0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19f4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19f4f4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19f4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f4f8: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x19f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x19f4fc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19f4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f500: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F500u;
    {
        const bool branch_taken_0x19f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F500u;
        // 0x19f504: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f500) {
            ctx->pc = 0x19F514u;
            goto label_19f514;
        }
    }
    ctx->pc = 0x19F508u;
label_19f508:
    // 0x19f508: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19f508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f50c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19f50cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f510: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19f510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19f514:
    // 0x19f514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f518:
    // 0x19f518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f51c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F51Cu;
        // 0x19f520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F524u;
    // 0x19f524: 0x0  nop
    ctx->pc = 0x19f524u;
    // NOP
    ctx->pc = 0x19f528u;
}
