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

// Function: func_0035DB38
// Address: 0x35db38 - 0x35dc10
void func_0035DB38_0x35db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DB38_0x35db38");
#endif

    switch (ctx->pc) {
        case 0x35db70u: goto label_35db70;
        case 0x35db8cu: goto label_35db8c;
        default: break;
    }

    ctx->pc = 0x35db38u;

    // 0x35db38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35db38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35db3c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x35db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x35db40: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x35db40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x35db44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35db44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x35db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x35db4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35db4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db50: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x35db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x35db54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35db54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35db5c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35db60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35db64: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35db64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35db68: 0xc0d76a8  jal         func_35DAA0
    ctx->pc = 0x35DB68u;
    SET_GPR_U32(ctx, 31, 0x35DB70u);
    ctx->pc = 0x35DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB68u;
    // 0x35db6c: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DAA0u, 0x35DB68u, 0x35DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB70u;
label_35db70:
    // 0x35db70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35db70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db74: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35db78: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x35DB78u;
    {
        const bool branch_taken_0x35db78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB78u;
        // 0x35db7c: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db78) {
            ctx->pc = 0x35DBE8u;
            goto label_35dbe8;
        }
    }
    ctx->pc = 0x35DB80u;
    // 0x35db80: 0x92130019  lbu         $s3, 0x19($s0)
    ctx->pc = 0x35db80u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x35db84: 0xc0d7754  jal         func_35DD50
    ctx->pc = 0x35DB84u;
    SET_GPR_U32(ctx, 31, 0x35DB8Cu);
    ctx->pc = 0x35DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB84u;
    // 0x35db88: 0x92100018  lbu         $s0, 0x18($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DD50u, 0x35DB84u, 0x35DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB8Cu;
label_35db8c:
    // 0x35db8c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x35db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x35db90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35DB90u;
    {
        const bool branch_taken_0x35db90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB90u;
        // 0x35db94: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db90) {
            ctx->pc = 0x35DBE8u;
            goto label_35dbe8;
        }
    }
    ctx->pc = 0x35DB98u;
    // 0x35db98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x35db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35db9c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35dba0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x35dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x35dba4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35dba8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35dbac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35dbb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35dbb4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x35dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x35dbb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35dbbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35dbc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35dbc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35dbc8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x35dbc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35dbcc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35DBCCu;
    {
        const bool branch_taken_0x35dbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dbcc) {
            ctx->pc = 0x35DBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DBCCu;
            // 0x35dbd0: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DBE0u;
            goto label_35dbe0;
        }
    }
    ctx->pc = 0x35DBD4u;
    // 0x35dbd4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x35dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x35dbd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35DBD8u;
    {
        const bool branch_taken_0x35dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBD8u;
        // 0x35dbdc: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dbd8) {
            ctx->pc = 0x35DBE4u;
            goto label_35dbe4;
        }
    }
    ctx->pc = 0x35DBE0u;
label_35dbe0:
    // 0x35dbe0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x35dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_35dbe4:
    // 0x35dbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35dbe8:
    // 0x35dbe8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x35dbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35dbec: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x35dbecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35dbf0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x35dbf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35dbf4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x35dbf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35dbf8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35dbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35dbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x35DBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBFCu;
        // 0x35dc00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DC04u;
    // 0x35dc04: 0x0  nop
    ctx->pc = 0x35dc04u;
    // NOP
    // 0x35dc08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35dc0c: 0x0  nop
    ctx->pc = 0x35dc0cu;
    // NOP
    ctx->pc = 0x35dc10u;
}
