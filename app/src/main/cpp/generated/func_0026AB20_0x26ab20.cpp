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

// Function: func_0026AB20
// Address: 0x26ab20 - 0x26adf8
void func_0026AB20_0x26ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026AB20_0x26ab20");
#endif

    switch (ctx->pc) {
        case 0x26ad80u: goto label_26ad80;
        case 0x26adb8u: goto label_26adb8;
        case 0x26adc8u: goto label_26adc8;
        default: break;
    }

    ctx->pc = 0x26ab20u;

    // 0x26ab20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26ab24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26ab28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26ab2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ab2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26ab34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26ab34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ab3c: 0x122000a7  beqz        $s1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26AB3Cu;
    {
        const bool branch_taken_0x26ab3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB3Cu;
        // 0x26ab40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab3c) {
            ctx->pc = 0x26ADDCu;
            goto label_26addc;
        }
    }
    ctx->pc = 0x26AB44u;
    // 0x26ab44: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ab48: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ab4c: 0x2643fc9f  addiu       $v1, $s2, -0x361
    ctx->pc = 0x26ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966431));
    // 0x26ab50: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x26ab50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x26ab54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AB54u;
    {
        const bool branch_taken_0x26ab54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB54u;
        // 0x26ab58: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab54) {
            ctx->pc = 0x26AB78u;
            goto label_26ab78;
        }
    }
    ctx->pc = 0x26AB5Cu;
    // 0x26ab5c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x26ab60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ab64: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x26ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
    // 0x26ab68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ab6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ab70: 0x800008  jr          $a0
    ctx->pc = 0x26AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AB78u: goto label_26ab78;
            case 0x26ABBCu: goto label_26abbc;
            case 0x26AC00u: goto label_26ac00;
            case 0x26AC18u: goto label_26ac18;
            case 0x26AC90u: goto label_26ac90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AB70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AB78u;
label_26ab78:
    // 0x26ab78: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26ab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x26ab7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26ab7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26ab80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ab80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ab84: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x26ab84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x26ab88: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26ab88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26ab8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ab8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ab90: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26ab94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26ab94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26ab98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26ab98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ab9c: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x26ab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x26aba0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26aba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x26aba4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26aba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26aba8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26aba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26abac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26abacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26abb0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26abb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26abb4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x26ABB4u;
    {
        const bool branch_taken_0x26abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABB4u;
        // 0x26abb8: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abb4) {
            ctx->pc = 0x26ACD4u;
            goto label_26acd4;
        }
    }
    ctx->pc = 0x26ABBCu;
label_26abbc:
    // 0x26abbc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26abbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26abc0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26abc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26abc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26abc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abc8: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x26abc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x26abcc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x26abccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x26abd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26abd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26abd4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x26abd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x26abd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26abd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26abdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26abdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26abe0: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x26abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x26abe4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26abe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x26abe8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26abe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26abec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26abecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26abf0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26abf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26abf4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26abf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26abf8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26ABF8u;
    {
        const bool branch_taken_0x26abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABF8u;
        // 0x26abfc: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abf8) {
            ctx->pc = 0x26ACD4u;
            goto label_26acd4;
        }
    }
    ctx->pc = 0x26AC00u;
label_26ac00:
    // 0x26ac00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26ac04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26ac08: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26ac0c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26ac10: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26AC10u;
    {
        const bool branch_taken_0x26ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC10u;
        // 0x26ac14: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac10) {
            ctx->pc = 0x26ACD8u;
            goto label_26acd8;
        }
    }
    ctx->pc = 0x26AC18u;
label_26ac18:
    // 0x26ac18: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26ac1c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x26ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26ac20: 0x3c01bf0b  lui         $at, 0xBF0B
    ctx->pc = 0x26ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48907 << 16));
    // 0x26ac24: 0x3421923a  ori         $at, $at, 0x923A
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37434);
    // 0x26ac28: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26ac28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26ac2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26ac30: 0x3c01bd8b  lui         $at, 0xBD8B
    ctx->pc = 0x26ac30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48523 << 16));
    // 0x26ac34: 0x3421e0df  ori         $at, $at, 0xE0DF
    ctx->pc = 0x26ac34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57567);
    // 0x26ac38: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26ac38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26ac3c: 0x38420223  xori        $v0, $v0, 0x223
    ctx->pc = 0x26ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)547);
    // 0x26ac40: 0x3c013f1b  lui         $at, 0x3F1B
    ctx->pc = 0x26ac40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16155 << 16));
    // 0x26ac44: 0x34215dcc  ori         $at, $at, 0x5DCC
    ctx->pc = 0x26ac44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24012);
    // 0x26ac48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26ac48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26ac4c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x26ac4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x26ac50: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x26ac50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
    // 0x26ac54: 0x342161e8  ori         $at, $at, 0x61E8
    ctx->pc = 0x26ac54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25064);
    // 0x26ac58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ac58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ac5c: 0x3c013e37  lui         $at, 0x3E37
    ctx->pc = 0x26ac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15927 << 16));
    // 0x26ac60: 0x342185ae  ori         $at, $at, 0x85AE
    ctx->pc = 0x26ac60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34222);
    // 0x26ac64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ac64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ac68: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x26ac68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x26ac6c: 0x3421e5b8  ori         $at, $at, 0xE5B8
    ctx->pc = 0x26ac6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58808);
    // 0x26ac70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26ac70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ac74: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x26ac74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ac78: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x26ac78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ac7c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x26ac7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ac80: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26ac84: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26ac84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26ac88: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26AC88u;
    {
        const bool branch_taken_0x26ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC88u;
        // 0x26ac8c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac88) {
            ctx->pc = 0x26ACDCu;
            goto label_26acdc;
        }
    }
    ctx->pc = 0x26AC90u;
label_26ac90:
    // 0x26ac90: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x26ac90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x26ac94: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x26ac94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x26ac98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26ac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26ac9c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26ac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26aca0: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x26aca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x26aca4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26aca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26aca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26aca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26acac: 0x3c013ef0  lui         $at, 0x3EF0
    ctx->pc = 0x26acacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16112 << 16));
    // 0x26acb0: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x26acb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x26acb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26acb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26acb8: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x26acbc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26acbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26acc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26acc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26acc4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x26acc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26acc8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26accc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26acccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26acd0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26acd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_26acd4:
    // 0x26acd4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_26acd8:
    // 0x26acd8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x26acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_26acdc:
    // 0x26acdc: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26ace0: 0x24040279  addiu       $a0, $zero, 0x279
    ctx->pc = 0x26ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x26ace4: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26ACE4u;
    {
        const bool branch_taken_0x26ace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26ace4) {
            ctx->pc = 0x26ACE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ACE4u;
            // 0x26ace8: 0x920217c3  lbu         $v0, 0x17C3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AD0Cu;
            goto label_26ad0c;
        }
    }
    ctx->pc = 0x26ACECu;
    // 0x26acec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x26acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26acf0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26acf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26acf4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x26acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26acf8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26acf8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x26acfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26acfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26ad00: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26ad00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ad04: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x26ad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26ad08: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x26ad08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
label_26ad0c:
    // 0x26ad0c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26AD0Cu;
    {
        const bool branch_taken_0x26ad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD0Cu;
        // 0x26ad10: 0x2402021f  addiu       $v0, $zero, 0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad0c) {
            ctx->pc = 0x26AD6Cu;
            goto label_26ad6c;
        }
    }
    ctx->pc = 0x26AD14u;
    // 0x26ad14: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x26ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26ad18: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26AD18u;
    {
        const bool branch_taken_0x26ad18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD18u;
        // 0x26ad1c: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad18) {
            ctx->pc = 0x26AD6Cu;
            goto label_26ad6c;
        }
    }
    ctx->pc = 0x26AD20u;
    // 0x26ad20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD20u;
    {
        const bool branch_taken_0x26ad20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD20u;
        // 0x26ad24: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad20) {
            ctx->pc = 0x26AD38u;
            goto label_26ad38;
        }
    }
    ctx->pc = 0x26AD28u;
    // 0x26ad28: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26AD28u;
    {
        const bool branch_taken_0x26ad28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD28u;
        // 0x26ad2c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad28) {
            ctx->pc = 0x26AD6Cu;
            goto label_26ad6c;
        }
    }
    ctx->pc = 0x26AD30u;
    // 0x26ad30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26AD30u;
    {
        const bool branch_taken_0x26ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD30u;
        // 0x26ad34: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad30) {
            ctx->pc = 0x26AD58u;
            goto label_26ad58;
        }
    }
    ctx->pc = 0x26AD38u;
label_26ad38:
    // 0x26ad38: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x26ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x26ad3c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD3Cu;
    {
        const bool branch_taken_0x26ad3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD3Cu;
        // 0x26ad40: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad3c) {
            ctx->pc = 0x26AD54u;
            goto label_26ad54;
        }
    }
    ctx->pc = 0x26AD44u;
    // 0x26ad44: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AD44u;
    {
        const bool branch_taken_0x26ad44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD44u;
        // 0x26ad48: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad44) {
            ctx->pc = 0x26AD58u;
            goto label_26ad58;
        }
    }
    ctx->pc = 0x26AD4Cu;
    // 0x26ad4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26AD4Cu;
    {
        const bool branch_taken_0x26ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD4Cu;
        // 0x26ad50: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad4c) {
            ctx->pc = 0x26AD58u;
            goto label_26ad58;
        }
    }
    ctx->pc = 0x26AD54u;
label_26ad54:
    // 0x26ad54: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x26ad54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_26ad58:
    // 0x26ad58: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x26ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ad5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26ad5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x26ad60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26ad60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26ad64: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26ad64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ad68: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x26ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_26ad6c:
    // 0x26ad6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ad70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad74: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad78: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x26AD78u;
    SET_GPR_U32(ctx, 31, 0x26AD80u);
    ctx->pc = 0x26AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD78u;
    // 0x26ad7c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x26AD78u, 0x26AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD80u;
label_26ad80:
    // 0x26ad80: 0x2643fc9a  addiu       $v1, $s2, -0x366
    ctx->pc = 0x26ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966426));
    // 0x26ad84: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x26ad84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x26ad88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AD88u;
    {
        const bool branch_taken_0x26ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD88u;
        // 0x26ad8c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad88) {
            ctx->pc = 0x26ADA8u;
            goto label_26ada8;
        }
    }
    ctx->pc = 0x26AD90u;
    // 0x26ad90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ad94: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x26ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
    // 0x26ad98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ad9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ada0: 0x800008  jr          $a0
    ctx->pc = 0x26ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ADA8u: goto label_26ada8;
            case 0x26ADB0u: goto label_26adb0;
            case 0x26ADC0u: goto label_26adc0;
            case 0x26ADD0u: goto label_26add0;
            case 0x26ADD8u: goto label_26add8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ADA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26ADA8u;
label_26ada8:
    // 0x26ada8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26ADA8u;
    {
        const bool branch_taken_0x26ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADA8u;
        // 0x26adac: 0xae1106ec  sw          $s1, 0x6EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ada8) {
            ctx->pc = 0x26ADDCu;
            goto label_26addc;
        }
    }
    ctx->pc = 0x26ADB0u;
label_26adb0:
    // 0x26adb0: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x26ADB0u;
    SET_GPR_U32(ctx, 31, 0x26ADB8u);
    ctx->pc = 0x26ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADB0u;
    // 0x26adb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x26ADB0u, 0x26ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADB8u;
label_26adb8:
    // 0x26adb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26ADB8u;
    {
        const bool branch_taken_0x26adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADB8u;
        // 0x26adbc: 0xae1106f0  sw          $s1, 0x6F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adb8) {
            ctx->pc = 0x26ADDCu;
            goto label_26addc;
        }
    }
    ctx->pc = 0x26ADC0u;
label_26adc0:
    // 0x26adc0: 0xc0741e6  jal         func_1D0798
    ctx->pc = 0x26ADC0u;
    SET_GPR_U32(ctx, 31, 0x26ADC8u);
    ctx->pc = 0x26ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADC0u;
    // 0x26adc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0798u, 0x26ADC0u, 0x26ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADC8u;
label_26adc8:
    // 0x26adc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26ADC8u;
    {
        const bool branch_taken_0x26adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADC8u;
        // 0x26adcc: 0xae110734  sw          $s1, 0x734($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adc8) {
            ctx->pc = 0x26ADDCu;
            goto label_26addc;
        }
    }
    ctx->pc = 0x26ADD0u;
label_26add0:
    // 0x26add0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26ADD0u;
    {
        const bool branch_taken_0x26add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADD0u;
        // 0x26add4: 0xae1106f4  sw          $s1, 0x6F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1780), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26add0) {
            ctx->pc = 0x26ADDCu;
            goto label_26addc;
        }
    }
    ctx->pc = 0x26ADD8u;
label_26add8:
    // 0x26add8: 0xae110704  sw          $s1, 0x704($s0)
    ctx->pc = 0x26add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 17));
label_26addc:
    // 0x26addc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26addcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ade0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26ade0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ade4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26ade4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ade8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26adec: 0x3e00008  jr          $ra
    ctx->pc = 0x26ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADECu;
        // 0x26adf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ADF4u;
    // 0x26adf4: 0x0  nop
    ctx->pc = 0x26adf4u;
    // NOP
    ctx->pc = 0x26adf8u;
}
