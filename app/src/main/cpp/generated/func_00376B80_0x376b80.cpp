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

// Function: func_00376B80
// Address: 0x376b80 - 0x376cf8
void func_00376B80_0x376b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376B80_0x376b80");
#endif

    switch (ctx->pc) {
        case 0x376be8u: goto label_376be8;
        case 0x376c44u: goto label_376c44;
        default: break;
    }

    ctx->pc = 0x376b80u;

    // 0x376b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x376b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x376b84: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x376b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x376b8c: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x376b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x376b90: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x376b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x376b94: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x376b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x376b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x376b9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x376b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ba0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x376ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x376ba4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x376ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x376ba8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x376ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x376bac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x376bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x376bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376bb4: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x376bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x376bb8: 0x8664000a  lh          $a0, 0xA($s3)
    ctx->pc = 0x376bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x376bbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x376bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x376bc0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x376bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x376bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x376bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x376bc8: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x376bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x376bcc: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x376bccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x376bd0: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x376bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x376bd4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x376bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x376bd8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x376BD8u;
    {
        const bool branch_taken_0x376bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BD8u;
        // 0x376bdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bd8) {
            ctx->pc = 0x376CD8u;
            goto label_376cd8;
        }
    }
    ctx->pc = 0x376BE0u;
    // 0x376be0: 0xc0df45c  jal         func_37D170
    ctx->pc = 0x376BE0u;
    SET_GPR_U32(ctx, 31, 0x376BE8u);
    ctx->pc = 0x37D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D170u, 0x376BE0u, 0x376BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BE8u;
label_376be8:
    // 0x376be8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x376be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bec: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x376BECu;
    {
        const bool branch_taken_0x376bec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x376BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BECu;
        // 0x376bf0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bec) {
            ctx->pc = 0x376CD4u;
            goto label_376cd4;
        }
    }
    ctx->pc = 0x376BF4u;
    // 0x376bf4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x376bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376bf8: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x376bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x376bfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x376bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x376c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x376c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c08: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x376c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x376c0c: 0x24100017  addiu       $s0, $zero, 0x17
    ctx->pc = 0x376c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x376c10: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x376c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x376c14: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x376c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x376c18: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x376c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x376c1c: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x376c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x376c20: 0xa246000d  sb          $a2, 0xD($s2)
    ctx->pc = 0x376c20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x376c24: 0xa243000c  sb          $v1, 0xC($s2)
    ctx->pc = 0x376c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x376c28: 0xa651000e  sh          $s1, 0xE($s2)
    ctx->pc = 0x376c28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x376c2c: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x376c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x376c30: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x376c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x376c34: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x376c34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x376c38: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x376c38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x376c3c: 0xc0ddb3e  jal         func_376CF8
    ctx->pc = 0x376C3Cu;
    SET_GPR_U32(ctx, 31, 0x376C44u);
    ctx->pc = 0x376C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C3Cu;
    // 0x376c40: 0xa6430014  sh          $v1, 0x14($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376CF8u, 0x376C3Cu, 0x376C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C44u;
label_376c44:
    // 0x376c44: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x376c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x376c48: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x376c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x376c4c: 0xa6430020  sh          $v1, 0x20($s2)
    ctx->pc = 0x376c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c50: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x376c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x376c54: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x376c54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x376c58: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x376c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x376c5c: 0xa6430024  sh          $v1, 0x24($s2)
    ctx->pc = 0x376c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c60: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x376c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x376c64: 0x9282000f  lbu         $v0, 0xF($s4)
    ctx->pc = 0x376c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x376c68: 0xa2440028  sb          $a0, 0x28($s2)
    ctx->pc = 0x376c68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x376c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x376c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x376c70: 0xa2400027  sb          $zero, 0x27($s2)
    ctx->pc = 0x376c70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x376c74: 0xa2420026  sb          $v0, 0x26($s2)
    ctx->pc = 0x376c74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x376c78: 0xa2400029  sb          $zero, 0x29($s2)
    ctx->pc = 0x376c78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x376c7c: 0xa640002a  sh          $zero, 0x2A($s2)
    ctx->pc = 0x376c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x376c80: 0x96830014  lhu         $v1, 0x14($s4)
    ctx->pc = 0x376c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x376c84: 0xa650002e  sh          $s0, 0x2E($s2)
    ctx->pc = 0x376c84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 16));
    // 0x376c88: 0xa643002c  sh          $v1, 0x2C($s2)
    ctx->pc = 0x376c88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c8c: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x376c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x376c90: 0xa6420030  sh          $v0, 0x30($s2)
    ctx->pc = 0x376c90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x376c94: 0x9663000c  lhu         $v1, 0xC($s3)
    ctx->pc = 0x376c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x376c98: 0xa6430032  sh          $v1, 0x32($s2)
    ctx->pc = 0x376c98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x376c9c: 0x9664000e  lhu         $a0, 0xE($s3)
    ctx->pc = 0x376c9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x376ca0: 0xa6400036  sh          $zero, 0x36($s2)
    ctx->pc = 0x376ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x376ca4: 0xa6440034  sh          $a0, 0x34($s2)
    ctx->pc = 0x376ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x376ca8: 0x96a20018  lhu         $v0, 0x18($s5)
    ctx->pc = 0x376ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x376cac: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x376cacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x376cb0: 0x96a3001a  lhu         $v1, 0x1A($s5)
    ctx->pc = 0x376cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x376cb4: 0xa643003a  sh          $v1, 0x3A($s2)
    ctx->pc = 0x376cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x376cb8: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x376cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x376cbc: 0xa251003e  sb          $s1, 0x3E($s2)
    ctx->pc = 0x376cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 17));
    // 0x376cc0: 0xa642003c  sh          $v0, 0x3C($s2)
    ctx->pc = 0x376cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x376cc4: 0xa2400041  sb          $zero, 0x41($s2)
    ctx->pc = 0x376cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x376cc8: 0xa2400040  sb          $zero, 0x40($s2)
    ctx->pc = 0x376cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x376ccc: 0xa2400043  sb          $zero, 0x43($s2)
    ctx->pc = 0x376cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x376cd0: 0xa2400042  sb          $zero, 0x42($s2)
    ctx->pc = 0x376cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 0));
label_376cd4:
    // 0x376cd4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x376cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_376cd8:
    // 0x376cd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x376cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x376cdc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x376cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x376ce0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x376ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376ce4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x376ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376ce8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x376ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x376CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CF0u;
        // 0x376cf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376CF8u;
}
