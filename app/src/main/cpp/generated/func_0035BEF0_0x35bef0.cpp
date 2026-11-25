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

// Function: func_0035BEF0
// Address: 0x35bef0 - 0x35bfe0
void func_0035BEF0_0x35bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BEF0_0x35bef0");
#endif

    if (__builtin_expect(ctx->pc != 0x35bef0u, 0)) {
        switch (ctx->pc) {
            case 0x35bf14u: goto label_35bf14;
            case 0x35bf34u: goto label_35bf34;
            case 0x35bf40u: goto label_35bf40;
            case 0x35bf50u: goto label_35bf50;
            case 0x35bf6cu: goto label_35bf6c;
            case 0x35bf78u: goto label_35bf78;
            case 0x35bf8cu: goto label_35bf8c;
            case 0x35bfa8u: goto label_35bfa8;
            default: break;
        }
    }


    // 0x35bef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bef4: 0x24060001  addiu       $a2, $zero, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35bef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35befc: 0xa0882d  daddu       $s1, $a1, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf00: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35bf0c: 0xc0d7080  jal         func_35C200
    SET_GPR_U32(ctx, 31, 0x35BF14u);
    ctx->pc = 0x35BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF0Cu;
    // 0x35bf10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0035C200_0x35c200, 0x35c200u, 0x35bf14u)) {
        return;
    }
    ctx->pc = 0x35BF14u;
label_35bf14:
    // 0x35bf14: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x35bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x35bf1c: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35bf20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35BF20u;
    {
        const bool branch_taken_0x35bf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF20u;
        // 0x35bf24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf20) {
            ctx->pc = 0x35BF48u;
            goto label_35bf48;
        }
    }
    // 0x35bf28: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf2c: 0xc0d7058  jal         func_35C160
    SET_GPR_U32(ctx, 31, 0x35BF34u);
    ctx->pc = 0x35BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF2Cu;
    // 0x35bf30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj35C0_Set_a1_0_a2_C160_0x35c160, 0x35c160u, 0x35bf34u)) {
        return;
    }
    ctx->pc = 0x35BF34u;
label_35bf34:
    // 0x35bf34: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf38: 0xc0d6ff8  jal         func_35BFE0
    SET_GPR_U32(ctx, 31, 0x35BF40u);
    ctx->pc = 0x35BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF38u;
    // 0x35bf3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sftrn_BuildVideo_0x35bfe0, 0x35bfe0u, 0x35bf40u)) {
        return;
    }
    ctx->pc = 0x35BF40u;
label_35bf40:
    // 0x35bf40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35BF40u;
    {
        const bool branch_taken_0x35bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF40u;
        // 0x35bf44: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf40) {
            ctx->pc = 0x35BF58u;
            goto label_35bf58;
        }
    }
    ctx->pc = 0x35BF48u;
label_35bf48:
    // 0x35bf48: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35BF48u;
    SET_GPR_U32(ctx, 31, 0x35BF50u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0035A000_0x35a000, 0x35a000u, 0x35bf50u)) {
        return;
    }
    ctx->pc = 0x35BF50u;
label_35bf50:
    // 0x35bf50: 0xae000bb0  sw          $zero, 0xBB0($s0)
    ctx->pc = 0x35bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 0));
    // 0x35bf54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x35bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_35bf58:
    // 0x35bf58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35BF58u;
    {
        const bool branch_taken_0x35bf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF58u;
        // 0x35bf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf58) {
            ctx->pc = 0x35BF80u;
            goto label_35bf80;
        }
    }
    // 0x35bf60: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf64: 0xc0d7060  jal         func_35C180
    SET_GPR_U32(ctx, 31, 0x35BF6Cu);
    ctx->pc = 0x35BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF64u;
    // 0x35bf68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sftrn_ConnTrnBufA_0x35c180, 0x35c180u, 0x35bf6cu)) {
        return;
    }
    ctx->pc = 0x35BF6Cu;
label_35bf6c:
    // 0x35bf6c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bf70: 0xc0d7020  jal         func_35C080
    SET_GPR_U32(ctx, 31, 0x35BF78u);
    ctx->pc = 0x35BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF70u;
    // 0x35bf74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sftrn_BuildAudio_0x35c080, 0x35c080u, 0x35bf78u)) {
        return;
    }
    ctx->pc = 0x35BF78u;
label_35bf78:
    // 0x35bf78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35BF78u;
    {
        const bool branch_taken_0x35bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF78u;
        // 0x35bf7c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf78) {
            ctx->pc = 0x35BF94u;
            goto label_35bf94;
        }
    }
    ctx->pc = 0x35BF80u;
label_35bf80:
    // 0x35bf80: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35bf84: 0xc0d6800  jal         func_35A000
    SET_GPR_U32(ctx, 31, 0x35BF8Cu);
    ctx->pc = 0x35BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF84u;
    // 0x35bf88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0035A000_0x35a000, 0x35a000u, 0x35bf8cu)) {
        return;
    }
    ctx->pc = 0x35BF8Cu;
label_35bf8c:
    // 0x35bf8c: 0xae000bb4  sw          $zero, 0xBB4($s0)
    ctx->pc = 0x35bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2996), GPR_U32(ctx, 0));
    // 0x35bf90: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x35bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_35bf94:
    // 0x35bf94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35BF94u;
    {
        const bool branch_taken_0x35bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BF94u;
        // 0x35bf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bf94) {
            ctx->pc = 0x35BFC8u;
            goto label_35bfc8;
        }
    }
    // 0x35bf9c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bfa0: 0xc0d7068  jal         func_35C1A0
    SET_GPR_U32(ctx, 31, 0x35BFA8u);
    ctx->pc = 0x35BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFA0u;
    // 0x35bfa4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sftrn_ConnTrnBufU_0x35c1a0, 0x35c1a0u, 0x35bfa8u)) {
        return;
    }
    ctx->pc = 0x35BFA8u;
label_35bfa8:
    // 0x35bfa8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bfac: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bfb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35bfb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bfb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bfb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bfb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bfbc: 0x80d7048  j           func_35C120
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFBCu;
    // 0x35bfc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C120u, 0x35BFBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x35bfc4: 0x0  nop
    ctx->pc = 0x35bfc4u;
    // NOP
label_35bfc8:
    // 0x35bfc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bfc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bfcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35bfccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bfd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35bfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x35BFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFD4u;
        // 0x35bfd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x35bfdc: 0x0  nop
    // NOP
    ctx->pc = 0x35bfe0u;
}