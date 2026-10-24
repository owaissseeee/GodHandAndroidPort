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

// Function: func_0037CE20
// Address: 0x37ce20 - 0x37cee0
void func_0037CE20_0x37ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CE20_0x37ce20");
#endif

    switch (ctx->pc) {
        case 0x37ce40u: goto label_37ce40;
        default: break;
    }

    ctx->pc = 0x37ce20u;

    // 0x37ce20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37ce24: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37ce28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37ce2c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37ce30: 0x244fa9c0  addiu       $t7, $v0, -0x5640
    ctx->pc = 0x37ce30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945216));
    // 0x37ce34: 0x2478cf20  addiu       $t8, $v1, -0x30E0
    ctx->pc = 0x37ce34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954784));
    // 0x37ce38: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x37ce38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x37ce3c: 0x0  nop
    ctx->pc = 0x37ce3cu;
    // NOP
label_37ce40:
    // 0x37ce40: 0x97190000  lhu         $t9, 0x0($t8)
    ctx->pc = 0x37ce40u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x37ce44: 0x57200005  bnel        $t9, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37CE44u;
    {
        const bool branch_taken_0x37ce44 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ce44) {
            ctx->pc = 0x37CE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CE44u;
            // 0x37ce48: 0x93020004  lbu         $v0, 0x4($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CE5Cu;
            goto label_37ce5c;
        }
    }
    ctx->pc = 0x37CE4Cu;
    // 0x37ce4c: 0xa5e00000  sh          $zero, 0x0($t7)
    ctx->pc = 0x37ce4cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37ce50: 0xade00004  sw          $zero, 0x4($t7)
    ctx->pc = 0x37ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 0));
    // 0x37ce54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x37CE54u;
    {
        const bool branch_taken_0x37ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE54u;
        // 0x37ce58: 0xade00008  sw          $zero, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ce54) {
            ctx->pc = 0x37CEC4u;
            goto label_37cec4;
        }
    }
    ctx->pc = 0x37CE5Cu;
label_37ce5c:
    // 0x37ce5c: 0x93030005  lbu         $v1, 0x5($t8)
    ctx->pc = 0x37ce5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 5)));
    // 0x37ce60: 0x8f040010  lw          $a0, 0x10($t8)
    ctx->pc = 0x37ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x37ce64: 0x8f050014  lw          $a1, 0x14($t8)
    ctx->pc = 0x37ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x37ce68: 0x9706001c  lhu         $a2, 0x1C($t8)
    ctx->pc = 0x37ce68u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x37ce6c: 0x9707001e  lhu         $a3, 0x1E($t8)
    ctx->pc = 0x37ce6cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 30)));
    // 0x37ce70: 0x97080020  lhu         $t0, 0x20($t8)
    ctx->pc = 0x37ce70u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x37ce74: 0x97090018  lhu         $t1, 0x18($t8)
    ctx->pc = 0x37ce74u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x37ce78: 0x970a001a  lhu         $t2, 0x1A($t8)
    ctx->pc = 0x37ce78u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 26)));
    // 0x37ce7c: 0x970b0022  lhu         $t3, 0x22($t8)
    ctx->pc = 0x37ce7cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 34)));
    // 0x37ce80: 0x970c004a  lhu         $t4, 0x4A($t8)
    ctx->pc = 0x37ce80u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 74)));
    // 0x37ce84: 0x970d004c  lhu         $t5, 0x4C($t8)
    ctx->pc = 0x37ce84u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 76)));
    // 0x37ce88: 0x970e004e  lhu         $t6, 0x4E($t8)
    ctx->pc = 0x37ce88u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 78)));
    // 0x37ce8c: 0xa5f90000  sh          $t9, 0x0($t7)
    ctx->pc = 0x37ce8cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x37ce90: 0xa1e20002  sb          $v0, 0x2($t7)
    ctx->pc = 0x37ce90u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37ce94: 0xa1e30003  sb          $v1, 0x3($t7)
    ctx->pc = 0x37ce94u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x37ce98: 0xade40004  sw          $a0, 0x4($t7)
    ctx->pc = 0x37ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 4));
    // 0x37ce9c: 0xade50008  sw          $a1, 0x8($t7)
    ctx->pc = 0x37ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 5));
    // 0x37cea0: 0xa5e6000c  sh          $a2, 0xC($t7)
    ctx->pc = 0x37cea0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x37cea4: 0xa5e7000e  sh          $a3, 0xE($t7)
    ctx->pc = 0x37cea4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x37cea8: 0xa5e80010  sh          $t0, 0x10($t7)
    ctx->pc = 0x37cea8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x37ceac: 0xa5e90012  sh          $t1, 0x12($t7)
    ctx->pc = 0x37ceacu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 18), (uint16_t)GPR_U32(ctx, 9));
    // 0x37ceb0: 0xa5ea0014  sh          $t2, 0x14($t7)
    ctx->pc = 0x37ceb0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 20), (uint16_t)GPR_U32(ctx, 10));
    // 0x37ceb4: 0xa5eb0016  sh          $t3, 0x16($t7)
    ctx->pc = 0x37ceb4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 22), (uint16_t)GPR_U32(ctx, 11));
    // 0x37ceb8: 0xa5ec0018  sh          $t4, 0x18($t7)
    ctx->pc = 0x37ceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 24), (uint16_t)GPR_U32(ctx, 12));
    // 0x37cebc: 0xa5ed001a  sh          $t5, 0x1A($t7)
    ctx->pc = 0x37cebcu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 26), (uint16_t)GPR_U32(ctx, 13));
    // 0x37cec0: 0xa5ee001c  sh          $t6, 0x1C($t7)
    ctx->pc = 0x37cec0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 28), (uint16_t)GPR_U32(ctx, 14));
label_37cec4:
    // 0x37cec4: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x37cec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x37cec8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x37cec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x37cecc: 0x601ffdc  bgez        $s0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x37CECCu;
    {
        const bool branch_taken_0x37cecc = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x37CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CECCu;
        // 0x37ced0: 0x27180050  addiu       $t8, $t8, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cecc) {
            ctx->pc = 0x37CE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ce40;
        }
    }
    ctx->pc = 0x37CED4u;
    // 0x37ced4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37ced4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x37CED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CED8u;
        // 0x37cedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CEE0u;
}
