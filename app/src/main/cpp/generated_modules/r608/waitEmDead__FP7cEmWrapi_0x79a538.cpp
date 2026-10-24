#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x79a538 - 0x79a5e8
void waitEmDead__FP7cEmWrapi_0x79a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x79a538");
#endif

    switch (ctx->pc) {
        case 0x79a568u: goto label_79a568;
        case 0x79a578u: goto label_79a578;
        case 0x79a584u: goto label_79a584;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5bcu: goto label_79a5bc;
        default: break;
    }

    ctx->pc = 0x79a538u;

    // 0x79a538: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a53c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a540: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a544: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79a544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a548: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a54c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a550: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a554: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x79a558: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a55c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a564: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x79a564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79a568:
    // 0x79a568: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x79A568u;
    {
        const bool branch_taken_0x79a568 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A568u;
        // 0x79a56c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a568) {
            ctx->pc = 0x79A5A0u;
            goto label_79a5a0;
        }
    }
    ctx->pc = 0x79A570u;
    // 0x79a570: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x79a570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a574: 0x0  nop
    ctx->pc = 0x79a574u;
    // NOP
label_79a578:
    // 0x79a578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a57c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A57Cu;
    SET_GPR_U32(ctx, 31, 0x79A584u);
    ctx->pc = 0x79A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A57Cu;
    // 0x79a580: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A57Cu, 0x79A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A584u;
label_79a584:
    // 0x79a584: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79a588: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a58c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A58Cu;
    {
        const bool branch_taken_0x79a58c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A58Cu;
        // 0x79a590: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a58c) {
            ctx->pc = 0x79A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a578;
        }
    }
    ctx->pc = 0x79A594u;
    // 0x79a594: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79a594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79a598: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A598u;
    {
        const bool branch_taken_0x79a598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A598u;
        // 0x79a59c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a598) {
            ctx->pc = 0x79A5B0u;
            goto label_79a5b0;
        }
    }
    ctx->pc = 0x79A5A0u;
label_79a5a0:
    // 0x79a5a0: 0xc1e69fa  jal         func_79A7E8
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7E8u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A5A8u;
    {
        const bool branch_taken_0x79a5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A8u;
        // 0x79a5ac: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a8) {
            ctx->pc = 0x79A5C4u;
            goto label_79a5c4;
        }
    }
    ctx->pc = 0x79A5B0u;
label_79a5b0:
    // 0x79a5b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a5b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A5B4u;
    SET_GPR_U32(ctx, 31, 0x79A5BCu);
    ctx->pc = 0x79A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B4u;
    // 0x79a5b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A5B4u, 0x79A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5BCu;
label_79a5bc:
    // 0x79a5bc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x79A5BCu;
    {
        const bool branch_taken_0x79a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5BCu;
        // 0x79a5c0: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5bc) {
            ctx->pc = 0x79A568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a568;
        }
    }
    ctx->pc = 0x79A5C4u;
label_79a5c4:
    // 0x79a5c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a5c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a5cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a5ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a5d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a5d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a5d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a5d8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79a5d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E0u;
        // 0x79a5e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5E8u;
}
} // namespace gh_r608
