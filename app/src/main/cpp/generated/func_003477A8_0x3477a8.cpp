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

// Function: func_003477A8
// Address: 0x3477a8 - 0x347868
void func_003477A8_0x3477a8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003477A8_0x3477a8");
#endif

    if (__builtin_expect(ctx->pc != 0x3477a8u, 0)) {
        switch (ctx->pc) {
            case 0x3477c4u: goto label_3477c4;
            case 0x347818u: goto label_347818;
            default: break;
        }
    }


    // 0x3477a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3477ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3477acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3477b0: 0xa0802d  daddu       $s0, $a1, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3477b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3477b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3477b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3477bc: 0xc0d1a0a  jal         func_346828
    SET_GPR_U32(ctx, 31, 0x3477C4u);
    ctx->pc = 0x3477C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477BCu;
    // 0x3477c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &GetField0OrZero_346828_0x346828, 0x346828u, 0x3477c4u)) {
        return;
    }
label_3477c4:
    // 0x3477c4: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3477c8: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3477cc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3477CCu;
    {
        const bool branch_taken_0x3477cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3477D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3477CCu;
        // 0x3477d0: 0x24848e80  addiu       $a0, $a0, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3477cc) {
            ctx->pc = 0x3477E8u;
            goto label_3477e8;
        }
    }
    // 0x3477d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3477d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3477d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3477d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3477dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3477dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3477e0: 0x80d22f8  j           func_348BE0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477E0u;
    // 0x3477e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3477E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_3477e8:
    // 0x3477e8: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3477E8u;
    {
        const bool branch_taken_0x3477e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3477e8) {
            ctx->pc = 0x3477ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3477E8u;
            // 0x3477ec: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347810u;
            goto label_347810;
        }
    }
    // 0x3477f0: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3477f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3477f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3477f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3477f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3477fc: 0x24848eb0  addiu       $a0, $a0, -0x7150
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938288));
    // 0x347800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347804: 0x80d22f8  j           func_348BE0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347804u;
    // 0x347808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347804u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x34780c: 0x0  nop
    // NOP
label_347810:
    // 0x347810: 0xc0cd572  jal         func_3355C8
    SET_GPR_U32(ctx, 31, 0x347818u);
    ctx->pc = 0x347814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347810u;
    // 0x347814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003355C8_0x3355c8, 0x3355c8u, 0x347818u)) {
        return;
    }
label_347818:
    // 0x347818: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x34781c: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347820: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x347820u;
    {
        const bool branch_taken_0x347820 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x347824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347820u;
        // 0x347824: 0x24848ee0  addiu       $a0, $a0, -0x7120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347820) {
            ctx->pc = 0x347848u;
            goto label_347848;
        }
    }
    // 0x347828: 0x24020004  addiu       $v0, $zero, 0x4
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34782c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34782cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347830: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x347830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x347834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34783c: 0x80d22f8  j           func_348BE0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34783Cu;
    // 0x347840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34783Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x347844: 0x0  nop
    // NOP
label_347848:
    // 0x347848: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x347848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x34784c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34784cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347850: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x347854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347858: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x347858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x34785c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34785cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347860: 0x3e00008  jr          $ra
    ctx->pc = 0x347860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347860u;
        // 0x347864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347868u;
}