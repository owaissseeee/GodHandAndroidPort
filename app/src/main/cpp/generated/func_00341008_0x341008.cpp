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

// Function: func_00341008
// Address: 0x341008 - 0x341120
void func_00341008_0x341008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341008_0x341008");
#endif

    switch (ctx->pc) {
        case 0x341074u: goto label_341074;
        default: break;
    }

    ctx->pc = 0x341008u;

    // 0x341008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x341008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34100c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x341010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341014: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x341014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x341018: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x341018u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34101c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x341020: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x341020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x341024: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x341024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x341028: 0x2612000f  addiu       $s2, $s0, 0xF
    ctx->pc = 0x341028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x34102c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x341030: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x341030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x341034: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x341034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x341038: 0x2614000d  addiu       $s4, $s0, 0xD
    ctx->pc = 0x341038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x34103c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x341040: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x341040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341044: 0xa6150002  sh          $s5, 0x2($s0)
    ctx->pc = 0x341044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x341048: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x341048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x34104c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34104cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341050: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x341050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x341054: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x341054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x341058: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x341058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34105c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x34105cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341060: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x341060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341064: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x341064u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x341068: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x341068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34106c: 0xc0d03be  jal         func_340EF8
    ctx->pc = 0x34106Cu;
    SET_GPR_U32(ctx, 31, 0x341074u);
    ctx->pc = 0x341070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34106Cu;
    // 0x341070: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340EF8u, 0x34106Cu, 0x341074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341074u;
label_341074:
    // 0x341074: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341074u;
    {
        const bool branch_taken_0x341074 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x341078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341074u;
        // 0x341078: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341074) {
            ctx->pc = 0x341088u;
            goto label_341088;
        }
    }
    ctx->pc = 0x34107Cu;
    // 0x34107c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x34107Cu;
    {
        const bool branch_taken_0x34107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34107Cu;
        // 0x341080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34107c) {
            ctx->pc = 0x3410FCu;
            goto label_3410fc;
        }
    }
    ctx->pc = 0x341084u;
    // 0x341084: 0x0  nop
    ctx->pc = 0x341084u;
    // NOP
label_341088:
    // 0x341088: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x341088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x34108c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x34108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x341090: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x341090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x341094: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x341094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x341098: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x341098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x34109c: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x34109cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x3410a0: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x3410a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3410a4: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x3410a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x3410a8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3410a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3410ac: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3410acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3410b0: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x3410b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3410b4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3410b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3410b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3410b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3410bc: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x3410bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3410c0: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3410c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3410c4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x3410c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x3410c8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3410c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3410cc: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x3410ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x3410d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3410d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3410d4: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x3410d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x3410d8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x3410d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x3410dc: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x3410dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x3410e0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3410e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x3410e4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3410e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x3410e8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x3410e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3410ec: 0x54470002  bnel        $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3410ECu;
    {
        const bool branch_taken_0x3410ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3410ec) {
            ctx->pc = 0x3410F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3410ECu;
            // 0x3410f0: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3410F8u;
            goto label_3410f8;
        }
    }
    ctx->pc = 0x3410F4u;
    // 0x3410f4: 0xa615009c  sh          $s5, 0x9C($s0)
    ctx->pc = 0x3410f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 21));
label_3410f8:
    // 0x3410f8: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x3410f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_3410fc:
    // 0x3410fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3410fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341100: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x341100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x341104: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x341104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341108: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x341108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34110c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x34110cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x341110: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x341110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x341114: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x341114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x341118: 0x3e00008  jr          $ra
    ctx->pc = 0x341118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341118u;
        // 0x34111c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341120u;
}
