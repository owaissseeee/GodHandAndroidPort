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

// Function: func_00224A28
// Address: 0x224a28 - 0x225110
void func_00224A28_0x224a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00224A28_0x224a28");
#endif

    switch (ctx->pc) {
        case 0x224b0cu: goto label_224b0c;
        case 0x224b34u: goto label_224b34;
        case 0x224b6cu: goto label_224b6c;
        case 0x224b84u: goto label_224b84;
        case 0x224c34u: goto label_224c34;
        case 0x224c54u: goto label_224c54;
        case 0x224c5cu: goto label_224c5c;
        case 0x224c7cu: goto label_224c7c;
        case 0x224ca0u: goto label_224ca0;
        case 0x224cd8u: goto label_224cd8;
        case 0x224d10u: goto label_224d10;
        case 0x224d2cu: goto label_224d2c;
        case 0x224d8cu: goto label_224d8c;
        case 0x224e04u: goto label_224e04;
        case 0x224e18u: goto label_224e18;
        case 0x224e60u: goto label_224e60;
        case 0x224e70u: goto label_224e70;
        case 0x224e84u: goto label_224e84;
        case 0x224eb8u: goto label_224eb8;
        case 0x224ec4u: goto label_224ec4;
        case 0x224ed0u: goto label_224ed0;
        case 0x224ee8u: goto label_224ee8;
        case 0x224ef8u: goto label_224ef8;
        case 0x224f10u: goto label_224f10;
        case 0x224f28u: goto label_224f28;
        case 0x224f40u: goto label_224f40;
        case 0x224f6cu: goto label_224f6c;
        case 0x224f8cu: goto label_224f8c;
        case 0x224fa0u: goto label_224fa0;
        case 0x224fb0u: goto label_224fb0;
        case 0x224fc4u: goto label_224fc4;
        case 0x224fd0u: goto label_224fd0;
        case 0x224fe0u: goto label_224fe0;
        case 0x22500cu: goto label_22500c;
        case 0x22502cu: goto label_22502c;
        case 0x225064u: goto label_225064;
        case 0x22506cu: goto label_22506c;
        case 0x225098u: goto label_225098;
        case 0x2250a4u: goto label_2250a4;
        default: break;
    }

    ctx->pc = 0x224a28u;

    // 0x224a28: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x224a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224a34: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x224a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x224a38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a3c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x224a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x224a40: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x224a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x224a44: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x224a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x224a48: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x224a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x224a4c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x224a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x224a50: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x224a50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x224a54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x224a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224a58: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x224a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224a5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x224a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224a60: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x224a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x224a64: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x224a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x224a68: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x224a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x224a6c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x224a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x224a70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x224a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x224a74: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x224a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x224a78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x224a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x224a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x224a80: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x224a84: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x224a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x224a88: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x224a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x224a8c: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x224a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x224a90: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x224a90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x224a94: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x224a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x224a98: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x224a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x224a9c: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x224a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x224aa0: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x224aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x224aa4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x224aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x224aa8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x224aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x224aac: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x224aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x224ab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x224ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224ab4: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x224ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224ab8: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x224ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224abc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x224abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x224ac0: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x224ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x224ac4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x224ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x224ac8: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x224ac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x224acc: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x224accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x224ad0: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x224ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x224ad4: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x224ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x224ad8: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x224ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x224adc: 0x10800171  beqz        $a0, . + 4 + (0x171 << 2)
    ctx->pc = 0x224ADCu;
    {
        const bool branch_taken_0x224adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ADCu;
        // 0x224ae0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224adc) {
            ctx->pc = 0x2250A4u;
            goto label_2250a4;
        }
    }
    ctx->pc = 0x224AE4u;
    // 0x224ae4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x224ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x224ae8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x224ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x224aec: 0x244284a0  addiu       $v0, $v0, -0x7B60
    ctx->pc = 0x224aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935712));
    // 0x224af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224af4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224af8: 0x800008  jr          $a0
    ctx->pc = 0x224AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224B00u: goto label_224b00;
            case 0x224BF8u: goto label_224bf8;
            case 0x224C74u: goto label_224c74;
            case 0x224CECu: goto label_224cec;
            case 0x224F38u: goto label_224f38;
            case 0x224F98u: goto label_224f98;
            case 0x224FD8u: goto label_224fd8;
            case 0x225038u: goto label_225038;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224AF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224B00u;
label_224b00:
    // 0x224b00: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x224b00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x224b04: 0xc09d91a  jal         func_276468
    ctx->pc = 0x224B04u;
    SET_GPR_U32(ctx, 31, 0x224B0Cu);
    ctx->pc = 0x224B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B04u;
    // 0x224b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x224B04u, 0x224B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B0Cu;
label_224b0c:
    // 0x224b0c: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x224b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224b10: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x224b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x224b14: 0x24749b70  addiu       $s4, $v1, -0x6490
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x224b18: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x224b18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224b1c: 0x8ca31e14  lw          $v1, 0x1E14($a1)
    ctx->pc = 0x224b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7700)));
    // 0x224b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x224b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b24: 0x8ca21e18  lw          $v0, 0x1E18($a1)
    ctx->pc = 0x224b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7704)));
    // 0x224b28: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x224b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x224b2c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224B2Cu;
    SET_GPR_U32(ctx, 31, 0x224B34u);
    ctx->pc = 0x224B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B2Cu;
    // 0x224b30: 0x458021  addu        $s0, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224B2Cu, 0x224B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B34u;
label_224b34:
    // 0x224b34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x224b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224b38: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224B38u;
    {
        const bool branch_taken_0x224b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x224b38) {
            ctx->pc = 0x224B4Cu;
            goto label_224b4c;
        }
    }
    ctx->pc = 0x224B40u;
    // 0x224b40: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x224b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224b44: 0x8c621e1c  lw          $v0, 0x1E1C($v1)
    ctx->pc = 0x224b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7708)));
    // 0x224b48: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x224b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224b4c:
    // 0x224b4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224b50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x224b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x224b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b60: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x224b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224b64: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x224B64u;
    SET_GPR_U32(ctx, 31, 0x224B6Cu);
    ctx->pc = 0x224B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B64u;
    // 0x224b68: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x224B64u, 0x224B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B6Cu;
label_224b6c:
    // 0x224b6c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x224b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224b74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x224b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b78: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x224b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x224b7c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224B7Cu;
    SET_GPR_U32(ctx, 31, 0x224B84u);
    ctx->pc = 0x224B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B7Cu;
    // 0x224b80: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224B7Cu, 0x224B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B84u;
label_224b84:
    // 0x224b84: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x224b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x224b88: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x224b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x224b8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224B8Cu;
    {
        const bool branch_taken_0x224b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B8Cu;
        // 0x224b90: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b8c) {
            ctx->pc = 0x224BACu;
            goto label_224bac;
        }
    }
    ctx->pc = 0x224B94u;
    // 0x224b94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224b98: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x224b9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224ba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224ba4: 0x800008  jr          $a0
    ctx->pc = 0x224BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224BACu: goto label_224bac;
            case 0x224BBCu: goto label_224bbc;
            case 0x224BCCu: goto label_224bcc;
            case 0x224BDCu: goto label_224bdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224BA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224BACu;
label_224bac:
    // 0x224bac: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x224bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x224bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x224BB4u;
    {
        const bool branch_taken_0x224bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BB4u;
        // 0x224bb8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bb4) {
            ctx->pc = 0x224BECu;
            goto label_224bec;
        }
    }
    ctx->pc = 0x224BBCu;
label_224bbc:
    // 0x224bbc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x224bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x224bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bc4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x224BC4u;
    {
        const bool branch_taken_0x224bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BC4u;
        // 0x224bc8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bc4) {
            ctx->pc = 0x224BECu;
            goto label_224bec;
        }
    }
    ctx->pc = 0x224BCCu;
label_224bcc:
    // 0x224bcc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x224bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x224bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x224BD4u;
    {
        const bool branch_taken_0x224bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BD4u;
        // 0x224bd8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bd4) {
            ctx->pc = 0x224BECu;
            goto label_224bec;
        }
    }
    ctx->pc = 0x224BDCu;
label_224bdc:
    // 0x224bdc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x224bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x224be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224be4: 0x0  nop
    ctx->pc = 0x224be4u;
    // NOP
    // 0x224be8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x224be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_224bec:
    // 0x224bec: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x224becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224bf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224bf4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224bf8:
    // 0x224bf8: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x224bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224bfc: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x224bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x224c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224c04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x224c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224c08: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x224c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x224c0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224c10: 0xae2316ec  sw          $v1, 0x16EC($s1)
    ctx->pc = 0x224c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5868), GPR_U32(ctx, 3));
    // 0x224c14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x224c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x224c18: 0xae2016e8  sw          $zero, 0x16E8($s1)
    ctx->pc = 0x224c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 0));
    // 0x224c1c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x224C1Cu;
    {
        const bool branch_taken_0x224c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C1Cu;
        // 0x224c20: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c1c) {
            ctx->pc = 0x224C54u;
            goto label_224c54;
        }
    }
    ctx->pc = 0x224C24u;
    // 0x224c24: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x224c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224c28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224c2c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x224C2Cu;
    SET_GPR_U32(ctx, 31, 0x224C34u);
    ctx->pc = 0x224C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C2Cu;
    // 0x224c30: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x224C2Cu, 0x224C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C34u;
label_224c34:
    // 0x224c34: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x224c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c3c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x224c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x224c40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224c44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x224c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224c48: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x224c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x224c4c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x224C4Cu;
    SET_GPR_U32(ctx, 31, 0x224C54u);
    ctx->pc = 0x224C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C4Cu;
    // 0x224c50: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x224C4Cu, 0x224C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C54u;
label_224c54:
    // 0x224c54: 0xc055f06  jal         func_157C18
    ctx->pc = 0x224C54u;
    SET_GPR_U32(ctx, 31, 0x224C5Cu);
    ctx->pc = 0x224C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C54u;
    // 0x224c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x224C54u, 0x224C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C5Cu;
label_224c5c:
    // 0x224c5c: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x224C5Cu;
    {
        const bool branch_taken_0x224c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224c5c) {
            ctx->pc = 0x224FB0u;
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224C64u;
    // 0x224c64: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x224c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224c6c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x224C6Cu;
    {
        const bool branch_taken_0x224c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C6Cu;
        // 0x224c70: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c6c) {
            ctx->pc = 0x224FB0u;
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224C74u;
label_224c74:
    // 0x224c74: 0xc09d91a  jal         func_276468
    ctx->pc = 0x224C74u;
    SET_GPR_U32(ctx, 31, 0x224C7Cu);
    ctx->pc = 0x224C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C74u;
    // 0x224c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x224C74u, 0x224C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C7Cu;
label_224c7c:
    // 0x224c7c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224c80: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224c84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x224c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x224c88: 0x8c621e20  lw          $v0, 0x1E20($v1)
    ctx->pc = 0x224c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7712)));
    // 0x224c8c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x224c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x224c90: 0x8c651e24  lw          $a1, 0x1E24($v1)
    ctx->pc = 0x224c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7716)));
    // 0x224c94: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x224c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224c98: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224C98u;
    SET_GPR_U32(ctx, 31, 0x224CA0u);
    ctx->pc = 0x224C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C98u;
    // 0x224c9c: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224C98u, 0x224CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CA0u;
label_224ca0:
    // 0x224ca0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x224ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224ca4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224CA4u;
    {
        const bool branch_taken_0x224ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x224ca4) {
            ctx->pc = 0x224CB8u;
            goto label_224cb8;
        }
    }
    ctx->pc = 0x224CACu;
    // 0x224cac: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x224cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224cb0: 0x8c621e28  lw          $v0, 0x1E28($v1)
    ctx->pc = 0x224cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7720)));
    // 0x224cb4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x224cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224cb8:
    // 0x224cb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224cbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x224cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x224cc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ccc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x224cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224cd0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x224CD0u;
    SET_GPR_U32(ctx, 31, 0x224CD8u);
    ctx->pc = 0x224CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CD0u;
    // 0x224cd4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x224CD0u, 0x224CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CD8u;
label_224cd8:
    // 0x224cd8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x224cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224cdc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x224cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224ce0: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x224ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x224ce4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224ce8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224cec:
    // 0x224cec: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x224cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x224cf0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x224cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x224cf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x224cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224cf8: 0xae2016e8  sw          $zero, 0x16E8($s1)
    ctx->pc = 0x224cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 0));
    // 0x224cfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x224cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x224d00: 0xae2416ec  sw          $a0, 0x16EC($s1)
    ctx->pc = 0x224d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5868), GPR_U32(ctx, 4));
    // 0x224d04: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x224d04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x224d08: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x224D08u;
    SET_GPR_U32(ctx, 31, 0x224D10u);
    ctx->pc = 0x224D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D08u;
    // 0x224d0c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x224D08u, 0x224D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D10u;
label_224d10:
    // 0x224d10: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x224d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x224d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d18: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x224d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x224d1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224d20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x224d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x224d24: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x224D24u;
    SET_GPR_U32(ctx, 31, 0x224D2Cu);
    ctx->pc = 0x224D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D24u;
    // 0x224d28: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x224D24u, 0x224D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D2Cu;
label_224d2c:
    // 0x224d2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x224d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224d30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x224d30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x224d34: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x224d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224d38: 0x0  nop
    ctx->pc = 0x224d38u;
    // NOP
    // 0x224d3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x224D3Cu;
    {
        const bool branch_taken_0x224d3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D3Cu;
        // 0x224d40: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d3c) {
            ctx->pc = 0x224D48u;
            goto label_224d48;
        }
    }
    ctx->pc = 0x224D44u;
    // 0x224d44: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x224d44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
label_224d48:
    // 0x224d48: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x224d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x224d4c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x224d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x224d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224d54: 0x0  nop
    ctx->pc = 0x224d54u;
    // NOP
    // 0x224d58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x224d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224d5c: 0x0  nop
    ctx->pc = 0x224d5cu;
    // NOP
    // 0x224d60: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x224D60u;
    {
        const bool branch_taken_0x224d60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D60u;
        // 0x224d64: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d60) {
            ctx->pc = 0x224E1Cu;
            goto label_224e1c;
        }
    }
    ctx->pc = 0x224D68u;
    // 0x224d68: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x224d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x224d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224d70: 0x0  nop
    ctx->pc = 0x224d70u;
    // NOP
    // 0x224d74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224d78: 0x0  nop
    ctx->pc = 0x224d78u;
    // NOP
    // 0x224d7c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x224D7Cu;
    {
        const bool branch_taken_0x224d7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D7Cu;
        // 0x224d80: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d7c) {
            ctx->pc = 0x224E24u;
            goto label_224e24;
        }
    }
    ctx->pc = 0x224D84u;
    // 0x224d84: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x224D84u;
    SET_GPR_U32(ctx, 31, 0x224D8Cu);
    ctx->pc = 0x224D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D84u;
    // 0x224d88: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x224D84u, 0x224D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D8Cu;
label_224d8c:
    // 0x224d8c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x224d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x224d90: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x224d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x224d94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224D94u;
    {
        const bool branch_taken_0x224d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D94u;
        // 0x224d98: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d94) {
            ctx->pc = 0x224DB4u;
            goto label_224db4;
        }
    }
    ctx->pc = 0x224D9Cu;
    // 0x224d9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224da0: 0x244284e0  addiu       $v0, $v0, -0x7B20
    ctx->pc = 0x224da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935776));
    // 0x224da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224da8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224dac: 0x800008  jr          $a0
    ctx->pc = 0x224DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DB4u: goto label_224db4;
            case 0x224DC8u: goto label_224dc8;
            case 0x224DDCu: goto label_224ddc;
            case 0x224DF0u: goto label_224df0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224DB4u;
label_224db4:
    // 0x224db4: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x224db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x224db8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224dbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224dc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x224DC0u;
    {
        const bool branch_taken_0x224dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224dc0) {
            ctx->pc = 0x224DFCu;
            goto label_224dfc;
        }
    }
    ctx->pc = 0x224DC8u;
label_224dc8:
    // 0x224dc8: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x224dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
    // 0x224dcc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224dd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224dd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x224DD4u;
    {
        const bool branch_taken_0x224dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224dd4) {
            ctx->pc = 0x224DFCu;
            goto label_224dfc;
        }
    }
    ctx->pc = 0x224DDCu;
label_224ddc:
    // 0x224ddc: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x224ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x224de0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224de4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224de8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x224DE8u;
    {
        const bool branch_taken_0x224de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224de8) {
            ctx->pc = 0x224DFCu;
            goto label_224dfc;
        }
    }
    ctx->pc = 0x224DF0u;
label_224df0:
    // 0x224df0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x224df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x224df4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x224df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x224df8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_224dfc:
    // 0x224dfc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x224DFCu;
    SET_GPR_U32(ctx, 31, 0x224E04u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x224DFCu, 0x224E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E04u;
label_224e04:
    // 0x224e04: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x224e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e0c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x224e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x224e10: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x224E10u;
    SET_GPR_U32(ctx, 31, 0x224E18u);
    ctx->pc = 0x224E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E10u;
    // 0x224e14: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x224E10u, 0x224E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E18u;
label_224e18:
    // 0x224e18: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x224e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224e1c:
    // 0x224e1c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x224e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x224e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x224e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224e24:
    // 0x224e24: 0x0  nop
    ctx->pc = 0x224e24u;
    // NOP
    // 0x224e28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224e2c: 0x0  nop
    ctx->pc = 0x224e2cu;
    // NOP
    // 0x224e30: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x224E30u;
    {
        const bool branch_taken_0x224e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E30u;
        // 0x224e34: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e30) {
            ctx->pc = 0x224E54u;
            goto label_224e54;
        }
    }
    ctx->pc = 0x224E38u;
    // 0x224e38: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x224e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x224e3c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x224e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x224e40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224E40u;
    {
        const bool branch_taken_0x224e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E40u;
        // 0x224e44: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e40) {
            ctx->pc = 0x224E54u;
            goto label_224e54;
        }
    }
    ctx->pc = 0x224E48u;
    // 0x224e48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x224e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224e4c: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x224e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x224e50: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_224e54:
    // 0x224e54: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x224e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x224e58: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x224E58u;
    SET_GPR_U32(ctx, 31, 0x224E60u);
    ctx->pc = 0x224E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E58u;
    // 0x224e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x224E58u, 0x224E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E60u;
label_224e60:
    // 0x224e60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224E60u;
    {
        const bool branch_taken_0x224e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E60u;
        // 0x224e64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e60) {
            ctx->pc = 0x224E78u;
            goto label_224e78;
        }
    }
    ctx->pc = 0x224E68u;
    // 0x224e68: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x224E68u;
    SET_GPR_U32(ctx, 31, 0x224E70u);
    ctx->pc = 0x224E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E68u;
    // 0x224e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x224E68u, 0x224E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E70u;
label_224e70:
    // 0x224e70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x224E70u;
    {
        const bool branch_taken_0x224e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E70u;
        // 0x224e74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e70) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224E78u;
label_224e78:
    // 0x224e78: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224e78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224e7c:
    // 0x224e7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x224E7Cu;
    SET_GPR_U32(ctx, 31, 0x224E84u);
    ctx->pc = 0x224E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E7Cu;
    // 0x224e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x224E7Cu, 0x224E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E84u;
label_224e84:
    // 0x224e84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224E84u;
    {
        const bool branch_taken_0x224e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e84) {
            ctx->pc = 0x224EA4u;
            goto label_224ea4;
        }
    }
    ctx->pc = 0x224E8Cu;
    // 0x224e8c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x224e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x224e90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x224e94: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224E94u;
    {
        const bool branch_taken_0x224e94 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x224E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E94u;
        // 0x224e98: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e94) {
            ctx->pc = 0x224EA4u;
            goto label_224ea4;
        }
    }
    ctx->pc = 0x224E9Cu;
    // 0x224e9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224ea0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x224ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_224ea4:
    // 0x224ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224ea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eb0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x224EB0u;
    SET_GPR_U32(ctx, 31, 0x224EB8u);
    ctx->pc = 0x224EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EB0u;
    // 0x224eb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x224EB0u, 0x224EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EB8u;
label_224eb8:
    // 0x224eb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x224eb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x224ebc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x224EBCu;
    SET_GPR_U32(ctx, 31, 0x224EC4u);
    ctx->pc = 0x224EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EBCu;
    // 0x224ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x224EBCu, 0x224EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EC4u;
label_224ec4:
    // 0x224ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ec8: 0xc0989d4  jal         func_262750
    ctx->pc = 0x224EC8u;
    SET_GPR_U32(ctx, 31, 0x224ED0u);
    ctx->pc = 0x224ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EC8u;
    // 0x224ecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x224EC8u, 0x224ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224ED0u;
label_224ed0:
    // 0x224ed0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x224ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x224ed4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x224ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x224ed8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x224ED8u;
    {
        const bool branch_taken_0x224ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ed8) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224EE0u;
    // 0x224ee0: 0xc09c36c  jal         func_270DB0
    ctx->pc = 0x224EE0u;
    SET_GPR_U32(ctx, 31, 0x224EE8u);
    ctx->pc = 0x224EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EE0u;
    // 0x224ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB0u, 0x224EE0u, 0x224EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EE8u;
label_224ee8:
    // 0x224ee8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224EE8u;
    {
        const bool branch_taken_0x224ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ee8) {
            ctx->pc = 0x224F18u;
            goto label_224f18;
        }
    }
    ctx->pc = 0x224EF0u;
    // 0x224ef0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x224EF0u;
    SET_GPR_U32(ctx, 31, 0x224EF8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x224EF0u, 0x224EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EF8u;
label_224ef8:
    // 0x224ef8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x224ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x224efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f00: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x224f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x224f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f08: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x224F08u;
    SET_GPR_U32(ctx, 31, 0x224F10u);
    ctx->pc = 0x224F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F08u;
    // 0x224f0c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x224F08u, 0x224F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F10u;
label_224f10:
    // 0x224f10: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x224F10u;
    {
        const bool branch_taken_0x224f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F10u;
        // 0x224f14: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f10) {
            ctx->pc = 0x2250ECu;
            goto label_2250ec;
        }
    }
    ctx->pc = 0x224F18u;
label_224f18:
    // 0x224f18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x224f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x224f1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x224f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224f20: 0xc09d622  jal         func_275888
    ctx->pc = 0x224F20u;
    SET_GPR_U32(ctx, 31, 0x224F28u);
    ctx->pc = 0x224F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F20u;
    // 0x224f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275888u, 0x224F20u, 0x224F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F28u;
label_224f28:
    // 0x224f28: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x224F28u;
    {
        const bool branch_taken_0x224f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F28u;
        // 0x224f2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f28) {
            ctx->pc = 0x2250A4u;
            goto label_2250a4;
        }
    }
    ctx->pc = 0x224F30u;
    // 0x224f30: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x224F30u;
    {
        const bool branch_taken_0x224f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F30u;
        // 0x224f34: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f30) {
            ctx->pc = 0x2250A4u;
            goto label_2250a4;
        }
    }
    ctx->pc = 0x224F38u;
label_224f38:
    // 0x224f38: 0xc09d91a  jal         func_276468
    ctx->pc = 0x224F38u;
    SET_GPR_U32(ctx, 31, 0x224F40u);
    ctx->pc = 0x224F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F38u;
    // 0x224f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x224F38u, 0x224F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F40u;
label_224f40:
    // 0x224f40: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x224f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224f44: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x224f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f50: 0x8c65096c  lw          $a1, 0x96C($v1)
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2412)));
    // 0x224f54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x224f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224f58: 0x8c660970  lw          $a2, 0x970($v1)
    ctx->pc = 0x224f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2416)));
    // 0x224f5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x224f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f60: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x224f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x224f64: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x224F64u;
    SET_GPR_U32(ctx, 31, 0x224F6Cu);
    ctx->pc = 0x224F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F64u;
    // 0x224f68: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x224F64u, 0x224F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F6Cu;
label_224f6c:
    // 0x224f6c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x224f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x224f70: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x224f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x224f74: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x224f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x224f78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x224f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f7c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x224f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x224f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224f84: 0xc0c194a  jal         func_306528
    ctx->pc = 0x224F84u;
    SET_GPR_U32(ctx, 31, 0x224F8Cu);
    ctx->pc = 0x224F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F84u;
    // 0x224f88: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x224F84u, 0x224F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F8Cu;
label_224f8c:
    // 0x224f8c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x224f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x224f90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224f94: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x224f94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_224f98:
    // 0x224f98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x224F98u;
    SET_GPR_U32(ctx, 31, 0x224FA0u);
    ctx->pc = 0x224F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F98u;
    // 0x224f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x224F98u, 0x224FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FA0u;
label_224fa0:
    // 0x224fa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224FA0u;
    {
        const bool branch_taken_0x224fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224fa0) {
            ctx->pc = 0x224FB0u;
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224FA8u;
    // 0x224fa8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x224FA8u;
    SET_GPR_U32(ctx, 31, 0x224FB0u);
    ctx->pc = 0x224FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FA8u;
    // 0x224fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x224FA8u, 0x224FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FB0u;
label_224fb0:
    // 0x224fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224fb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fbc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x224FBCu;
    SET_GPR_U32(ctx, 31, 0x224FC4u);
    ctx->pc = 0x224FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FBCu;
    // 0x224fc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x224FBCu, 0x224FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FC4u;
label_224fc4:
    // 0x224fc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x224fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x224fc8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x224FC8u;
    SET_GPR_U32(ctx, 31, 0x224FD0u);
    ctx->pc = 0x224FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FC8u;
    // 0x224fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x224FC8u, 0x224FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FD0u;
label_224fd0:
    // 0x224fd0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x224FD0u;
    {
        const bool branch_taken_0x224fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FD0u;
        // 0x224fd4: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fd0) {
            ctx->pc = 0x2250A8u;
            goto label_2250a8;
        }
    }
    ctx->pc = 0x224FD8u;
label_224fd8:
    // 0x224fd8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x224FD8u;
    SET_GPR_U32(ctx, 31, 0x224FE0u);
    ctx->pc = 0x224FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FD8u;
    // 0x224fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x224FD8u, 0x224FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FE0u;
label_224fe0:
    // 0x224fe0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x224fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x224fe4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x224fe4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x224fe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x224fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ff0: 0x8c651e2c  lw          $a1, 0x1E2C($v1)
    ctx->pc = 0x224ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7724)));
    // 0x224ff4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x224ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224ff8: 0x8c661e30  lw          $a2, 0x1E30($v1)
    ctx->pc = 0x224ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7728)));
    // 0x224ffc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x224ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225000: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x225000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x225004: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225004u;
    SET_GPR_U32(ctx, 31, 0x22500Cu);
    ctx->pc = 0x225008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225004u;
    // 0x225008: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225004u, 0x22500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22500Cu;
label_22500c:
    // 0x22500c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x22500cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x225010: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x225014: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x225014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x225018: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x225018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22501c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22501cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225020: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x225020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225024: 0xc0c194a  jal         func_306528
    ctx->pc = 0x225024u;
    SET_GPR_U32(ctx, 31, 0x22502Cu);
    ctx->pc = 0x225028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225024u;
    // 0x225028: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x225024u, 0x22502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22502Cu;
label_22502c:
    // 0x22502c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x22502cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x225030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x225030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x225034: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x225034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_225038:
    // 0x225038: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x225038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22503c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22503cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225044: 0xae2016e8  sw          $zero, 0x16E8($s1)
    ctx->pc = 0x225044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 0));
    // 0x225048: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x225048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22504c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x225050: 0xae2216ec  sw          $v0, 0x16EC($s1)
    ctx->pc = 0x225050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5868), GPR_U32(ctx, 2));
    // 0x225054: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x225054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x225058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22505c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22505Cu;
    SET_GPR_U32(ctx, 31, 0x225064u);
    ctx->pc = 0x225060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22505Cu;
    // 0x225060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22505Cu, 0x225064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225064u;
label_225064:
    // 0x225064: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225064u;
    SET_GPR_U32(ctx, 31, 0x22506Cu);
    ctx->pc = 0x225068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225064u;
    // 0x225068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225064u, 0x22506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22506Cu;
label_22506c:
    // 0x22506c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22506Cu;
    {
        const bool branch_taken_0x22506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22506Cu;
        // 0x225070: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22506c) {
            ctx->pc = 0x225084u;
            goto label_225084;
        }
    }
    ctx->pc = 0x225074u;
    // 0x225074: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x225074u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x225078: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x225078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x22507c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x22507cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x225080: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x225080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_225084:
    // 0x225084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22508c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225090: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225090u;
    SET_GPR_U32(ctx, 31, 0x225098u);
    ctx->pc = 0x225094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225090u;
    // 0x225094: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225090u, 0x225098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225098u;
label_225098:
    // 0x225098: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22509c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22509Cu;
    SET_GPR_U32(ctx, 31, 0x2250A4u);
    ctx->pc = 0x2250A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22509Cu;
    // 0x2250a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22509Cu, 0x2250A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250A4u;
label_2250a4:
    // 0x2250a4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2250a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2250a8:
    // 0x2250a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2250a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2250ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2250ACu;
    {
        const bool branch_taken_0x2250ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250ACu;
        // 0x2250b0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250ac) {
            ctx->pc = 0x2250CCu;
            goto label_2250cc;
        }
    }
    ctx->pc = 0x2250B4u;
    // 0x2250b4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2250b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2250b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2250b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2250bc: 0xae2316f8  sw          $v1, 0x16F8($s1)
    ctx->pc = 0x2250bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5880), GPR_U32(ctx, 3));
    // 0x2250c0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2250c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2250c4: 0xae2405fc  sw          $a0, 0x5FC($s1)
    ctx->pc = 0x2250c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 4));
    // 0x2250c8: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2250c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_2250cc:
    // 0x2250cc: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2250ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x2250d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2250D0u;
    {
        const bool branch_taken_0x2250d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250D0u;
        // 0x2250d4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250d0) {
            ctx->pc = 0x2250ECu;
            goto label_2250ec;
        }
    }
    ctx->pc = 0x2250D8u;
    // 0x2250d8: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2250d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2250dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2250dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2250e0: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2250e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2250e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2250e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2250e8: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2250e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2250ec:
    // 0x2250ec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2250ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2250f0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2250f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2250f4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2250f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2250f8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2250f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2250fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2250fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x225100: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x225100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225104: 0x3e00008  jr          $ra
    ctx->pc = 0x225104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225104u;
        // 0x225108: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22510Cu;
    // 0x22510c: 0x0  nop
    ctx->pc = 0x22510cu;
    // NOP
    ctx->pc = 0x225110u;
}
