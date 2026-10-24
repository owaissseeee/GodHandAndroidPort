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

// Function: func_00347FE0
// Address: 0x347fe0 - 0x348098
void func_00347FE0_0x347fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347FE0_0x347fe0");
#endif

    switch (ctx->pc) {
        case 0x347ffcu: goto label_347ffc;
        case 0x348048u: goto label_348048;
        case 0x34805cu: goto label_34805c;
        case 0x348078u: goto label_348078;
        default: break;
    }

    ctx->pc = 0x347fe0u;

    // 0x347fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347fe4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x347fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x347fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347fec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x347fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ff0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x347ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x347ff4: 0xc0d1a5a  jal         func_346968
    ctx->pc = 0x347FF4u;
    SET_GPR_U32(ctx, 31, 0x347FFCu);
    ctx->pc = 0x347FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347FF4u;
    // 0x347ff8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346968u, 0x347FF4u, 0x347FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FFCu;
label_347ffc:
    // 0x347ffc: 0x8e0302e4  lw          $v1, 0x2E4($s0)
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x348000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x348000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x348004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34800c: 0xae0602e0  sw          $a2, 0x2E0($s0)
    ctx->pc = 0x34800cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 6));
    // 0x348010: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x348010u;
    {
        const bool branch_taken_0x348010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x348014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348010u;
        // 0x348014: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348010) {
            ctx->pc = 0x348050u;
            goto label_348050;
        }
    }
    ctx->pc = 0x348018u;
    // 0x348018: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x348018u;
    {
        const bool branch_taken_0x348018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348018u;
        // 0x34801c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348018) {
            ctx->pc = 0x348030u;
            goto label_348030;
        }
    }
    ctx->pc = 0x348020u;
    // 0x348020: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x348020u;
    {
        const bool branch_taken_0x348020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x348020) {
            ctx->pc = 0x348024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348020u;
            // 0x348024: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348040u;
            goto label_348040;
        }
    }
    ctx->pc = 0x348028u;
    // 0x348028: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x348028u;
    {
        const bool branch_taken_0x348028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348028u;
        // 0x34802c: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348028) {
            ctx->pc = 0x34807Cu;
            goto label_34807c;
        }
    }
    ctx->pc = 0x348030u;
label_348030:
    // 0x348030: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x348030u;
    {
        const bool branch_taken_0x348030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x348030) {
            ctx->pc = 0x348034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348030u;
            // 0x348034: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348068u;
            goto label_348068;
        }
    }
    ctx->pc = 0x348038u;
    // 0x348038: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x348038u;
    {
        const bool branch_taken_0x348038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348038u;
        // 0x34803c: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348038) {
            ctx->pc = 0x34807Cu;
            goto label_34807c;
        }
    }
    ctx->pc = 0x348040u;
label_348040:
    // 0x348040: 0xc0d1e5a  jal         func_347968
    ctx->pc = 0x348040u;
    SET_GPR_U32(ctx, 31, 0x348048u);
    ctx->pc = 0x348044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348040u;
    // 0x348044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347968u, 0x348040u, 0x348048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348048u;
label_348048:
    // 0x348048: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x348048u;
    {
        const bool branch_taken_0x348048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348048u;
        // 0x34804c: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348048) {
            ctx->pc = 0x34807Cu;
            goto label_34807c;
        }
    }
    ctx->pc = 0x348050u;
label_348050:
    // 0x348050: 0x8e0502ec  lw          $a1, 0x2EC($s0)
    ctx->pc = 0x348050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x348054: 0xc0d1ef0  jal         func_347BC0
    ctx->pc = 0x348054u;
    SET_GPR_U32(ctx, 31, 0x34805Cu);
    ctx->pc = 0x348058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348054u;
    // 0x348058: 0x8e0602f0  lw          $a2, 0x2F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347BC0u, 0x348054u, 0x34805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34805Cu;
label_34805c:
    // 0x34805c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34805Cu;
    {
        const bool branch_taken_0x34805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34805Cu;
        // 0x348060: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34805c) {
            ctx->pc = 0x34807Cu;
            goto label_34807c;
        }
    }
    ctx->pc = 0x348064u;
    // 0x348064: 0x0  nop
    ctx->pc = 0x348064u;
    // NOP
label_348068:
    // 0x348068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34806c: 0x8e0602f4  lw          $a2, 0x2F4($s0)
    ctx->pc = 0x34806cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x348070: 0xc0d1f42  jal         func_347D08
    ctx->pc = 0x348070u;
    SET_GPR_U32(ctx, 31, 0x348078u);
    ctx->pc = 0x348074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348070u;
    // 0x348074: 0x8e0702f8  lw          $a3, 0x2F8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347D08u, 0x348070u, 0x348078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348078u;
label_348078:
    // 0x348078: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x348078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_34807c:
    // 0x34807c: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x34807cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x348080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348084: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x348088: 0xae020300  sw          $v0, 0x300($s0)
    ctx->pc = 0x348088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
    // 0x34808c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34808cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348090: 0x3e00008  jr          $ra
    ctx->pc = 0x348090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348090u;
        // 0x348094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348098u;
}
