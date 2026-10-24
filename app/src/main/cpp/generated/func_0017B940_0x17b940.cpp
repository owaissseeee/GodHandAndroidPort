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

// Function: func_0017B940
// Address: 0x17b940 - 0x17ba28
void func_0017B940_0x17b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B940_0x17b940");
#endif

    switch (ctx->pc) {
        case 0x17b954u: goto label_17b954;
        case 0x17b964u: goto label_17b964;
        case 0x17b978u: goto label_17b978;
        case 0x17b998u: goto label_17b998;
        default: break;
    }

    ctx->pc = 0x17b940u;

    // 0x17b940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b944: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b94c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17B94Cu;
    SET_GPR_U32(ctx, 31, 0x17B954u);
    ctx->pc = 0x17B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B94Cu;
    // 0x17b950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17B94Cu, 0x17B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B954u;
label_17b954:
    // 0x17b954: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x17b954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17b958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b95c: 0xc05f00a  jal         func_17C028
    ctx->pc = 0x17B95Cu;
    SET_GPR_U32(ctx, 31, 0x17B964u);
    ctx->pc = 0x17B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B95Cu;
    // 0x17b960: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C028u, 0x17B95Cu, 0x17B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B964u;
label_17b964:
    // 0x17b964: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17b964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17b968: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17b968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b96c: 0x244b1ad0  addiu       $t3, $v0, 0x1AD0
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x17b970: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b974: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x17b974u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_17b978:
    // 0x17b978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b97c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b980: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17b984: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17b984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17b988: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x17b98c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17b990: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b994: 0x0  nop
    ctx->pc = 0x17b994u;
    // NOP
label_17b998:
    // 0x17b998: 0x54e00017  bnel        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B998u;
    {
        const bool branch_taken_0x17b998 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b998) {
            ctx->pc = 0x17B99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B998u;
            // 0x17b99c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B9F8u;
            goto label_17b9f8;
        }
    }
    ctx->pc = 0x17B9A0u;
    // 0x17b9a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x17b9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17b9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9a8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x17b9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17b9ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17b9b0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b9b4: 0x8a102a  slt         $v0, $a0, $t2
    ctx->pc = 0x17b9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x17b9b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B9B8u;
    {
        const bool branch_taken_0x17b9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9B8u;
        // 0x17b9bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9b8) {
            ctx->pc = 0x17B9C8u;
            goto label_17b9c8;
        }
    }
    ctx->pc = 0x17B9C0u;
    // 0x17b9c0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17b9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17b9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b9c8:
    // 0x17b9c8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17b9cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B9CCu;
    {
        const bool branch_taken_0x17b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9CCu;
        // 0x17b9d0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9cc) {
            ctx->pc = 0x17B9E4u;
            goto label_17b9e4;
        }
    }
    ctx->pc = 0x17B9D4u;
    // 0x17b9d4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x17b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17b9d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b9dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9DCu;
    {
        const bool branch_taken_0x17b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9DCu;
        // 0x17b9e0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9dc) {
            ctx->pc = 0x17B9E8u;
            goto label_17b9e8;
        }
    }
    ctx->pc = 0x17B9E4u;
label_17b9e4:
    // 0x17b9e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b9e8:
    // 0x17b9e8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17b9ec: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x17b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x17b9f0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x17b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17b9f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_17b9f8:
    // 0x17b9f8: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x17b9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17b9fc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17B9FCu;
    {
        const bool branch_taken_0x17b9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9FCu;
        // 0x17ba00: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9fc) {
            ctx->pc = 0x17B998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b998;
        }
    }
    ctx->pc = 0x17BA04u;
    // 0x17ba04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x17ba04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17ba08: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x17BA08u;
    {
        const bool branch_taken_0x17ba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA08u;
        // 0x17ba0c: 0x317c2  srl         $v0, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba08) {
            ctx->pc = 0x17B978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b978;
        }
    }
    ctx->pc = 0x17BA10u;
    // 0x17ba10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ba10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ba18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA1Cu;
        // 0x17ba20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA24u;
    // 0x17ba24: 0x0  nop
    ctx->pc = 0x17ba24u;
    // NOP
    ctx->pc = 0x17ba28u;
}
