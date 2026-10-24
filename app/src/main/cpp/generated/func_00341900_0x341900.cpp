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

// Function: func_00341900
// Address: 0x341900 - 0x341a00
void func_00341900_0x341900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341900_0x341900");
#endif

    switch (ctx->pc) {
        case 0x341968u: goto label_341968;
        default: break;
    }

    ctx->pc = 0x341900u;

    // 0x341900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x341900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x341904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341908: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x341908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x34190c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341910: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x341910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x341914: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x341914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x341918: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x341918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x34191c: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x34191cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x341920: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x341920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x341924: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x341924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x341928: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x341928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34192c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x34192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341930: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x341930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x341934: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x341934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x341938: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x341938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34193c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34193cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341940: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x341940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x341944: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x341944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x341948: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x341948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x34194c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x34194cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341950: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x341950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341954: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x341954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x341958: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x341958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34195c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x34195cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x341960: 0xc0d05fc  jal         func_3417F0
    ctx->pc = 0x341960u;
    SET_GPR_U32(ctx, 31, 0x341968u);
    ctx->pc = 0x341964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341960u;
    // 0x341964: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3417F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3417F0u, 0x341960u, 0x341968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341968u;
label_341968:
    // 0x341968: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341968u;
    {
        const bool branch_taken_0x341968 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x341968) {
            ctx->pc = 0x34196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341968u;
            // 0x34196c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341978u;
            goto label_341978;
        }
    }
    ctx->pc = 0x341970u;
    // 0x341970: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x341970u;
    {
        const bool branch_taken_0x341970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341970u;
        // 0x341974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341970) {
            ctx->pc = 0x3419E0u;
            goto label_3419e0;
        }
    }
    ctx->pc = 0x341978u;
label_341978:
    // 0x341978: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x341978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x34197c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x34197cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x341980: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x341980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x341984: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x341984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x341988: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x341988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x34198c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x34198cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x341990: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x341990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x341994: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x341994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x341998: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x341998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34199c: 0x97a40024  lhu         $a0, 0x24($sp)
    ctx->pc = 0x34199cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3419a0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3419a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3419a4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x3419a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3419a8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x3419a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3419ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x3419acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3419b0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3419b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3419b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3419b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3419b8: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x3419b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3419bc: 0xa604009c  sh          $a0, 0x9C($s0)
    ctx->pc = 0x3419bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 4));
    // 0x3419c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3419c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3419c4: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x3419c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x3419c8: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x3419c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x3419cc: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x3419ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x3419d0: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3419d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x3419d4: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3419d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x3419d8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3419d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x3419dc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3419dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_3419e0:
    // 0x3419e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3419e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3419e4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3419e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3419e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3419e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3419ec: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3419ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3419f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3419f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3419f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3419F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3419F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419F4u;
        // 0x3419f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3419F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3419FCu;
    // 0x3419fc: 0x0  nop
    ctx->pc = 0x3419fcu;
    // NOP
    ctx->pc = 0x341a00u;
}
