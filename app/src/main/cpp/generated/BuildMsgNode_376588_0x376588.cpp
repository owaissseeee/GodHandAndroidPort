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

// Function: BuildMsgNode_376588
// Address: 0x376588 - 0x376618
void BuildMsgNode_376588_0x376588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildMsgNode_376588_0x376588");
#endif

    switch (ctx->pc) {
        case 0x3765a4u: goto label_3765a4;
        case 0x3765fcu: goto label_3765fc;
        default: break;
    }

    ctx->pc = 0x376588u;

    // 0x376588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37658c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x376590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37659c: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x37659Cu;
    SET_GPR_U32(ctx, 31, 0x3765A4u);
    ctx->pc = 0x3765A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37659Cu;
    // 0x3765a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x37659Cu, 0x3765A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765A4u;
label_3765a4:
    // 0x3765a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3765a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765a8: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3765A8u;
    {
        const bool branch_taken_0x3765a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3765ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3765A8u;
        // 0x3765ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3765a8) {
            ctx->pc = 0x3765FCu;
            goto label_3765fc;
        }
    }
    ctx->pc = 0x3765B0u;
    // 0x3765b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3765b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3765b4: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x3765b4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3765b8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3765b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3765bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3765bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3765c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3765c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3765c8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3765c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765cc: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x3765ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x3765d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3765d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3765d4: 0xa126000c  sb          $a2, 0xC($t1)
    ctx->pc = 0x3765d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x3765d8: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x3765d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x3765dc: 0xa127000d  sb          $a3, 0xD($t1)
    ctx->pc = 0x3765dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x3765e0: 0xa5280010  sh          $t0, 0x10($t1)
    ctx->pc = 0x3765e0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x3765e4: 0xa520000e  sh          $zero, 0xE($t1)
    ctx->pc = 0x3765e4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x3765e8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3765e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3765ec: 0xa5220012  sh          $v0, 0x12($t1)
    ctx->pc = 0x3765ecu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3765f0: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x3765f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3765f4: 0xc0ddb3e  jal         func_376CF8
    ctx->pc = 0x3765F4u;
    SET_GPR_U32(ctx, 31, 0x3765FCu);
    ctx->pc = 0x3765F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3765F4u;
    // 0x3765f8: 0xa5230014  sh          $v1, 0x14($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376CF8u, 0x3765F4u, 0x3765FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765FCu;
label_3765fc:
    // 0x3765fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3765fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376600: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37660c: 0x3e00008  jr          $ra
    ctx->pc = 0x37660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37660Cu;
        // 0x376610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376614u;
    // 0x376614: 0x0  nop
    ctx->pc = 0x376614u;
    // NOP
    ctx->pc = 0x376618u;
}
