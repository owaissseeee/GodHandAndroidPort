#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: modeFadeInWait__7cMcLoad
// Address: 0x7c1448 - 0x7c14d8
void modeFadeInWait__7cMcLoad_0x7c1448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeFadeInWait__7cMcLoad_0x7c1448");
#endif

    switch (ctx->pc) {
        case 0x7c1484u: goto label_7c1484;
        case 0x7c1490u: goto label_7c1490;
        case 0x7c14bcu: goto label_7c14bc;
        default: break;
    }

    ctx->pc = 0x7c1448u;

    // 0x7c1448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c1448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c144c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c1450: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c1450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c1454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c1454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c1458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c1458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c145c: 0x24517470  addiu       $s1, $v0, 0x7470
    ctx->pc = 0x7c145cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x7c1460: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x7c1460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c1464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1464u;
    {
        const bool branch_taken_0x7c1464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1464u;
        // 0x7c1468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1464) {
            ctx->pc = 0x7C147Cu;
            goto label_7c147c;
        }
    }
    ctx->pc = 0x7C146Cu;
    // 0x7c146c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c146cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c1470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c1470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c1474: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x7C1474u;
    {
        const bool branch_taken_0x7c1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1474) {
            ctx->pc = 0x7C1478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1474u;
            // 0x7c1478: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C14C8u;
            goto label_7c14c8;
        }
    }
    ctx->pc = 0x7C147Cu;
label_7c147c:
    // 0x7c147c: 0xc1f22c2  jal         func_7C8B08
    ctx->pc = 0x7C147Cu;
    SET_GPR_U32(ctx, 31, 0x7C1484u);
    ctx->pc = 0x7C1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C147Cu;
    // 0x7c1480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B08u, 0x7C147Cu, 0x7C1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1484u;
label_7c1484:
    // 0x7c1484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1488: 0xc1f213a  jal         func_7C84E8
    ctx->pc = 0x7C1488u;
    SET_GPR_U32(ctx, 31, 0x7C1490u);
    ctx->pc = 0x7C148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1488u;
    // 0x7c148c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C84E8u, 0x7C1488u, 0x7C1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1490u;
label_7c1490:
    // 0x7c1490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C1490u;
    {
        const bool branch_taken_0x7c1490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1490u;
        // 0x7c1494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1490) {
            ctx->pc = 0x7C14A0u;
            goto label_7c14a0;
        }
    }
    ctx->pc = 0x7C1498u;
    // 0x7c1498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C1498u;
    {
        const bool branch_taken_0x7c1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1498u;
        // 0x7c149c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1498) {
            ctx->pc = 0x7C14C0u;
            goto label_7c14c0;
        }
    }
    ctx->pc = 0x7C14A0u;
label_7c14a0:
    // 0x7c14a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c14a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c14a4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7c14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c14a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c14a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c14ac: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7c14acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7c14b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c14b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c14b4: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7C14B4u;
    SET_GPR_U32(ctx, 31, 0x7C14BCu);
    ctx->pc = 0x7C14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C14B4u;
    // 0x7c14b8: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7C14B4u, 0x7C14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C14BCu;
label_7c14bc:
    // 0x7c14bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7c14c0:
    // 0x7c14c0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x7c14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x7c14c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c14c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c14c8:
    // 0x7c14c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c14c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c14cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c14ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c14d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C14D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C14D0u;
        // 0x7c14d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C14D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C14D8u;
}
} // namespace gh_mcport
