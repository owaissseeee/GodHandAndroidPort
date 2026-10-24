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
// Function: modeMain__7cMcLoad
// Address: 0x7c14d8 - 0x7c1560
void modeMain__7cMcLoad_0x7c14d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeMain__7cMcLoad_0x7c14d8");
#endif

    switch (ctx->pc) {
        case 0x7c1514u: goto label_7c1514;
        case 0x7c1544u: goto label_7c1544;
        default: break;
    }

    ctx->pc = 0x7c14d8u;

    // 0x7c14d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c14d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c14dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c14e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c14e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c14e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c14e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c14e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c14ec: 0x24517470  addiu       $s1, $v0, 0x7470
    ctx->pc = 0x7c14ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x7c14f0: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x7c14f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c14f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C14F4u;
    {
        const bool branch_taken_0x7c14f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C14F4u;
        // 0x7c14f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c14f4) {
            ctx->pc = 0x7C150Cu;
            goto label_7c150c;
        }
    }
    ctx->pc = 0x7C14FCu;
    // 0x7c14fc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c1500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c1500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c1504: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x7C1504u;
    {
        const bool branch_taken_0x7c1504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1504) {
            ctx->pc = 0x7C1508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1504u;
            // 0x7c1508: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1550u;
            goto label_7c1550;
        }
    }
    ctx->pc = 0x7C150Cu;
label_7c150c:
    // 0x7c150c: 0xc1f0584  jal         func_7C1610
    ctx->pc = 0x7C150Cu;
    SET_GPR_U32(ctx, 31, 0x7C1514u);
    ctx->pc = 0x7C1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C150Cu;
    // 0x7c1510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1610u, 0x7C150Cu, 0x7C1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1514u;
label_7c1514:
    // 0x7c1514: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x7c1514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7c1518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c1518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c151c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C151Cu;
    {
        const bool branch_taken_0x7c151c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c151c) {
            ctx->pc = 0x7C1520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C151Cu;
            // 0x7c1520: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C1550u;
            goto label_7c1550;
        }
    }
    ctx->pc = 0x7C1524u;
    // 0x7c1524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c1524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c1528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c152c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7c152cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c1530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c1530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c1534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1538: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7c1538u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7c153c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7C153Cu;
    SET_GPR_U32(ctx, 31, 0x7C1544u);
    ctx->pc = 0x7C1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C153Cu;
    // 0x7c1540: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7C153Cu, 0x7C1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1544u;
label_7c1544:
    // 0x7c1544: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c1548: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x7c1548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x7c154c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c154cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c1550:
    // 0x7c1550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c1550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c1554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c1554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1558: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1558u;
        // 0x7c155c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1560u;
}
} // namespace gh_mcport
