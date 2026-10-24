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

// Function: func_0033DAE0
// Address: 0x33dae0 - 0x33dbd8
void func_0033DAE0_0x33dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033DAE0_0x33dae0");
#endif

    switch (ctx->pc) {
        case 0x33db48u: goto label_33db48;
        default: break;
    }

    ctx->pc = 0x33dae0u;

    // 0x33dae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33dae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33dae8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x33dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x33daec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33daecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33daf0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x33daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x33daf4: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x33daf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x33daf8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x33daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x33dafc: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x33dafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33db00: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x33db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x33db04: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x33db04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x33db08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33db0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33db0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33db10: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x33db10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33db14: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x33db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x33db18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33db18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33db1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33db1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33db20: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x33db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x33db24: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x33db24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33db28: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x33db28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x33db2c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x33db2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33db30: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x33db30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33db34: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x33db34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33db38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33db38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33db3c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x33db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x33db40: 0xc0cf670  jal         func_33D9C0
    ctx->pc = 0x33DB40u;
    SET_GPR_U32(ctx, 31, 0x33DB48u);
    ctx->pc = 0x33DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DB40u;
    // 0x33db44: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D9C0u, 0x33DB40u, 0x33DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB48u;
label_33db48:
    // 0x33db48: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33DB48u;
    {
        const bool branch_taken_0x33db48 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x33db48) {
            ctx->pc = 0x33DB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DB48u;
            // 0x33db4c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DB58u;
            goto label_33db58;
        }
    }
    ctx->pc = 0x33DB50u;
    // 0x33db50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33DB50u;
    {
        const bool branch_taken_0x33db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB50u;
        // 0x33db54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db50) {
            ctx->pc = 0x33DBB8u;
            goto label_33dbb8;
        }
    }
    ctx->pc = 0x33DB58u;
label_33db58:
    // 0x33db58: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x33db58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x33db5c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x33db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x33db60: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x33db60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x33db64: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x33db64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x33db68: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x33db68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x33db6c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x33db6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x33db70: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x33db70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x33db74: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x33db74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33db78: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x33db78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33db7c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x33db7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x33db80: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x33db80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x33db84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33db84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33db88: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x33db88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x33db8c: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x33db8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33db90: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x33db90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33db94: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x33db94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x33db98: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x33db98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x33db9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33dba0: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x33dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x33dba4: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x33dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x33dba8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x33dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x33dbac: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x33dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x33dbb0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x33dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x33dbb4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x33dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_33dbb8:
    // 0x33dbb8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x33dbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33dbbc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x33dbbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33dbc0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x33dbc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33dbc4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x33dbc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33dbc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33dbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33dbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x33DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBCCu;
        // 0x33dbd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DBD4u;
    // 0x33dbd4: 0x0  nop
    ctx->pc = 0x33dbd4u;
    // NOP
    ctx->pc = 0x33dbd8u;
}
