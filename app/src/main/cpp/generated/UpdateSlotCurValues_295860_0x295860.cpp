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

// Function: UpdateSlotCurValues_295860
// Address: 0x295860 - 0x295928
void UpdateSlotCurValues_295860_0x295860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSlotCurValues_295860_0x295860");
#endif

    switch (ctx->pc) {
        case 0x2958a8u: goto label_2958a8;
        case 0x2958bcu: goto label_2958bc;
        default: break;
    }

    ctx->pc = 0x295860u;

    // 0x295860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x295860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x295864: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x295864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x295868: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x295868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29586c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x295870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295874: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x295878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29587c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x295880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295884: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x295884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x295888: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x295888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29588c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29588Cu;
    {
        const bool branch_taken_0x29588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x295890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29588Cu;
        // 0x295890: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29588c) {
            ctx->pc = 0x29589Cu;
            goto label_29589c;
        }
    }
    ctx->pc = 0x295894u;
    // 0x295894: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x295894u;
    {
        const bool branch_taken_0x295894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295894u;
        // 0x295898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295894) {
            ctx->pc = 0x295908u;
            goto label_295908;
        }
    }
    ctx->pc = 0x29589Cu;
label_29589c:
    // 0x29589c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29589cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2958a0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2958a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2958a4: 0x0  nop
    ctx->pc = 0x2958a4u;
    // NOP
label_2958a8:
    // 0x2958a8: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x2958a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x2958ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2958ACu;
    {
        const bool branch_taken_0x2958ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958ACu;
        // 0x2958b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958ac) {
            ctx->pc = 0x2958F4u;
            goto label_2958f4;
        }
    }
    ctx->pc = 0x2958B4u;
    // 0x2958b4: 0xc0a546c  jal         func_2951B0
    ctx->pc = 0x2958B4u;
    SET_GPR_U32(ctx, 31, 0x2958BCu);
    ctx->pc = 0x2958B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2958B4u;
    // 0x2958b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2951B0u, 0x2958B4u, 0x2958BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958BCu;
label_2958bc:
    // 0x2958bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2958bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2958c0: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x2958c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2958c4: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
    // 0x2958c8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2958c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2958cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2958CCu;
    {
        const bool branch_taken_0x2958cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2958D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958CCu;
        // 0x2958d0: 0x94650548  lhu         $a1, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958cc) {
            ctx->pc = 0x2958DCu;
            goto label_2958dc;
        }
    }
    ctx->pc = 0x2958D4u;
    // 0x2958d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2958D4u;
    {
        const bool branch_taken_0x2958d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958D4u;
        // 0x2958d8: 0xa465054a  sh          $a1, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958d4) {
            ctx->pc = 0x2958E0u;
            goto label_2958e0;
        }
    }
    ctx->pc = 0x2958DCu;
label_2958dc:
    // 0x2958dc: 0xa464054a  sh          $a0, 0x54A($v1)
    ctx->pc = 0x2958dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
label_2958e0:
    // 0x2958e0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2958e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2958e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2958e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2958e8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2958e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2958ec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2958ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2958f0: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x2958f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
label_2958f4:
    // 0x2958f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2958f8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2958f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2958fc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2958FCu;
    {
        const bool branch_taken_0x2958fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2958FCu;
        // 0x295900: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958fc) {
            ctx->pc = 0x2958A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2958a8;
        }
    }
    ctx->pc = 0x295904u;
    // 0x295904: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x295904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_295908:
    // 0x295908: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x295908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29590c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29590cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295914: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x295914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29591c: 0x3e00008  jr          $ra
    ctx->pc = 0x29591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29591Cu;
        // 0x295920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295924u;
    // 0x295924: 0x0  nop
    ctx->pc = 0x295924u;
    // NOP
    ctx->pc = 0x295928u;
}
