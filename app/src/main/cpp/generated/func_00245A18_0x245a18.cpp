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

// Function: func_00245A18
// Address: 0x245a18 - 0x246088
void func_00245A18_0x245a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00245A18_0x245a18");
#endif

    switch (ctx->pc) {
        case 0x245a54u: goto label_245a54;
        case 0x245aacu: goto label_245aac;
        case 0x245ac8u: goto label_245ac8;
        case 0x245ae8u: goto label_245ae8;
        case 0x245b08u: goto label_245b08;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b40u: goto label_245b40;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b84u: goto label_245b84;
        case 0x245ba8u: goto label_245ba8;
        case 0x245becu: goto label_245bec;
        case 0x245c08u: goto label_245c08;
        case 0x245c18u: goto label_245c18;
        case 0x245c38u: goto label_245c38;
        case 0x245d40u: goto label_245d40;
        case 0x245d60u: goto label_245d60;
        case 0x245d80u: goto label_245d80;
        case 0x245d94u: goto label_245d94;
        case 0x245dc4u: goto label_245dc4;
        case 0x245de8u: goto label_245de8;
        case 0x245df4u: goto label_245df4;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e50u: goto label_245e50;
        case 0x245e84u: goto label_245e84;
        case 0x245e8cu: goto label_245e8c;
        case 0x245eacu: goto label_245eac;
        case 0x245eccu: goto label_245ecc;
        case 0x245edcu: goto label_245edc;
        case 0x245f88u: goto label_245f88;
        case 0x245facu: goto label_245fac;
        case 0x245fc4u: goto label_245fc4;
        case 0x245fdcu: goto label_245fdc;
        case 0x245fe8u: goto label_245fe8;
        case 0x245ff8u: goto label_245ff8;
        case 0x24600cu: goto label_24600c;
        case 0x246018u: goto label_246018;
        case 0x24602cu: goto label_24602c;
        default: break;
    }

    ctx->pc = 0x245a18u;

    // 0x245a18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x245a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x245a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x245a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x245a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x245a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x245a2c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x245a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x245a30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x245a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x245a34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x245a38: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x245a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x245a3c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x245a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x245a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a44: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x245a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x245a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245a4c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x245A4Cu;
    SET_GPR_U32(ctx, 31, 0x245A54u);
    ctx->pc = 0x245A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A4Cu;
    // 0x245a50: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x245A4Cu, 0x245A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A54u;
label_245a54:
    // 0x245a54: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x245a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x245a58: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x245a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x245a5c: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x245A5Cu;
    {
        const bool branch_taken_0x245a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A5Cu;
        // 0x245a60: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a5c) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x245A64u;
    // 0x245a64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245a68: 0x2442d490  addiu       $v0, $v0, -0x2B70
    ctx->pc = 0x245a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956176));
    // 0x245a6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245a70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245a74: 0x800008  jr          $a0
    ctx->pc = 0x245A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245A7Cu: goto label_245a7c;
            case 0x245AE0u: goto label_245ae0;
            case 0x245C94u: goto label_245c94;
            case 0x245D58u: goto label_245d58;
            case 0x245E24u: goto label_245e24;
            case 0x245F70u: goto label_245f70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245A74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245A7Cu;
label_245a7c:
    // 0x245a7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x245a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a84: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x245a84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x245a88: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x245a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245a90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a94: 0x8c453538  lw          $a1, 0x3538($v0)
    ctx->pc = 0x245a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13624)));
    // 0x245a98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245a9c: 0x8c46353c  lw          $a2, 0x353C($v0)
    ctx->pc = 0x245a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13628)));
    // 0x245aa0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x245aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245aa4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x245AA4u;
    SET_GPR_U32(ctx, 31, 0x245AACu);
    ctx->pc = 0x245AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245AA4u;
    // 0x245aa8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x245AA4u, 0x245AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AACu;
label_245aac:
    // 0x245aac: 0x8e290704  lw          $t1, 0x704($s1)
    ctx->pc = 0x245aacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x245ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ab4: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x245ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x245ab8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x245ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x245abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ac0: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x245AC0u;
    SET_GPR_U32(ctx, 31, 0x245AC8u);
    ctx->pc = 0x245AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245AC0u;
    // 0x245ac4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x245AC0u, 0x245AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AC8u;
label_245ac8:
    // 0x245ac8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x245ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x245acc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x245ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245ad8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x245ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x245adc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x245adcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_245ae0:
    // 0x245ae0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x245AE0u;
    SET_GPR_U32(ctx, 31, 0x245AE8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x245AE0u, 0x245AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245AE8u;
label_245ae8:
    // 0x245ae8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x245ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245af0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x245af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x245af4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x245af8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x245af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245afc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x245afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x245b00: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x245B00u;
    SET_GPR_U32(ctx, 31, 0x245B08u);
    ctx->pc = 0x245B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B00u;
    // 0x245b04: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x245B00u, 0x245B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B08u;
label_245b08:
    // 0x245b08: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x245b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x245b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245B14u;
    SET_GPR_U32(ctx, 31, 0x245B1Cu);
    ctx->pc = 0x245B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B14u;
    // 0x245b18: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245B14u, 0x245B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B1Cu;
label_245b1c:
    // 0x245b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245B1Cu;
    {
        const bool branch_taken_0x245b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b1c) {
            ctx->pc = 0x245B2Cu;
            goto label_245b2c;
        }
    }
    ctx->pc = 0x245B24u;
    // 0x245b24: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x245B24u;
    SET_GPR_U32(ctx, 31, 0x245B2Cu);
    ctx->pc = 0x245B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B24u;
    // 0x245b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x245B24u, 0x245B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B2Cu;
label_245b2c:
    // 0x245b2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245b30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245B38u;
    SET_GPR_U32(ctx, 31, 0x245B40u);
    ctx->pc = 0x245B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B38u;
    // 0x245b3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245B38u, 0x245B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B40u;
label_245b40:
    // 0x245b40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x245b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245b44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245B44u;
    SET_GPR_U32(ctx, 31, 0x245B4Cu);
    ctx->pc = 0x245B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B44u;
    // 0x245b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245B44u, 0x245B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B4Cu;
label_245b4c:
    // 0x245b4c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x245b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x245b50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245b54: 0x50400136  beql        $v0, $zero, . + 4 + (0x136 << 2)
    ctx->pc = 0x245B54u;
    {
        const bool branch_taken_0x245b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b54) {
            ctx->pc = 0x245B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245B54u;
            // 0x245b58: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246030u;
            goto label_246030;
        }
    }
    ctx->pc = 0x245B5Cu;
    // 0x245b5c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x245b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b60: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x245b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x245b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b68: 0x0  nop
    ctx->pc = 0x245b68u;
    // NOP
    // 0x245b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245b70: 0x0  nop
    ctx->pc = 0x245b70u;
    // NOP
    // 0x245b74: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x245B74u;
    {
        const bool branch_taken_0x245b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B74u;
        // 0x245b78: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b74) {
            ctx->pc = 0x245B9Cu;
            goto label_245b9c;
        }
    }
    ctx->pc = 0x245B7Cu;
    // 0x245b7c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x245B7Cu;
    SET_GPR_U32(ctx, 31, 0x245B84u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x245B7Cu, 0x245B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B84u;
label_245b84:
    // 0x245b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245B88u;
    {
        const bool branch_taken_0x245b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B88u;
        // 0x245b8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b88) {
            ctx->pc = 0x245B98u;
            goto label_245b98;
        }
    }
    ctx->pc = 0x245B90u;
    // 0x245b90: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x245B90u;
    {
        const bool branch_taken_0x245b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B90u;
        // 0x245b94: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b90) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x245B98u;
label_245b98:
    // 0x245b98: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_245b9c:
    // 0x245b9c: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x245b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x245ba0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x245BA0u;
    SET_GPR_U32(ctx, 31, 0x245BA8u);
    ctx->pc = 0x245BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BA0u;
    // 0x245ba4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x245BA0u, 0x245BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BA8u;
label_245ba8:
    // 0x245ba8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x245bac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x245bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x245bb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245BB0u;
    {
        const bool branch_taken_0x245bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BB0u;
        // 0x245bb4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bb0) {
            ctx->pc = 0x245BD0u;
            goto label_245bd0;
        }
    }
    ctx->pc = 0x245BB8u;
    // 0x245bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245bbc: 0x2442d4b0  addiu       $v0, $v0, -0x2B50
    ctx->pc = 0x245bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956208));
    // 0x245bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245bc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245bc8: 0x800008  jr          $a0
    ctx->pc = 0x245BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245BD0u: goto label_245bd0;
            case 0x245BD8u: goto label_245bd8;
            case 0x245BE0u: goto label_245be0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245BC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245BD0u;
label_245bd0:
    // 0x245bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x245BD0u;
    {
        const bool branch_taken_0x245bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BD0u;
        // 0x245bd4: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bd0) {
            ctx->pc = 0x245BE4u;
            goto label_245be4;
        }
    }
    ctx->pc = 0x245BD8u;
label_245bd8:
    // 0x245bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245BD8u;
    {
        const bool branch_taken_0x245bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BD8u;
        // 0x245bdc: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bd8) {
            ctx->pc = 0x245BE4u;
            goto label_245be4;
        }
    }
    ctx->pc = 0x245BE0u;
label_245be0:
    // 0x245be0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x245be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_245be4:
    // 0x245be4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x245BE4u;
    SET_GPR_U32(ctx, 31, 0x245BECu);
    ctx->pc = 0x245BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245BE4u;
    // 0x245be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x245BE4u, 0x245BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245BECu;
label_245bec:
    // 0x245bec: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x245becu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x245bf0: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x245BF0u;
    {
        const bool branch_taken_0x245bf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x245bf0) {
            ctx->pc = 0x245BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245BF0u;
            // 0x245bf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x245BF8u;
            goto label_245bf8;
        }
    }
    ctx->pc = 0x245BF8u;
label_245bf8:
    // 0x245bf8: 0x1810  mfhi        $v1
    ctx->pc = 0x245bf8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x245bfc: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x245BFCu;
    {
        const bool branch_taken_0x245bfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245BFCu;
        // 0x245c00: 0xa22302f7  sb          $v1, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bfc) {
            ctx->pc = 0x245C28u;
            goto label_245c28;
        }
    }
    ctx->pc = 0x245C04u;
    // 0x245c04: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x245c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_245c08:
    // 0x245c08: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245C08u;
    {
        const bool branch_taken_0x245c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x245C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C08u;
        // 0x245c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c08) {
            ctx->pc = 0x245C18u;
            goto label_245c18;
        }
    }
    ctx->pc = 0x245C10u;
    // 0x245c10: 0xc098224  jal         func_260890
    ctx->pc = 0x245C10u;
    SET_GPR_U32(ctx, 31, 0x245C18u);
    ctx->pc = 0x245C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C10u;
    // 0x245c14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260890u, 0x245C10u, 0x245C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C18u;
label_245c18:
    // 0x245c18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x245c1c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x245c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x245c20: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x245C20u;
    {
        const bool branch_taken_0x245c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c20) {
            ctx->pc = 0x245C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245C20u;
            // 0x245c24: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245c08;
        }
    }
    ctx->pc = 0x245C28u;
label_245c28:
    // 0x245c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245c2c: 0x26a49b70  addiu       $a0, $s5, -0x6490
    ctx->pc = 0x245c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x245c30: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x245C30u;
    SET_GPR_U32(ctx, 31, 0x245C38u);
    ctx->pc = 0x245C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245C30u;
    // 0x245c34: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x245C30u, 0x245C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C38u;
label_245c38:
    // 0x245c38: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x245c3c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x245c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x245c40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245C40u;
    {
        const bool branch_taken_0x245c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C40u;
        // 0x245c44: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c40) {
            ctx->pc = 0x245C60u;
            goto label_245c60;
        }
    }
    ctx->pc = 0x245C48u;
    // 0x245c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245c4c: 0x2442d4d0  addiu       $v0, $v0, -0x2B30
    ctx->pc = 0x245c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956240));
    // 0x245c50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245c54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245c58: 0x800008  jr          $a0
    ctx->pc = 0x245C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245C60u: goto label_245c60;
            case 0x245C70u: goto label_245c70;
            case 0x245C84u: goto label_245c84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245C58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245C60u;
label_245c60:
    // 0x245c60: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x245c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x245c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c68: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x245C68u;
    {
        const bool branch_taken_0x245c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C68u;
        // 0x245c6c: 0xe62016e4  swc1        $f0, 0x16E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c68) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x245C70u;
label_245c70:
    // 0x245c70: 0x3c0144a8  lui         $at, 0x44A8
    ctx->pc = 0x245c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17576 << 16));
    // 0x245c74: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x245c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x245c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c7c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x245C7Cu;
    {
        const bool branch_taken_0x245c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C7Cu;
        // 0x245c80: 0xe62016e4  swc1        $f0, 0x16E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c7c) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x245C84u;
label_245c84:
    // 0x245c84: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x245c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x245c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c8c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x245C8Cu;
    {
        const bool branch_taken_0x245c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C8Cu;
        // 0x245c90: 0xe62016e4  swc1        $f0, 0x16E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5860), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c8c) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x245C94u;
label_245c94:
    // 0x245c94: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x245c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x245c98: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x245c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x245c9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245C9Cu;
    {
        const bool branch_taken_0x245c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245C9Cu;
        // 0x245ca0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c9c) {
            ctx->pc = 0x245CBCu;
            goto label_245cbc;
        }
    }
    ctx->pc = 0x245CA4u;
    // 0x245ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245ca8: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x245ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x245cac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245cb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245cb4: 0x800008  jr          $a0
    ctx->pc = 0x245CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245CBCu: goto label_245cbc;
            case 0x245CC4u: goto label_245cc4;
            case 0x245CD8u: goto label_245cd8;
            case 0x245CECu: goto label_245cec;
            case 0x245D00u: goto label_245d00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245CB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245CBCu;
label_245cbc:
    // 0x245cbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x245CBCu;
    {
        const bool branch_taken_0x245cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CBCu;
        // 0x245cc0: 0xae200600  sw          $zero, 0x600($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cbc) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245CC4u;
label_245cc4:
    // 0x245cc4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x245cc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x245cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x245ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245cd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x245CD0u;
    {
        const bool branch_taken_0x245cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CD0u;
        // 0x245cd4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cd0) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245CD8u;
label_245cd8:
    // 0x245cd8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x245cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x245cdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x245cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x245ce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245ce4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x245CE4u;
    {
        const bool branch_taken_0x245ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CE4u;
        // 0x245ce8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ce4) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245CECu;
label_245cec:
    // 0x245cec: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x245cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x245cf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x245cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x245cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x245CF8u;
    {
        const bool branch_taken_0x245cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CF8u;
        // 0x245cfc: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cf8) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245D00u;
label_245d00:
    // 0x245d00: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x245d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x245d04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x245d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x245d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245d0c: 0x0  nop
    ctx->pc = 0x245d0cu;
    // NOP
    // 0x245d10: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x245d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_245d14:
    // 0x245d14: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x245d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x245d18: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x245d1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x245d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x245d20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245D20u;
    {
        const bool branch_taken_0x245d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D20u;
        // 0x245d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d20) {
            ctx->pc = 0x245D40u;
            goto label_245d40;
        }
    }
    ctx->pc = 0x245D28u;
    // 0x245d28: 0x8e290704  lw          $t1, 0x704($s1)
    ctx->pc = 0x245d28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
    // 0x245d2c: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x245d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x245d30: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x245d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x245d34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d38: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x245D38u;
    SET_GPR_U32(ctx, 31, 0x245D40u);
    ctx->pc = 0x245D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D38u;
    // 0x245d3c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x245D38u, 0x245D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x245d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x245d44: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x245d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x245d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245d50: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x245d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x245d54: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x245d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_245d58:
    // 0x245d58: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x245D58u;
    SET_GPR_U32(ctx, 31, 0x245D60u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x245D58u, 0x245D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D60u;
label_245d60:
    // 0x245d60: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x245d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d68: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x245d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x245d6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x245d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x245d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245d74: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x245d78: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x245D78u;
    SET_GPR_U32(ctx, 31, 0x245D80u);
    ctx->pc = 0x245D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D78u;
    // 0x245d7c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x245D78u, 0x245D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D80u;
label_245d80:
    // 0x245d80: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x245d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x245d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245D8Cu;
    SET_GPR_U32(ctx, 31, 0x245D94u);
    ctx->pc = 0x245D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D8Cu;
    // 0x245d90: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245D8Cu, 0x245D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D94u;
label_245d94:
    // 0x245d94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x245D94u;
    {
        const bool branch_taken_0x245d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D94u;
        // 0x245d98: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d94) {
            ctx->pc = 0x245DC4u;
            goto label_245dc4;
        }
    }
    ctx->pc = 0x245D9Cu;
    // 0x245d9c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x245da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245da8: 0x8c453418  lw          $a1, 0x3418($v0)
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x245dac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245dacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245db0: 0x8c46341c  lw          $a2, 0x341C($v0)
    ctx->pc = 0x245db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
    // 0x245db4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245db8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245dbc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x245DBCu;
    SET_GPR_U32(ctx, 31, 0x245DC4u);
    ctx->pc = 0x245DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DBCu;
    // 0x245dc0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x245DBCu, 0x245DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DC4u;
label_245dc4:
    // 0x245dc4: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x245dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245dcc: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x245dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245dd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x245dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x245ddc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x245ddcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245de0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245DE0u;
    SET_GPR_U32(ctx, 31, 0x245DE8u);
    ctx->pc = 0x245DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DE0u;
    // 0x245de4: 0xe6200330  swc1        $f0, 0x330($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245DE0u, 0x245DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DE8u;
label_245de8:
    // 0x245de8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x245de8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245dec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245DECu;
    SET_GPR_U32(ctx, 31, 0x245DF4u);
    ctx->pc = 0x245DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245DECu;
    // 0x245df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245DECu, 0x245DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x245df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245df8: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x245df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245dfc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x245dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x245e00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x245e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245e04: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x245e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245e08: 0x0  nop
    ctx->pc = 0x245e08u;
    // NOP
    // 0x245e0c: 0x45000087  bc1f        . + 4 + (0x87 << 2)
    ctx->pc = 0x245E0Cu;
    {
        const bool branch_taken_0x245e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E0Cu;
        // 0x245e10: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e0c) {
            ctx->pc = 0x24602Cu;
            goto label_24602c;
        }
    }
    ctx->pc = 0x245E14u;
    // 0x245e14: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x245E14u;
    SET_GPR_U32(ctx, 31, 0x245E1Cu);
    ctx->pc = 0x245E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E14u;
    // 0x245e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x245E14u, 0x245E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E1Cu;
label_245e1c:
    // 0x245e1c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x245E1Cu;
    {
        const bool branch_taken_0x245e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E1Cu;
        // 0x245e20: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e1c) {
            ctx->pc = 0x246030u;
            goto label_246030;
        }
    }
    ctx->pc = 0x245E24u;
label_245e24:
    // 0x245e24: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x245e28: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x245e2c: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x245e30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x245e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e34: 0x8c653544  lw          $a1, 0x3544($v1)
    ctx->pc = 0x245e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13636)));
    // 0x245e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x245e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e3c: 0x8c623548  lw          $v0, 0x3548($v1)
    ctx->pc = 0x245e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13640)));
    // 0x245e40: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x245e44: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x245e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x245e48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x245E48u;
    SET_GPR_U32(ctx, 31, 0x245E50u);
    ctx->pc = 0x245E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E48u;
    // 0x245e4c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x245E48u, 0x245E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E50u;
label_245e50:
    // 0x245e50: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x245E50u;
    {
        const bool branch_taken_0x245e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x245e50) {
            ctx->pc = 0x245E64u;
            goto label_245e64;
        }
    }
    ctx->pc = 0x245E58u;
    // 0x245e58: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x245e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x245e5c: 0x8c62354c  lw          $v0, 0x354C($v1)
    ctx->pc = 0x245e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13644)));
    // 0x245e60: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245e64:
    // 0x245e64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x245e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245e78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e7c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x245E7Cu;
    SET_GPR_U32(ctx, 31, 0x245E84u);
    ctx->pc = 0x245E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E7Cu;
    // 0x245e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x245E7Cu, 0x245E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E84u;
label_245e84:
    // 0x245e84: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x245E84u;
    SET_GPR_U32(ctx, 31, 0x245E8Cu);
    ctx->pc = 0x245E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245E84u;
    // 0x245e88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x245E84u, 0x245E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E8Cu;
label_245e8c:
    // 0x245e8c: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x245E8Cu;
    {
        const bool branch_taken_0x245e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x245E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E8Cu;
        // 0x245e90: 0x8e290704  lw          $t1, 0x704($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e8c) {
            ctx->pc = 0x245EB4u;
            goto label_245eb4;
        }
    }
    ctx->pc = 0x245E94u;
    // 0x245e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e98: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x245e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x245e9c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x245e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x245ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ea4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x245EA4u;
    SET_GPR_U32(ctx, 31, 0x245EACu);
    ctx->pc = 0x245EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EA4u;
    // 0x245ea8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x245EA4u, 0x245EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EACu;
label_245eac:
    // 0x245eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245EACu;
    {
        const bool branch_taken_0x245eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EACu;
        // 0x245eb0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245eac) {
            ctx->pc = 0x245ED0u;
            goto label_245ed0;
        }
    }
    ctx->pc = 0x245EB4u;
label_245eb4:
    // 0x245eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245eb8: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x245eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x245ebc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x245ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x245ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ec4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x245EC4u;
    SET_GPR_U32(ctx, 31, 0x245ECCu);
    ctx->pc = 0x245EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EC4u;
    // 0x245ec8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x245EC4u, 0x245ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245ECCu;
label_245ecc:
    // 0x245ecc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x245eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_245ed0:
    // 0x245ed0: 0x26a49b70  addiu       $a0, $s5, -0x6490
    ctx->pc = 0x245ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x245ed4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x245ED4u;
    SET_GPR_U32(ctx, 31, 0x245EDCu);
    ctx->pc = 0x245ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245ED4u;
    // 0x245ed8: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x245ED4u, 0x245EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EDCu;
label_245edc:
    // 0x245edc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x245edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x245ee0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x245ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x245ee4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245EE4u;
    {
        const bool branch_taken_0x245ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EE4u;
        // 0x245ee8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ee4) {
            ctx->pc = 0x245F04u;
            goto label_245f04;
        }
    }
    ctx->pc = 0x245EECu;
    // 0x245eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245ef0: 0x2442d510  addiu       $v0, $v0, -0x2AF0
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956304));
    // 0x245ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245ef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245efc: 0x800008  jr          $a0
    ctx->pc = 0x245EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245F04u: goto label_245f04;
            case 0x245F1Cu: goto label_245f1c;
            case 0x245F38u: goto label_245f38;
            case 0x245F5Cu: goto label_245f5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245F04u;
label_245f04:
    // 0x245f04: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x245f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x245f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x245f0c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x245f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245f14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x245F14u;
    {
        const bool branch_taken_0x245f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F14u;
        // 0x245f18: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f14) {
            ctx->pc = 0x245F54u;
            goto label_245f54;
        }
    }
    ctx->pc = 0x245F1Cu;
label_245f1c:
    // 0x245f1c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x245f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x245f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x245f24: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x245f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x245f28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x245f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x245f2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245f30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245F30u;
    {
        const bool branch_taken_0x245f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F30u;
        // 0x245f34: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f30) {
            ctx->pc = 0x245F54u;
            goto label_245f54;
        }
    }
    ctx->pc = 0x245F38u;
label_245f38:
    // 0x245f38: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x245f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x245f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x245f40: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x245f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x245f44: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x245f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x245f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245f4c: 0x0  nop
    ctx->pc = 0x245f4cu;
    // NOP
    // 0x245f50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x245f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_245f54:
    // 0x245f54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x245f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x245f58: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x245f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_245f5c:
    // 0x245f5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x245f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x245f60: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x245f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245f68: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x245f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x245f6c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x245f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_245f70:
    // 0x245f70: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x245f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x245f74: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x245F74u;
    {
        const bool branch_taken_0x245f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F74u;
        // 0x245f78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f74) {
            ctx->pc = 0x245FE0u;
            goto label_245fe0;
        }
    }
    ctx->pc = 0x245F7Cu;
    // 0x245f7c: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x245f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x245f80: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x245F80u;
    SET_GPR_U32(ctx, 31, 0x245F88u);
    ctx->pc = 0x245F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F80u;
    // 0x245f84: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x245F80u, 0x245F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F88u;
label_245f88:
    // 0x245f88: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x245f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f90: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x245f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x245f94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x245f98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x245f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x245f9c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x245f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x245fa0: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x245fa0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x245fa4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x245FA4u;
    SET_GPR_U32(ctx, 31, 0x245FACu);
    ctx->pc = 0x245FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FA4u;
    // 0x245fa8: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x245FA4u, 0x245FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FACu;
label_245fac:
    // 0x245fac: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x245facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245fb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x245fb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x245fb4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x245fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x245fb8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x245fb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x245fbc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x245FBCu;
    SET_GPR_U32(ctx, 31, 0x245FC4u);
    ctx->pc = 0x245FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FBCu;
    // 0x245fc0: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x245FBCu, 0x245FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FC4u;
label_245fc4:
    // 0x245fc4: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x245fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245fc8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x245fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x245fcc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x245fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x245fd0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x245fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x245fd4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x245FD4u;
    SET_GPR_U32(ctx, 31, 0x245FDCu);
    ctx->pc = 0x245FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FD4u;
    // 0x245fd8: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x245FD4u, 0x245FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FDCu;
label_245fdc:
    // 0x245fdc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x245fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_245fe0:
    // 0x245fe0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245FE0u;
    SET_GPR_U32(ctx, 31, 0x245FE8u);
    ctx->pc = 0x245FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FE0u;
    // 0x245fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245FE0u, 0x245FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FE8u;
label_245fe8:
    // 0x245fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245FE8u;
    {
        const bool branch_taken_0x245fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fe8) {
            ctx->pc = 0x245FF8u;
            goto label_245ff8;
        }
    }
    ctx->pc = 0x245FF0u;
    // 0x245ff0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x245FF0u;
    SET_GPR_U32(ctx, 31, 0x245FF8u);
    ctx->pc = 0x245FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245FF0u;
    // 0x245ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x245FF0u, 0x245FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245FF8u;
label_245ff8:
    // 0x245ff8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245ffc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x246000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246004: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x246004u;
    SET_GPR_U32(ctx, 31, 0x24600Cu);
    ctx->pc = 0x246008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246004u;
    // 0x246008: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x246004u, 0x24600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24600Cu;
label_24600c:
    // 0x24600c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24600cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x246010: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x246010u;
    SET_GPR_U32(ctx, 31, 0x246018u);
    ctx->pc = 0x246014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246010u;
    // 0x246014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x246010u, 0x246018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246018u;
label_246018:
    // 0x246018: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x246018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x24601c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24601Cu;
    {
        const bool branch_taken_0x24601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24601c) {
            ctx->pc = 0x246020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24601Cu;
            // 0x246020: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246030u;
            goto label_246030;
        }
    }
    ctx->pc = 0x246024u;
    // 0x246024: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x246024u;
    SET_GPR_U32(ctx, 31, 0x24602Cu);
    ctx->pc = 0x246028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246024u;
    // 0x246028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x246024u, 0x24602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24602Cu;
label_24602c:
    // 0x24602c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x24602cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_246030:
    // 0x246030: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x246030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x246034: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246034u;
    {
        const bool branch_taken_0x246034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246034u;
        // 0x246038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246034) {
            ctx->pc = 0x246040u;
            goto label_246040;
        }
    }
    ctx->pc = 0x24603Cu;
    // 0x24603c: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x24603cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_246040:
    // 0x246040: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x246040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x246044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246044u;
    {
        const bool branch_taken_0x246044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246044u;
        // 0x246048: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246044) {
            ctx->pc = 0x246060u;
            goto label_246060;
        }
    }
    ctx->pc = 0x24604Cu;
    // 0x24604c: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x24604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x246050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x246054: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x246054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x246058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x246058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24605c: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x24605cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_246060:
    // 0x246060: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x246060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246064: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x246064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x246068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24606c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x24606cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246070: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x246070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246078: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x246078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24607c: 0x3e00008  jr          $ra
    ctx->pc = 0x24607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24607Cu;
        // 0x246080: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246084u;
    // 0x246084: 0x0  nop
    ctx->pc = 0x246084u;
    // NOP
    ctx->pc = 0x246088u;
}
