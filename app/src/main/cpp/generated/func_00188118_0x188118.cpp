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

// Function: func_00188118
// Address: 0x188118 - 0x188190
void func_00188118_0x188118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188118_0x188118");
#endif

    switch (ctx->pc) {
        case 0x188130u: goto label_188130;
        default: break;
    }

    ctx->pc = 0x188118u;

    // 0x188118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18811c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x188120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188128: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x188128u;
    SET_GPR_U32(ctx, 31, 0x188130u);
    ctx->pc = 0x18812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188128u;
    // 0x18812c: 0x8e050604  lw          $a1, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x188128u, 0x188130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188130u;
label_188130:
    // 0x188130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x188130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188138: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x188138u;
    {
        const bool branch_taken_0x188138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188138) {
            ctx->pc = 0x18813Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188138u;
            // 0x18813c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188180u;
            goto label_188180;
        }
    }
    ctx->pc = 0x188140u;
    // 0x188140: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x188140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x188144: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x188144u;
    {
        const bool branch_taken_0x188144 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x188144) {
            ctx->pc = 0x188148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188144u;
            // 0x188148: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188170u;
            goto label_188170;
        }
    }
    ctx->pc = 0x18814Cu;
    // 0x18814c: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x18814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x188150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188154: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x188154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x188158: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x188158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18815c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18815cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x188160: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x188160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x188164: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x188164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x188168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188168u;
    {
        const bool branch_taken_0x188168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188168u;
        // 0x18816c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188168) {
            ctx->pc = 0x18817Cu;
            goto label_18817c;
        }
    }
    ctx->pc = 0x188170u;
label_188170:
    // 0x188170: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x188170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x188174: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x188174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x188178: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x188178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_18817c:
    // 0x18817c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18817cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188180:
    // 0x188180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188184: 0x3e00008  jr          $ra
    ctx->pc = 0x188184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188184u;
        // 0x188188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18818Cu;
    // 0x18818c: 0x0  nop
    ctx->pc = 0x18818cu;
    // NOP
    ctx->pc = 0x188190u;
}
