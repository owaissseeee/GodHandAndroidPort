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

// Function: func_002299C0
// Address: 0x2299c0 - 0x229d08
void func_002299C0_0x2299c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002299C0_0x2299c0");
#endif

    switch (ctx->pc) {
        case 0x229a20u: goto label_229a20;
        case 0x229a4cu: goto label_229a4c;
        case 0x229a60u: goto label_229a60;
        case 0x229aa0u: goto label_229aa0;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ab8u: goto label_229ab8;
        case 0x229ac8u: goto label_229ac8;
        case 0x229b00u: goto label_229b00;
        case 0x229b0cu: goto label_229b0c;
        case 0x229b18u: goto label_229b18;
        case 0x229b28u: goto label_229b28;
        case 0x229b48u: goto label_229b48;
        case 0x229b68u: goto label_229b68;
        case 0x229bc8u: goto label_229bc8;
        case 0x229c1cu: goto label_229c1c;
        case 0x229c2cu: goto label_229c2c;
        case 0x229c4cu: goto label_229c4c;
        case 0x229c54u: goto label_229c54;
        case 0x229c74u: goto label_229c74;
        case 0x229cd0u: goto label_229cd0;
        case 0x229cdcu: goto label_229cdc;
        case 0x229ce4u: goto label_229ce4;
        default: break;
    }

    ctx->pc = 0x2299c0u;

    // 0x2299c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2299c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2299c4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2299c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2299c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2299c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299cc: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2299ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2299d0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2299d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2299d4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2299d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2299d8: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2299d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2299dc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2299dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2299e0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2299e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2299e4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2299e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2299e8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2299e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2299ec: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2299ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2299f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2299f4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x2299f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2299f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2299F8u;
    {
        const bool branch_taken_0x2299f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2299FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299F8u;
        // 0x2299fc: 0xa242186a  sb          $v0, 0x186A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6250), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299f8) {
            ctx->pc = 0x229A14u;
            goto label_229a14;
        }
    }
    ctx->pc = 0x229A00u;
    // 0x229a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a04: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x229A04u;
    {
        const bool branch_taken_0x229a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A04u;
        // 0x229a08: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a04) {
            ctx->pc = 0x229BE0u;
            goto label_229be0;
        }
    }
    ctx->pc = 0x229A0Cu;
    // 0x229a0c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x229A0Cu;
    {
        const bool branch_taken_0x229a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A0Cu;
        // 0x229a10: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a0c) {
            ctx->pc = 0x229CECu;
            goto label_229cec;
        }
    }
    ctx->pc = 0x229A14u;
label_229a14:
    // 0x229a14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x229a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229a18: 0xc09d91a  jal         func_276468
    ctx->pc = 0x229A18u;
    SET_GPR_U32(ctx, 31, 0x229A20u);
    ctx->pc = 0x229A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A18u;
    // 0x229a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x229A18u, 0x229A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A20u;
label_229a20:
    // 0x229a20: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x229a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x229a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a28: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x229a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229a2c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x229a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229a30: 0x8c653740  lw          $a1, 0x3740($v1)
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14144)));
    // 0x229a34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229a34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229a38: 0x8c663744  lw          $a2, 0x3744($v1)
    ctx->pc = 0x229a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14148)));
    // 0x229a3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x229a3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a40: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x229a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x229a44: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229A44u;
    SET_GPR_U32(ctx, 31, 0x229A4Cu);
    ctx->pc = 0x229A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A44u;
    // 0x229a48: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229A44u, 0x229A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A4Cu;
label_229a4c:
    // 0x229a4c: 0x8e440744  lw          $a0, 0x744($s2)
    ctx->pc = 0x229a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x229a50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229A50u;
    {
        const bool branch_taken_0x229a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a50) {
            ctx->pc = 0x229A60u;
            goto label_229a60;
        }
    }
    ctx->pc = 0x229A58u;
    // 0x229a58: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A58u;
    // 0x229a5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x229A58u, 0x229A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x229a64: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x229a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x229a68: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x229a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229a6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x229a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229a74: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x229a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a78: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x229a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x229a7c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x229a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x229a80: 0xe656054c  swc1        $f22, 0x54C($s2)
    ctx->pc = 0x229a80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x229a84: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x229a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x229a88: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x229a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x229a8c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x229a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x229a90: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x229a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x229a94: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x229a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x229a98: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229A98u;
    SET_GPR_U32(ctx, 31, 0x229AA0u);
    ctx->pc = 0x229A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A98u;
    // 0x229a9c: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229A98u, 0x229AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AA0u;
label_229aa0:
    // 0x229aa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x229aa4: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x229aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x229aa8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x229AA8u;
    SET_GPR_U32(ctx, 31, 0x229AB0u);
    ctx->pc = 0x229AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AA8u;
    // 0x229aac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x229AA8u, 0x229AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AB0u;
label_229ab0:
    // 0x229ab0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229AB0u;
    SET_GPR_U32(ctx, 31, 0x229AB8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229AB0u, 0x229AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AB8u;
label_229ab8:
    // 0x229ab8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x229abc: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x229ac0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x229AC0u;
    SET_GPR_U32(ctx, 31, 0x229AC8u);
    ctx->pc = 0x229AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AC0u;
    // 0x229ac4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x229AC0u, 0x229AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AC8u;
label_229ac8:
    // 0x229ac8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x229acc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x229accu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ad0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x229ad0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ad4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x229ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x229ad8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x229ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x229adc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x229adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x229ae0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x229ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x229ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ae8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x229ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x229aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229af0: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x229af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x229af4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x229af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x229af8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x229AF8u;
    SET_GPR_U32(ctx, 31, 0x229B00u);
    ctx->pc = 0x229AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF8u;
    // 0x229afc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x229AF8u, 0x229B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B00u;
label_229b00:
    // 0x229b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x229b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x229b04: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229B04u;
    SET_GPR_U32(ctx, 31, 0x229B0Cu);
    ctx->pc = 0x229B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B04u;
    // 0x229b08: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229B04u, 0x229B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B0Cu;
label_229b0c:
    // 0x229b0c: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x229b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229b10: 0xc051e62  jal         func_147988
    ctx->pc = 0x229B10u;
    SET_GPR_U32(ctx, 31, 0x229B18u);
    ctx->pc = 0x229B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B10u;
    // 0x229b14: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x229B10u, 0x229B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B18u;
label_229b18:
    // 0x229b18: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229B18u;
    {
        const bool branch_taken_0x229b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b18) {
            ctx->pc = 0x229B40u;
            goto label_229b40;
        }
    }
    ctx->pc = 0x229B20u;
    // 0x229b20: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x229B20u;
    SET_GPR_U32(ctx, 31, 0x229B28u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x229B20u, 0x229B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B28u;
label_229b28:
    // 0x229b28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x229b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x229b2c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x229b30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x229b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229b34: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x229b34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x229b38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x229B38u;
    {
        const bool branch_taken_0x229b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B38u;
        // 0x229b3c: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b38) {
            ctx->pc = 0x229B54u;
            goto label_229b54;
        }
    }
    ctx->pc = 0x229B40u;
label_229b40:
    // 0x229b40: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x229B40u;
    SET_GPR_U32(ctx, 31, 0x229B48u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x229B40u, 0x229B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B48u;
label_229b48:
    // 0x229b48: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x229b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x229b4c: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x229b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x229b50: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x229b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_229b54:
    // 0x229b54: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x229b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x229b58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x229b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x229b5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x229b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x229b60: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x229B60u;
    SET_GPR_U32(ctx, 31, 0x229B68u);
    ctx->pc = 0x229B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B60u;
    // 0x229b64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x229B60u, 0x229B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B68u;
label_229b68:
    // 0x229b68: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x229b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x229b6c: 0x3c013d70  lui         $at, 0x3D70
    ctx->pc = 0x229b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15728 << 16));
    // 0x229b70: 0x3421f0f1  ori         $at, $at, 0xF0F1
    ctx->pc = 0x229b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61681);
    // 0x229b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229b78: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x229b78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229b7c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x229b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x229b80: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x229b80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x229b84: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x229b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x229b88: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x229b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x229b8c: 0x264305c0  addiu       $v1, $s2, 0x5C0
    ctx->pc = 0x229b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x229b90: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229B90u;
    {
        const bool branch_taken_0x229b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B90u;
        // 0x229b94: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b90) {
            ctx->pc = 0x229BACu;
            goto label_229bac;
        }
    }
    ctx->pc = 0x229B98u;
    // 0x229b98: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x229b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229b9c: 0xe64005c0  swc1        $f0, 0x5C0($s2)
    ctx->pc = 0x229b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1472), bits); }
    // 0x229ba0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x229ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x229ba4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x229ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229ba8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x229ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_229bac:
    // 0x229bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bb0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x229bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x229bb4: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x229bb8: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x229bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x229bbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x229bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229bc0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x229BC0u;
    SET_GPR_U32(ctx, 31, 0x229BC8u);
    ctx->pc = 0x229BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229BC0u;
    // 0x229bc4: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x229BC0u, 0x229BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BC8u;
label_229bc8:
    // 0x229bc8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x229bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x229bcc: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x229bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229bd8: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x229bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x229bdc: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_229be0:
    // 0x229be0: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x229be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229be8: 0x0  nop
    ctx->pc = 0x229be8u;
    // NOP
    // 0x229bec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229bf0: 0x0  nop
    ctx->pc = 0x229bf0u;
    // NOP
    // 0x229bf4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x229BF4u;
    {
        const bool branch_taken_0x229bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BF4u;
        // 0x229bf8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bf4) {
            ctx->pc = 0x229C14u;
            goto label_229c14;
        }
    }
    ctx->pc = 0x229BFCu;
    // 0x229bfc: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x229bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c00: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x229c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x229c04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229c0c: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x229c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    // 0x229c10: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x229c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
label_229c14:
    // 0x229c14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x229C14u;
    SET_GPR_U32(ctx, 31, 0x229C1Cu);
    ctx->pc = 0x229C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C14u;
    // 0x229c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x229C14u, 0x229C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C1Cu;
label_229c1c:
    // 0x229c1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x229C1Cu;
    {
        const bool branch_taken_0x229c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c1c) {
            ctx->pc = 0x229C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229C1Cu;
            // 0x229c20: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229C30u;
            goto label_229c30;
        }
    }
    ctx->pc = 0x229C24u;
    // 0x229c24: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x229C24u;
    SET_GPR_U32(ctx, 31, 0x229C2Cu);
    ctx->pc = 0x229C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C24u;
    // 0x229c28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x229C24u, 0x229C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C2Cu;
label_229c2c:
    // 0x229c2c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x229c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_229c30:
    // 0x229c30: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x229c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x229c34: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x229C34u;
    {
        const bool branch_taken_0x229c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C34u;
        // 0x229c38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c34) {
            ctx->pc = 0x229CBCu;
            goto label_229cbc;
        }
    }
    ctx->pc = 0x229C3Cu;
    // 0x229c3c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x229c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x229c40: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x229c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x229c44: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x229C44u;
    SET_GPR_U32(ctx, 31, 0x229C4Cu);
    ctx->pc = 0x229C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C44u;
    // 0x229c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x229C44u, 0x229C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C4Cu;
label_229c4c:
    // 0x229c4c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229C4Cu;
    SET_GPR_U32(ctx, 31, 0x229C54u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229C4Cu, 0x229C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C54u;
label_229c54:
    // 0x229c54: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x229c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c5c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x229c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x229c60: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x229c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x229c64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229c68: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x229c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x229c6c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x229C6Cu;
    SET_GPR_U32(ctx, 31, 0x229C74u);
    ctx->pc = 0x229C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C6Cu;
    // 0x229c70: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x229C6Cu, 0x229C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C74u;
label_229c74:
    // 0x229c74: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x229c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229c78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x229c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x229c7c: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x229c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x229c80: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x229c80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229c84: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x229c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x229c88: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x229c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x229c8c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x229c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x229c90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x229c90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x229c94: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x229c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x229c98: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x229c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x229c9c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x229c9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229ca0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x229ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x229ca4: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x229ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x229ca8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x229ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x229cac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x229cacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229cb0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x229cb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229cb4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x229cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x229cb8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x229cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_229cbc:
    // 0x229cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229cc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cc8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x229CC8u;
    SET_GPR_U32(ctx, 31, 0x229CD0u);
    ctx->pc = 0x229CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CC8u;
    // 0x229ccc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x229CC8u, 0x229CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CD0u;
label_229cd0:
    // 0x229cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cd4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x229CD4u;
    SET_GPR_U32(ctx, 31, 0x229CDCu);
    ctx->pc = 0x229CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CD4u;
    // 0x229cd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x229CD4u, 0x229CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CDCu;
label_229cdc:
    // 0x229cdc: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x229CDCu;
    SET_GPR_U32(ctx, 31, 0x229CE4u);
    ctx->pc = 0x229CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CDCu;
    // 0x229ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x229CDCu, 0x229CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CE4u;
label_229ce4:
    // 0x229ce4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x229ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x229ce8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x229ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_229cec:
    // 0x229cec: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x229cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x229cf0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x229cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x229cf4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x229cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x229cf8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x229cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229cfc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x229cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229d00: 0x3e00008  jr          $ra
    ctx->pc = 0x229D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D00u;
        // 0x229d04: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229D08u;
}
