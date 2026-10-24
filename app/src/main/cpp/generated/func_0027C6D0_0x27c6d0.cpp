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

// Function: func_0027C6D0
// Address: 0x27c6d0 - 0x27c790
void func_0027C6D0_0x27c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027C6D0_0x27c6d0");
#endif

    switch (ctx->pc) {
        case 0x27c724u: goto label_27c724;
        case 0x27c750u: goto label_27c750;
        case 0x27c764u: goto label_27c764;
        default: break;
    }

    ctx->pc = 0x27c6d0u;

    // 0x27c6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c6d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27c6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6e0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c6e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C6E4u;
    {
        const bool branch_taken_0x27c6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6E4u;
        // 0x27c6e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6e4) {
            ctx->pc = 0x27C6FCu;
            goto label_27c6fc;
        }
    }
    ctx->pc = 0x27C6ECu;
    // 0x27c6ec: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27C6ECu;
    {
        const bool branch_taken_0x27c6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c6ec) {
            ctx->pc = 0x27C75Cu;
            goto label_27c75c;
        }
    }
    ctx->pc = 0x27C6F4u;
    // 0x27c6f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27C6F4u;
    {
        const bool branch_taken_0x27c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6F4u;
        // 0x27c6f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6f4) {
            ctx->pc = 0x27C780u;
            goto label_27c780;
        }
    }
    ctx->pc = 0x27C6FCu;
label_27c6fc:
    // 0x27c6fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27c704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c708: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c70c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c714: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c718: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27c718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c71c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27C71Cu;
    SET_GPR_U32(ctx, 31, 0x27C724u);
    ctx->pc = 0x27C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C71Cu;
    // 0x27c720: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27C71Cu, 0x27C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C724u;
label_27c724:
    // 0x27c724: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c72c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c730: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27c730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c734: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x27c734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x27c738: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c73c: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x27c73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x27c740: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c744: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x27c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27c748: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C748u;
    SET_GPR_U32(ctx, 31, 0x27C750u);
    ctx->pc = 0x27C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C748u;
    // 0x27c74c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C748u, 0x27C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C750u;
label_27c750:
    // 0x27c750: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27c750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c758: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27c758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27c75c:
    // 0x27c75c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C75Cu;
    SET_GPR_U32(ctx, 31, 0x27C764u);
    ctx->pc = 0x27C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C75Cu;
    // 0x27c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C75Cu, 0x27C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C764u;
label_27c764:
    // 0x27c764: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C764u;
    {
        const bool branch_taken_0x27c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c764) {
            ctx->pc = 0x27C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C764u;
            // 0x27c768: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C780u;
            goto label_27c780;
        }
    }
    ctx->pc = 0x27C76Cu;
    // 0x27c76c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27c76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c770: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27c770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c774: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27c774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c778: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27c778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c77c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27c77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c780:
    // 0x27c780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c784: 0x3e00008  jr          $ra
    ctx->pc = 0x27C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C784u;
        // 0x27c788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C78Cu;
    // 0x27c78c: 0x0  nop
    ctx->pc = 0x27c78cu;
    // NOP
    ctx->pc = 0x27c790u;
}
