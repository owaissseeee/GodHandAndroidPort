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

// Function: func_001495A0
// Address: 0x1495a0 - 0x1496c0
void func_001495A0_0x1495a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001495A0_0x1495a0");
#endif

    switch (ctx->pc) {
        case 0x1495b4u: goto label_1495b4;
        case 0x1495ecu: goto label_1495ec;
        case 0x149648u: goto label_149648;
        default: break;
    }

    ctx->pc = 0x1495a0u;

    // 0x1495a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1495a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1495a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1495a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1495a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1495a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1495ac: 0xc053fe0  jal         func_14FF80
    ctx->pc = 0x1495ACu;
    SET_GPR_U32(ctx, 31, 0x1495B4u);
    ctx->pc = 0x1495B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495ACu;
    // 0x1495b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF80u, 0x1495ACu, 0x1495B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495B4u;
label_1495b4:
    // 0x1495b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1495b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1495b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1495bc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1495bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1495c0: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x1495c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x1495c4: 0x26030240  addiu       $v1, $s0, 0x240
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1495c8: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1495c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1495cc: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x1495ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1495d0: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x1495d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x1495d4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1495d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1495d8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1495d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1495dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1495dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1495e0: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x1495e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x1495e4: 0xc07e290  jal         func_1F8A40
    ctx->pc = 0x1495E4u;
    SET_GPR_U32(ctx, 31, 0x1495ECu);
    ctx->pc = 0x1495E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495E4u;
    // 0x1495e8: 0xae00025c  sw          $zero, 0x25C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A40u, 0x1495E4u, 0x1495ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495ECu;
label_1495ec:
    // 0x1495ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1495ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1495f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1495f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1495f4: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x1495f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
    // 0x1495f8: 0x260a028c  addiu       $t2, $s0, 0x28C
    ctx->pc = 0x1495f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1495fc: 0xae0302c4  sw          $v1, 0x2C4($s0)
    ctx->pc = 0x1495fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 3));
    // 0x149600: 0x26090290  addiu       $t1, $s0, 0x290
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x149604: 0xa20002b1  sb          $zero, 0x2B1($s0)
    ctx->pc = 0x149604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 689), (uint8_t)GPR_U32(ctx, 0));
    // 0x149608: 0x2608029c  addiu       $t0, $s0, 0x29C
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
    // 0x14960c: 0xa20002b4  sb          $zero, 0x2B4($s0)
    ctx->pc = 0x14960cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 692), (uint8_t)GPR_U32(ctx, 0));
    // 0x149610: 0x260702a0  addiu       $a3, $s0, 0x2A0
    ctx->pc = 0x149610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x149614: 0xa20002b5  sb          $zero, 0x2B5($s0)
    ctx->pc = 0x149614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 693), (uint8_t)GPR_U32(ctx, 0));
    // 0x149618: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14961c: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x14961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x149620: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x149620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x149624: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x149624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x149628: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x149628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x14962c: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x14962cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x149630: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x149630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x149634: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x149634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x149638: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x149638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x14963c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x14963cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x149640: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x149640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x149644: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x149644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
label_149648:
    // 0x149648: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x149648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14964c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x149650: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x149650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149654: 0x1432021  addu        $a0, $t2, $v1
    ctx->pc = 0x149654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x149658: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x149658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x14965c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14965cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x149660: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x149660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x149664: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149668: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x149668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14966c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x14966cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x149670: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x149670u;
    {
        const bool branch_taken_0x149670 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x149674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149670u;
        // 0x149674: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149670) {
            ctx->pc = 0x149648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149648;
        }
    }
    ctx->pc = 0x149678u;
    // 0x149678: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x149678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x14967c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x149680: 0xa60202ae  sh          $v0, 0x2AE($s0)
    ctx->pc = 0x149680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 686), (uint16_t)GPR_U32(ctx, 2));
    // 0x149684: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x149684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x149688: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x149688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x14968c: 0x240600fe  addiu       $a2, $zero, 0xFE
    ctx->pc = 0x14968cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x149690: 0xa20302b7  sb          $v1, 0x2B7($s0)
    ctx->pc = 0x149690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 695), (uint8_t)GPR_U32(ctx, 3));
    // 0x149694: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149698: 0xa20402b0  sb          $a0, 0x2B0($s0)
    ctx->pc = 0x149698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 688), (uint8_t)GPR_U32(ctx, 4));
    // 0x14969c: 0xa60502b2  sh          $a1, 0x2B2($s0)
    ctx->pc = 0x14969cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 690), (uint16_t)GPR_U32(ctx, 5));
    // 0x1496a0: 0xa20602be  sb          $a2, 0x2BE($s0)
    ctx->pc = 0x1496a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 702), (uint8_t)GPR_U32(ctx, 6));
    // 0x1496a4: 0xa20302b6  sb          $v1, 0x2B6($s0)
    ctx->pc = 0x1496a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 694), (uint8_t)GPR_U32(ctx, 3));
    // 0x1496a8: 0xa20302bc  sb          $v1, 0x2BC($s0)
    ctx->pc = 0x1496a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 700), (uint8_t)GPR_U32(ctx, 3));
    // 0x1496ac: 0xa20002bd  sb          $zero, 0x2BD($s0)
    ctx->pc = 0x1496acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 701), (uint8_t)GPR_U32(ctx, 0));
    // 0x1496b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1496b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1496b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1496b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1496b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1496B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1496BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496B8u;
        // 0x1496bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1496B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1496C0u;
}
