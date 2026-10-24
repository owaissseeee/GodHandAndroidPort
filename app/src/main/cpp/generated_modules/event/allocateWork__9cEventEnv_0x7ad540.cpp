#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: allocateWork__9cEventEnv
// Address: 0x7ad540 - 0x7ad5f8
void allocateWork__9cEventEnv_0x7ad540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("allocateWork__9cEventEnv_0x7ad540");
#endif

    switch (ctx->pc) {
        case 0x7ad568u: goto label_7ad568;
        case 0x7ad584u: goto label_7ad584;
        case 0x7ad598u: goto label_7ad598;
        default: break;
    }

    ctx->pc = 0x7ad540u;

    // 0x7ad540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ad540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ad544: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7ad544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7ad548: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ad548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ad54c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x7ad54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7ad550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ad554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad558: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x7ad558u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x7ad55c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x7ad55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad560: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7AD560u;
    SET_GPR_U32(ctx, 31, 0x7AD568u);
    ctx->pc = 0x7AD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD560u;
    // 0x7ad564: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7AD560u, 0x7AD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD568u;
label_7ad568:
    // 0x7ad568: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x7AD568u;
    {
        const bool branch_taken_0x7ad568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD568u;
        // 0x7ad56c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad568) {
            ctx->pc = 0x7AD5D8u;
            goto label_7ad5d8;
        }
    }
    ctx->pc = 0x7AD570u;
    // 0x7ad570: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x7ad570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ad574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ad578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad57c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7AD57Cu;
    SET_GPR_U32(ctx, 31, 0x7AD584u);
    ctx->pc = 0x7AD580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD57Cu;
    // 0x7ad580: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7AD57Cu, 0x7AD584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD584u;
label_7ad584:
    // 0x7ad584: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x7ad584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad588: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x7AD588u;
    {
        const bool branch_taken_0x7ad588 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7AD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD588u;
        // 0x7ad58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad588) {
            ctx->pc = 0x7AD5BCu;
            goto label_7ad5bc;
        }
    }
    ctx->pc = 0x7AD590u;
    // 0x7ad590: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7ad590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad594: 0x0  nop
    ctx->pc = 0x7ad594u;
    // NOP
label_7ad598:
    // 0x7ad598: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x7ad598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x7ad59c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x7ad59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7ad5a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7ad5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7ad5a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7ad5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad5a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x7ad5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x7ad5ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad5b0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7ad5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7ad5b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7AD5B4u;
    {
        const bool branch_taken_0x7ad5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ad5b4) {
            ctx->pc = 0x7AD5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD5B4u;
            // 0x7ad5b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad598;
        }
    }
    ctx->pc = 0x7AD5BCu;
label_7ad5bc:
    // 0x7ad5bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7ad5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7ad5c0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x7ad5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ad5c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7ad5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7ad5c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7ad5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7ad5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ad5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ad5d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AD5D0u;
    {
        const bool branch_taken_0x7ad5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD5D0u;
        // 0x7ad5d4: 0xa044fff1  sb          $a0, -0xF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294967281), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad5d0) {
            ctx->pc = 0x7AD5E0u;
            goto label_7ad5e0;
        }
    }
    ctx->pc = 0x7AD5D8u;
label_7ad5d8:
    // 0x7ad5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AD5D8u;
    {
        const bool branch_taken_0x7ad5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD5D8u;
        // 0x7ad5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad5d8) {
            ctx->pc = 0x7AD5E4u;
            goto label_7ad5e4;
        }
    }
    ctx->pc = 0x7AD5E0u;
label_7ad5e0:
    // 0x7ad5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7ad5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ad5e4:
    // 0x7ad5e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ad5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ad5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD5ECu;
        // 0x7ad5f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD5F4u;
    // 0x7ad5f4: 0x0  nop
    ctx->pc = 0x7ad5f4u;
    // NOP
    ctx->pc = 0x7ad5f8u;
}
} // namespace gh_event
